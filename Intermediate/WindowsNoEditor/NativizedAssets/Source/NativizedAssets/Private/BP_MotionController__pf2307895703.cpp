#include "NativizedAssets.h"
#include "BP_MotionController__pf2307895703.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Components/SplineMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
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
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "AnimBP_LeftHand__pf4240717260.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Components/SplineComponent.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "SteamVRChaperoneComponent.h"
#include "BP_MotionController__pf2307895703.h"
#include "choppable__pf2403237688.h"
#include "ProceduralMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
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
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Curve.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "PickupActorInterface__pf2307895703.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Kismet/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
ABP_MotionController_C__pf2307895703::ABP_MotionController_C__pf2307895703(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABP_MotionController_C__pf2307895703::StaticClass() == GetClass()))
	{
		ABP_MotionController_C__pf2307895703::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Scene__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	bpv__MotionController__pf = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController"));
	bpv__HandMesh__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HandMesh"));
	bpv__ArcDirection__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("ArcDirection"));
	bpv__ArcSpline__pf = CreateDefaultSubobject<USplineComponent>(TEXT("ArcSpline"));
	bpv__GrabSphere__pf = CreateDefaultSubobject<USphereComponent>(TEXT("GrabSphere"));
	bpv__TextRender__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRender"));
	bpv__axeGrabDirection__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("axeGrabDirection"));
	bpv__ArcEndPoint__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArcEndPoint"));
	bpv__TeleportCylinder__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TeleportCylinder"));
	bpv__Ring__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ring"));
	bpv__Arrow__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Arrow"));
	bpv__RoomScaleMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RoomScaleMesh"));
	RootComponent = bpv__Scene__pf;
	bpv__SteamVRChaperone__pf = CreateDefaultSubobject<USteamVRChaperoneComponent>(TEXT("SteamVRChaperone"));
	bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MotionController__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MotionController__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__MotionController__pf->Hand = EControllerHand::Right;
	bpv__MotionController__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	if(!bpv__MotionController__pf->IsTemplate())
	{
		bpv__MotionController__pf->BodyInstance.FixupData(bpv__MotionController__pf);
	}
	bpv__HandMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__HandMesh__pf->AttachToComponent(bpv__MotionController__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__HandMesh__pf->AnimClass = UAnimBP_LeftHand_C__pf4240717260::StaticClass();
	bpv__HandMesh__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf2307895703::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__HandMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__HandMesh__pf->OverrideMaterials.Reserve(1);
	bpv__HandMesh__pf->OverrideMaterials.Add(nullptr);
	bpv__HandMesh__pf->CastShadow = false;
	bpv__HandMesh__pf->RelativeLocation = FVector(-12.785664, -0.028015, -1.789026);
	bpv__HandMesh__pf->RelativeRotation = FRotator(0.000000, 0.000000, 90.000000);
	bpv__HandMesh__pf->RelativeScale3D = FVector(0.800000, -0.800000, 0.800000);
	if(!bpv__HandMesh__pf->IsTemplate())
	{
		bpv__HandMesh__pf->BodyInstance.FixupData(bpv__HandMesh__pf);
	}
	bpv__ArcDirection__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ArcDirection__pf->AttachToComponent(bpv__HandMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__ArcDirection__pf->ArrowSize = 0.200000f;
	bpv__ArcDirection__pf->RelativeLocation = FVector(14.175764, 0.859525, -4.318897);
	if(!bpv__ArcDirection__pf->IsTemplate())
	{
		bpv__ArcDirection__pf->BodyInstance.FixupData(bpv__ArcDirection__pf);
	}
	bpv__ArcSpline__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ArcSpline__pf->AttachToComponent(bpv__HandMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__ArcSpline__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__ArcSpline__pf->RelativeLocation = FVector(12.532683, -1.756977, 2.553327);
	if(!bpv__ArcSpline__pf->IsTemplate())
	{
		bpv__ArcSpline__pf->BodyInstance.FixupData(bpv__ArcSpline__pf);
	}
	bpv__GrabSphere__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__GrabSphere__pf->AttachToComponent(bpv__HandMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__0 = (*(AccessPrivateProperty<float >((bpv__GrabSphere__pf), USphereComponent::__PPO__SphereRadius() )));
	__Local__0 = 10.000000f;
	bpv__GrabSphere__pf->RelativeLocation = FVector(14.286342, 0.224237, 1.484932);
	if(!bpv__GrabSphere__pf->IsTemplate())
	{
		bpv__GrabSphere__pf->BodyInstance.FixupData(bpv__GrabSphere__pf);
	}
	bpv__TextRender__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TextRender__pf->AttachToComponent(bpv__HandMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TextRender__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("asdasdasd"), /* Literal Text */
	TEXT("[15C7086B46C5B255DF09A5859564266A]"), /* Namespace */
	TEXT("1264AEB04CEE9FA951E664B4454F4508") /* Key */
	);
	bpv__TextRender__pf->XScale = 0.500000f;
	bpv__TextRender__pf->YScale = 0.500000f;
	bpv__TextRender__pf->bHiddenInGame = true;
	bpv__TextRender__pf->RelativeLocation = FVector(15.982080, 2.236283, 0.035019);
	bpv__TextRender__pf->RelativeRotation = FRotator(180.000000, 0.000000, 89.999985);
	bpv__TextRender__pf->RelativeScale3D = FVector(1.250000, -1.250000, 1.250000);
	if(!bpv__TextRender__pf->IsTemplate())
	{
		bpv__TextRender__pf->BodyInstance.FixupData(bpv__TextRender__pf);
	}
	bpv__axeGrabDirection__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__axeGrabDirection__pf->AttachToComponent(bpv__MotionController__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__axeGrabDirection__pf->ArrowSize = 0.500000f;
	bpv__axeGrabDirection__pf->RelativeLocation = FVector(-6.000000, -1.000000, -1.000000);
	bpv__axeGrabDirection__pf->RelativeRotation = FRotator(-60.000061, 0.000000, 0.000000);
	if(!bpv__axeGrabDirection__pf->IsTemplate())
	{
		bpv__axeGrabDirection__pf->BodyInstance.FixupData(bpv__axeGrabDirection__pf);
	}
	bpv__ArcEndPoint__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ArcEndPoint__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__ArcEndPoint__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__ArcEndPoint__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf2307895703::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__ArcEndPoint__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__ArcEndPoint__pf->OverrideMaterials.Reserve(1);
	bpv__ArcEndPoint__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf2307895703::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__ArcEndPoint__pf->bGenerateOverlapEvents = false;
	bpv__ArcEndPoint__pf->bAbsoluteLocation = true;
	bpv__ArcEndPoint__pf->bAbsoluteRotation = true;
	bpv__ArcEndPoint__pf->bAbsoluteScale = true;
	bpv__ArcEndPoint__pf->bVisible = false;
	bpv__ArcEndPoint__pf->RelativeScale3D = FVector(0.150000, 0.150000, 0.150000);
	if(!bpv__ArcEndPoint__pf->IsTemplate())
	{
		bpv__ArcEndPoint__pf->BodyInstance.FixupData(bpv__ArcEndPoint__pf);
	}
	bpv__TeleportCylinder__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TeleportCylinder__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TeleportCylinder__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__TeleportCylinder__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf2307895703::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__TeleportCylinder__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__TeleportCylinder__pf->OverrideMaterials.Reserve(1);
	bpv__TeleportCylinder__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf2307895703::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__TeleportCylinder__pf->bAbsoluteLocation = true;
	bpv__TeleportCylinder__pf->bAbsoluteRotation = true;
	bpv__TeleportCylinder__pf->bAbsoluteScale = true;
	bpv__TeleportCylinder__pf->RelativeScale3D = FVector(0.750000, 0.750000, 1.000000);
	static TWeakObjectPtr<UProperty> __Local__2{};
	const UProperty* __Local__1 = __Local__2.Get();
	if (nullptr == __Local__1)
	{
		__Local__1 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__1);
		__Local__2 = __Local__1;
	}
	(((UBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__TeleportCylinder__pf), false, 0));
	if(!bpv__TeleportCylinder__pf->IsTemplate())
	{
		bpv__TeleportCylinder__pf->BodyInstance.FixupData(bpv__TeleportCylinder__pf);
	}
	bpv__Ring__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Ring__pf->AttachToComponent(bpv__TeleportCylinder__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Ring__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf2307895703::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__Ring__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Ring__pf->OverrideMaterials.Reserve(1);
	bpv__Ring__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf2307895703::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__Ring__pf->RelativeScale3D = FVector(0.500000, 0.500000, 0.150000);
	if(!bpv__Ring__pf->IsTemplate())
	{
		bpv__Ring__pf->BodyInstance.FixupData(bpv__Ring__pf);
	}
	bpv__Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Arrow__pf->AttachToComponent(bpv__TeleportCylinder__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Arrow__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__Arrow__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf2307895703::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__Arrow__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Arrow__pf->OverrideMaterials.Reserve(1);
	bpv__Arrow__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf2307895703::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__Arrow__pf->bVisible = false;
	bpv__Arrow__pf->bHiddenInGame = true;
	if(!bpv__Arrow__pf->IsTemplate())
	{
		bpv__Arrow__pf->BodyInstance.FixupData(bpv__Arrow__pf);
	}
	bpv__RoomScaleMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__RoomScaleMesh__pf->AttachToComponent(bpv__Arrow__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__RoomScaleMesh__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__RoomScaleMesh__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf2307895703::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__RoomScaleMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__RoomScaleMesh__pf->OverrideMaterials.Reserve(1);
	bpv__RoomScaleMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf2307895703::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed));
	bpv__RoomScaleMesh__pf->bGenerateOverlapEvents = false;
	bpv__RoomScaleMesh__pf->bAbsoluteRotation = true;
	bpv__RoomScaleMesh__pf->bAbsoluteScale = true;
	if(!bpv__RoomScaleMesh__pf->IsTemplate())
	{
		bpv__RoomScaleMesh__pf->BodyInstance.FixupData(bpv__RoomScaleMesh__pf);
	}
	bpv__SteamVRChaperone__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Hand__pf = EControllerHand::Left;
	bpv__AttachedActor__pf = nullptr;
	bpv__IsTeleporterActive__pf = false;
	bpv__SplineMeshes__pf = TArray<USplineMeshComponent*> ();
	bpv__bLastFrameValidDestination__pf = false;
	bpv__IsRoomScale__pf = false;
	bpv__TeleportDestination__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__IsValidTeleportDestination__pf = false;
	bpv__GripState__pf = E__Enum_Grip__pf::NewEnumerator2;
	bpv__bWantsToGrip__pf = false;
	bpv__TeleportRotation__pf = FRotator(0.000000, 0.000000, 0.000000);
	bpv__TeleportLaunchVelocity__pf = 900.000000f;
	bpv__InitialControllerRotation__pf = FRotator(0.000000, 0.000000, 0.000000);
	bpv__AttachedComponent__pf = nullptr;
	PrimaryActorTick.bCanEverTick = true;
}
void ABP_MotionController_C__pf2307895703::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Scene__pf)
	{
		bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__MotionController__pf)
	{
		bpv__MotionController__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__HandMesh__pf)
	{
		bpv__HandMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ArcDirection__pf)
	{
		bpv__ArcDirection__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ArcSpline__pf)
	{
		bpv__ArcSpline__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__GrabSphere__pf)
	{
		bpv__GrabSphere__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TextRender__pf)
	{
		bpv__TextRender__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__axeGrabDirection__pf)
	{
		bpv__axeGrabDirection__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ArcEndPoint__pf)
	{
		bpv__ArcEndPoint__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TeleportCylinder__pf)
	{
		bpv__TeleportCylinder__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Ring__pf)
	{
		bpv__Ring__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Arrow__pf)
	{
		bpv__Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__RoomScaleMesh__pf)
	{
		bpv__RoomScaleMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SteamVRChaperone__pf)
	{
		bpv__SteamVRChaperone__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ABP_MotionController_C__pf2307895703::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	extern UClass* Z_Construct_UClass_UAnimBP_LeftHand_C__pf4240717260();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UAnimBP_LeftHand_C__pf4240717260());
	extern UClass* Z_Construct_UClass_Achoppable_C__pf2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_Achoppable_C__pf2403237688());
	extern UClass* Z_Construct_UClass_UPickupActorInterface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPickupActorInterface_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__3 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-0"));
	InDynamicClass->ComponentTemplates.Add(__Local__3);
	auto __Local__4 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-1"));
	InDynamicClass->ComponentTemplates.Add(__Local__4);
	auto __Local__5 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__5);
	__Local__3->SplineParams.StartScale = FVector2D(4.000000, 4.000000);
	__Local__3->SplineParams.EndScale = FVector2D(4.000000, 4.000000);
	__Local__3->SplineBoundaryMax = 1.000000f;
	__Local__3->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf2307895703::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__3->OverrideMaterials = TArray<UMaterialInterface*> ();
	__Local__3->OverrideMaterials.Reserve(1);
	__Local__3->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf2307895703::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed));
	__Local__3->Mobility = EComponentMobility::Type::Movable;
	__Local__4->SplineParams.StartScale = FVector2D(4.000000, 4.000000);
	__Local__4->SplineParams.EndScale = FVector2D(4.000000, 4.000000);
	__Local__4->SplineBoundaryMax = 1.000000f;
	__Local__4->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf2307895703::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__4->OverrideMaterials = TArray<UMaterialInterface*> ();
	__Local__4->OverrideMaterials.Reserve(1);
	__Local__4->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf2307895703::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed));
	__Local__4->Mobility = EComponentMobility::Type::Movable;
	__Local__5->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__5->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__5->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__6 = __Local__5->ComponentDelegateBindings[0];
	__Local__6.ComponentPropertyName = FName(TEXT("ControllerMesh"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnComponentHit"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature"));
	auto& __Local__7 = __Local__5->ComponentDelegateBindings[1];
	__Local__7.ComponentPropertyName = FName(TEXT("GrabSphere"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
}
void ABP_MotionController_C__pf2307895703::bpf__ExecuteUbergraph_BP_MotionController__pf_0(int32 bpp__EntryPoint__pf)
{
	FRotator bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Add_VectorVector_ReturnValue2__pf(EForceInit::ForceInit);
	FTransform bpv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	Achoppable_C__pf2403237688* bpv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 10);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__HandMesh__pf))
	{
		bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__HandMesh__pf->USceneComponent::K2_GetComponentRotation();
	}
	if(IsValid(bpv__HandMesh__pf))
	{
		bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__HandMesh__pf->USceneComponent::K2_GetComponentLocation();
	}
	bpv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf);
	bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__CallFunc_GetForwardVector_ReturnValue__pf, 1000.000000);
	bpv__CallFunc_Add_VectorVector_ReturnValue2__pf = UKismetMathLibrary::Add_VectorVector(bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
	UKismetSystemLibrary::DrawDebugLine(this, bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpv__CallFunc_Add_VectorVector_ReturnValue2__pf, FLinearColor(1.000000,0.000000,0.000000,1.000000), 0.000000, 1.000000);
	if(IsValid(bpv__HandMesh__pf))
	{
		bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__HandMesh__pf->USceneComponent::K2_GetComponentRotation();
	}
	if(IsValid(bpv__HandMesh__pf))
	{
		bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__HandMesh__pf->USceneComponent::K2_GetComponentLocation();
	}
	bpv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf);
	bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__CallFunc_GetForwardVector_ReturnValue__pf, 1000.000000);
	bpv__CallFunc_Add_VectorVector_ReturnValue2__pf = UKismetMathLibrary::Add_VectorVector(bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
	bpv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpv__CallFunc_Add_VectorVector_ReturnValue2__pf, bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
	bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, Achoppable_C__pf2403237688::StaticClass(), bpv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, nullptr);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__HandMesh__pf))
	{
		bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__HandMesh__pf->USceneComponent::K2_GetComponentRotation();
	}
	if(IsValid(bpv__HandMesh__pf))
	{
		bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__HandMesh__pf->USceneComponent::K2_GetComponentLocation();
	}
	bpv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf);
	bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__CallFunc_GetForwardVector_ReturnValue__pf, 1000.000000);
	bpv__CallFunc_Add_VectorVector_ReturnValue2__pf = UKismetMathLibrary::Add_VectorVector(bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
	bpv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpv__CallFunc_Add_VectorVector_ReturnValue2__pf, bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
	bpv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<Achoppable_C__pf2403237688>(UGameplayStatics::FinishSpawningActor(bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__CallFunc_FinishSpawningActor_ReturnValue__pf))
	{
		bpv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__mesh__pf = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf2307895703::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	}
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__CallFunc_FinishSpawningActor_ReturnValue__pf))
	{
		bpv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpf__reinitChoppableObjectEvent__pf();
	}
	return; //KCST_EndOfThread
}
void ABP_MotionController_C__pf2307895703::bpf__ExecuteUbergraph_BP_MotionController__pf_1(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpv__CallFunc_GetPlayerController_ReturnValue__pf{};
	bool bpv__CallFunc_Not_PreBool_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 6:
			{
				bpv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					EControllerHand  __Local__8 = EControllerHand::Left;
					bpv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::PlayHapticEffect(CastChecked<UHapticFeedbackEffect_Base>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf2307895703::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed), ((IsValid(bpv__MotionController__pf)) ? (bpv__MotionController__pf->Hand) : (__Local__8)), b0l__K2Node_CustomEvent_Intensity__pf, false);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				StateStack.Push(6);
			}
		case 8:
			{
				b0l__Temp_byte_Variable2__pf = EDynamicForceFeedbackAction::Start;
			}
		case 9:
			{
				b0l__Temp_bool_Variable__pf = false;
				b0l__Temp_bool_Variable2__pf = false;
				b0l__Temp_bool_Variable3__pf = false;
				b0l__Temp_bool_Variable4__pf = false;
				b0l__Temp_bool_Variable5__pf = false;
				b0l__Temp_bool_Variable6__pf = false;
				b0l__Temp_bool_Variable7__pf = false;
				b0l__Temp_bool_Variable8__pf = false;
				b0l__Temp_bool_Variable9__pf = false;
				b0l__Temp_bool_Variable10__pf = false;
				b0l__Temp_bool_Variable11__pf = true;
				bpv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__Temp_bool_Variable12__pf = false;
				b0l__Temp_bool_Variable13__pf = false;
				b0l__Temp_byte_Variable__pf = bpv__Hand__pf;
				bpv__CallFunc_Not_PreBool_ReturnValue2__pf = UKismetMathLibrary::Not_PreBool(TSwitchValue<EControllerHand , bool >(b0l__Temp_byte_Variable__pf, b0l__K2Node_Select_Default__pf, 13, TSwitchPair<EControllerHand , bool >(EControllerHand::Left, b0l__Temp_bool_Variable11__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Right, b0l__Temp_bool_Variable10__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Pad, b0l__Temp_bool_Variable9__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::ExternalCamera, b0l__Temp_bool_Variable8__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_1, b0l__Temp_bool_Variable7__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_2, b0l__Temp_bool_Variable6__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_3, b0l__Temp_bool_Variable5__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_4, b0l__Temp_bool_Variable4__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_5, b0l__Temp_bool_Variable3__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_6, b0l__Temp_bool_Variable2__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_7, b0l__Temp_bool_Variable__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_8, b0l__Temp_bool_Variable12__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_9, b0l__Temp_bool_Variable13__pf)));
				if(IsValid(bpv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::PlayDynamicForceFeedback(b0l__K2Node_CustomEvent_Intensity__pf, 0.040000, TSwitchValue<EControllerHand , bool >(b0l__Temp_byte_Variable__pf, b0l__K2Node_Select_Default__pf, 13, TSwitchPair<EControllerHand , bool >(EControllerHand::Left, b0l__Temp_bool_Variable11__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Right, b0l__Temp_bool_Variable10__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Pad, b0l__Temp_bool_Variable9__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::ExternalCamera, b0l__Temp_bool_Variable8__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_1, b0l__Temp_bool_Variable7__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_2, b0l__Temp_bool_Variable6__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_3, b0l__Temp_bool_Variable5__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_4, b0l__Temp_bool_Variable4__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_5, b0l__Temp_bool_Variable3__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_6, b0l__Temp_bool_Variable2__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_7, b0l__Temp_bool_Variable__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_8, b0l__Temp_bool_Variable12__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_9, b0l__Temp_bool_Variable13__pf)), TSwitchValue<EControllerHand , bool >(b0l__Temp_byte_Variable__pf, b0l__K2Node_Select_Default__pf, 13, TSwitchPair<EControllerHand , bool >(EControllerHand::Left, b0l__Temp_bool_Variable11__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Right, b0l__Temp_bool_Variable10__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Pad, b0l__Temp_bool_Variable9__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::ExternalCamera, b0l__Temp_bool_Variable8__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_1, b0l__Temp_bool_Variable7__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_2, b0l__Temp_bool_Variable6__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_3, b0l__Temp_bool_Variable5__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_4, b0l__Temp_bool_Variable4__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_5, b0l__Temp_bool_Variable3__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_6, b0l__Temp_bool_Variable2__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_7, b0l__Temp_bool_Variable__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_8, b0l__Temp_bool_Variable12__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_9, b0l__Temp_bool_Variable13__pf)), bpv__CallFunc_Not_PreBool_ReturnValue2__pf, bpv__CallFunc_Not_PreBool_ReturnValue2__pf, b0l__Temp_byte_Variable2__pf, FLatentActionInfo(-1, 935972259, TEXT("ExecuteUbergraph_BP_MotionController"), this));
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 56:
			{
				CurrentState = 7;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void ABP_MotionController_C__pf2307895703::bpf__ExecuteUbergraph_BP_MotionController__pf_2(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_VSize_ReturnValue__pf{};
	float bpv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 16);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf);
	bpv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpv__CallFunc_VSize_ReturnValue__pf, 0.000000, 1500.000000, 0.000000, 0.800000);
	bpf__RumbleController__pf(bpv__CallFunc_MapRangeClamped_ReturnValue__pf);
	return; //KCST_EndOfThread
}
void ABP_MotionController_C__pf2307895703::bpf__ExecuteUbergraph_BP_MotionController__pf_3(int32 bpp__EntryPoint__pf)
{
	AActor* bpv__CallFunc_GetOwner_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 12);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__AttachedComponent__pf))
	{
		bpv__CallFunc_GetOwner_ReturnValue__pf = bpv__AttachedComponent__pf->UActorComponent::GetOwner();
	}
	b0l__K2Node_DynamicCast_AsChoppable__pf = Cast<Achoppable_C__pf2403237688>(bpv__CallFunc_GetOwner_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsChoppable__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(IsValid(b0l__K2Node_DynamicCast_AsChoppable__pf))
	{
		b0l__K2Node_DynamicCast_AsChoppable__pf->bpf__freezeChoppable__pf();
	}
	return; //KCST_EndOfThread
}
void ABP_MotionController_C__pf2307895703::bpf__ExecuteUbergraph_BP_MotionController__pf_4(int32 bpp__EntryPoint__pf)
{
	FVector bpv__CallFunc_K2_GetComponentScale_ReturnValue__pf(EForceInit::ForceInit);
	float bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 15:
			{
				if(IsValid(bpv__HandMesh__pf))
				{
					bpv__CallFunc_K2_GetComponentScale_ReturnValue__pf = bpv__HandMesh__pf->USceneComponent::K2_GetComponentScale();
				}
				UKismetMathLibrary::BreakVector(bpv__CallFunc_K2_GetComponentScale_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
				bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_BreakVector_Z__pf, -1.000000);
				bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(b0l__CallFunc_BreakVector_X__pf, b0l__CallFunc_BreakVector_Y__pf, bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				if(IsValid(bpv__HandMesh__pf))
				{
					bpv__HandMesh__pf->USceneComponent::SetWorldScale3D(bpv__CallFunc_MakeVector_ReturnValue__pf);
				}
				CurrentState = -1;
				break;
			}
		case 25:
			{
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Left)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					CurrentState = 15;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Right)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Pad)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::ExternalCamera)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_1)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_2)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_3)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_4)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_5)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_6)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_7)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_8)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_9)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 26:
			{
				CurrentState = 27;
				break;
			}
		case 27:
			{
				bpf__SetupRoomScaleOutline__pf();
			}
		case 28:
			{
				if(IsValid(bpv__TeleportCylinder__pf))
				{
					bpv__TeleportCylinder__pf->SetVisibility(false, true);
				}
			}
		case 29:
			{
				if(IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__RoomScaleMesh__pf->SetVisibility(false, false);
				}
				CurrentState = 25;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void ABP_MotionController_C__pf2307895703::bpf__ExecuteUbergraph_BP_MotionController__pf_5(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf{};
	bool bpv__CallFunc_Not_PreBool_ReturnValue__pf{};
	FVector bpv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpv__CallFunc_NotEqual_ObjectObject_ReturnValue2__pf{};
	bool bpv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf{};
	FVector bpv__CallFunc_SelectVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpv__CallFunc_Not_PreBool_ReturnValue3__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue2__pf{};
	bool bpv__CallFunc_BooleanOR_ReturnValue__pf{};
	UAnimInstance* bpv__CallFunc_GetAnimInstance_ReturnValue__pf{};
	bool bpv__CallFunc_BooleanOR_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 17:
			{
				bpv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::NotEqual_ObjectObject(bpv__AttachedActor__pf, nullptr);
				bpv__CallFunc_BooleanOR_ReturnValue2__pf = UKismetMathLibrary::BooleanOR(bpv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf, bpv__bWantsToGrip__pf);
				if (!bpv__CallFunc_BooleanOR_ReturnValue2__pf)
				{
					CurrentState = 19;
					break;
				}
			}
		case 18:
			{
				bpv__GripState__pf = E__Enum_Grip__pf::NewEnumerator2;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				bpf__GetActorNearHand__pf(/*out*/ b0l__CallFunc_GetActorNearHand_NearestMesh__pf);
			}
		case 20:
			{
				bpv__CallFunc_NotEqual_ObjectObject_ReturnValue2__pf = UKismetMathLibrary::NotEqual_ObjectObject(b0l__CallFunc_GetActorNearHand_NearestMesh__pf, nullptr);
				if (!bpv__CallFunc_NotEqual_ObjectObject_ReturnValue2__pf)
				{
					CurrentState = 22;
					break;
				}
			}
		case 21:
			{
				bpv__GripState__pf = E__Enum_Grip__pf::NewEnumerator1;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				if (!bpv__bWantsToGrip__pf)
				{
					CurrentState = 24;
					break;
				}
			}
		case 23:
			{
				bpv__GripState__pf = E__Enum_Grip__pf::NewEnumerator2;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				bpv__GripState__pf = E__Enum_Grip__pf::NewEnumerator0;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				if(IsValid(bpv__HandMesh__pf))
				{
					bpv__HandMesh__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 31:
			{
				if(IsValid(bpv__HandMesh__pf))
				{
					bpv__HandMesh__pf->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__Enum_Grip__pf>(TEnumAsByte<E__Enum_Grip__pf>(bpv__GripState__pf)), EnumToByte<E__Enum_Grip__pf>(TEnumAsByte<E__Enum_Grip__pf>(E__Enum_Grip__pf::NewEnumerator0)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = 30;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__Enum_Grip__pf>(TEnumAsByte<E__Enum_Grip__pf>(bpv__GripState__pf)), EnumToByte<E__Enum_Grip__pf>(TEnumAsByte<E__Enum_Grip__pf>(E__Enum_Grip__pf::NewEnumerator1)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = 30;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__Enum_Grip__pf>(TEnumAsByte<E__Enum_Grip__pf>(bpv__GripState__pf)), EnumToByte<E__Enum_Grip__pf>(TEnumAsByte<E__Enum_Grip__pf>(E__Enum_Grip__pf::NewEnumerator2)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = 31;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				StateStack.Push(34);
				CurrentState = 17;
				break;
			}
		case 34:
			{
				if(IsValid(bpv__HandMesh__pf))
				{
					bpv__CallFunc_GetAnimInstance_ReturnValue__pf = bpv__HandMesh__pf->USkeletalMeshComponent::GetAnimInstance();
				}
				b0l__K2Node_DynamicCast_AsAnim_BP_Left_Hand__pf = Cast<UAnimBP_LeftHand_C__pf4240717260>(bpv__CallFunc_GetAnimInstance_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsAnim_BP_Left_Hand__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 35:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsAnim_BP_Left_Hand__pf))
				{
					b0l__K2Node_DynamicCast_AsAnim_BP_Left_Hand__pf->bpv__GripEnum__pf = bpv__GripState__pf;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 36:
			{
				bpv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__bLastFrameValidDestination__pf);
				bpv__CallFunc_Not_PreBool_ReturnValue3__pf = UKismetMathLibrary::Not_PreBool(bpv__IsValidTeleportDestination__pf);
				bpv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__bLastFrameValidDestination__pf, bpv__CallFunc_Not_PreBool_ReturnValue3__pf);
				bpv__CallFunc_BooleanAND_ReturnValue2__pf = UKismetMathLibrary::BooleanAND(bpv__IsValidTeleportDestination__pf, bpv__CallFunc_Not_PreBool_ReturnValue__pf);
				bpv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpv__CallFunc_BooleanAND_ReturnValue2__pf, bpv__CallFunc_BooleanAND_ReturnValue__pf);
				if (!bpv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 37:
			{
				bpf__RumbleController__pf(0.300000);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 38:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpv__CallFunc_SelectVector_ReturnValue__pf = UKismetMathLibrary::SelectVector(b0l__CallFunc_BreakHitResult_ImpactPoint__pf, b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf, b0l__CallFunc_BreakHitResult_bBlockingHit__pf);
				if(IsValid(bpv__TeleportCylinder__pf))
				{
					bpv__TeleportCylinder__pf->USceneComponent::K2_SetWorldLocation(bpv__CallFunc_SelectVector_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, true);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 39:
			{
				if(IsValid(bpv__TeleportCylinder__pf))
				{
					bpv__TeleportCylinder__pf->SetVisibility(bpv__IsValidTeleportDestination__pf, true);
				}
			}
		case 40:
			{
				bpv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf, FVector(0.000000,0.000000,-200.000000));
				b0l__K2Node_MakeArray_Array__pf.SetNum(1, true);
				b0l__K2Node_MakeArray_Array__pf[0] = EObjectTypeQuery::ObjectTypeQuery1;
				bpv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingleForObjects(this, b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf, bpv__CallFunc_Add_VectorVector_ReturnValue__pf, b0l__K2Node_MakeArray_Array__pf, false, b0l__Temp_object_Variable__pf, EDrawDebugTrace::None, /*out*/ b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
				CurrentState = 38;
				break;
			}
		case 41:
			{
				CurrentState = 42;
				break;
			}
		case 42:
			{
				StateStack.Push(49);
				StateStack.Push(43);
				CurrentState = 33;
				break;
			}
		case 43:
			{
				bpf__ClearArc__pf();
			}
		case 44:
			{
				if (!bpv__IsTeleporterActive__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 45:
			{
				bpf__TraceTeleportDestination__pf(/*out*/ b0l__CallFunc_TraceTeleportDestination_Success__pf, /*out*/ b0l__CallFunc_TraceTeleportDestination_TracePoints__pf, /*out*/ b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf, /*out*/ b0l__CallFunc_TraceTeleportDestination_TraceLocation__pf);
			}
		case 46:
			{
				bpv__IsValidTeleportDestination__pf = b0l__CallFunc_TraceTeleportDestination_Success__pf;
			}
		case 47:
			{
				StateStack.Push(51);
				StateStack.Push(50);
				StateStack.Push(48);
				StateStack.Push(36);
				CurrentState = 39;
				break;
			}
		case 48:
			{
				bpv__bLastFrameValidDestination__pf = b0l__CallFunc_TraceTeleportDestination_Success__pf;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 49:
			{
				bpf__UpdateRoomScaleOutline__pf();
				CurrentState = 32;
				break;
			}
		case 50:
			{
				bpf__UpdateArcSpline__pf(b0l__CallFunc_TraceTeleportDestination_Success__pf, /*out*/ b0l__CallFunc_TraceTeleportDestination_TracePoints__pf);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 51:
			{
				bpf__UpdateArcEndpoint__pf(b0l__CallFunc_TraceTeleportDestination_TraceLocation__pf, b0l__CallFunc_TraceTeleportDestination_Success__pf);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void ABP_MotionController_C__pf2307895703::bpf__ExecuteUbergraph_BP_MotionController__pf_6(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_IsSimulatingPhysics_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 55);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf = Cast<UStaticMeshComponent>(b0l__K2Node_ComponentBoundEvent_OtherComp2__pf);
	b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	if(IsValid(b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf))
	{
		bpv__CallFunc_IsSimulatingPhysics_ReturnValue__pf = b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf->IsSimulatingPhysics(FName(TEXT("None")));
	}
	if (!bpv__CallFunc_IsSimulatingPhysics_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpf__RumbleController__pf(0.800000);
	return; //KCST_EndOfThread
}
void ABP_MotionController_C__pf2307895703::bpf__spawner__pf()
{
	bpf__ExecuteUbergraph_BP_MotionController__pf_0(10);
}
void ABP_MotionController_C__pf2307895703::bpf__freezeComponentInController__pf()
{
	bpf__ExecuteUbergraph_BP_MotionController__pf_3(12);
}
void ABP_MotionController_C__pf2307895703::bpf__BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const)
{
	typedef FHitResult  T__Local__10;
	T__Local__10& bpp__Hit__pf = *const_cast<T__Local__10 *>(&bpp__Hit__pf__const);
	b0l__K2Node_ComponentBoundEvent_HitComponent__pf = bpp__HitComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf = bpp__NormalImpulse__pf;
	b0l__K2Node_ComponentBoundEvent_Hit__pf = bpp__Hit__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_2(16);
}
void ABP_MotionController_C__pf2307895703::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_MotionController__pf_4(26);
}
void ABP_MotionController_C__pf2307895703::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_5(41);
}
void ABP_MotionController_C__pf2307895703::bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__11;
	T__Local__11& bpp__SweepResult__pf = *const_cast<T__Local__11 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor2__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp2__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_6(55);
}
void ABP_MotionController_C__pf2307895703::bpf__RumbleController__pf(float bpp__Intensity__pf)
{
	b0l__K2Node_CustomEvent_Intensity__pf = bpp__Intensity__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_1(56);
}
void ABP_MotionController_C__pf2307895703::bpf__UserConstructionScript__pf()
{
	if(IsValid(bpv__MotionController__pf))
	{
		bpv__MotionController__pf->Hand = bpv__Hand__pf;
	}
}
void ABP_MotionController_C__pf2307895703::bpf__GetActorNearHand__pf(/*out*/ AActor*& bpp__NearestMesh__pf)
{
	int32 bpv__Temp_int_Array_Index_Variable__pf{};
	int32 bpv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FVector bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	TArray<AActor*> bpv__CallFunc_GetOverlappingActors_OverlappingActors__pf{};
	AActor* bpv__CallFunc_Array_Get_Item__pf{};
	int32 bpv__CallFunc_Array_Length_ReturnValue__pf{};
	FVector bpv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpv__CallFunc_Less_IntInt_ReturnValue__pf{};
	FVector bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpv__CallFunc_VSize_ReturnValue__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	bool bpv__CallFunc_DoesImplementInterface_ReturnValue__pf{};
	float bpv__NearestOverlap__pf{};
	AActor* bpv__NearestOverlappingActor__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__NearestOverlap__pf = 10000.000000;
			}
		case 2:
			{
				bpv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				if(IsValid(bpv__GrabSphere__pf))
				{
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				bpv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__CallFunc_GetOverlappingActors_OverlappingActors__pf);
				bpv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpv__Temp_int_Loop_Counter_Variable__pf, bpv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					CurrentState = 11;
					break;
				}
			}
		case 5:
			{
				bpv__Temp_int_Array_Index_Variable__pf = bpv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				StateStack.Push(12);
			}
		case 7:
			{
				if(IsValid(bpv__GrabSphere__pf))
				{
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(bpv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpv__Temp_int_Array_Index_Variable__pf, /*out*/ bpv__CallFunc_Array_Get_Item__pf);
				bpv__CallFunc_DoesImplementInterface_ReturnValue__pf = UKismetSystemLibrary::DoesImplementInterface(bpv__CallFunc_Array_Get_Item__pf, UPickupActorInterface_C::StaticClass());
				if (!bpv__CallFunc_DoesImplementInterface_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				if(IsValid(bpv__GrabSphere__pf))
				{
					bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__GrabSphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(IsValid(bpv__GrabSphere__pf))
				{
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(bpv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpv__Temp_int_Array_Index_Variable__pf, /*out*/ bpv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpv__CallFunc_Array_Get_Item__pf))
				{
					bpv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpv__CallFunc_Array_Get_Item__pf->AActor::K2_GetActorLocation();
				}
				bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
				bpv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_VSize_ReturnValue__pf, bpv__NearestOverlap__pf);
				if (!bpv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				if(IsValid(bpv__GrabSphere__pf))
				{
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(bpv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpv__Temp_int_Array_Index_Variable__pf, /*out*/ bpv__CallFunc_Array_Get_Item__pf);
				bpv__NearestOverlappingActor__pf = bpv__CallFunc_Array_Get_Item__pf;
			}
		case 10:
			{
				if(IsValid(bpv__GrabSphere__pf))
				{
					bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__GrabSphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(IsValid(bpv__GrabSphere__pf))
				{
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(bpv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpv__Temp_int_Array_Index_Variable__pf, /*out*/ bpv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpv__CallFunc_Array_Get_Item__pf))
				{
					bpv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpv__CallFunc_Array_Get_Item__pf->AActor::K2_GetActorLocation();
				}
				bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
				bpv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpv__NearestOverlap__pf = bpv__CallFunc_VSize_ReturnValue__pf;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpp__NearestMesh__pf = bpv__NearestOverlappingActor__pf;
				CurrentState = -1;
				break;
			}
		case 12:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpv__Temp_int_Loop_Counter_Variable__pf = bpv__CallFunc_Add_IntInt_ReturnValue__pf;
				CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void ABP_MotionController_C__pf2307895703::bpf__ReleaseActor__pf()
{
	USceneComponent* bpv__CallFunc_K2_GetRootComponent_ReturnValue__pf{};
	TScriptInterface<IPickupActorInterface_C> bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf{};
	bool bpv__K2Node_DynamicCast_bSuccess__pf{};
	USceneComponent* bpv__CallFunc_GetAttachParent_ReturnValue__pf{};
	bool bpv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	bool bpv__CallFunc_IsValid_ReturnValue__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__bWantsToGrip__pf = false;
			}
		case 2:
			{
				bpv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__AttachedActor__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(IsValid(bpv__AttachedActor__pf))
				{
					bpv__CallFunc_K2_GetRootComponent_ReturnValue__pf = bpv__AttachedActor__pf->AActor::K2_GetRootComponent();
				}
				if(IsValid(bpv__CallFunc_K2_GetRootComponent_ReturnValue__pf))
				{
					bpv__CallFunc_GetAttachParent_ReturnValue__pf = bpv__CallFunc_K2_GetRootComponent_ReturnValue__pf->USceneComponent::GetAttachParent();
				}
				bpv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpv__CallFunc_GetAttachParent_ReturnValue__pf, bpv__MotionController__pf);
				if (!bpv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					CurrentState = 7;
					break;
				}
			}
		case 4:
			{
				if ( bpv__AttachedActor__pf && bpv__AttachedActor__pf->GetClass()->ImplementsInterface(UPickupActorInterface_C::StaticClass()) )
				{
					bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(bpv__AttachedActor__pf);
					void* IAddress = bpv__AttachedActor__pf->GetInterfaceAddress(UPickupActorInterface_C::StaticClass());
					bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetInterface(IAddress);
				}
				else
				{
					bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(nullptr);
				}
				bpv__K2Node_DynamicCast_bSuccess__pf = (bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf != nullptr);;
				if (!bpv__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = 6;
					break;
				}
			}
		case 5:
			{
				if(IsValid(bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf))
				{
					IPickupActorInterface_C::Execute_bpf__Drop__pf(bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.GetObject() );
				}
			}
		case 6:
			{
				bpf__RumbleController__pf(0.200000);
			}
		case 7:
			{
				bpv__AttachedActor__pf = nullptr;
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void ABP_MotionController_C__pf2307895703::bpf__GrabActor__pf()
{
	AActor* bpv__CallFunc_GetActorNearHand_NearestMesh__pf{};
	bool bpv__CallFunc_IsValid_ReturnValue__pf{};
	TScriptInterface<IPickupActorInterface_C> bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf{};
	bool bpv__K2Node_DynamicCast_bSuccess__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__bWantsToGrip__pf = true;
			}
		case 2:
			{
				bpf__GetActorNearHand__pf(/*out*/ bpv__CallFunc_GetActorNearHand_NearestMesh__pf);
			}
		case 3:
			{
				bpv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__CallFunc_GetActorNearHand_NearestMesh__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bpv__AttachedActor__pf = bpv__CallFunc_GetActorNearHand_NearestMesh__pf;
			}
		case 5:
			{
				if ( bpv__CallFunc_GetActorNearHand_NearestMesh__pf && bpv__CallFunc_GetActorNearHand_NearestMesh__pf->GetClass()->ImplementsInterface(UPickupActorInterface_C::StaticClass()) )
				{
					bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(bpv__CallFunc_GetActorNearHand_NearestMesh__pf);
					void* IAddress = bpv__CallFunc_GetActorNearHand_NearestMesh__pf->GetInterfaceAddress(UPickupActorInterface_C::StaticClass());
					bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetInterface(IAddress);
				}
				else
				{
					bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(nullptr);
				}
				bpv__K2Node_DynamicCast_bSuccess__pf = (bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf != nullptr);;
				if (!bpv__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf))
				{
					IPickupActorInterface_C::Execute_bpf__Pickup__pf(bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.GetObject() , bpv__MotionController__pf);
				}
			}
		case 7:
			{
				bpf__RumbleController__pf(0.700000);
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void ABP_MotionController_C__pf2307895703::bpf__ActivateTeleporter__pf()
{
	FRotator bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	bpv__IsTeleporterActive__pf = true;
	if(IsValid(bpv__TeleportCylinder__pf))
	{
		bpv__TeleportCylinder__pf->SetVisibility(true, true);
	}
	if(IsValid(bpv__RoomScaleMesh__pf))
	{
		bpv__RoomScaleMesh__pf->SetVisibility(bpv__IsRoomScale__pf, false);
	}
	if(IsValid(bpv__MotionController__pf))
	{
		bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__MotionController__pf->USceneComponent::K2_GetComponentRotation();
	}
	bpv__InitialControllerRotation__pf = bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf;
}
void ABP_MotionController_C__pf2307895703::bpf__DisableTeleporter__pf()
{
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				if (!bpv__IsTeleporterActive__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpv__IsTeleporterActive__pf = false;
			}
		case 3:
			{
				if(IsValid(bpv__TeleportCylinder__pf))
				{
					bpv__TeleportCylinder__pf->SetVisibility(false, true);
				}
			}
		case 4:
			{
				if(IsValid(bpv__ArcEndPoint__pf))
				{
					bpv__ArcEndPoint__pf->SetVisibility(false, false);
				}
			}
		case 5:
			{
				if(IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__RoomScaleMesh__pf->SetVisibility(false, false);
				}
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void ABP_MotionController_C__pf2307895703::bpf__TraceTeleportDestination__pf(/*out*/ bool& bpp__Success__pf, /*out*/ TArray<FVector>& bpp__TracePoints__pf, /*out*/ FVector& bpp__NavMeshLocation__pf, /*out*/ FVector& bpp__TraceLocation__pf)
{
	TArray<AActor*> bpv__Temp_object_Variable__pf{};
	FVector bpv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	UNavigationSystem* bpv__CallFunc_GetNavigationSystem_ReturnValue__pf{};
	TArray<TEnumAsByte<EObjectTypeQuery> > bpv__K2Node_MakeArray_Array__pf{};
	FHitResult bpv__CallFunc_PredictProjectilePath_OutHit__pf{};
	TArray<FVector> bpv__CallFunc_PredictProjectilePath_OutPathPositions__pf{};
	FVector bpv__CallFunc_PredictProjectilePath_OutLastTraceDestination__pf(EForceInit::ForceInit);
	bool bpv__CallFunc_PredictProjectilePath_ReturnValue__pf{};
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
	FVector bpv__CallFunc_ProjectPointToNavigation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpv__CallFunc_NotEqual_VectorVector_ReturnValue__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue__pf{};
	float bpv__ProjectNavExtends__pf{};
	TArray<FVector> bpv__UsedTracePoints__pf{};
	int32 bpv__NrOfSegments__pf{};
	bool bpv__HitSurface__pf{};
	FVector bpv__CurrentTraceStart__pf(EForceInit::ForceInit);
	bpv__ProjectNavExtends__pf = 500.000000;
	bpv__NrOfSegments__pf = 15;
	if(IsValid(bpv__ArcDirection__pf))
	{
		bpv__CallFunc_GetForwardVector_ReturnValue__pf = bpv__ArcDirection__pf->USceneComponent::GetForwardVector();
	}
	bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__CallFunc_GetForwardVector_ReturnValue__pf, bpv__TeleportLaunchVelocity__pf);
	if(IsValid(bpv__ArcDirection__pf))
	{
		bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__ArcDirection__pf->USceneComponent::K2_GetComponentLocation();
	}
	bpv__K2Node_MakeArray_Array__pf.SetNum(1, true);
	bpv__K2Node_MakeArray_Array__pf[0] = EObjectTypeQuery::ObjectTypeQuery1;
	bpv__CallFunc_PredictProjectilePath_ReturnValue__pf = UGameplayStatics::PredictProjectilePath(this, /*out*/ bpv__CallFunc_PredictProjectilePath_OutHit__pf, /*out*/ bpv__CallFunc_PredictProjectilePath_OutPathPositions__pf, /*out*/ bpv__CallFunc_PredictProjectilePath_OutLastTraceDestination__pf, bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, true, 0.000000, bpv__K2Node_MakeArray_Array__pf, false, bpv__Temp_object_Variable__pf, EDrawDebugTrace::None, 0.000000, 30.000000, 2.000000, 0.000000);
	bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpv__ProjectNavExtends__pf, bpv__ProjectNavExtends__pf, bpv__ProjectNavExtends__pf);
	bpv__CallFunc_GetNavigationSystem_ReturnValue__pf = UNavigationSystem::GetNavigationSystem(this);
	UGameplayStatics::BreakHitResult(bpv__CallFunc_PredictProjectilePath_OutHit__pf, /*out*/ bpv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpv__CallFunc_BreakHitResult_TraceEnd__pf);
	bpv__CallFunc_ProjectPointToNavigation_ReturnValue__pf = UNavigationSystem::ProjectPointToNavigation(this, bpv__CallFunc_BreakHitResult_Location__pf, nullptr, nullptr, bpv__CallFunc_MakeVector_ReturnValue__pf);
	bpv__CallFunc_NotEqual_VectorVector_ReturnValue__pf = UKismetMathLibrary::NotEqual_VectorVector(bpv__CallFunc_BreakHitResult_Location__pf, bpv__CallFunc_ProjectPointToNavigation_ReturnValue__pf, 0.000100);
	bpv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__CallFunc_NotEqual_VectorVector_ReturnValue__pf, bpv__CallFunc_PredictProjectilePath_ReturnValue__pf);
	bpp__Success__pf = bpv__CallFunc_BooleanAND_ReturnValue__pf;
	bpp__TracePoints__pf = bpv__CallFunc_PredictProjectilePath_OutPathPositions__pf;
	bpp__NavMeshLocation__pf = bpv__CallFunc_ProjectPointToNavigation_ReturnValue__pf;
	bpp__TraceLocation__pf = bpv__CallFunc_BreakHitResult_Location__pf;
}
void ABP_MotionController_C__pf2307895703::bpf__ClearArc__pf()
{
	int32 bpv__Temp_int_Variable__pf{};
	int32 bpv__CallFunc_Add_IntInt_ReturnValue__pf{};
	USplineMeshComponent* bpv__CallFunc_Array_Get_Item__pf{};
	int32 bpv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__Temp_int_Variable__pf = 0;
			}
		case 2:
			{
				bpv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__SplineMeshes__pf);
				bpv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpv__Temp_int_Variable__pf, bpv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				FCustomThunkTemplates::Array_Get(bpv__SplineMeshes__pf, bpv__Temp_int_Variable__pf, /*out*/ bpv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpv__CallFunc_Array_Get_Item__pf))
				{
					bpv__CallFunc_Array_Get_Item__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 4:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__Temp_int_Variable__pf, 1);
				bpv__Temp_int_Variable__pf = bpv__CallFunc_Add_IntInt_ReturnValue__pf;
				CurrentState = 2;
				break;
			}
		case 5:
			{
				FCustomThunkTemplates::Array_Clear(bpv__SplineMeshes__pf);
			}
		case 6:
			{
				if(IsValid(bpv__ArcSpline__pf))
				{
					bpv__ArcSpline__pf->USplineComponent::ClearSplinePoints(true);
				}
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void ABP_MotionController_C__pf2307895703::bpf__UpdateArcSpline__pf(bool bpp__FoundValidLocation__pf, /*out*/ TArray<FVector>& bpp__SplinePoints__pf)
{
	int32 bpv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpv__CallFunc_Array_LastIndex_ReturnValue__pf{};
	int32 bpv__Temp_int_Array_Index_Variable__pf{};
	FVector bpv__CallFunc_Array_Get_Item__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpv__CallFunc_Array_Add_ReturnValue__pf{};
	FVector bpv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpv__CallFunc_Array_Add_ReturnValue2__pf{};
	int32 bpv__Temp_int_Loop_Counter_Variable__pf{};
	bool bpv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FTransform bpv__CallFunc_MakeTransform_ReturnValue__pf{};
	int32 bpv__Temp_int_Variable__pf{};
	USplineMeshComponent* bpv__CallFunc_AddComponent_ReturnValue__pf{};
	FVector bpv__CallFunc_Array_Get_Item2__pf(EForceInit::ForceInit);
	int32 bpv__CallFunc_Array_Add_ReturnValue3__pf{};
	int32 bpv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	FVector bpv__CallFunc_GetTangentAtSplinePoint_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Array_Get_Item3__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GetTangentAtSplinePoint_ReturnValue2__pf(EForceInit::ForceInit);
	int32 bpv__CallFunc_Add_IntInt_ReturnValue3__pf{};
	int32 bpv__CallFunc_GetNumberOfSplinePoints_ReturnValue__pf{};
	int32 bpv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				if (!bpp__FoundValidLocation__pf)
				{
					CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				bpv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpp__SplinePoints__pf);
				bpv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpv__Temp_int_Loop_Counter_Variable__pf, bpv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					CurrentState = 11;
					break;
				}
			}
		case 5:
			{
				bpv__Temp_int_Array_Index_Variable__pf = bpv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				StateStack.Push(19);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpp__SplinePoints__pf, bpv__Temp_int_Array_Index_Variable__pf, /*out*/ bpv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpv__ArcSpline__pf))
				{
					bpv__ArcSpline__pf->USplineComponent::AddSplinePoint(bpv__CallFunc_Array_Get_Item__pf, ESplineCoordinateSpace::Local, true);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Clear(bpp__SplinePoints__pf);
			}
		case 9:
			{
				if(IsValid(bpv__ArcDirection__pf))
				{
					bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__ArcDirection__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpp__SplinePoints__pf, bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
			}
		case 10:
			{
				if(IsValid(bpv__ArcDirection__pf))
				{
					bpv__CallFunc_GetForwardVector_ReturnValue__pf = bpv__ArcDirection__pf->USceneComponent::GetForwardVector();
				}
				if(IsValid(bpv__ArcDirection__pf))
				{
					bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__ArcDirection__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__CallFunc_GetForwardVector_ReturnValue__pf, 20.000000);
				bpv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpv__CallFunc_Array_Add_ReturnValue2__pf = FCustomThunkTemplates::Array_Add(bpp__SplinePoints__pf, bpv__CallFunc_Add_VectorVector_ReturnValue__pf);
				CurrentState = 2;
				break;
			}
		case 11:
			{
				bpv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(bpp__SplinePoints__pf);
				if(IsValid(bpv__ArcSpline__pf))
				{
					bpv__ArcSpline__pf->USplineComponent::SetSplinePointType(bpv__CallFunc_Array_LastIndex_ReturnValue__pf, ESplinePointType::CurveClamped, true);
				}
			}
		case 12:
			{
				bpv__Temp_int_Variable__pf = 0;
			}
		case 13:
			{
				if(IsValid(bpv__ArcSpline__pf))
				{
					bpv__CallFunc_GetNumberOfSplinePoints_ReturnValue__pf = bpv__ArcSpline__pf->USplineComponent::GetNumberOfSplinePoints();
				}
				bpv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__CallFunc_GetNumberOfSplinePoints_ReturnValue__pf, 2);
				bpv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpv__Temp_int_Variable__pf, bpv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				if (!bpv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				StateStack.Push(18);
			}
		case 15:
			{
				bpv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<USplineMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSplineMeshComponent-1")), true, bpv__CallFunc_MakeTransform_ReturnValue__pf, this), ECastCheckedType::NullAllowed);
			}
		case 16:
			{
				bpv__CallFunc_Array_Add_ReturnValue3__pf = FCustomThunkTemplates::Array_Add(bpv__SplineMeshes__pf, bpv__CallFunc_AddComponent_ReturnValue__pf);
			}
		case 17:
			{
				FCustomThunkTemplates::Array_Get(bpp__SplinePoints__pf, bpv__Temp_int_Variable__pf, /*out*/ bpv__CallFunc_Array_Get_Item2__pf);
				bpv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(bpv__Temp_int_Variable__pf, 1);
				if(IsValid(bpv__ArcSpline__pf))
				{
					bpv__CallFunc_GetTangentAtSplinePoint_ReturnValue__pf = bpv__ArcSpline__pf->USplineComponent::GetTangentAtSplinePoint(bpv__Temp_int_Variable__pf, ESplineCoordinateSpace::Local);
				}
				FCustomThunkTemplates::Array_Get(bpp__SplinePoints__pf, bpv__CallFunc_Add_IntInt_ReturnValue2__pf, /*out*/ bpv__CallFunc_Array_Get_Item3__pf);
				if(IsValid(bpv__ArcSpline__pf))
				{
					bpv__CallFunc_GetTangentAtSplinePoint_ReturnValue2__pf = bpv__ArcSpline__pf->USplineComponent::GetTangentAtSplinePoint(bpv__CallFunc_Add_IntInt_ReturnValue2__pf, ESplineCoordinateSpace::Local);
				}
				if(IsValid(bpv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpv__CallFunc_AddComponent_ReturnValue__pf->USplineMeshComponent::SetStartAndEnd(bpv__CallFunc_Array_Get_Item2__pf, bpv__CallFunc_GetTangentAtSplinePoint_ReturnValue__pf, bpv__CallFunc_Array_Get_Item3__pf, bpv__CallFunc_GetTangentAtSplinePoint_ReturnValue2__pf, true);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue3__pf = UKismetMathLibrary::Add_IntInt(bpv__Temp_int_Variable__pf, 1);
				bpv__Temp_int_Variable__pf = bpv__CallFunc_Add_IntInt_ReturnValue3__pf;
				CurrentState = 13;
				break;
			}
		case 19:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpv__Temp_int_Loop_Counter_Variable__pf = bpv__CallFunc_Add_IntInt_ReturnValue__pf;
				CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void ABP_MotionController_C__pf2307895703::bpf__UpdateArcEndpoint__pf(FVector bpp__NewLocation__pf, bool bpp__ValidLocationFound__pf)
{
	FRotator bpv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GetOrientationAndPosition_DevicePosition__pf(EForceInit::ForceInit);
	float bpv__CallFunc_BreakRotator_Roll__pf{};
	float bpv__CallFunc_BreakRotator_Pitch__pf{};
	float bpv__CallFunc_BreakRotator_Yaw__pf{};
	FRotator bpv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf{};
	FRotator bpv__CallFunc_ComposeRotators_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpv__CallFunc_K2_SetWorldRotation_SweepHitResult2__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue__pf{};
	FHitResult bpv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf{};
	bpv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpp__ValidLocationFound__pf, bpv__IsTeleporterActive__pf);
	if(IsValid(bpv__ArcEndPoint__pf))
	{
		bpv__ArcEndPoint__pf->SetVisibility(bpv__CallFunc_BooleanAND_ReturnValue__pf, false);
	}
	if(IsValid(bpv__ArcEndPoint__pf))
	{
		bpv__ArcEndPoint__pf->USceneComponent::K2_SetWorldLocation(bpp__NewLocation__pf, false, /*out*/ bpv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, true);
	}
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(/*out*/ bpv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpv__CallFunc_GetOrientationAndPosition_DevicePosition__pf);
	UKismetMathLibrary::BreakRotator(bpv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpv__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpv__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_ComposeRotators_ReturnValue__pf = UKismetMathLibrary::ComposeRotators(bpv__TeleportRotation__pf, bpv__CallFunc_MakeRotator_ReturnValue__pf);
	if(IsValid(bpv__Arrow__pf))
	{
		bpv__Arrow__pf->USceneComponent::K2_SetWorldRotation(bpv__CallFunc_ComposeRotators_ReturnValue__pf, false, /*out*/ bpv__CallFunc_K2_SetWorldRotation_SweepHitResult2__pf, false);
	}
	if(IsValid(bpv__RoomScaleMesh__pf))
	{
		bpv__RoomScaleMesh__pf->USceneComponent::K2_SetWorldRotation(bpv__TeleportRotation__pf, false, /*out*/ bpv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
	}
}
void ABP_MotionController_C__pf2307895703::bpf__SetupRoomScaleOutline__pf()
{
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	TArray<FVector> bpv__CallFunc_GetBounds_ReturnValue__pf{};
	FVector bpv__CallFunc_MinimumAreaRectangle_OutRectCenter__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_MinimumAreaRectangle_OutRectRotation__pf(EForceInit::ForceInit);
	float bpv__CallFunc_MinimumAreaRectangle_OutSideLengthX__pf{};
	float bpv__CallFunc_MinimumAreaRectangle_OutSideLengthY__pf{};
	FHitResult bpv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf{};
	FVector bpv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	bool bpv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf{};
	bool bpv__CallFunc_NearlyEqual_FloatFloat_ReturnValue2__pf{};
	bool bpv__CallFunc_BooleanNAND_ReturnValue__pf{};
	float bpv__ChaperoneMeshHeight__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__ChaperoneMeshHeight__pf = 70.000000;
			}
		case 2:
			{
				bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, 1.000000);
				if(IsValid(bpv__SteamVRChaperone__pf))
				{
					bpv__CallFunc_GetBounds_ReturnValue__pf = bpv__SteamVRChaperone__pf->USteamVRChaperoneComponent::GetBounds();
				}
				UKismetMathLibrary::MinimumAreaRectangle(this, bpv__CallFunc_GetBounds_ReturnValue__pf, bpv__CallFunc_MakeVector_ReturnValue__pf, /*out*/ bpv__CallFunc_MinimumAreaRectangle_OutRectCenter__pf, /*out*/ bpv__CallFunc_MinimumAreaRectangle_OutRectRotation__pf, /*out*/ bpv__CallFunc_MinimumAreaRectangle_OutSideLengthX__pf, /*out*/ bpv__CallFunc_MinimumAreaRectangle_OutSideLengthY__pf, false);
			}
		case 3:
			{
				bpv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::NearlyEqual_FloatFloat(bpv__CallFunc_MinimumAreaRectangle_OutSideLengthY__pf, 100.000000, 0.010000);
				bpv__CallFunc_NearlyEqual_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::NearlyEqual_FloatFloat(bpv__CallFunc_MinimumAreaRectangle_OutSideLengthX__pf, 100.000000, 0.010000);
				bpv__CallFunc_BooleanNAND_ReturnValue__pf = UKismetMathLibrary::BooleanNAND(bpv__CallFunc_NearlyEqual_FloatFloat_ReturnValue2__pf, bpv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf);
				bpv__IsRoomScale__pf = bpv__CallFunc_BooleanNAND_ReturnValue__pf;
			}
		case 4:
			{
				if (!bpv__IsRoomScale__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				bpv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(bpv__CallFunc_MinimumAreaRectangle_OutSideLengthX__pf, bpv__CallFunc_MinimumAreaRectangle_OutSideLengthY__pf, bpv__ChaperoneMeshHeight__pf);
				if(IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__RoomScaleMesh__pf->USceneComponent::SetWorldScale3D(bpv__CallFunc_MakeVector_ReturnValue2__pf);
				}
			}
		case 6:
			{
				if(IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__RoomScaleMesh__pf->USceneComponent::K2_SetRelativeRotation(bpv__CallFunc_MinimumAreaRectangle_OutRectRotation__pf, false, /*out*/ bpv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf, false);
				}
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void ABP_MotionController_C__pf2307895703::bpf__UpdateRoomScaleOutline__pf()
{
	FRotator bpv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GetOrientationAndPosition_DevicePosition__pf(EForceInit::ForceInit);
	bool bpv__CallFunc_IsVisible_ReturnValue__pf{};
	float bpv__CallFunc_BreakVector_X__pf{};
	float bpv__CallFunc_BreakVector_Y__pf{};
	float bpv__CallFunc_BreakVector_Z__pf{};
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpv__CallFunc_BreakRotator_Roll__pf{};
	float bpv__CallFunc_BreakRotator_Pitch__pf{};
	float bpv__CallFunc_BreakRotator_Yaw__pf{};
	FVector bpv__CallFunc_Divide_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_LessLess_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__CallFunc_IsVisible_ReturnValue__pf = bpv__RoomScaleMesh__pf->IsVisible();
				}
				if (!bpv__CallFunc_IsVisible_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(/*out*/ bpv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpv__CallFunc_GetOrientationAndPosition_DevicePosition__pf);
				UKismetMathLibrary::BreakVector(bpv__CallFunc_GetOrientationAndPosition_DevicePosition__pf, /*out*/ bpv__CallFunc_BreakVector_X__pf, /*out*/ bpv__CallFunc_BreakVector_Y__pf, /*out*/ bpv__CallFunc_BreakVector_Z__pf);
				bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpv__CallFunc_BreakVector_X__pf, bpv__CallFunc_BreakVector_Y__pf, 0.000000);
				UKismetMathLibrary::BreakRotator(bpv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpv__CallFunc_BreakRotator_Yaw__pf);
				bpv__CallFunc_Divide_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Divide_VectorFloat(bpv__CallFunc_MakeVector_ReturnValue__pf, -1.000000);
				bpv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpv__CallFunc_BreakRotator_Yaw__pf);
				bpv__CallFunc_LessLess_VectorRotator_ReturnValue__pf = UKismetMathLibrary::LessLess_VectorRotator(bpv__CallFunc_Divide_VectorFloat_ReturnValue__pf, bpv__CallFunc_MakeRotator_ReturnValue__pf);
				if(IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__RoomScaleMesh__pf->USceneComponent::K2_SetRelativeLocation(bpv__CallFunc_LessLess_VectorRotator_ReturnValue__pf, false, /*out*/ bpv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
				}
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void ABP_MotionController_C__pf2307895703::bpf__GetTeleportDestination__pf(/*out*/ FVector& bpp__Location__pf, /*out*/ FRotator& bpp__Rotation__pf)
{
	FRotator bpv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GetOrientationAndPosition_DevicePosition__pf(EForceInit::ForceInit);
	float bpv__CallFunc_BreakVector_X__pf{};
	float bpv__CallFunc_BreakVector_Y__pf{};
	float bpv__CallFunc_BreakVector_Z__pf{};
	FVector bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(/*out*/ bpv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpv__CallFunc_GetOrientationAndPosition_DevicePosition__pf);
	UKismetMathLibrary::BreakVector(bpv__CallFunc_GetOrientationAndPosition_DevicePosition__pf, /*out*/ bpv__CallFunc_BreakVector_X__pf, /*out*/ bpv__CallFunc_BreakVector_Y__pf, /*out*/ bpv__CallFunc_BreakVector_Z__pf);
	if(IsValid(bpv__TeleportCylinder__pf))
	{
		bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__TeleportCylinder__pf->USceneComponent::K2_GetComponentLocation();
	}
	bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpv__CallFunc_BreakVector_X__pf, bpv__CallFunc_BreakVector_Y__pf, 0.000000);
	bpv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpv__CallFunc_MakeVector_ReturnValue__pf, bpv__TeleportRotation__pf);
	bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf);
	bpp__Location__pf = bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf;
	bpp__Rotation__pf = bpv__TeleportRotation__pf;
}
void ABP_MotionController_C__pf2307895703::bpf__GrabComponent__pf()
{
	UPrimitiveComponent* bpv__CallFunc_GetComponentNearHand_NearestComponent__pf{};
	bool bpv__CallFunc_IsValid_ReturnValue__pf{};
	AActor* bpv__CallFunc_GetOwner_ReturnValue__pf{};
	TScriptInterface<IPickupActorInterface_C> bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf{};
	bool bpv__K2Node_DynamicCast_bSuccess__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__bWantsToGrip__pf = true;
			}
		case 2:
			{
				bpf__GetComponentNearHand__pf(/*out*/ bpv__CallFunc_GetComponentNearHand_NearestComponent__pf);
			}
		case 3:
			{
				bpv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__CallFunc_GetComponentNearHand_NearestComponent__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bpv__AttachedComponent__pf = bpv__CallFunc_GetComponentNearHand_NearestComponent__pf;
			}
		case 5:
			{
				if(IsValid(bpv__CallFunc_GetComponentNearHand_NearestComponent__pf))
				{
					bpv__CallFunc_GetOwner_ReturnValue__pf = bpv__CallFunc_GetComponentNearHand_NearestComponent__pf->UActorComponent::GetOwner();
				}
				if ( bpv__CallFunc_GetOwner_ReturnValue__pf && bpv__CallFunc_GetOwner_ReturnValue__pf->GetClass()->ImplementsInterface(UPickupActorInterface_C::StaticClass()) )
				{
					bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(bpv__CallFunc_GetOwner_ReturnValue__pf);
					void* IAddress = bpv__CallFunc_GetOwner_ReturnValue__pf->GetInterfaceAddress(UPickupActorInterface_C::StaticClass());
					bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetInterface(IAddress);
				}
				else
				{
					bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(nullptr);
				}
				bpv__K2Node_DynamicCast_bSuccess__pf = (bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf != nullptr);;
				if (!bpv__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf))
				{
					IPickupActorInterface_C::Execute_bpf__PickupComponent__pf(bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.GetObject() , bpv__MotionController__pf, bpv__AttachedComponent__pf);
				}
			}
		case 7:
			{
				bpf__RumbleController__pf(0.700000);
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void ABP_MotionController_C__pf2307895703::bpf__GetComponentNearHand__pf(/*out*/ UPrimitiveComponent*& bpp__NearestComponent__pf)
{
	int32 bpv__Temp_int_Array_Index_Variable__pf{};
	int32 bpv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray<UPrimitiveComponent*> bpv__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf{};
	FVector bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	UPrimitiveComponent* bpv__CallFunc_Array_Get_Item__pf{};
	int32 bpv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpv__CallFunc_Less_IntInt_ReturnValue__pf{};
	FVector bpv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	AActor* bpv__CallFunc_GetOwner_ReturnValue__pf{};
	float bpv__CallFunc_VSize_ReturnValue__pf{};
	bool bpv__CallFunc_DoesImplementInterface_ReturnValue__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	UPrimitiveComponent* bpv__NearestOverlappingComponent__pf{};
	float bpv__NearestOverlap__pf{};
	AActor* bpv__NearestOverlappingActor__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__NearestOverlap__pf = 10000.000000;
			}
		case 2:
			{
				bpv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				if(IsValid(bpv__GrabSphere__pf))
				{
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingComponents(/*out*/ bpv__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf);
				}
				bpv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf);
				bpv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpv__Temp_int_Loop_Counter_Variable__pf, bpv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					CurrentState = 11;
					break;
				}
			}
		case 5:
			{
				bpv__Temp_int_Array_Index_Variable__pf = bpv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				StateStack.Push(12);
			}
		case 7:
			{
				if(IsValid(bpv__GrabSphere__pf))
				{
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingComponents(/*out*/ bpv__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf);
				}
				FCustomThunkTemplates::Array_Get(bpv__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf, bpv__Temp_int_Array_Index_Variable__pf, /*out*/ bpv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpv__CallFunc_Array_Get_Item__pf))
				{
					bpv__CallFunc_GetOwner_ReturnValue__pf = bpv__CallFunc_Array_Get_Item__pf->UActorComponent::GetOwner();
				}
				bpv__CallFunc_DoesImplementInterface_ReturnValue__pf = UKismetSystemLibrary::DoesImplementInterface(bpv__CallFunc_GetOwner_ReturnValue__pf, UPickupActorInterface_C::StaticClass());
				if (!bpv__CallFunc_DoesImplementInterface_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				if(IsValid(bpv__GrabSphere__pf))
				{
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingComponents(/*out*/ bpv__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf);
				}
				if(IsValid(bpv__GrabSphere__pf))
				{
					bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__GrabSphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				FCustomThunkTemplates::Array_Get(bpv__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf, bpv__Temp_int_Array_Index_Variable__pf, /*out*/ bpv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpv__CallFunc_Array_Get_Item__pf))
				{
					bpv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf = bpv__CallFunc_Array_Get_Item__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf, bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
				bpv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_VSize_ReturnValue__pf, bpv__NearestOverlap__pf);
				if (!bpv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				if(IsValid(bpv__GrabSphere__pf))
				{
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingComponents(/*out*/ bpv__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf);
				}
				FCustomThunkTemplates::Array_Get(bpv__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf, bpv__Temp_int_Array_Index_Variable__pf, /*out*/ bpv__CallFunc_Array_Get_Item__pf);
				bpv__NearestOverlappingComponent__pf = bpv__CallFunc_Array_Get_Item__pf;
			}
		case 10:
			{
				if(IsValid(bpv__GrabSphere__pf))
				{
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingComponents(/*out*/ bpv__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf);
				}
				if(IsValid(bpv__GrabSphere__pf))
				{
					bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__GrabSphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				FCustomThunkTemplates::Array_Get(bpv__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf, bpv__Temp_int_Array_Index_Variable__pf, /*out*/ bpv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpv__CallFunc_Array_Get_Item__pf))
				{
					bpv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf = bpv__CallFunc_Array_Get_Item__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf, bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
				bpv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpv__NearestOverlap__pf = bpv__CallFunc_VSize_ReturnValue__pf;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpp__NearestComponent__pf = bpv__NearestOverlappingComponent__pf;
				CurrentState = -1;
				break;
			}
		case 12:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpv__Temp_int_Loop_Counter_Variable__pf = bpv__CallFunc_Add_IntInt_ReturnValue__pf;
				CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void ABP_MotionController_C__pf2307895703::bpf__ReleaseComponent__pf()
{
	bool bpv__CallFunc_IsValid_ReturnValue__pf{};
	USceneComponent* bpv__CallFunc_GetAttachParent_ReturnValue__pf{};
	bool bpv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	AActor* bpv__CallFunc_GetOwner_ReturnValue__pf{};
	TScriptInterface<IPickupActorInterface_C> bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf{};
	bool bpv__K2Node_DynamicCast_bSuccess__pf{};
	USceneComponent* bpv__CallFunc_K2_GetRootComponent_ReturnValue__pf{};
	USceneComponent* bpv__CallFunc_GetAttachParent_ReturnValue2__pf{};
	bool bpv__CallFunc_EqualEqual_ObjectObject_ReturnValue2__pf{};
	bool bpv__CallFunc_BooleanOR_ReturnValue__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__bWantsToGrip__pf = false;
			}
		case 2:
			{
				bpv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__AttachedComponent__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(IsValid(bpv__AttachedComponent__pf))
				{
					bpv__CallFunc_GetAttachParent_ReturnValue__pf = bpv__AttachedComponent__pf->USceneComponent::GetAttachParent();
				}
				bpv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpv__CallFunc_GetAttachParent_ReturnValue__pf, bpv__MotionController__pf);
				if(IsValid(bpv__AttachedComponent__pf))
				{
					bpv__CallFunc_GetOwner_ReturnValue__pf = bpv__AttachedComponent__pf->UActorComponent::GetOwner();
				}
				if(IsValid(bpv__CallFunc_GetOwner_ReturnValue__pf))
				{
					bpv__CallFunc_K2_GetRootComponent_ReturnValue__pf = bpv__CallFunc_GetOwner_ReturnValue__pf->AActor::K2_GetRootComponent();
				}
				if(IsValid(bpv__CallFunc_K2_GetRootComponent_ReturnValue__pf))
				{
					bpv__CallFunc_GetAttachParent_ReturnValue2__pf = bpv__CallFunc_K2_GetRootComponent_ReturnValue__pf->USceneComponent::GetAttachParent();
				}
				bpv__CallFunc_EqualEqual_ObjectObject_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpv__CallFunc_GetAttachParent_ReturnValue2__pf, bpv__MotionController__pf);
				bpv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpv__CallFunc_EqualEqual_ObjectObject_ReturnValue2__pf, bpv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf);
				if (!bpv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				if(IsValid(bpv__AttachedComponent__pf))
				{
					bpv__CallFunc_GetOwner_ReturnValue__pf = bpv__AttachedComponent__pf->UActorComponent::GetOwner();
				}
				if ( bpv__CallFunc_GetOwner_ReturnValue__pf && bpv__CallFunc_GetOwner_ReturnValue__pf->GetClass()->ImplementsInterface(UPickupActorInterface_C::StaticClass()) )
				{
					bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(bpv__CallFunc_GetOwner_ReturnValue__pf);
					void* IAddress = bpv__CallFunc_GetOwner_ReturnValue__pf->GetInterfaceAddress(UPickupActorInterface_C::StaticClass());
					bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetInterface(IAddress);
				}
				else
				{
					bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(nullptr);
				}
				bpv__K2Node_DynamicCast_bSuccess__pf = (bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf != nullptr);;
				if (!bpv__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = 6;
					break;
				}
			}
		case 5:
			{
				if(IsValid(bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf))
				{
					IPickupActorInterface_C::Execute_bpf__DropComponent__pf(bpv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.GetObject() , bpv__AttachedComponent__pf);
				}
			}
		case 6:
			{
				bpf__RumbleController__pf(0.200000);
			}
		case 7:
			{
				bpv__AttachedComponent__pf = nullptr;
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void ABP_MotionController_C__pf2307895703::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__12 = TEXT("/Game/ProtoVRHand/Meshes/Villain");
	const TCHAR* __Local__13 = TEXT("/Engine/BasicShapes");
	const TCHAR* __Local__14 = TEXT("/Game/VirtualReality/Materials");
	const TCHAR* __Local__15 = TEXT("/Game/VirtualReality/Meshes");
	const TCHAR* __Local__16 = TEXT("/Game/trees/conifer_low_poly_leaves");
	const TCHAR* __Local__17 = TEXT("/Game/audio/hapticEffects");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__12, TEXT("Skel_Hand"), TEXT("Skel_Hand"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__13, TEXT("Sphere"), TEXT("Sphere"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__14, TEXT("M_ArcEndpoint"), TEXT("M_ArcEndpoint"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__13, TEXT("Cylinder"), TEXT("Cylinder"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__14, TEXT("MI_TeleportCylinderPreview"), TEXT("MI_TeleportCylinderPreview"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__15, TEXT("SM_FatCylinder"), TEXT("SM_FatCylinder"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__15, TEXT("BeaconDirection"), TEXT("BeaconDirection"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__15, TEXT("1x1_cube"), TEXT("1x1_cube"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__14, TEXT("MI_ChaperoneOutline"), TEXT("MI_ChaperoneOutline"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__15, TEXT("BeamMesh"), TEXT("BeamMesh"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__14, TEXT("M_SplineArcMat"), TEXT("M_SplineArcMat"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__16, TEXT("choppable_conifer_low_poly_leaves"), TEXT("choppable_conifer_low_poly_leaves"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__17, TEXT("genericRumbleEffect"), TEXT("genericRumbleEffect"), TEXT("/Script/Engine"), TEXT("HapticFeedbackEffect_Curve")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void ABP_MotionController_C__pf2307895703::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void ABP_MotionController_C__pf2307895703::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__18 = TEXT("/Game/ProtoVRHand/Meshes/Villain");
	const TCHAR* __Local__19 = TEXT("/Game/ProtoVRHand/Animations");
	const TCHAR* __Local__20 = TEXT("/Engine/EngineMaterials");
	const TCHAR* __Local__21 = TEXT("/Engine/EngineFonts");
	const TCHAR* __Local__22 = TEXT("/Game/props/log");
	const TCHAR* __Local__23 = TEXT("/Game/audio");
	const TCHAR* __Local__24 = TEXT("/Game/particles");
	const TCHAR* __Local__25 = TEXT("/Game/Blueprints");
	const TCHAR* __Local__26 = TEXT("/Game/VirtualRealityBP/Blueprints");
	const TCHAR* __Local__27 = TEXT("/Game/ProtoVRHand/Blueprints/Example");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__18, TEXT("Skel_Hand_Skeleton"), TEXT("Skel_Hand_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__19, TEXT("BS_LeftGrip"), TEXT("BS_LeftGrip"), TEXT("/Script/Engine"), TEXT("BlendSpace1D")),
		FBlueprintDependencyData(__Local__20, TEXT("DefaultTextMaterialOpaque"), TEXT("DefaultTextMaterialOpaque"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__21, TEXT("RobotoDistanceField"), TEXT("RobotoDistanceField"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__22, TEXT("log"), TEXT("log"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__23, TEXT("chopEffectAttenuation"), TEXT("chopEffectAttenuation"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
		FBlueprintDependencyData(__Local__23, TEXT("chopConcurrency"), TEXT("chopConcurrency"), TEXT("/Script/Engine"), TEXT("SoundConcurrency")),
		FBlueprintDependencyData(__Local__24, TEXT("woodchipParticle"), TEXT("woodchipParticle"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__19, TEXT("AnimBP_LeftHand"), TEXT("AnimBP_LeftHand_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__25, TEXT("choppable"), TEXT("choppable_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__26, TEXT("PickupActorInterface"), TEXT("PickupActorInterface_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__27, TEXT("Enum_Grip"), TEXT("Enum_Grip"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__ABP_MotionController_C__pf2307895703
{
	FRegisterHelper__ABP_MotionController_C__pf2307895703()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/VirtualRealityBP/Blueprints/BP_MotionController"), &ABP_MotionController_C__pf2307895703::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_MotionController_C__pf2307895703 Instance;
};
FRegisterHelper__ABP_MotionController_C__pf2307895703 FRegisterHelper__ABP_MotionController_C__pf2307895703::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
