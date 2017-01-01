#include "NativizedAssets.h"
#include "HMDLocomotionPawn__pf2307895703.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
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
#include "HMDLocomotionPawn__pf2307895703.h"
#include "Runtime/Engine/Classes/Kismet/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationSystem.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationPath.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavMeshBoundsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "DmgTypeBP_Environmental__pf2398200284.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
AHMDLocomotionPawn_C__pf2307895703::AHMDLocomotionPawn_C__pf2307895703(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AHMDLocomotionPawn_C__pf2307895703::StaticClass() == GetClass()))
	{
		AHMDLocomotionPawn_C__pf2307895703::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__VROrigin__pf = CreateDefaultSubobject<USceneComponent>(TEXT("VROrigin"));
	bpv__Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	bpv__TraceDirection__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("TraceDirection"));
	bpv__TeleportPin__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TeleportPin"));
	bpv__Ring__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ring"));
	bpv__Arrow__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Arrow"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__VROrigin__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__VROrigin__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Camera__pf->AttachToComponent(bpv__VROrigin__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TraceDirection__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TraceDirection__pf->AttachToComponent(bpv__Camera__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TraceDirection__pf->RelativeRotation = FRotator(-10.000011, 0.000000, 0.000000);
	if(!bpv__TraceDirection__pf->IsTemplate())
	{
		bpv__TraceDirection__pf->BodyInstance.FixupData(bpv__TraceDirection__pf);
	}
	bpv__TeleportPin__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TeleportPin__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TeleportPin__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AHMDLocomotionPawn_C__pf2307895703::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__TeleportPin__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__TeleportPin__pf->OverrideMaterials.Reserve(1);
	bpv__TeleportPin__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AHMDLocomotionPawn_C__pf2307895703::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__TeleportPin__pf->bReceivesDecals = false;
	bpv__TeleportPin__pf->bAbsoluteLocation = true;
	bpv__TeleportPin__pf->bAbsoluteRotation = true;
	bpv__TeleportPin__pf->RelativeScale3D = FVector(0.750000, 0.750000, 1.000000);
	if(!bpv__TeleportPin__pf->IsTemplate())
	{
		bpv__TeleportPin__pf->BodyInstance.FixupData(bpv__TeleportPin__pf);
	}
	bpv__Ring__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Ring__pf->AttachToComponent(bpv__TeleportPin__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Ring__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AHMDLocomotionPawn_C__pf2307895703::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__Ring__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Ring__pf->OverrideMaterials.Reserve(1);
	bpv__Ring__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AHMDLocomotionPawn_C__pf2307895703::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__Ring__pf->bAbsoluteRotation = true;
	bpv__Ring__pf->RelativeScale3D = FVector(0.500000, 0.500000, 0.150000);
	if(!bpv__Ring__pf->IsTemplate())
	{
		bpv__Ring__pf->BodyInstance.FixupData(bpv__Ring__pf);
	}
	bpv__Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Arrow__pf->AttachToComponent(bpv__TeleportPin__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Arrow__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AHMDLocomotionPawn_C__pf2307895703::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__Arrow__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Arrow__pf->OverrideMaterials.Reserve(1);
	bpv__Arrow__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AHMDLocomotionPawn_C__pf2307895703::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__Arrow__pf->bAbsoluteRotation = true;
	if(!bpv__Arrow__pf->IsTemplate())
	{
		bpv__Arrow__pf->BodyInstance.FixupData(bpv__Arrow__pf);
	}
	bpv__PinnedLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__bLocationFound__pf = false;
	bpv__bLocationPinned__pf = false;
	bpv__PinnedRotation__pf = FRotator(0.000000, 0.000000, 0.000000);
	bpv__RotationLengthThreshold__pf = 100.000000f;
	bpv__CurrentLookAtLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__bCurrentLocationValid__pf = false;
	bpv__FadeOutDuration__pf = 0.100000f;
	bpv__FadeInDuration__pf = 0.200000f;
	bpv__TeleportFadeColor__pf = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	bpv__DefaultPlayerHeight__pf = 180.000000f;
	bpv__RingGlowMatInst__pf = nullptr;
	bpv__UseGamepad__pf = true;
}
void AHMDLocomotionPawn_C__pf2307895703::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__VROrigin__pf)
	{
		bpv__VROrigin__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Camera__pf)
	{
		bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TraceDirection__pf)
	{
		bpv__TraceDirection__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TeleportPin__pf)
	{
		bpv__TeleportPin__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Ring__pf)
	{
		bpv__Ring__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Arrow__pf)
	{
		bpv__Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void AHMDLocomotionPawn_C__pf2307895703::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__1);
	auto __Local__2 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__2);
	__Local__0->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__0->InputActionDelegateBindings.AddUninitialized(2);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->InputActionDelegateBindings.GetData(), 2);
	auto& __Local__3 = __Local__0->InputActionDelegateBindings[0];
	__Local__3.InputActionName = FName(TEXT("HMDTeleport"));
	__Local__3.FunctionNameToBind = FName(TEXT("InpActEvt_HMDTeleport_K2Node_InputActionEvent_2"));
	auto& __Local__4 = __Local__0->InputActionDelegateBindings[1];
	__Local__4.InputActionName = FName(TEXT("HMDTeleport"));
	__Local__4.InputKeyEvent = EInputEvent::IE_Released;
	__Local__4.FunctionNameToBind = FName(TEXT("InpActEvt_HMDTeleport_K2Node_InputActionEvent_3"));
	__Local__1->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__1->InputKeyDelegateBindings.AddUninitialized(1);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__1->InputKeyDelegateBindings.GetData(), 1);
	auto& __Local__5 = __Local__1->InputKeyDelegateBindings[0];
	__Local__5.InputChord.Key = FKey(TEXT("R"));
	__Local__5.FunctionNameToBind = FName(TEXT("InpActEvt_R_K2Node_InputKeyEvent_1"));
	__Local__2->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__2->InputAxisDelegateBindings.AddUninitialized(4);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__2->InputAxisDelegateBindings.GetData(), 4);
	auto& __Local__6 = __Local__2->InputAxisDelegateBindings[0];
	__Local__6.InputAxisName = FName(TEXT("TeleportDirectionRight"));
	__Local__6.bOverrideParentBinding = false;
	auto& __Local__7 = __Local__2->InputAxisDelegateBindings[1];
	__Local__7.InputAxisName = FName(TEXT("TeleportDirectionUp"));
	__Local__7.bOverrideParentBinding = false;
	auto& __Local__8 = __Local__2->InputAxisDelegateBindings[2];
	__Local__8.InputAxisName = FName(TEXT("TeleportDirectionRight"));
	__Local__8.bOverrideParentBinding = false;
	auto& __Local__9 = __Local__2->InputAxisDelegateBindings[3];
	__Local__9.InputAxisName = FName(TEXT("TeleportDirectionUp"));
	__Local__9.bOverrideParentBinding = false;
}
void AHMDLocomotionPawn_C__pf2307895703::bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_0(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_SelectFloat_ReturnValue__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue__pf{};
	FRotator bpv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_ComposeRotators_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_SelectRotator_ReturnValue2__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(/*out*/ b0l__CallFunc_GetOrientationAndPosition_DeviceRotation2__pf, /*out*/ b0l__CallFunc_GetOrientationAndPosition_DevicePosition2__pf);
				UKismetMathLibrary::BreakRotator(b0l__CallFunc_GetOrientationAndPosition_DeviceRotation2__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
				bpv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b0l__CallFunc_BreakRotator_Yaw__pf);
				bpv__CallFunc_ComposeRotators_ReturnValue__pf = UKismetMathLibrary::ComposeRotators(bpv__PinnedRotation__pf, bpv__CallFunc_MakeRotator_ReturnValue__pf);
				bpv__CallFunc_SelectRotator_ReturnValue2__pf = UKismetMathLibrary::SelectRotator(bpv__CallFunc_ComposeRotators_ReturnValue__pf, bpv__PinnedRotation__pf, bpv__UseGamepad__pf);
				if(IsValid(bpv__Arrow__pf))
				{
					bpv__Arrow__pf->USceneComponent::K2_SetWorldRotation(bpv__CallFunc_SelectRotator_ReturnValue2__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 3:
			{
				if(IsValid(bpv__TeleportPin__pf))
				{
					bpv__TeleportPin__pf->SetVisibility(bpv__bCurrentLocationValid__pf, true);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				bpv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(1.000000, 0.350000, bpv__bLocationPinned__pf);
				if(IsValid(bpv__RingGlowMatInst__pf))
				{
					bpv__RingGlowMatInst__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("HeightScale")), bpv__CallFunc_SelectFloat_ReturnValue__pf);
				}
				CurrentState = 1;
				break;
			}
		case 29:
			{
				CurrentState = 30;
				break;
			}
		case 30:
			{
				StateStack.Push(37);
			}
		case 31:
			{
				bpf__GetTeleportDestination__pf(/*out*/ b0l__CallFunc_GetTeleportDestination_FoundValidLocation__pf, /*out*/ b0l__CallFunc_GetTeleportDestination_Location__pf, /*out*/ b0l__CallFunc_GetTeleportDestination_HitNormal__pf);
			}
		case 32:
			{
				bpv__CurrentLookAtLocation__pf = b0l__CallFunc_GetTeleportDestination_Location__pf;
			}
		case 33:
			{
				bpv__bCurrentLocationValid__pf = b0l__CallFunc_GetTeleportDestination_FoundValidLocation__pf;
			}
		case 34:
			{
				if (!bpv__bLocationPinned__pf)
				{
					CurrentState = 36;
					break;
				}
			}
		case 35:
			{
				bpf__UpdateTeleportDirection__pf();
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 36:
			{
				if(IsValid(bpv__TeleportPin__pf))
				{
					bpv__TeleportPin__pf->USceneComponent::K2_SetWorldLocation(bpv__CurrentLookAtLocation__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, true);
				}
				CurrentState = 3;
				break;
			}
		case 37:
			{
				bpf__ShouldUpdateFacingDirection__pf(/*out*/ b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust2__pf);
				bpv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__bLocationPinned__pf, b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust2__pf);
				if(IsValid(bpv__Arrow__pf))
				{
					bpv__Arrow__pf->SetVisibility(bpv__CallFunc_BooleanAND_ReturnValue__pf, false);
				}
				CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void AHMDLocomotionPawn_C__pf2307895703::bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 28);
	// optimized KCST_UnconditionalGoto
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(0.000000, EOrientPositionSelector::OrientationAndPosition);
	return; //KCST_EndOfThread
}
void AHMDLocomotionPawn_C__pf2307895703::bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 12);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key__pf;
	if (!bpv__bCurrentLocationValid__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpv__bLocationPinned__pf = true;
	bpv__bLocationFound__pf = bpv__bCurrentLocationValid__pf;
	if (!bpv__bCurrentLocationValid__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpv__PinnedLocation__pf = bpv__CurrentLookAtLocation__pf;
	return; //KCST_EndOfThread
}
void AHMDLocomotionPawn_C__pf2307895703::bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_3(int32 bpp__EntryPoint__pf)
{
	FName bpv__CallFunc_GetHMDDeviceName_ReturnValue__pf{};
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	UMaterialInstanceDynamic* bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 11:
			{
				bpv__RingGlowMatInst__pf = bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				if(IsValid(bpv__TeleportPin__pf))
				{
					bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpv__TeleportPin__pf->CreateDynamicMaterialInstance(0, nullptr);
				}
				CurrentState = 11;
				break;
			}
		case 14:
			{
				StateStack.Push(13);
			}
		case 15:
			{
				bpv__CallFunc_GetHMDDeviceName_ReturnValue__pf = UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName();
				b0l__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("OculusRift")));
				if (!b0l__K2Node_SwitchName_CmpSuccess__pf)
				{
					CurrentState = 16;
					break;
				}
				b0l__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("SteamVR")));
				if (!b0l__K2Node_SwitchName_CmpSuccess__pf)
				{
					CurrentState = 16;
					break;
				}
				b0l__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("PSVR")));
				if (!b0l__K2Node_SwitchName_CmpSuccess__pf)
				{
					CurrentState = 17;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Floor);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Eye);
			}
		case 18:
			{
				bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__DefaultPlayerHeight__pf);
				if(IsValid(bpv__VROrigin__pf))
				{
					bpv__VROrigin__pf->USceneComponent::K2_AddLocalOffset(bpv__CallFunc_MakeVector_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf, false);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 38:
			{
				CurrentState = 14;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void AHMDLocomotionPawn_C__pf2307895703::bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4(int32 bpp__EntryPoint__pf)
{
	APlayerCameraManager* bpv__CallFunc_GetPlayerCameraManager_ReturnValue__pf{};
	APlayerCameraManager* bpv__CallFunc_GetPlayerCameraManager_ReturnValue2__pf{};
	FRotator bpv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_SelectRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpv__CallFunc_K2_TeleportTo_ReturnValue__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 19:
			{
				bpf__ShouldUpdateFacingDirection__pf(/*out*/ b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust__pf);
				UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(/*out*/ b0l__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ b0l__CallFunc_GetOrientationAndPosition_DevicePosition__pf);
				bpv__CallFunc_K2_GetActorRotation_ReturnValue__pf = AActor::K2_GetActorRotation();
				UKismetMathLibrary::BreakVector(b0l__CallFunc_GetOrientationAndPosition_DevicePosition__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
				bpv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(b0l__CallFunc_BreakVector_X__pf, b0l__CallFunc_BreakVector_Y__pf, 0.000000);
				bpv__CallFunc_SelectRotator_ReturnValue__pf = UKismetMathLibrary::SelectRotator(bpv__PinnedRotation__pf, bpv__CallFunc_K2_GetActorRotation_ReturnValue__pf, b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust__pf);
				bpv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpv__CallFunc_MakeVector_ReturnValue2__pf, bpv__CallFunc_SelectRotator_ReturnValue__pf);
				bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__PinnedLocation__pf, bpv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf);
				bpv__CallFunc_K2_TeleportTo_ReturnValue__pf = AActor::K2_TeleportTo(bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf, bpv__CallFunc_SelectRotator_ReturnValue__pf);
			}
		case 20:
			{
				bpv__CallFunc_GetPlayerCameraManager_ReturnValue2__pf = UGameplayStatics::GetPlayerCameraManager(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerCameraManager_ReturnValue2__pf))
				{
					bpv__CallFunc_GetPlayerCameraManager_ReturnValue2__pf->StartCameraFade(1.000000, 0.000000, bpv__FadeInDuration__pf, bpv__TeleportFadeColor__pf, false, false);
				}
				CurrentState = -1;
				break;
			}
		case 21:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key2__pf;
			}
		case 22:
			{
				if (!bpv__bLocationPinned__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 23:
			{
				bpv__bLocationPinned__pf = false;
			}
		case 24:
			{
				if (!bpv__bLocationFound__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 25:
			{
				bpv__CallFunc_GetPlayerCameraManager_ReturnValue__pf = UGameplayStatics::GetPlayerCameraManager(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerCameraManager_ReturnValue__pf))
				{
					bpv__CallFunc_GetPlayerCameraManager_ReturnValue__pf->StartCameraFade(0.000000, 1.000000, bpv__FadeOutDuration__pf, bpv__TeleportFadeColor__pf, false, true);
				}
			}
		case 26:
			{
				UKismetSystemLibrary::Delay(this, bpv__FadeOutDuration__pf, FLatentActionInfo(27, 1129173594, TEXT("ExecuteUbergraph_HMDLocomotionPawn_4"), this));
				CurrentState = -1;
				break;
			}
		case 27:
			{
				CurrentState = 19;
				break;
			}
		case 39:
			{
				CurrentState = 21;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AHMDLocomotionPawn_C__pf2307895703::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_0(29);
}
void AHMDLocomotionPawn_C__pf2307895703::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_3(38);
}
void AHMDLocomotionPawn_C__pf2307895703::bpf__InpActEvt_R_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_1(28);
}
void AHMDLocomotionPawn_C__pf2307895703::bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_2(12);
}
void AHMDLocomotionPawn_C__pf2307895703::bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4(39);
}
void AHMDLocomotionPawn_C__pf2307895703::bpf__UserConstructionScript__pf()
{
}
void AHMDLocomotionPawn_C__pf2307895703::bpf__GetTeleportDestination__pf(/*out*/ bool& bpp__FoundValidLocation__pf, /*out*/ FVector& bpp__Location__pf, /*out*/ FVector& bpp__HitNormal__pf)
{
	TArray<AActor*> bpv__Temp_object_Variable__pf{};
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpv__CallFunc_SphereTraceSingle_NEW_OutHit__pf{};
	bool bpv__CallFunc_SphereTraceSingle_NEW_ReturnValue__pf{};
	bool bpv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpv__CallFunc_BreakHitResult_Time__pf{};
	FVector bpv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	float bpv__CallFunc_Dot_VectorVector_ReturnValue__pf{};
	bool bpv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue__pf{};
	float bpv__ProjectNavExtends__pf{};
	bpv__ProjectNavExtends__pf = 100.000000;
	if(IsValid(bpv__TraceDirection__pf))
	{
		bpv__CallFunc_GetForwardVector_ReturnValue__pf = bpv__TraceDirection__pf->USceneComponent::GetForwardVector();
	}
	if(IsValid(bpv__TraceDirection__pf))
	{
		bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__TraceDirection__pf->USceneComponent::K2_GetComponentLocation();
	}
	bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__CallFunc_GetForwardVector_ReturnValue__pf, 10000.000000);
	bpv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
	bpv__CallFunc_SphereTraceSingle_NEW_ReturnValue__pf = UKismetSystemLibrary::SphereTraceSingle_NEW(this, bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpv__CallFunc_Add_VectorVector_ReturnValue__pf, 60.000000, ETraceTypeQuery::TraceTypeQuery1, false, bpv__Temp_object_Variable__pf, EDrawDebugTrace::None, /*out*/ bpv__CallFunc_SphereTraceSingle_NEW_OutHit__pf, true);
	bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, 1.000000);
	UGameplayStatics::BreakHitResult(bpv__CallFunc_SphereTraceSingle_NEW_OutHit__pf, /*out*/ bpv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpv__CallFunc_BreakHitResult_TraceEnd__pf);
	bpv__CallFunc_Dot_VectorVector_ReturnValue__pf = UKismetMathLibrary::Dot_VectorVector(bpv__CallFunc_MakeVector_ReturnValue__pf, bpv__CallFunc_BreakHitResult_ImpactNormal__pf);
	bpv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpv__CallFunc_Dot_VectorVector_ReturnValue__pf, 0.600000);
	bpv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf, bpv__CallFunc_BreakHitResult_bBlockingHit__pf);
	bpp__FoundValidLocation__pf = bpv__CallFunc_BooleanAND_ReturnValue__pf;
	bpp__Location__pf = bpv__CallFunc_BreakHitResult_ImpactPoint__pf;
	bpp__HitNormal__pf = bpv__CallFunc_BreakHitResult_ImpactNormal__pf;
}
void AHMDLocomotionPawn_C__pf2307895703::bpf__ShouldUpdateFacingDirection__pf(/*out*/ bool& bpp__ShouldAdjust__pf)
{
	float bpv__CallFunc_GetInputAxisValue_ReturnValue__pf{};
	bool bpv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf{};
	float bpv__CallFunc_GetInputAxisValue_ReturnValue2__pf{};
	bool bpv__CallFunc_NotEqual_FloatFloat_ReturnValue2__pf{};
	bool bpv__CallFunc_BooleanOR_ReturnValue__pf{};
	FVector bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpv__CallFunc_VSize_ReturnValue__pf{};
	bool bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				if (!bpv__UseGamepad__pf)
				{
					CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpv__CallFunc_GetInputAxisValue_ReturnValue__pf = AActor::GetInputAxisValue(FName(TEXT("TeleportDirectionUp")));
				bpv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::NotEqual_FloatFloat(bpv__CallFunc_GetInputAxisValue_ReturnValue__pf, 0.000000);
				bpv__CallFunc_GetInputAxisValue_ReturnValue2__pf = AActor::GetInputAxisValue(FName(TEXT("TeleportDirectionRight")));
				bpv__CallFunc_NotEqual_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::NotEqual_FloatFloat(bpv__CallFunc_GetInputAxisValue_ReturnValue2__pf, 0.000000);
				bpv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf, bpv__CallFunc_NotEqual_FloatFloat_ReturnValue2__pf);
				bpp__ShouldAdjust__pf = bpv__CallFunc_BooleanOR_ReturnValue__pf;
				CurrentState = -1;
				break;
			}
		case 3:
			{
				bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__CurrentLookAtLocation__pf, bpv__PinnedLocation__pf);
				bpv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpv__CallFunc_VSize_ReturnValue__pf, bpv__RotationLengthThreshold__pf);
				bpp__ShouldAdjust__pf = bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf;
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
FVector  AHMDLocomotionPawn_C__pf2307895703::bpf__GetThumbstickFacingDirection__pf()
{
	FVector bpp__ReturnValue__pf(EForceInit::ForceInit);
	float bpv__CallFunc_GetInputAxisValue_ReturnValue__pf{};
	float bpv__CallFunc_GetInputAxisValue_ReturnValue2__pf{};
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Normal_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_MakeRotFromX_ReturnValue__pf(EForceInit::ForceInit);
	float bpv__CallFunc_BreakRotator_Roll__pf{};
	float bpv__CallFunc_BreakRotator_Pitch__pf{};
	float bpv__CallFunc_BreakRotator_Yaw__pf{};
	FRotator bpv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	bpv__CallFunc_GetInputAxisValue_ReturnValue__pf = AActor::GetInputAxisValue(FName(TEXT("TeleportDirectionUp")));
	bpv__CallFunc_GetInputAxisValue_ReturnValue2__pf = AActor::GetInputAxisValue(FName(TEXT("TeleportDirectionRight")));
	bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpv__CallFunc_GetInputAxisValue_ReturnValue__pf, bpv__CallFunc_GetInputAxisValue_ReturnValue2__pf, 0.000000);
	if(IsValid(bpv__Camera__pf))
	{
		bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentLocation();
	}
	bpv__CallFunc_Normal_ReturnValue__pf = UKismetMathLibrary::Normal(bpv__CallFunc_MakeVector_ReturnValue__pf);
	bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__PinnedLocation__pf, bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
	bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__CallFunc_Normal_ReturnValue__pf, 400.000000);
	bpv__CallFunc_MakeRotFromX_ReturnValue__pf = UKismetMathLibrary::MakeRotFromX(bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
	UKismetMathLibrary::BreakRotator(bpv__CallFunc_MakeRotFromX_ReturnValue__pf, /*out*/ bpv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpv__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpv__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, bpv__CallFunc_MakeRotator_ReturnValue__pf);
	bpp__ReturnValue__pf = bpv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
void AHMDLocomotionPawn_C__pf2307895703::bpf__UpdateTeleportDirection__pf()
{
	FVector bpv__CallFunc_GetThumbstickFacingDirection_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_Conv_VectorToRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Normal_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_Conv_VectorToRotator_ReturnValue2__pf(EForceInit::ForceInit);
	float bpv__CallFunc_BreakRotator_Roll__pf{};
	float bpv__CallFunc_BreakRotator_Pitch__pf{};
	float bpv__CallFunc_BreakRotator_Yaw__pf{};
	FRotator bpv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_SelectRotator_ReturnValue__pf(EForceInit::ForceInit);
	bpv__CallFunc_GetThumbstickFacingDirection_ReturnValue__pf = bpf__GetThumbstickFacingDirection__pf();
	bpv__CallFunc_Conv_VectorToRotator_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToRotator(bpv__CallFunc_GetThumbstickFacingDirection_ReturnValue__pf);
	bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__CurrentLookAtLocation__pf, bpv__PinnedLocation__pf);
	bpv__CallFunc_Normal_ReturnValue__pf = UKismetMathLibrary::Normal(bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
	bpv__CallFunc_Conv_VectorToRotator_ReturnValue2__pf = UKismetMathLibrary::Conv_VectorToRotator(bpv__CallFunc_Normal_ReturnValue__pf);
	UKismetMathLibrary::BreakRotator(bpv__CallFunc_Conv_VectorToRotator_ReturnValue2__pf, /*out*/ bpv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpv__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpv__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_SelectRotator_ReturnValue__pf = UKismetMathLibrary::SelectRotator(bpv__CallFunc_Conv_VectorToRotator_ReturnValue__pf, bpv__CallFunc_MakeRotator_ReturnValue__pf, bpv__UseGamepad__pf);
	bpv__PinnedRotation__pf = bpv__CallFunc_SelectRotator_ReturnValue__pf;
}
void AHMDLocomotionPawn_C__pf2307895703::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__11 = TEXT("/Engine/BasicShapes");
	const TCHAR* __Local__12 = TEXT("/Game/VirtualReality/Materials");
	const TCHAR* __Local__13 = TEXT("/Game/VirtualReality/Meshes");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__11, TEXT("Cylinder"), TEXT("Cylinder"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__12, TEXT("MI_TeleportCylinderPreview"), TEXT("MI_TeleportCylinderPreview"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__13, TEXT("SM_FatCylinder"), TEXT("SM_FatCylinder"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__12, TEXT("M_ArcEndpoint"), TEXT("M_ArcEndpoint"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__13, TEXT("BeaconDirection"), TEXT("BeaconDirection"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void AHMDLocomotionPawn_C__pf2307895703::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void AHMDLocomotionPawn_C__pf2307895703::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
struct FRegisterHelper__AHMDLocomotionPawn_C__pf2307895703
{
	FRegisterHelper__AHMDLocomotionPawn_C__pf2307895703()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/VirtualRealityBP/Blueprints/HMDLocomotionPawn"), &AHMDLocomotionPawn_C__pf2307895703::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AHMDLocomotionPawn_C__pf2307895703 Instance;
};
FRegisterHelper__AHMDLocomotionPawn_C__pf2307895703 FRegisterHelper__AHMDLocomotionPawn_C__pf2307895703::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
