#include "NativizedAssets.h"
#include "BP_FogSheet__pf4021266378.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "BP_FogSheet__pf4021266378.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
ABP_FogSheet_C__pf4021266378::ABP_FogSheet_C__pf4021266378(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABP_FogSheet_C__pf4021266378::StaticClass() == GetClass()))
	{
		ABP_FogSheet_C__pf4021266378::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__FogSheet__pf = CreateDefaultSubobject<UBillboardComponent>(TEXT("FogSheet"));
	RootComponent = bpv__FogSheet__pf;
	bpv__FogSheet__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FogSheet__pf->bIsScreenSizeScaled = true;
	bpv__FogSheet__pf->ScreenSize = 0.000400f;
	if(!bpv__FogSheet__pf->IsTemplate())
	{
		bpv__FogSheet__pf->BodyInstance.FixupData(bpv__FogSheet__pf);
	}
	bpv__FogSheetMasterMaterial__pf = CastChecked<UMaterialInstanceConstant>(CastChecked<UDynamicClass>(ABP_FogSheet_C__pf4021266378::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__FogSheetMID__pf = nullptr;
	bpv__Color__pf = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__Brightness__pf = 1.000000f;
	bpv__ParticleSystem__pf = nullptr;
	bpv__Size__pf = FVector(512.000000, 0.000000, 512.000000);
	bpv__Opacity__pf = 0.500000f;
	bpv__DepthFadeDistance__pf = 1024.000000f;
	bpv__NoiseProjectionDistance__pf = 1024.000000f;
	bpv__NoiseSize__pf = 2048.000000f;
	bpv__PanningSpeed__pf = 0.001000f;
	bpv__FadeDistance__pf = 1024.000000f;
}
void ABP_FogSheet_C__pf4021266378::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__FogSheet__pf)
	{
		bpv__FogSheet__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ABP_FogSheet_C__pf4021266378::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-0"));
	InDynamicClass->ComponentTemplates.Add(__Local__0);
	auto __Local__1 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-1"));
	InDynamicClass->ComponentTemplates.Add(__Local__1);
	__Local__0->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_FogSheet_C__pf4021266378::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__0->CastShadow = false;
	__Local__0->bCastStaticShadow = false;
	__Local__0->BodyInstance.bAutoWeld = false;
	__Local__0->BoundsScale = 512.000000f;
	__Local__1->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_FogSheet_C__pf4021266378::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__1->CastShadow = false;
	__Local__1->bCastStaticShadow = false;
	__Local__1->BodyInstance.bAutoWeld = false;
	__Local__1->BoundsScale = 512.000000f;
}
void ABP_FogSheet_C__pf4021266378::bpf__UserConstructionScript__pf()
{
	FTransform bpv__Temp_struct_Variable__pf{};
	UStaticMeshComponent* bpv__CallFunc_AddComponent_ReturnValue__pf{};
	FVector bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	float bpv__CallFunc_BreakVector_X__pf{};
	float bpv__CallFunc_BreakVector_Y__pf{};
	float bpv__CallFunc_BreakVector_Z__pf{};
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpv__CallFunc_BreakColor_R__pf{};
	float bpv__CallFunc_BreakColor_G__pf{};
	float bpv__CallFunc_BreakColor_B__pf{};
	float bpv__CallFunc_BreakColor_A__pf{};
	float bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	float bpv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	float bpv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf{};
	FLinearColor bpv__CallFunc_MakeColor_ReturnValue__pf(EForceInit::ForceInit);
	bpv__Temp_struct_Variable__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
	bpv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-1")), false, bpv__Temp_struct_Variable__pf, this), ECastCheckedType::NullAllowed);
	bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__Size__pf, 2.000000);
	UKismetMathLibrary::BreakVector(bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, /*out*/ bpv__CallFunc_BreakVector_X__pf, /*out*/ bpv__CallFunc_BreakVector_Y__pf, /*out*/ bpv__CallFunc_BreakVector_Z__pf);
	bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpv__CallFunc_BreakVector_X__pf, bpv__CallFunc_BreakVector_Z__pf, bpv__CallFunc_BreakVector_Z__pf);
	if(IsValid(bpv__CallFunc_AddComponent_ReturnValue__pf))
	{
		bpv__CallFunc_AddComponent_ReturnValue__pf->SetRelativeScale3D(bpv__CallFunc_MakeVector_ReturnValue__pf);
	}
	if(IsValid(bpv__CallFunc_AddComponent_ReturnValue__pf))
	{
		bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpv__CallFunc_AddComponent_ReturnValue__pf->CreateDynamicMaterialInstance(0, bpv__FogSheetMasterMaterial__pf);
	}
	bpv__FogSheetMID__pf = bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
	UKismetMathLibrary::BreakColor(bpv__Color__pf, /*out*/ bpv__CallFunc_BreakColor_R__pf, /*out*/ bpv__CallFunc_BreakColor_G__pf, /*out*/ bpv__CallFunc_BreakColor_B__pf, /*out*/ bpv__CallFunc_BreakColor_A__pf);
	bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__CallFunc_BreakColor_B__pf, bpv__Brightness__pf);
	bpv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__CallFunc_BreakColor_G__pf, bpv__Brightness__pf);
	bpv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__CallFunc_BreakColor_R__pf, bpv__Brightness__pf);
	bpv__CallFunc_MakeColor_ReturnValue__pf = UKismetMathLibrary::MakeColor(bpv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf, bpv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf, bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__CallFunc_BreakColor_A__pf);
	if(IsValid(bpv__FogSheetMID__pf))
	{
		bpv__FogSheetMID__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color")), bpv__CallFunc_MakeColor_ReturnValue__pf);
	}
	if(IsValid(bpv__FogSheetMID__pf))
	{
		bpv__FogSheetMID__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("MaxOpacity")), bpv__Opacity__pf);
	}
	if(IsValid(bpv__FogSheetMID__pf))
	{
		bpv__FogSheetMID__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("DepthFadeDistance")), bpv__DepthFadeDistance__pf);
	}
	if(IsValid(bpv__FogSheetMID__pf))
	{
		bpv__FogSheetMID__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("TilingMaskProjectionDistance")), bpv__NoiseProjectionDistance__pf);
	}
	if(IsValid(bpv__FogSheetMID__pf))
	{
		bpv__FogSheetMID__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("NoiseSize")), bpv__NoiseSize__pf);
	}
	if(IsValid(bpv__FogSheetMID__pf))
	{
		bpv__FogSheetMID__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("PanningSpeed")), bpv__PanningSpeed__pf);
	}
	if(IsValid(bpv__FogSheetMID__pf))
	{
		bpv__FogSheetMID__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("FadeDistance")), bpv__FadeDistance__pf);
	}
}
void ABP_FogSheet_C__pf4021266378::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__2 = TEXT("/Game/Environment/Blueprints/FogSheet/Assets");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__2, TEXT("M_FogSheet_Master_INST"), TEXT("M_FogSheet_Master_INST"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__2, TEXT("SM_FogSheet_Plane"), TEXT("SM_FogSheet_Plane"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void ABP_FogSheet_C__pf4021266378::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void ABP_FogSheet_C__pf4021266378::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__3 = TEXT("/Engine/EditorResources");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__3, TEXT("S_Actor"), TEXT("S_Actor"), TEXT("/Script/Engine"), TEXT("Texture2D")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__ABP_FogSheet_C__pf4021266378
{
	FRegisterHelper__ABP_FogSheet_C__pf4021266378()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/Environment/Blueprints/FogSheet/BP_FogSheet"), &ABP_FogSheet_C__pf4021266378::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_FogSheet_C__pf4021266378 Instance;
};
FRegisterHelper__ABP_FogSheet_C__pf4021266378 FRegisterHelper__ABP_FogSheet_C__pf4021266378::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
