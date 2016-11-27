// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine.h"
#include "RuntimeMeshComponent.h"
#include "RuntimeMeshSlicer.generated.h"


/** Options for creating cap geometry when slicing */
UENUM()
enum class ERuntimeMeshSliceCapOption : uint8
{
	/** Do not create cap geometry */
	NoCap,
	/** Add a new section to ProceduralMesh for cap */
	CreateNewSectionForCap,
	/** Add cap geometry to existing last section */
	UseLastSectionForCap
};



UCLASS()
class URuntimeMeshSlicer : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()




	/**
	*	Slice the RuntimeMeshComponent (including simple convex collision) using a plane. Optionally create 'cap' geometry.
	*	@param	InRuntimeMesh				RuntimeMeshComponent to slice
	*	@param	PlanePosition			Point on the plane to use for slicing, in world space
	*	@param	PlaneNormal				Normal of plane used for slicing. Geometry on the positive side of the plane will be kept.
	*	@param	bCreateOtherHalf		If true, an additional RuntimeMeshComponent (OutOtherHalfRuntimeMesh) will be created using the other half of the sliced geometry
	*	@param	OutOtherHalfRuntimeMesh	If bCreateOtherHalf is set, this is the new component created. Its owner will be the same as the supplied InRuntimeMesh.
	*	@param	CapOption				If and how to create 'cap' geometry on the slicing plane
	*	@param	CapMaterial				If creating a new section for the cap, assign this material to that section
	*/
	UFUNCTION(BlueprintCallable, Category = "Components|RuntimeMesh")
	static void SliceRuntimeMesh(URuntimeMeshComponent* InRuntimeMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, 
		URuntimeMeshComponent*& OutOtherHalfRuntimeMesh, ERuntimeMeshSliceCapOption CapOption, UMaterialInterface* CapMaterial);









};
