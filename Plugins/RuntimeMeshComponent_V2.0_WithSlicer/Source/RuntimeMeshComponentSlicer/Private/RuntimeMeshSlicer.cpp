// 
//	This file contains code from the ProceduralMeshComponent slicer found in UE4.
//  It has been heavily modified, but the original code is owned by Epic Games.
//
// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
// Copyright 2016 Chris Conway (Koderz). All Rights Reserved.

#include "RuntimeMeshComponentSlicerPrivatePCH.h"
#include "RuntimeMeshSlicer.h"
#include "GeomTools.h"
#include "PhysicsEngine/BodySetup.h"

URuntimeMeshSlicer::URuntimeMeshSlicer(FObjectInitializer const &)
{

}

//////////////////////////////////////////////////////////////////////////
// This is a modified version of the ProceduralMeshComponent Slicer from UE4.
// 
//////////////////////////////////////////////////////////////////////////

/** Util that returns 1 ir on positive side of plane, -1 if negative, or 0 if split by plane */
int32 RMCBoxPlaneCompare(FBox InBox, const FPlane& InPlane)
{
	FVector BoxCenter, BoxExtents;
	InBox.GetCenterAndExtents(BoxCenter, BoxExtents);

	// Find distance of box center from plane
	float BoxCenterDist = InPlane.PlaneDot(BoxCenter);

	// See size of box in plane normal direction
	float BoxSize = FVector::BoxPushOut(InPlane, BoxExtents);

	if (BoxCenterDist > BoxSize)
	{
		return 1;
	}
	else if (BoxCenterDist < -BoxSize)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

struct FRuntimeMeshSlicerVertex
{
	FVector Position;
	FVector4 Normal;
	FVector Tangent;
	FColor Color;
	FVector2D UV0;
};

FRuntimeMeshSlicerVertex GetVertexFromBuilder(const IRuntimeMeshVerticesBuilder* Vertices, int32 Index)
{
	Vertices->Seek(Index);
	FRuntimeMeshSlicerVertex Vertex;
	Vertex.Position = Vertices->GetPosition();
	Vertex.Normal = Vertices->GetNormal();
	Vertex.Tangent = Vertices->GetTangent();
	Vertex.Color = Vertices->GetColor();
	Vertex.UV0 = Vertices->GetUV(0);

	return Vertex;
}

int32 AddVertexToBuilder(IRuntimeMeshVerticesBuilder* Vertices, FRuntimeMeshSlicerVertex& Vertex)
{
	Vertices->SeekEnd();
	int NewIndex = Vertices->MoveNextOrAdd();
	Vertices->SetPosition(Vertex.Position);
	Vertices->SetNormal(Vertex.Normal);
	Vertices->SetTangent(Vertex.Tangent);
	Vertices->SetColor(Vertex.Color);
	Vertices->SetUV(0, Vertex.UV0);

	return NewIndex;
}




/** Take two static mesh verts and interpolate all values between them */
FRuntimeMeshSlicerVertex InterpolateVert(const FRuntimeMeshSlicerVertex& V0, const FRuntimeMeshSlicerVertex& V1, float Alpha)
{
	FRuntimeMeshSlicerVertex Result;

	// Handle dodgy alpha
	if (FMath::IsNaN(Alpha) || !FMath::IsFinite(Alpha))
	{
		Result = V1;
		return Result;
	}

	Result.Position = FMath::Lerp(V0.Position, V1.Position, Alpha);

	Result.Normal = FMath::Lerp(V0.Normal, V1.Normal, Alpha);
	Result.Normal.W = V0.Normal.W; // Assume flipping doesn't change along edge...

	Result.Tangent = FMath::Lerp(V0.Tangent, V1.Tangent, Alpha);

	Result.UV0 = FMath::Lerp(V0.UV0, V1.UV0, Alpha);

	Result.Color.R = FMath::Clamp(FMath::TruncToInt(FMath::Lerp(float(V0.Color.R), float(V1.Color.R), Alpha)), 0, 255);
	Result.Color.G = FMath::Clamp(FMath::TruncToInt(FMath::Lerp(float(V0.Color.G), float(V1.Color.G), Alpha)), 0, 255);
	Result.Color.B = FMath::Clamp(FMath::TruncToInt(FMath::Lerp(float(V0.Color.B), float(V1.Color.B), Alpha)), 0, 255);
	Result.Color.A = FMath::Clamp(FMath::TruncToInt(FMath::Lerp(float(V0.Color.A), float(V1.Color.A), Alpha)), 0, 255);

	return Result;
}

/** Transform triangle from 2D to 3D static-mesh triangle. */
void Transform2DPolygonTo3D(const FUtilPoly2D& InPoly, const FMatrix& InMatrix, IRuntimeMeshVerticesBuilder* OutVerts)
{
	FVector PolyNormal = -InMatrix.GetUnitAxis(EAxis::Z);
	FVector4 PolyTangent(InMatrix.GetUnitAxis(EAxis::X), 1.0);

	for (int32 VertexIndex = 0; VertexIndex < InPoly.Verts.Num(); VertexIndex++)
	{
		const FUtilVertex2D& InVertex = InPoly.Verts[VertexIndex];

		FRuntimeMeshSlicerVertex NewVert;

		NewVert.Position = InMatrix.TransformPosition(FVector(InVertex.Pos.X, InVertex.Pos.Y, 0.f));
		NewVert.Normal = PolyNormal;
		NewVert.Tangent = PolyTangent;
		NewVert.Color = InVertex.Color;
		NewVert.UV0 = InVertex.UV;

		AddVertexToBuilder(OutVerts, NewVert);
	}
}

/** Given a polygon, decompose into triangles. */
bool TriangulatePoly(FRuntimeMeshIndicesBuilder* OutTris, const IRuntimeMeshVerticesBuilder* PolyVerts, int32 VertBase, const FVector& PolyNormal)
{
	OutTris->SeekEnd();

	// Can't work if not enough verts for 1 triangle
	int32 NumVerts = PolyVerts->Length() - VertBase;
	if (NumVerts < 3)
	{
		OutTris->AddTriangle(0, 2, 1);

		// Return true because poly is already a tri
		return true;
	}

	// Remember initial size of OutTris, in case we need to give up and return to this size
	const int32 TriBase = OutTris->Length();

	// Init array of vert indices, in order. We'll modify this
	TArray<int32> VertIndices;
	VertIndices.AddUninitialized(NumVerts);
	for (int VertIndex = 0; VertIndex < NumVerts; VertIndex++)
	{
		VertIndices[VertIndex] = VertBase + VertIndex;
	}

	// Keep iterating while there are still vertices
	while (VertIndices.Num() >= 3)
	{
		// Look for an 'ear' triangle
		bool bFoundEar = false;
		for (int32 EarVertexIndex = 0; EarVertexIndex < VertIndices.Num(); EarVertexIndex++)
		{
			// Triangle is 'this' vert plus the one before and after it
			const int32 AIndex = (EarVertexIndex == 0) ? VertIndices.Num() - 1 : EarVertexIndex - 1;
			const int32 BIndex = EarVertexIndex;
			const int32 CIndex = (EarVertexIndex + 1) % VertIndices.Num();

			const FRuntimeMeshSlicerVertex& AVert = GetVertexFromBuilder(PolyVerts, AIndex);
			const FRuntimeMeshSlicerVertex& BVert = GetVertexFromBuilder(PolyVerts, BIndex);
			const FRuntimeMeshSlicerVertex& CVert = GetVertexFromBuilder(PolyVerts, CIndex);

			// Check that this vertex is convex (cross product must be positive)
			const FVector ABEdge = BVert.Position - AVert.Position;
			const FVector ACEdge = CVert.Position - AVert.Position;
			const float TriangleDeterminant = (ABEdge ^ ACEdge) | PolyNormal;
			if (TriangleDeterminant > 0.f)
			{
				continue;
			}

			bool bFoundVertInside = false;
			// Look through all verts before this in array to see if any are inside triangle
			for (int32 VertexIndex = 0; VertexIndex < VertIndices.Num(); VertexIndex++)
			{
				const FRuntimeMeshSlicerVertex& TestVert = GetVertexFromBuilder(PolyVerts, VertIndices[VertexIndex]);

				if (VertexIndex != AIndex &&
					VertexIndex != BIndex &&
					VertexIndex != CIndex &&
					FGeomTools::PointInTriangle(AVert.Position, BVert.Position, CVert.Position, TestVert.Position))
				{
					bFoundVertInside = true;
					break;
				}
			}

			// Triangle with no verts inside - its an 'ear'! 
			if (!bFoundVertInside)
			{
				OutTris->AddTriangle(VertIndices[AIndex], VertIndices[CIndex], VertIndices[BIndex]);

				// And remove vertex from polygon
				VertIndices.RemoveAt(EarVertexIndex);

				bFoundEar = true;
				break;
			}
		}

		// If we couldn't find an 'ear' it indicates something is bad with this polygon - discard triangles and return.
		if (!bFoundEar)
		{
			OutTris->SetNum(TriBase);
			return false;
		}
	}

	return true;
}

/** Util to slice a convex hull with a plane */
void RMCSliceConvexElem(const FKConvexElem& InConvex, const FPlane& SlicePlane, TArray<FVector>& OutConvexVerts)
{
	// Get set of planes that make up hull
	TArray<FPlane> ConvexPlanes;
	InConvex.GetPlanes(ConvexPlanes);

	if (ConvexPlanes.Num() >= 4)
	{
		// Add on the slicing plane (need to flip as it culls geom in the opposite sense to our geom culling code)
		ConvexPlanes.Add(SlicePlane.Flip());

		// Create output convex based on new set of planes
		FKConvexElem SlicedElem;
		bool bSuccess = SlicedElem.HullFromPlanes(ConvexPlanes, InConvex.VertexData);
		if (bSuccess)
		{
			OutConvexVerts = SlicedElem.VertexData;
		}
	}
}

void URuntimeMeshSlicer::SliceRuntimeMesh(URuntimeMeshComponent* InRuntimeMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf,
	URuntimeMeshComponent*& OutOtherHalfRuntimeMesh, ERuntimeMeshSliceCapOption CapOption, UMaterialInterface* CapMaterial)
{
	if (InRuntimeMesh == nullptr)
	{
		return;
	}

	// Transform plane from world to local space
	FTransform ProcCompToWorld = InRuntimeMesh->GetComponentToWorld();
	FVector LocalPlanePos = ProcCompToWorld.InverseTransformPosition(PlanePosition);
	FVector LocalPlaneNormal = ProcCompToWorld.InverseTransformVectorNoScale(PlaneNormal);
	LocalPlaneNormal = LocalPlaneNormal.GetSafeNormal(); // Ensure normalized

	FPlane SlicePlane(LocalPlanePos, LocalPlaneNormal);


	// Set of sections to add to the 'other half' component
	TArray<IRuntimeMeshVerticesBuilder*> OtherSectionsVertices;
	TArray<FRuntimeMeshIndicesBuilder*> OtherSectionsIndices;

	// Material for each section of other half
	TArray<UMaterialInterface*> OtherMaterials;

	// Set of new edges created by clipping polys by plane
	TArray<FUtilEdge3D> ClipEdges;

	for (int32 SectionIndex = 0; SectionIndex < InRuntimeMesh->GetNumSections(); SectionIndex++)
	{
		// Bail if this section doesn't exist
		if (!InRuntimeMesh->DoesSectionExist(SectionIndex))
		{
			continue;
		}			

		// Get the section mesh
		const IRuntimeMeshVerticesBuilder* BaseSectionVertices;
		const FRuntimeMeshIndicesBuilder* BaseSectionIndices;
		InRuntimeMesh->GetSectionMesh(SectionIndex, BaseSectionVertices, BaseSectionIndices);

		// Bail if we have no geometry
		if (BaseSectionVertices->Length() <= 0 || BaseSectionIndices->Length() <= 0)
		{
			continue;
		}

		// Get the section bounding box
		FBox BaseSectionBoundingBox;
		ensure(InRuntimeMesh->GetSectionBoundingBox(SectionIndex, BaseSectionBoundingBox));
			

		// Compare bounding box of section with slicing plane
		int32 BoxCompare = RMCBoxPlaneCompare(BaseSectionBoundingBox, SlicePlane);

		// Box totally clipped, clear section
		if (BoxCompare == -1)
		{
			// Add entire section to other half
			if (bCreateOtherHalf)
			{
				// Clone the section 
				OtherSectionsVertices.SetNum(SectionIndex + 1, false);
				OtherSectionsIndices.SetNum(SectionIndex + 1, false);
				OtherSectionsVertices[SectionIndex] = BaseSectionVertices->Clone(true);
				OtherSectionsIndices[SectionIndex] = BaseSectionIndices->Clone(true);

				OtherMaterials.SetNum(SectionIndex + 1, false);
				OtherMaterials[SectionIndex] = InRuntimeMesh->GetMaterial(SectionIndex);
			}

			InRuntimeMesh->ClearMeshSection(SectionIndex);
		}
		// Box totally on one side of plane, leave it alone, do nothing
		else if (BoxCompare == 1)
		{
			// ...
		}
		// Box intersects plane, need to clip some polys!
		else
		{
			// New section for geometry
			IRuntimeMeshVerticesBuilder* NewSectionVertices = BaseSectionVertices->Clone(false);
			FRuntimeMeshIndicesBuilder* NewSectionIndices = new FRuntimeMeshIndicesBuilder();

			// New section for 'other half' geometry (if desired)
			bool bIsBuildingOtherSection = false;
			IRuntimeMeshVerticesBuilder* NewOtherSectionVertices = nullptr;
			FRuntimeMeshIndicesBuilder* NewOtherSectionIndices = nullptr;
			if (bCreateOtherHalf)
			{
				bIsBuildingOtherSection = true;

				NewOtherSectionVertices = BaseSectionVertices->Clone(false);
				NewOtherSectionIndices = new FRuntimeMeshIndicesBuilder();
			}

			// Map of base vert index to sliced vert index
			TMap<int32, int32> BaseToSlicedVertIndex;
			TMap<int32, int32> BaseToOtherSlicedVertIndex;

			const int32 NumBaseVerts = BaseSectionVertices->Length();

			// Distance of each base vert from slice plane
			TArray<float> VertDistance;
			VertDistance.AddUninitialized(NumBaseVerts);

			// Build vertex buffer 
			for (int32 BaseVertIndex = 0; BaseVertIndex < NumBaseVerts; BaseVertIndex++)
			{
				FRuntimeMeshSlicerVertex BaseVert = GetVertexFromBuilder(BaseSectionVertices, BaseVertIndex);

				// Calc distance from plane
				VertDistance[BaseVertIndex] = SlicePlane.PlaneDot(BaseVert.Position);

				// See if vert is being kept in this section
				if (VertDistance[BaseVertIndex] > 0.f)
				{
					// Copy to sliced v buffer
					int32 SlicedVertIndex = AddVertexToBuilder(NewSectionVertices, BaseVert);
					// Add to map
					BaseToSlicedVertIndex.Add(BaseVertIndex, SlicedVertIndex);
				}
				// Or add to other half if desired
				else if (bIsBuildingOtherSection)
				{
					int32 SlicedVertIndex = AddVertexToBuilder(NewOtherSectionVertices, BaseVert);

					BaseToOtherSlicedVertIndex.Add(BaseVertIndex, SlicedVertIndex);
				}
			}


			// Iterate over base triangles (ie 3 indices at a time)
			for (int32 BaseIndex = 0; BaseIndex < BaseSectionIndices->Length(); BaseIndex += 3)
			{
				int32 BaseV[3]; // Triangle vert indices in original mesh
				int32* SlicedV[3]; // Pointers to vert indices in new v buffer
				int32* SlicedOtherV[3]; // Pointers to vert indices in new 'other half' v buffer

				// For each vertex..
				for (int32 i = 0; i < 3; i++)
				{
					// Get triangle vert index
					BaseV[i] = BaseSectionIndices->GetIndex(BaseIndex + i);
					// Look up in sliced v buffer
					SlicedV[i] = BaseToSlicedVertIndex.Find(BaseV[i]);
					// Look up in 'other half' v buffer (if desired)
					if (bCreateOtherHalf)
					{
						SlicedOtherV[i] = BaseToOtherSlicedVertIndex.Find(BaseV[i]);
						// Each base vert _must_ exist in either BaseToSlicedVertIndex or BaseToOtherSlicedVertIndex 
						check((SlicedV[i] != nullptr) != (SlicedOtherV[i] != nullptr));
					}
				}

				// If all verts survived plane cull, keep the triangle
				if (SlicedV[0] != nullptr && SlicedV[1] != nullptr && SlicedV[2] != nullptr)
				{
					NewSectionIndices->SeekEnd();
					NewSectionIndices->AddIndex(*SlicedV[0]);
					NewSectionIndices->AddIndex(*SlicedV[1]);
					NewSectionIndices->AddIndex(*SlicedV[2]);
				}
				// If all verts were removed by plane cull
				else if (SlicedV[0] == nullptr && SlicedV[1] == nullptr && SlicedV[2] == nullptr)
				{
					// If creating other half, add all verts to that
					if (bIsBuildingOtherSection)
					{
						NewOtherSectionIndices->SeekEnd();
						NewOtherSectionIndices->AddIndex(*SlicedOtherV[0]);
						NewOtherSectionIndices->AddIndex(*SlicedOtherV[1]);
						NewOtherSectionIndices->AddIndex(*SlicedOtherV[2]);
					}
				}
				// If partially culled, clip to create 1 or 2 new triangles
				else
				{
					int32 FinalVerts[4];
					int32 NumFinalVerts = 0;

					int32 OtherFinalVerts[4];
					int32 NumOtherFinalVerts = 0;

					FUtilEdge3D NewClipEdge;
					int32 ClippedEdges = 0;

					float PlaneDist[3];
					PlaneDist[0] = VertDistance[BaseV[0]];
					PlaneDist[1] = VertDistance[BaseV[1]];
					PlaneDist[2] = VertDistance[BaseV[2]];

					for (int32 EdgeIdx = 0; EdgeIdx < 3; EdgeIdx++)
					{
						int32 ThisVert = EdgeIdx;

						// If start vert is inside, add it.
						if (SlicedV[ThisVert] != nullptr)
						{
							check(NumFinalVerts < 4);
							FinalVerts[NumFinalVerts++] = *SlicedV[ThisVert];
						}
						// If not, add to other side
						else if (bCreateOtherHalf)
						{
							check(NumOtherFinalVerts < 4);
							OtherFinalVerts[NumOtherFinalVerts++] = *SlicedOtherV[ThisVert];
						}

						// If start and next vert are on opposite sides, add intersection
						int32 NextVert = (EdgeIdx + 1) % 3;

						if ((SlicedV[EdgeIdx] == nullptr) != (SlicedV[NextVert] == nullptr))
						{
							// Find distance along edge that plane is
							float Alpha = -PlaneDist[ThisVert] / (PlaneDist[NextVert] - PlaneDist[ThisVert]);
							// Interpolate vertex params to that point
							FRuntimeMeshSlicerVertex InterpVert = InterpolateVert(
								GetVertexFromBuilder(BaseSectionVertices, BaseV[ThisVert]),
								GetVertexFromBuilder(BaseSectionVertices, BaseV[NextVert]),
								FMath::Clamp(Alpha, 0.0f, 1.0f));

							// Add to vertex buffer
							int32 InterpVertIndex = AddVertexToBuilder(NewSectionVertices, InterpVert);

							// Save vert index for this poly
							check(NumFinalVerts < 4);
							FinalVerts[NumFinalVerts++] = InterpVertIndex;

							// If desired, add to the poly for the other half as well
							if (bIsBuildingOtherSection)
							{
								int32 OtherInterpVertIndex = AddVertexToBuilder(NewOtherSectionVertices, InterpVert);
								check(NumOtherFinalVerts < 4);
								OtherFinalVerts[NumOtherFinalVerts++] = OtherInterpVertIndex;
							}

							// When we make a new edge on the surface of the clip plane, save it off.
							check(ClippedEdges < 2);
							if (ClippedEdges == 0)
							{
								NewClipEdge.V0 = InterpVert.Position;
							}
							else
							{
								NewClipEdge.V1 = InterpVert.Position;
							}

							ClippedEdges++;
						}
					}

					// Triangulate the clipped polygon.
					for (int32 VertexIndex = 2; VertexIndex < NumFinalVerts; VertexIndex++)
					{
						NewSectionIndices->SeekEnd();
						NewSectionIndices->AddIndex(FinalVerts[0]);
						NewSectionIndices->AddIndex(FinalVerts[VertexIndex - 1]);
						NewSectionIndices->AddIndex(FinalVerts[VertexIndex]);
					}

					// If we are making the other half, triangulate that as well
					if (bIsBuildingOtherSection)
					{
						for (int32 VertexIndex = 2; VertexIndex < NumOtherFinalVerts; VertexIndex++)
						{
							NewOtherSectionIndices->SeekEnd();
							NewOtherSectionIndices->AddIndex(OtherFinalVerts[0]);
							NewOtherSectionIndices->AddIndex(OtherFinalVerts[VertexIndex - 1]);
							NewOtherSectionIndices->AddIndex(OtherFinalVerts[VertexIndex]);
						}
					}

					check(ClippedEdges != 1); // Should never clip just one edge of the triangle

												// If we created a new edge, save that off here as well
					if (ClippedEdges == 2)
					{
						ClipEdges.Add(NewClipEdge);
					}
				}
			}

			// Add new section to other array if we have geometry
			if (bIsBuildingOtherSection && NewOtherSectionVertices->Length() > 0 && NewOtherSectionIndices->Length() > 0)
			{
				OtherSectionsVertices.SetNum(SectionIndex + 1, false);
				OtherSectionsIndices.SetNum(SectionIndex + 1, false);
				OtherSectionsVertices[SectionIndex] = NewOtherSectionVertices;
				OtherSectionsIndices[SectionIndex] = NewOtherSectionIndices;

				OtherMaterials.SetNum(SectionIndex + 1, false);
				OtherMaterials[SectionIndex] = InRuntimeMesh->GetMaterial(SectionIndex);
			}
			else if (bIsBuildingOtherSection)
			{
				delete NewOtherSectionVertices;
				delete NewOtherSectionIndices;
				NewOtherSectionVertices = nullptr;
				NewOtherSectionIndices = nullptr;
			}

			// If we have some valid geometry, update section
			if (NewSectionVertices->Length() > 0 && NewSectionIndices->Length() > 0)
			{
				// Assign new geom to this section
				InRuntimeMesh->UpdateMeshSection(SectionIndex, *NewSectionVertices, *NewSectionIndices, ESectionUpdateFlags::MoveArrays);
			}
			// If we don't, remove this section
			else
			{
				InRuntimeMesh->ClearMeshSection(SectionIndex);
			}

			delete NewSectionVertices;
			delete NewSectionIndices;
			NewSectionVertices = nullptr;
			NewSectionIndices = nullptr;
		}
	}

	// Create cap geometry (if some edges to create it from)
	if (CapOption != ERuntimeMeshSliceCapOption::NoCap && ClipEdges.Num() > 0)
	{
		IRuntimeMeshVerticesBuilder* CapSectionVertices;
		FRuntimeMeshIndicesBuilder* CapSectionIndices;

		// If using an existing section, copy that info first
		if (CapOption == ERuntimeMeshSliceCapOption::UseLastSectionForCap)
		{
			InRuntimeMesh->BeginMeshSectionUpdate(InRuntimeMesh->GetLastSectionIndex(), CapSectionVertices, CapSectionIndices);
			CapSectionVertices->Seek(CapSectionVertices->Length() - 1);
			CapSectionIndices->Seek(CapSectionIndices->Length() - 1);
		}
		// Adding new section for cap
		else
		{
			CapSectionVertices = new FRuntimeMeshPackedVerticesBuilder<FRuntimeMeshVertexSimple>();
			CapSectionIndices = new FRuntimeMeshIndicesBuilder();
		}

		// Project 3D edges onto slice plane to form 2D edges
		TArray<FUtilEdge2D> Edges2D;
		FUtilPoly2DSet PolySet;
		FGeomTools::ProjectEdges(Edges2D, PolySet.PolyToWorld, ClipEdges, SlicePlane);

		// Find 2D closed polygons from this edge soup
		FGeomTools::Buid2DPolysFromEdges(PolySet.Polys, Edges2D, FColor(255, 255, 255, 255));

		// Remember start point for vert and index buffer before adding and cap geom
		int32 CapVertBase = CapSectionVertices->Length();
		int32 CapIndexBase = CapSectionIndices->Length();

		// Triangulate each poly
		for (int32 PolyIdx = 0; PolyIdx < PolySet.Polys.Num(); PolyIdx++)
		{
			// Generate UVs for the 2D polygon.
			FGeomTools::GeneratePlanarTilingPolyUVs(PolySet.Polys[PolyIdx], 64.f);

			// Remember start of vert buffer before adding triangles for this poly
			int32 PolyVertBase = CapSectionVertices->Length();

			// Transform from 2D poly verts to 3D
			Transform2DPolygonTo3D(PolySet.Polys[PolyIdx], PolySet.PolyToWorld, CapSectionVertices);

			// Triangulate this polygon
			TriangulatePoly(CapSectionIndices, CapSectionVertices, PolyVertBase, LocalPlaneNormal);
		}

		// If using an existing section, copy that info first
		if (CapOption == ERuntimeMeshSliceCapOption::UseLastSectionForCap)
		{
			InRuntimeMesh->EndMeshSectionUpdate(InRuntimeMesh->GetLastSectionIndex(),
				(ERuntimeMeshBuffer::Vertices | ERuntimeMeshBuffer::Triangles | (CapSectionVertices->WantsSeparatePositionBuffer() ? ERuntimeMeshBuffer::Positions : ERuntimeMeshBuffer::None)));
		}
		// Adding new section for cap
		else
		{
			InRuntimeMesh->CreateMeshSection(InRuntimeMesh->GetLastSectionIndex() + 1, *CapSectionVertices, *CapSectionIndices);
		}

		// If creating new section for cap, assign cap material to it
		if (CapOption == ERuntimeMeshSliceCapOption::CreateNewSectionForCap)
		{
			InRuntimeMesh->SetMaterial(InRuntimeMesh->GetLastSectionIndex(), CapMaterial);
		}

		// If creating the other half, copy cap geom into other half sections
		if (bCreateOtherHalf)
		{

			IRuntimeMeshVerticesBuilder* CapOtherSectionVertices;
			FRuntimeMeshIndicesBuilder* CapOtherSectionIndices;

			// If using an existing section, copy that info first
			if (CapOption == ERuntimeMeshSliceCapOption::UseLastSectionForCap)
			{
				CapOtherSectionVertices = OtherSectionsVertices[OtherSectionsVertices.Num() - 1];
				CapOtherSectionIndices = OtherSectionsIndices[OtherSectionsVertices.Num() - 1];
				CapOtherSectionVertices->SeekEnd();
				CapOtherSectionIndices->SeekEnd();
			}
			// Adding new section for cap
			else
			{
				CapOtherSectionVertices = new FRuntimeMeshPackedVerticesBuilder<FRuntimeMeshVertexSimple>();
				CapOtherSectionIndices = new FRuntimeMeshIndicesBuilder();
				OtherSectionsVertices.Add(CapOtherSectionVertices);
				OtherSectionsIndices.Add(CapOtherSectionIndices);
				OtherMaterials.Add(CapMaterial);
			}

			// Remember current base index for verts in 'other cap section'
			int32 OtherCapVertBase = CapOtherSectionVertices->Length();

			// Copy verts from cap section into other cap section
			for (int32 VertIdx = CapVertBase; VertIdx < CapSectionVertices->Length(); VertIdx++)
			{
				FRuntimeMeshSlicerVertex OtherCapVert = GetVertexFromBuilder(CapSectionVertices, VertIdx);

				// Flip normal and tangent TODO: FlipY?
				OtherCapVert.Normal *= -1.f;
				OtherCapVert.Normal.W *= -1.f; // Un invert W 
				OtherCapVert.Tangent *= -1.f;

				// Add to other cap v buffer
				AddVertexToBuilder(CapOtherSectionVertices, OtherCapVert);
			}

			// Find offset between main cap verts and other cap verts
			int32 VertOffset = OtherCapVertBase - CapVertBase;

			// Copy indices over as well
			for (int32 IndexIdx = CapIndexBase; IndexIdx < CapSectionIndices->Length(); IndexIdx += 3)
			{
				// Need to offset and change winding
				CapOtherSectionIndices->AddIndex(CapSectionIndices->GetIndex(IndexIdx + 0) + VertOffset);
				CapOtherSectionIndices->AddIndex(CapSectionIndices->GetIndex(IndexIdx + 2) + VertOffset);
				CapOtherSectionIndices->AddIndex(CapSectionIndices->GetIndex(IndexIdx + 1) + VertOffset);
			}
		}



		delete CapSectionVertices;
		delete CapSectionIndices;
		CapSectionVertices = nullptr;
		CapSectionIndices = nullptr;
	}

	// Array of sliced collision shapes
	TArray< TArray<FVector> > SlicedCollision;
	TArray< TArray<FVector> > OtherSlicedCollision;

	UBodySetup* ProcMeshBodySetup = InRuntimeMesh->BodySetup;

	for (int32 ConvexIndex = 0; ConvexIndex < ProcMeshBodySetup->AggGeom.ConvexElems.Num(); ConvexIndex++)
	{
		FKConvexElem& BaseConvex = ProcMeshBodySetup->AggGeom.ConvexElems[ConvexIndex];

		int32 BoxCompare = RMCBoxPlaneCompare(BaseConvex.ElemBox, SlicePlane);

		// If box totally clipped, add to other half (if desired)
		if (BoxCompare == -1)
		{
			if (bCreateOtherHalf)
			{
				OtherSlicedCollision.Add(BaseConvex.VertexData);
			}
		}
		// If box totally valid, just keep mesh as is
		else if (BoxCompare == 1)
		{
			SlicedCollision.Add(BaseConvex.VertexData);
		}
		// Need to actually slice the convex shape
		else
		{
			TArray<FVector> SlicedConvexVerts;
			RMCSliceConvexElem(BaseConvex, SlicePlane, SlicedConvexVerts);
			// If we got something valid, add it
			if (SlicedConvexVerts.Num() >= 4)
			{
				SlicedCollision.Add(SlicedConvexVerts);
			}

			// Slice again to get the other half of the collision, if desired
			if (bCreateOtherHalf)
			{
				TArray<FVector> OtherSlicedConvexVerts;
				RMCSliceConvexElem(BaseConvex, SlicePlane.Flip(), OtherSlicedConvexVerts);
				if (OtherSlicedConvexVerts.Num() >= 4)
				{
					OtherSlicedCollision.Add(OtherSlicedConvexVerts);
				}
			}
		}
	}

	// Update collision of proc mesh
	InRuntimeMesh->SetCollisionConvexMeshes(SlicedCollision);

	// If creating other half, create component now
	if (bCreateOtherHalf)
	{
		// Create new component with the same outer as the proc mesh passed in
		OutOtherHalfRuntimeMesh = NewObject<URuntimeMeshComponent>(InRuntimeMesh->GetOuter());

		// Set transform to match source component
		OutOtherHalfRuntimeMesh->SetWorldTransform(InRuntimeMesh->GetComponentTransform());

		// Add each section of geometry
		for (int32 SectionIndex = 0; SectionIndex < OtherSectionsVertices.Num(); SectionIndex++)
		{
			if (OtherSectionsVertices[SectionIndex] && OtherSectionsIndices[SectionIndex])
			{
				OutOtherHalfRuntimeMesh->CreateMeshSection(SectionIndex, *OtherSectionsVertices[SectionIndex], *OtherSectionsIndices[SectionIndex]);
				OutOtherHalfRuntimeMesh->SetMaterial(SectionIndex, OtherMaterials[SectionIndex]);

				delete OtherSectionsVertices[SectionIndex];
				delete OtherSectionsIndices[SectionIndex];
			}
		}

		// Copy collision settings from input mesh
		OutOtherHalfRuntimeMesh->SetCollisionProfileName(InRuntimeMesh->GetCollisionProfileName());
		OutOtherHalfRuntimeMesh->SetCollisionEnabled(InRuntimeMesh->GetCollisionEnabled());
		OutOtherHalfRuntimeMesh->bUseComplexAsSimpleCollision = InRuntimeMesh->bUseComplexAsSimpleCollision;
		OutOtherHalfRuntimeMesh->SetSimulatePhysics(true);

		// Assign sliced collision
		OutOtherHalfRuntimeMesh->SetCollisionConvexMeshes(OtherSlicedCollision);

		// Finally register
		OutOtherHalfRuntimeMesh->RegisterComponent();
	}
	
}
