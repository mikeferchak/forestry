#include "NativizedAssets.h"
#include "holster__pf2403237688.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
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
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
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
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "holster__pf2403237688.h"
#include "axe__pf2403237688.h"
#include "BP_MotionController__pf2307895703.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "AnimBP_LeftHand__pf4240717260.h"
#include "choppable__pf2403237688.h"
#include "PickupActorInterface__pf2307895703.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
Aholster_C__pf2403237688::Aholster_C__pf2403237688(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (Aholster_C__pf2403237688::StaticClass() == GetClass()))
	{
		Aholster_C__pf2403237688::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	bpv__Arrow__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	bpv__rightPlaceholder__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("rightPlaceholder"));
	bpv__leftPlaceholder__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("leftPlaceholder"));
	bpv__leftShoulder__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("leftShoulder"));
	bpv__rightShoulder__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("rightShoulder"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(Aholster_C__pf2403237688::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->bGenerateOverlapEvents = false;
	bpv__StaticMesh__pf->BodyInstance.bEnableGravity = false;
	bpv__StaticMesh__pf->bVisible = false;
	bpv__StaticMesh__pf->bHiddenInGame = true;
	bpv__StaticMesh__pf->RelativeLocation = FVector(-10.000000, 0.000000, 30.000000);
	bpv__StaticMesh__pf->RelativeScale3D = FVector(0.100000, 0.378739, 0.600000);
	if(!bpv__StaticMesh__pf->IsTemplate())
	{
		bpv__StaticMesh__pf->BodyInstance.FixupData(bpv__StaticMesh__pf);
	}
	bpv__Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Arrow__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Arrow__pf->RelativeLocation = FVector(29.999996, 0.000000, -0.000003);
	if(!bpv__Arrow__pf->IsTemplate())
	{
		bpv__Arrow__pf->BodyInstance.FixupData(bpv__Arrow__pf);
	}
	bpv__rightPlaceholder__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__rightPlaceholder__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__rightPlaceholder__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("OverlapAll")));
	bpv__rightPlaceholder__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(Aholster_C__pf2403237688::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__rightPlaceholder__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__rightPlaceholder__pf->OverrideMaterials.Reserve(2);
	bpv__rightPlaceholder__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Aholster_C__pf2403237688::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__rightPlaceholder__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Aholster_C__pf2403237688::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__rightPlaceholder__pf->RelativeLocation = FVector(-11.931398, 29.999874, -16.107613);
	bpv__rightPlaceholder__pf->RelativeRotation = FRotator(0.002855, -179.999588, 179.999985);
	if(!bpv__rightPlaceholder__pf->IsTemplate())
	{
		bpv__rightPlaceholder__pf->BodyInstance.FixupData(bpv__rightPlaceholder__pf);
	}
	bpv__leftPlaceholder__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__leftPlaceholder__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__leftPlaceholder__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("OverlapAll")));
	bpv__leftPlaceholder__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(Aholster_C__pf2403237688::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__leftPlaceholder__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__leftPlaceholder__pf->OverrideMaterials.Reserve(2);
	bpv__leftPlaceholder__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Aholster_C__pf2403237688::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__leftPlaceholder__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Aholster_C__pf2403237688::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__leftPlaceholder__pf->RelativeLocation = FVector(-11.930721, -33.032749, -16.108477);
	bpv__leftPlaceholder__pf->RelativeRotation = FRotator(0.000861, -179.999771, -179.999893);
	if(!bpv__leftPlaceholder__pf->IsTemplate())
	{
		bpv__leftPlaceholder__pf->BodyInstance.FixupData(bpv__leftPlaceholder__pf);
	}
	bpv__leftShoulder__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__leftShoulder__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__leftShoulder__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("OverlapAll")));
	bpv__leftShoulder__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(Aholster_C__pf2403237688::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__leftShoulder__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__leftShoulder__pf->OverrideMaterials.Reserve(2);
	bpv__leftShoulder__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Aholster_C__pf2403237688::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__leftShoulder__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Aholster_C__pf2403237688::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__leftShoulder__pf->bVisible = false;
	bpv__leftShoulder__pf->RelativeLocation = FVector(-21.929873, -20.476192, 56.105705);
	bpv__leftShoulder__pf->RelativeRotation = FRotator(0.000744, -179.999954, -159.999878);
	if(!bpv__leftShoulder__pf->IsTemplate())
	{
		bpv__leftShoulder__pf->BodyInstance.FixupData(bpv__leftShoulder__pf);
	}
	bpv__rightShoulder__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__rightShoulder__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__rightShoulder__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("OverlapAll")));
	bpv__rightShoulder__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(Aholster_C__pf2403237688::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__rightShoulder__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__rightShoulder__pf->OverrideMaterials.Reserve(2);
	bpv__rightShoulder__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Aholster_C__pf2403237688::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__rightShoulder__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Aholster_C__pf2403237688::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__rightShoulder__pf->bVisible = false;
	bpv__rightShoulder__pf->RelativeLocation = FVector(-21.927998, 20.431875, 54.698318);
	bpv__rightShoulder__pf->RelativeRotation = FRotator(0.002684, -179.999939, 159.999847);
	if(!bpv__rightShoulder__pf->IsTemplate())
	{
		bpv__rightShoulder__pf->BodyInstance.FixupData(bpv__rightShoulder__pf);
	}
	bpv__left_axe__pf = nullptr;
	bpv__rightAxe__pf = nullptr;
	bpv__wait__pf = false;
}
void Aholster_C__pf2403237688::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh__pf)
	{
		bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Arrow__pf)
	{
		bpv__Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__rightPlaceholder__pf)
	{
		bpv__rightPlaceholder__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__leftPlaceholder__pf)
	{
		bpv__leftPlaceholder__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__leftShoulder__pf)
	{
		bpv__leftShoulder__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__rightShoulder__pf)
	{
		bpv__rightShoulder__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void Aholster_C__pf2403237688::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/ProtoVRHand/Blueprints/Example/Enum_Grip.Enum_Grip")));
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_Aaxe_C__pf2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_Aaxe_C__pf2403237688());
	extern UClass* Z_Construct_UClass_ABP_MotionController_C__pf2307895703();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABP_MotionController_C__pf2307895703());
	extern UClass* Z_Construct_UClass_UAnimBP_LeftHand_C__pf4240717260();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UAnimBP_LeftHand_C__pf4240717260());
	extern UClass* Z_Construct_UClass_Achoppable_C__pf2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_Achoppable_C__pf2403237688());
	extern UClass* Z_Construct_UClass_UPickupActorInterface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPickupActorInterface_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(8);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 8);
	auto& __Local__1 = __Local__0->ComponentDelegateBindings[0];
	__Local__1.ComponentPropertyName = FName(TEXT("rightShoulder"));
	__Local__1.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__1.FunctionNameToBind = FName(TEXT("BndEvt__rightShoulder_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[1];
	__Local__2.ComponentPropertyName = FName(TEXT("rightShoulder"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__rightShoulder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[2];
	__Local__3.ComponentPropertyName = FName(TEXT("leftShoulder"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__leftShoulder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[3];
	__Local__4.ComponentPropertyName = FName(TEXT("leftShoulder"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__leftShoulder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[4];
	__Local__5.ComponentPropertyName = FName(TEXT("leftPlaceholder"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__leftPlaceholder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[5];
	__Local__6.ComponentPropertyName = FName(TEXT("leftPlaceholder"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__leftPlaceholder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[6];
	__Local__7.ComponentPropertyName = FName(TEXT("rightPlaceholder"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_14_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[7];
	__Local__8.ComponentPropertyName = FName(TEXT("rightPlaceholder"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_13_ComponentBeginOverlapSignature__DelegateSignature"));
}
void Aholster_C__pf2403237688::bpf__ExecuteUbergraph_holster__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_IsValid_ReturnValue3__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bool  __Local__9 = false;
				if (!((IsValid(b0l__CallFunc_spawnandattach_ReturnValue3__pf)) ? (b0l__CallFunc_spawnandattach_ReturnValue3__pf->bpv__hasBeenGripped__pf) : (__Local__9)))
				{
					CurrentState = 2;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 2:
			{
				if(IsValid(b0l__CallFunc_spawnandattach_ReturnValue3__pf))
				{
					b0l__CallFunc_spawnandattach_ReturnValue3__pf->K2_DestroyActor();
				}
				CurrentState = -1;
				break;
			}
		case 6:
			{
				bpv__CallFunc_IsValid_ReturnValue3__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_spawnandattach_ReturnValue3__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue3__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = 1;
				break;
			}
		case 9:
			{
				CurrentState = 6;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Aholster_C__pf2403237688::bpf__ExecuteUbergraph_holster__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_IsValid_ReturnValue4__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 3:
			{
				if(IsValid(b0l__CallFunc_spawnandattach_ReturnValue4__pf))
				{
					b0l__CallFunc_spawnandattach_ReturnValue4__pf->K2_DestroyActor();
				}
				CurrentState = -1;
				break;
			}
		case 4:
			{
				bool  __Local__10 = false;
				if (!((IsValid(b0l__CallFunc_spawnandattach_ReturnValue4__pf)) ? (b0l__CallFunc_spawnandattach_ReturnValue4__pf->bpv__hasBeenGripped__pf) : (__Local__10)))
				{
					CurrentState = 3;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 5:
			{
				bpv__CallFunc_IsValid_ReturnValue4__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_spawnandattach_ReturnValue4__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue4__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = 4;
				break;
			}
		case 11:
			{
				CurrentState = 5;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Aholster_C__pf2403237688::bpf__ExecuteUbergraph_holster__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 12);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_spawnandattach_ReturnValue4__pf = bpf__spawnandattach__pf(bpv__leftShoulder__pf, b0l__K2Node_ComponentBoundEvent_OtherActor4__pf);
	return; // KCST_GotoReturn
}
void Aholster_C__pf2403237688::bpf__ExecuteUbergraph_holster__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 10);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_spawnandattach_ReturnValue3__pf = bpf__spawnandattach__pf(bpv__rightShoulder__pf, b0l__K2Node_ComponentBoundEvent_OtherActor2__pf);
	return; // KCST_GotoReturn
}
void Aholster_C__pf2403237688::bpf__ExecuteUbergraph_holster__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_IsValid_ReturnValue2__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 13:
			{
				CurrentState = 14;
				break;
			}
		case 14:
			{
				bpv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_spawnandattach_ReturnValue2__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue2__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 15:
			{
				bool  __Local__11 = false;
				if (!((IsValid(b0l__CallFunc_spawnandattach_ReturnValue2__pf)) ? (b0l__CallFunc_spawnandattach_ReturnValue2__pf->bpv__hasBeenGripped__pf) : (__Local__11)))
				{
					CurrentState = 16;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 16:
			{
				if(IsValid(b0l__CallFunc_spawnandattach_ReturnValue2__pf))
				{
					b0l__CallFunc_spawnandattach_ReturnValue2__pf->K2_DestroyActor();
				}
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Aholster_C__pf2403237688::bpf__ExecuteUbergraph_holster__pf_5(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_IsValid_ReturnValue__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 17:
			{
				bool  __Local__12 = false;
				if (!((IsValid(b0l__CallFunc_spawnandattach_ReturnValue__pf)) ? (b0l__CallFunc_spawnandattach_ReturnValue__pf->bpv__hasBeenGripped__pf) : (__Local__12)))
				{
					CurrentState = 18;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 18:
			{
				if(IsValid(b0l__CallFunc_spawnandattach_ReturnValue__pf))
				{
					b0l__CallFunc_spawnandattach_ReturnValue__pf->K2_DestroyActor();
				}
				CurrentState = -1;
				break;
			}
		case 19:
			{
				bpv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_spawnandattach_ReturnValue__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = 17;
				break;
			}
		case 23:
			{
				CurrentState = 19;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Aholster_C__pf2403237688::bpf__ExecuteUbergraph_holster__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 22);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_spawnandattach_ReturnValue2__pf = bpf__spawnandattach__pf(bpv__leftPlaceholder__pf, b0l__K2Node_ComponentBoundEvent_OtherActor6__pf);
	return; // KCST_GotoReturn
}
void Aholster_C__pf2403237688::bpf__ExecuteUbergraph_holster__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 24);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_spawnandattach_ReturnValue__pf = bpf__spawnandattach__pf(bpv__rightPlaceholder__pf, b0l__K2Node_ComponentBoundEvent_OtherActor8__pf);
	return; // KCST_GotoReturn
}
void Aholster_C__pf2403237688::bpf__BndEvt__rightShoulder_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_holster__pf_0(9);
}
void Aholster_C__pf2403237688::bpf__BndEvt__rightShoulder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__13;
	T__Local__13& bpp__SweepResult__pf = *const_cast<T__Local__13 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor2__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp2__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_holster__pf_3(10);
}
void Aholster_C__pf2403237688::bpf__BndEvt__leftShoulder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent3__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor3__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp3__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex3__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_holster__pf_1(11);
}
void Aholster_C__pf2403237688::bpf__BndEvt__leftShoulder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__14;
	T__Local__14& bpp__SweepResult__pf = *const_cast<T__Local__14 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent4__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor4__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp4__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex4__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep2__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult2__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_holster__pf_2(12);
}
void Aholster_C__pf2403237688::bpf__BndEvt__leftPlaceholder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent5__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor5__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp5__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex5__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_holster__pf_4(13);
}
void Aholster_C__pf2403237688::bpf__BndEvt__leftPlaceholder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__15;
	T__Local__15& bpp__SweepResult__pf = *const_cast<T__Local__15 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent6__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor6__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp6__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex6__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep3__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult3__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_holster__pf_6(22);
}
void Aholster_C__pf2403237688::bpf__BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_14_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent7__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor7__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp7__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex7__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_holster__pf_5(23);
}
void Aholster_C__pf2403237688::bpf__BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_13_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__16;
	T__Local__16& bpp__SweepResult__pf = *const_cast<T__Local__16 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent8__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor8__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp8__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex8__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep4__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult4__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_holster__pf_7(24);
}
void Aholster_C__pf2403237688::bpf__UserConstructionScript__pf()
{
}
Aaxe_C__pf2403237688*  Aholster_C__pf2403237688::bpf__spawnandattach__pf(USceneComponent* bpp__Target__pf, AActor* bpp__overlappingActor__pf)
{
	Aaxe_C__pf2403237688* bpp__ReturnValue__pf{};
	bool bpv__CallFunc_IsValid_ReturnValue__pf{};
	ABP_MotionController_C__pf2307895703* bpv__K2Node_DynamicCast_AsBP_Motion_Controller__pf{};
	bool bpv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpv__CallFunc_IsValid_ReturnValue2__pf{};
	FTransform bpv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	AActor* bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	Aaxe_C__pf2403237688* bpv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(bpp__Target__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue2__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpp__overlappingActor__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpv__K2Node_DynamicCast_AsBP_Motion_Controller__pf = Cast<ABP_MotionController_C__pf2307895703>(bpp__overlappingActor__pf);
				bpv__K2Node_DynamicCast_bSuccess__pf = (bpv__K2Node_DynamicCast_AsBP_Motion_Controller__pf != nullptr);;
				if (!bpv__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = 10;
					break;
				}
			}
		case 4:
			{
				if(IsValid(bpv__K2Node_DynamicCast_AsBP_Motion_Controller__pf))
				{
					bpv__K2Node_DynamicCast_AsBP_Motion_Controller__pf->bpf__RumbleController__pf(1.000000);
				}
			}
		case 5:
			{
				if(IsValid(bpp__Target__pf))
				{
					bpv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpp__Target__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, Aaxe_C__pf2403237688::StaticClass(), bpv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, nullptr);
			}
		case 6:
			{
				if(IsValid(bpp__Target__pf))
				{
					bpv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpp__Target__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<Aaxe_C__pf2403237688>(UGameplayStatics::FinishSpawningActor(bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 7:
			{
				if(IsValid(bpv__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					bpv__CallFunc_FinishSpawningActor_ReturnValue__pf->AActor::K2_AttachToComponent(bpp__Target__pf, FName(TEXT("None")), EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false);
				}
			}
		case 8:
			{
				if(IsValid(bpv__CallFunc_FinishSpawningActor_ReturnValue__pf) && IsValid(bpv__CallFunc_FinishSpawningActor_ReturnValue__pf->StaticMeshComponent))
				{
					bpv__CallFunc_FinishSpawningActor_ReturnValue__pf->StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
				}
			}
		case 9:
			{
				bpp__ReturnValue__pf = bpv__CallFunc_FinishSpawningActor_ReturnValue__pf;
				CurrentState = -1;
				break;
			}
		case 10:
			{
				bpp__ReturnValue__pf = nullptr;
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
void Aholster_C__pf2403237688::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__17 = TEXT("/Game/Geometry/Meshes");
	const TCHAR* __Local__18 = TEXT("/Game/props/axe");
	const TCHAR* __Local__19 = TEXT("/Game/materials");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__17, TEXT("1M_Cube"), TEXT("1M_Cube"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__18, TEXT("axe"), TEXT("axe"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__19, TEXT("ghostAxe_off"), TEXT("ghostAxe_off"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void Aholster_C__pf2403237688::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void Aholster_C__pf2403237688::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__20 = TEXT("/Game/VirtualReality/Meshes");
	const TCHAR* __Local__21 = TEXT("/Game/VirtualReality/Materials");
	const TCHAR* __Local__22 = TEXT("/Game/ProtoVRHand/Meshes/Villain");
	const TCHAR* __Local__23 = TEXT("/Game/ProtoVRHand/Animations");
	const TCHAR* __Local__24 = TEXT("/Engine/EngineMaterials");
	const TCHAR* __Local__25 = TEXT("/Engine/EngineFonts");
	const TCHAR* __Local__26 = TEXT("/Engine/BasicShapes");
	const TCHAR* __Local__27 = TEXT("/Game/props/log");
	const TCHAR* __Local__28 = TEXT("/Game/audio");
	const TCHAR* __Local__29 = TEXT("/Game/particles");
	const TCHAR* __Local__30 = TEXT("/Game/trees/conifer_low_poly_leaves");
	const TCHAR* __Local__31 = TEXT("/Game/audio/hapticEffects");
	const TCHAR* __Local__32 = TEXT("/Game/audio/chop");
	const TCHAR* __Local__33 = TEXT("/Game/audio/texture");
	const TCHAR* __Local__34 = TEXT("/Game/audio/woosh");
	const TCHAR* __Local__35 = TEXT("/Game/props/axe");
	const TCHAR* __Local__36 = TEXT("/Game/Blueprints");
	const TCHAR* __Local__37 = TEXT("/Game/VirtualRealityBP/Blueprints");
	const TCHAR* __Local__38 = TEXT("/Game/ProtoVRHand/Blueprints/Example");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__20, TEXT("BeamMesh"), TEXT("BeamMesh"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__21, TEXT("M_SplineArcMat"), TEXT("M_SplineArcMat"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__22, TEXT("Skel_Hand_Skeleton"), TEXT("Skel_Hand_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__23, TEXT("BS_LeftGrip"), TEXT("BS_LeftGrip"), TEXT("/Script/Engine"), TEXT("BlendSpace1D")),
		FBlueprintDependencyData(__Local__22, TEXT("Skel_Hand"), TEXT("Skel_Hand"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__24, TEXT("DefaultTextMaterialOpaque"), TEXT("DefaultTextMaterialOpaque"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__25, TEXT("RobotoDistanceField"), TEXT("RobotoDistanceField"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__26, TEXT("Sphere"), TEXT("Sphere"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__21, TEXT("M_ArcEndpoint"), TEXT("M_ArcEndpoint"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__26, TEXT("Cylinder"), TEXT("Cylinder"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__21, TEXT("MI_TeleportCylinderPreview"), TEXT("MI_TeleportCylinderPreview"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__20, TEXT("SM_FatCylinder"), TEXT("SM_FatCylinder"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__20, TEXT("BeaconDirection"), TEXT("BeaconDirection"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__20, TEXT("1x1_cube"), TEXT("1x1_cube"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__21, TEXT("MI_ChaperoneOutline"), TEXT("MI_ChaperoneOutline"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__27, TEXT("log"), TEXT("log"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__28, TEXT("chopEffectAttenuation"), TEXT("chopEffectAttenuation"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
		FBlueprintDependencyData(__Local__28, TEXT("chopConcurrency"), TEXT("chopConcurrency"), TEXT("/Script/Engine"), TEXT("SoundConcurrency")),
		FBlueprintDependencyData(__Local__29, TEXT("woodchipParticle"), TEXT("woodchipParticle"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__30, TEXT("choppable_conifer_low_poly_leaves"), TEXT("choppable_conifer_low_poly_leaves"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__31, TEXT("genericRumbleEffect"), TEXT("genericRumbleEffect"), TEXT("/Script/Engine"), TEXT("HapticFeedbackEffect_Curve")),
		FBlueprintDependencyData(__Local__32, TEXT("wc_1"), TEXT("wc_1"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__32, TEXT("wc_2"), TEXT("wc_2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__32, TEXT("wc_3"), TEXT("wc_3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__32, TEXT("wc_4"), TEXT("wc_4"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__32, TEXT("wc_5"), TEXT("wc_5"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__32, TEXT("wc_6"), TEXT("wc_6"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__32, TEXT("wc_7"), TEXT("wc_7"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__32, TEXT("wc_8"), TEXT("wc_8"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__33, TEXT("wtx_1"), TEXT("wtx_1"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__33, TEXT("wtx_2"), TEXT("wtx_2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__33, TEXT("wtx_3"), TEXT("wtx_3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__33, TEXT("wtx_4"), TEXT("wtx_4"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__33, TEXT("wtx_5"), TEXT("wtx_5"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__34, TEXT("swoosh_01"), TEXT("swoosh_01"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__34, TEXT("swoosh_02"), TEXT("swoosh_02"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__34, TEXT("swoosh_03"), TEXT("swoosh_03"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__34, TEXT("swoosh_04"), TEXT("swoosh_04"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__34, TEXT("swoosh_05"), TEXT("swoosh_05"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__34, TEXT("swoosh_06"), TEXT("swoosh_06"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__35, TEXT("axe_head_Inst"), TEXT("axe_head_Inst"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__36, TEXT("axe"), TEXT("axe_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__37, TEXT("BP_MotionController"), TEXT("BP_MotionController_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__23, TEXT("AnimBP_LeftHand"), TEXT("AnimBP_LeftHand_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__36, TEXT("choppable"), TEXT("choppable_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__37, TEXT("PickupActorInterface"), TEXT("PickupActorInterface_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__38, TEXT("Enum_Grip"), TEXT("Enum_Grip"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__Aholster_C__pf2403237688
{
	FRegisterHelper__Aholster_C__pf2403237688()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/Blueprints/holster"), &Aholster_C__pf2403237688::__StaticDependenciesAssets);
	}
	static FRegisterHelper__Aholster_C__pf2403237688 Instance;
};
FRegisterHelper__Aholster_C__pf2403237688 FRegisterHelper__Aholster_C__pf2403237688::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
