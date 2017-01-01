#include "NativizedAssets.h"
#include "log_pawn__pf2403237688.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
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
#include "holster__pf2403237688.h"
#include "log_pawn__pf2403237688.h"
#include "BP_MotionController__pf2307895703.h"
#include "menu__pf2403237688.h"
#include "choppable__pf2403237688.h"
#include "ProceduralMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Enum_Grip__pf2873424652.h"
#include "Runtime/Engine/Classes/Components/SplineMeshComponent.h"
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
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Kismet/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "axe__pf2403237688.h"
#include "AnimBP_LeftHand__pf4240717260.h"
#include "PickupActorInterface__pf2307895703.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
Alog_pawn_C__pf2403237688::Alog_pawn_C__pf2403237688(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (Alog_pawn_C__pf2403237688::StaticClass() == GetClass()))
	{
		Alog_pawn_C__pf2403237688::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__VROrigin__pf = CreateDefaultSubobject<USceneComponent>(TEXT("VROrigin"));
	bpv__Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	bpv__Arrow__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	bpv__holster__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("holster"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__VROrigin__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__VROrigin__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Camera__pf->AttachToComponent(bpv__VROrigin__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Arrow__pf->AttachToComponent(bpv__VROrigin__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Arrow__pf->ArrowSize = 2.425583f;
	bpv__Arrow__pf->RelativeLocation = FVector(0.000000, 0.000000, 30.000000);
	if(!bpv__Arrow__pf->IsTemplate())
	{
		bpv__Arrow__pf->BodyInstance.FixupData(bpv__Arrow__pf);
	}
	bpv__holster__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__holster__pf->AttachToComponent(bpv__VROrigin__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__0 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__holster__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__0 = Aholster_C__pf2403237688::StaticClass();
	auto& __Local__1 = (*(AccessPrivateProperty<AActor* >((bpv__holster__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__1 = LoadObject<AActor>(nullptr, TEXT("/Temp/__TEMP_BP__/Game/Blueprints/log_pawn.log_pawn_C:holster_GEN_VARIABLE.holster_GEN_VARIABLE_holster_C_CAT"));
	bpv__bShowChaperone__pf = false;
	bpv__LeftController__pf = nullptr;
	bpv__RightController__pf = nullptr;
	bpv__FadeOutDuration__pf = 0.100000f;
	bpv__FadeInDuration__pf = 0.200000f;
	bpv__IsTeleporting__pf = false;
	bpv__TeleportFadeColor__pf = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	bpv__ThumbDeadzone__pf = 0.700000f;
	bpv__RightStickDown__pf = false;
	bpv__LeftStickDown__pf = false;
	bpv__DefaultPlayerHeight__pf = 180.000000f;
	bpv__UseControllerRollToRotate__pf = false;
	bpv__NewVar_0__pf = 0.000000f;
	bpv__birdSounds__pf = TArray<USoundBase*> ();
	bpv__birdSounds__pf.Reserve(3);
	bpv__birdSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed));
	bpv__birdSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__birdSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__snapRotationAmount__pf = 45.000000f;
	bpv__axisThreshold__pf = -0.500000f;
	bpv__canRotate__pf = true;
}
void Alog_pawn_C__pf2403237688::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
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
	if(bpv__Arrow__pf)
	{
		bpv__Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__holster__pf)
	{
		bpv__holster__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void Alog_pawn_C__pf2403237688::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	extern UClass* Z_Construct_UClass_Aholster_C__pf2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_Aholster_C__pf2403237688());
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
	extern UClass* Z_Construct_UClass_Amenu_C__pf2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_Amenu_C__pf2403237688());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__2 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-2"));
	InDynamicClass->ComponentTemplates.Add(__Local__2);
	auto __Local__3 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-3"));
	InDynamicClass->ComponentTemplates.Add(__Local__3);
	auto __Local__4 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-4"));
	InDynamicClass->ComponentTemplates.Add(__Local__4);
	auto __Local__5 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-5"));
	InDynamicClass->ComponentTemplates.Add(__Local__5);
	auto __Local__6 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-6"));
	InDynamicClass->ComponentTemplates.Add(__Local__6);
	auto __Local__7 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-7"));
	InDynamicClass->ComponentTemplates.Add(__Local__7);
	auto __Local__8 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-8"));
	InDynamicClass->ComponentTemplates.Add(__Local__8);
	auto __Local__9 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-9"));
	InDynamicClass->ComponentTemplates.Add(__Local__9);
	auto __Local__10 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-10"));
	InDynamicClass->ComponentTemplates.Add(__Local__10);
	auto __Local__11 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-1"));
	InDynamicClass->ComponentTemplates.Add(__Local__11);
	auto __Local__12 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-2"));
	InDynamicClass->ComponentTemplates.Add(__Local__12);
	auto __Local__13 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-17"));
	InDynamicClass->ComponentTemplates.Add(__Local__13);
	auto __Local__14 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-18"));
	InDynamicClass->ComponentTemplates.Add(__Local__14);
	auto __Local__15 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-19"));
	InDynamicClass->ComponentTemplates.Add(__Local__15);
	auto __Local__16 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-20"));
	InDynamicClass->ComponentTemplates.Add(__Local__16);
	auto __Local__17 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-21"));
	InDynamicClass->ComponentTemplates.Add(__Local__17);
	auto __Local__18 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-22"));
	InDynamicClass->ComponentTemplates.Add(__Local__18);
	auto __Local__19 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-23"));
	InDynamicClass->ComponentTemplates.Add(__Local__19);
	auto __Local__20 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-24"));
	InDynamicClass->ComponentTemplates.Add(__Local__20);
	auto __Local__21 = NewObject<UAudioComponent>(InDynamicClass, UAudioComponent::StaticClass(), TEXT("NODE_AddAudioComponent-25"));
	InDynamicClass->ComponentTemplates.Add(__Local__21);
	auto __Local__22 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__22);
	auto __Local__23 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__23);
	auto __Local__24 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__24);
	__Local__2->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__2->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__3->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__3->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__4->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__4->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__5->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__5->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__6->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__6->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__7->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__7->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__8->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	__Local__8->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__9->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	__Local__9->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__11->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	__Local__11->bVisible = false;
	__Local__11->bHiddenInGame = true;
	__Local__11->RelativeScale3D = FVector(0.100000, 0.100000, 0.100000);
	__Local__12->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	__Local__12->bVisible = false;
	__Local__12->bHiddenInGame = true;
	__Local__12->RelativeScale3D = FVector(0.100000, 0.100000, 0.100000);
	__Local__14->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	__Local__14->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__15->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	__Local__15->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__16->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__16->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__17->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__17->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__18->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__18->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__19->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__19->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__20->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__20->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__21->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__21->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__22->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__22->InputActionDelegateBindings.AddUninitialized(7);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__22->InputActionDelegateBindings.GetData(), 7);
	auto& __Local__25 = __Local__22->InputActionDelegateBindings[0];
	__Local__25.InputActionName = FName(TEXT("GrabLeft"));
	__Local__25.InputKeyEvent = EInputEvent::IE_Released;
	__Local__25.FunctionNameToBind = FName(TEXT("InpActEvt_GrabLeft_K2Node_InputActionEvent_13"));
	auto& __Local__26 = __Local__22->InputActionDelegateBindings[1];
	__Local__26.InputActionName = FName(TEXT("GrabLeft"));
	__Local__26.FunctionNameToBind = FName(TEXT("InpActEvt_GrabLeft_K2Node_InputActionEvent_12"));
	auto& __Local__27 = __Local__22->InputActionDelegateBindings[2];
	__Local__27.InputActionName = FName(TEXT("GrabRight"));
	__Local__27.InputKeyEvent = EInputEvent::IE_Released;
	__Local__27.FunctionNameToBind = FName(TEXT("InpActEvt_GrabRight_K2Node_InputActionEvent_11"));
	auto& __Local__28 = __Local__22->InputActionDelegateBindings[3];
	__Local__28.InputActionName = FName(TEXT("GrabRight"));
	__Local__28.FunctionNameToBind = FName(TEXT("InpActEvt_GrabRight_K2Node_InputActionEvent_10"));
	auto& __Local__29 = __Local__22->InputActionDelegateBindings[4];
	__Local__29.InputActionName = FName(TEXT("freezeLeft"));
	__Local__29.FunctionNameToBind = FName(TEXT("InpActEvt_freezeLeft_K2Node_InputActionEvent_9"));
	auto& __Local__30 = __Local__22->InputActionDelegateBindings[5];
	__Local__30.InputActionName = FName(TEXT("freezeRight"));
	__Local__30.FunctionNameToBind = FName(TEXT("InpActEvt_freezeRight_K2Node_InputActionEvent_8"));
	auto& __Local__31 = __Local__22->InputActionDelegateBindings[6];
	__Local__31.InputActionName = FName(TEXT("openMenu"));
	__Local__31.FunctionNameToBind = FName(TEXT("InpActEvt_openMenu_K2Node_InputActionEvent_7"));
	__Local__23->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__23->InputAxisDelegateBindings.AddUninitialized(8);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__23->InputAxisDelegateBindings.GetData(), 8);
	auto& __Local__32 = __Local__23->InputAxisDelegateBindings[0];
	__Local__32.InputAxisName = FName(TEXT("MotionControllerThumbRight_Y"));
	__Local__32.FunctionNameToBind = FName(TEXT("InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_183"));
	auto& __Local__33 = __Local__23->InputAxisDelegateBindings[1];
	__Local__33.InputAxisName = FName(TEXT("MotionControllerThumbLeft_Y"));
	__Local__33.FunctionNameToBind = FName(TEXT("InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_155"));
	auto& __Local__34 = __Local__23->InputAxisDelegateBindings[2];
	__Local__34.InputAxisName = FName(TEXT("MotionControllerThumbLeft_X"));
	__Local__34.FunctionNameToBind = FName(TEXT("InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2"));
	auto& __Local__35 = __Local__23->InputAxisDelegateBindings[3];
	__Local__35.InputAxisName = FName(TEXT("MotionControllerThumbRight_X"));
	__Local__35.FunctionNameToBind = FName(TEXT("InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_0"));
	auto& __Local__36 = __Local__23->InputAxisDelegateBindings[4];
	__Local__36.InputAxisName = FName(TEXT("MotionControllerThumbLeft_X"));
	__Local__36.bOverrideParentBinding = false;
	auto& __Local__37 = __Local__23->InputAxisDelegateBindings[5];
	__Local__37.InputAxisName = FName(TEXT("MotionControllerThumbLeft_Y"));
	__Local__37.bOverrideParentBinding = false;
	auto& __Local__38 = __Local__23->InputAxisDelegateBindings[6];
	__Local__38.InputAxisName = FName(TEXT("MotionControllerThumbRight_Y"));
	__Local__38.bOverrideParentBinding = false;
	auto& __Local__39 = __Local__23->InputAxisDelegateBindings[7];
	__Local__39.InputAxisName = FName(TEXT("MotionControllerThumbRight_X"));
	__Local__39.bOverrideParentBinding = false;
	__Local__24->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__24->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__24->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__40 = __Local__24->ComponentDelegateBindings[0];
	__Local__40.ComponentPropertyName = FName(TEXT("Cube"));
	__Local__40.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__40.FunctionNameToBind = FName(TEXT("BndEvt__Cube_K2Node_ComponentBoundEvent_18_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__41 = __Local__24->ComponentDelegateBindings[1];
	__Local__41.ComponentPropertyName = FName(TEXT("Cube"));
	__Local__41.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__41.FunctionNameToBind = FName(TEXT("BndEvt__Cube_K2Node_ComponentBoundEvent_17_ComponentBeginOverlapSignature__DelegateSignature"));
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_0(int32 bpp__EntryPoint__pf)
{
	FRotator bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_MakeRotator_ReturnValue3__pf(EForceInit::ForceInit);
	float bpv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FRotator bpv__CallFunc_ComposeRotators_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpv__CallFunc_Add_FloatFloat_ReturnValue2__pf{};
	FVector bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Add_VectorVector_ReturnValue2__pf(EForceInit::ForceInit);
	bool bpv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf{};
	FTransform bpv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	Amenu_C__pf2403237688* bpv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 75);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_MakeArray_Array__pf.SetNum(1, true);
	b0l__K2Node_MakeArray_Array__pf[0] = EObjectTypeQuery::ObjectTypeQuery1;
	if(IsValid(bpv__Camera__pf))
	{
		bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentLocation();
	}
	UKismetMathLibrary::BreakVector(bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
	bpv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector_Z__pf, -500.000000);
	bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(b0l__CallFunc_BreakVector_X__pf, b0l__CallFunc_BreakVector_Y__pf, bpv__CallFunc_Add_FloatFloat_ReturnValue__pf);
	UKismetMathLibrary::BreakVector(bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakVector_X2__pf, /*out*/ b0l__CallFunc_BreakVector_Y2__pf, /*out*/ b0l__CallFunc_BreakVector_Z2__pf);
	if(IsValid(bpv__Camera__pf))
	{
		bpv__CallFunc_GetForwardVector_ReturnValue__pf = bpv__Camera__pf->USceneComponent::GetForwardVector();
	}
	bpv__CallFunc_Add_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector_Z2__pf, 500.000000);
	bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__CallFunc_GetForwardVector_ReturnValue__pf, 60.000000);
	bpv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(b0l__CallFunc_BreakVector_X2__pf, b0l__CallFunc_BreakVector_Y2__pf, bpv__CallFunc_Add_FloatFloat_ReturnValue2__pf);
	bpv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, bpv__CallFunc_MakeVector_ReturnValue__pf);
	bpv__CallFunc_Add_VectorVector_ReturnValue2__pf = UKismetMathLibrary::Add_VectorVector(bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, bpv__CallFunc_MakeVector_ReturnValue2__pf);
	bpv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingleForObjects(this, bpv__CallFunc_Add_VectorVector_ReturnValue2__pf, bpv__CallFunc_Add_VectorVector_ReturnValue__pf, b0l__K2Node_MakeArray_Array__pf, false, b0l__Temp_object_Variable__pf, EDrawDebugTrace::None, /*out*/ b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Camera__pf))
	{
		bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentRotation();
	}
	UKismetMathLibrary::BreakRotator(bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_MakeRotator_ReturnValue3__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b0l__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_ComposeRotators_ReturnValue__pf = UKismetMathLibrary::ComposeRotators(bpv__CallFunc_MakeRotator_ReturnValue3__pf, FRotator(0.000000,180.000000,0.000000));
	UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
	bpv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(b0l__CallFunc_BreakHitResult_Location__pf, bpv__CallFunc_ComposeRotators_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
	bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, Amenu_C__pf2403237688::StaticClass(), bpv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, nullptr);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Camera__pf))
	{
		bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentRotation();
	}
	UKismetMathLibrary::BreakRotator(bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_MakeRotator_ReturnValue3__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b0l__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_ComposeRotators_ReturnValue__pf = UKismetMathLibrary::ComposeRotators(bpv__CallFunc_MakeRotator_ReturnValue3__pf, FRotator(0.000000,180.000000,0.000000));
	UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
	bpv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(b0l__CallFunc_BreakHitResult_Location__pf, bpv__CallFunc_ComposeRotators_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
	bpv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<Amenu_C__pf2403237688>(UGameplayStatics::FinishSpawningActor(bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__CallFunc_FinishSpawningActor_ReturnValue__pf))
	{
		bpv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__mesh__pf = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	}
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__CallFunc_FinishSpawningActor_ReturnValue__pf))
	{
		bpv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__startFrozen__pf = true;
	}
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__CallFunc_FinishSpawningActor_ReturnValue__pf))
	{
		bpv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpf__initialize__pf();
	}
	return; //KCST_EndOfThread
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 9);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputActionEvent_Key7__pf;
	if(IsValid(bpv__LeftController__pf))
	{
		bpv__LeftController__pf->bpf__ReleaseComponent__pf();
	}
	return; //KCST_EndOfThread
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_Greater_FloatFloat_ReturnValue2__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 10:
			{
				if(IsValid(bpv__LeftController__pf))
				{
					bpv__LeftController__pf->bpf__DisableTeleporter__pf();
				}
				CurrentState = -1;
				break;
			}
		case 11:
			{
				bpv__CallFunc_Greater_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Greater_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue__pf, 0.500000);
				if (!bpv__CallFunc_Greater_FloatFloat_ReturnValue2__pf)
				{
					CurrentState = 13;
					break;
				}
			}
		case 12:
			{
				if(IsValid(bpv__RightController__pf))
				{
					bpv__RightController__pf->bpf__ActivateTeleporter__pf();
				}
				CurrentState = 10;
				break;
			}
		case 13:
			{
				bool  __Local__42 = false;
				if (!((IsValid(bpv__RightController__pf)) ? (bpv__RightController__pf->bpv__IsTeleporterActive__pf) : (__Local__42)))
				{
					CurrentState = -1;
					break;
				}
			}
		case 14:
			{
				bpf__ExecuteTeleportation__pf(bpv__RightController__pf);
				CurrentState = -1;
				break;
			}
		case 16:
			{
				CurrentState = 11;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 15:
			{
				if(IsValid(bpv__RightController__pf))
				{
					bpv__RightController__pf->bpf__DisableTeleporter__pf();
				}
				CurrentState = -1;
				break;
			}
		case 17:
			{
				bool  __Local__43 = false;
				if (!((IsValid(bpv__LeftController__pf)) ? (bpv__LeftController__pf->bpv__IsTeleporterActive__pf) : (__Local__43)))
				{
					CurrentState = -1;
					break;
				}
			}
		case 18:
			{
				bpf__ExecuteTeleportation__pf(bpv__LeftController__pf);
				CurrentState = -1;
				break;
			}
		case 19:
			{
				if(IsValid(bpv__LeftController__pf))
				{
					bpv__LeftController__pf->bpf__ActivateTeleporter__pf();
				}
				CurrentState = 15;
				break;
			}
		case 20:
			{
				bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue2__pf, 0.500000);
				if (!bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					CurrentState = 17;
					break;
				}
				CurrentState = 19;
				break;
			}
		case 23:
			{
				CurrentState = 20;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 24);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputActionEvent_Key6__pf;
	if(IsValid(bpv__LeftController__pf))
	{
		bpv__LeftController__pf->bpf__GrabComponent__pf();
	}
	return; //KCST_EndOfThread
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 27);
	// optimized KCST_UnconditionalGoto
	bpf__tryToRotate__pf(b0l__K2Node_InputAxisEvent_AxisValue3__pf, b0l__K2Node_InputAxisEvent_AxisValue3__pf);
	return; //KCST_EndOfThread
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 28);
	// optimized KCST_UnconditionalGoto
	bpf__tryToRotate__pf(b0l__K2Node_InputAxisEvent_AxisValue4__pf, b0l__K2Node_InputAxisEvent_AxisValue4__pf);
	return; //KCST_EndOfThread
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_7(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	FRotator bpv__CallFunc_MakeRotator_ReturnValue2__pf(EForceInit::ForceInit);
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 29:
			{
				CurrentState = 30;
				break;
			}
		case 30:
			{
				if (!bpv__canRotate__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 31:
			{
				bpv__canRotate__pf = false;
			}
		case 32:
			{
				bpv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__snapRotationAmount__pf, 1.000000);
				bpv__CallFunc_MakeRotator_ReturnValue2__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf);
				if(IsValid(bpv__VROrigin__pf))
				{
					bpv__VROrigin__pf->USceneComponent::K2_AddWorldRotation(bpv__CallFunc_MakeRotator_ReturnValue2__pf, false, /*out*/ b0l__CallFunc_K2_AddWorldRotation_SweepHitResult2__pf, false);
				}
			}
		case 33:
			{
				UKismetSystemLibrary::Delay(this, 0.500000, FLatentActionInfo(34, 2147483647, TEXT("ExecuteUbergraph_log_pawn_7"), this));
				CurrentState = -1;
				break;
			}
		case 34:
			{
				CurrentState = 35;
				break;
			}
		case 35:
			{
				bpv__canRotate__pf = true;
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_8(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_K2_TeleportTo_ReturnValue__pf{};
	APlayerCameraManager* bpv__CallFunc_GetPlayerCameraManager_ReturnValue__pf{};
	APlayerCameraManager* bpv__CallFunc_GetPlayerCameraManager_ReturnValue2__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 36:
			{
				if (!bpv__IsTeleporting__pf)
				{
					CurrentState = 37;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 37:
			{
				bool  __Local__45 = false;
				if (!((IsValid(b0l__K2Node_CustomEvent_MotionController__pf)) ? (b0l__K2Node_CustomEvent_MotionController__pf->bpv__IsValidTeleportDestination__pf) : (__Local__45)))
				{
					CurrentState = 41;
					break;
				}
			}
		case 38:
			{
				bpv__IsTeleporting__pf = true;
			}
		case 39:
			{
				bpv__CallFunc_GetPlayerCameraManager_ReturnValue2__pf = UGameplayStatics::GetPlayerCameraManager(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerCameraManager_ReturnValue2__pf))
				{
					bpv__CallFunc_GetPlayerCameraManager_ReturnValue2__pf->StartCameraFade(0.000000, 1.000000, bpv__FadeOutDuration__pf, bpv__TeleportFadeColor__pf, false, true);
				}
			}
		case 40:
			{
				UKismetSystemLibrary::Delay(this, bpv__FadeOutDuration__pf, FLatentActionInfo(42, 1920605869, TEXT("ExecuteUbergraph_log_pawn_8"), this));
				CurrentState = -1;
				break;
			}
		case 41:
			{
				if(IsValid(b0l__K2Node_CustomEvent_MotionController__pf))
				{
					b0l__K2Node_CustomEvent_MotionController__pf->bpf__DisableTeleporter__pf();
				}
				CurrentState = -1;
				break;
			}
		case 42:
			{
				CurrentState = 43;
				break;
			}
		case 43:
			{
				if(IsValid(b0l__K2Node_CustomEvent_MotionController__pf))
				{
					b0l__K2Node_CustomEvent_MotionController__pf->bpf__DisableTeleporter__pf();
				}
			}
		case 44:
			{
				if(IsValid(b0l__K2Node_CustomEvent_MotionController__pf))
				{
					b0l__K2Node_CustomEvent_MotionController__pf->bpf__GetTeleportDestination__pf(/*out*/ b0l__CallFunc_GetTeleportDestination_Location__pf, /*out*/ b0l__CallFunc_GetTeleportDestination_Rotation__pf);
				}
				bpv__CallFunc_K2_TeleportTo_ReturnValue__pf = AActor::K2_TeleportTo(b0l__CallFunc_GetTeleportDestination_Location__pf, b0l__CallFunc_GetTeleportDestination_Rotation__pf);
			}
		case 45:
			{
				bpv__CallFunc_GetPlayerCameraManager_ReturnValue__pf = UGameplayStatics::GetPlayerCameraManager(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerCameraManager_ReturnValue__pf))
				{
					bpv__CallFunc_GetPlayerCameraManager_ReturnValue__pf->StartCameraFade(1.000000, 0.000000, bpv__FadeInDuration__pf, bpv__TeleportFadeColor__pf, false, false);
				}
			}
		case 46:
			{
				bpv__IsTeleporting__pf = false;
				CurrentState = -1;
				break;
			}
		case 73:
			{
				CurrentState = 36;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_9(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FRotator bpv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 47:
			{
				CurrentState = 48;
				break;
			}
		case 48:
			{
				if (!bpv__canRotate__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 49:
			{
				bpv__canRotate__pf = false;
			}
		case 50:
			{
				bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__snapRotationAmount__pf, -1.000000);
				bpv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				if(IsValid(bpv__VROrigin__pf))
				{
					bpv__VROrigin__pf->USceneComponent::K2_AddWorldRotation(bpv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf, false);
				}
			}
		case 51:
			{
				UKismetSystemLibrary::Delay(this, 0.500000, FLatentActionInfo(52, 1607587443, TEXT("ExecuteUbergraph_log_pawn_9"), this));
				CurrentState = -1;
				break;
			}
		case 52:
			{
				CurrentState = 53;
				break;
			}
		case 53:
			{
				bpv__canRotate__pf = true;
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 71);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__RightController__pf))
	{
		bpv__RightController__pf->bpf__freezeComponentInController__pf();
	}
	return; //KCST_EndOfThread
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 70);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__LeftController__pf))
	{
		bpv__LeftController__pf->bpf__freezeComponentInController__pf();
	}
	return; //KCST_EndOfThread
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 58);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key5__pf;
	if(IsValid(bpv__RightController__pf))
	{
		bpv__RightController__pf->bpf__ReleaseComponent__pf();
	}
	return; //KCST_EndOfThread
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 62);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key4__pf;
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__RightController__pf))
	{
		bpv__RightController__pf->bpf__GrabComponent__pf();
	}
	return; //KCST_EndOfThread
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_14(int32 bpp__EntryPoint__pf)
{
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 60:
			{
				bpf__positionHolster__pf();
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 67:
			{
				bpf__randomBirdChirps__pf(b0l__K2Node_Event_DeltaSeconds__pf);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 68:
			{
				StateStack.Push(60);
				CurrentState = 67;
				break;
			}
		case 69:
			{
				CurrentState = 68;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_15(int32 bpp__EntryPoint__pf)
{
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 63:
			{
				bpf__spawnAndAttachMotionControllers__pf();
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 64:
			{
				bpf__setupPlayerHeightForPlatforms__pf();
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 72:
			{
				StateStack.Push(63);
				CurrentState = 64;
				break;
			}
		case 74:
			{
				CurrentState = 72;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_16(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 65);
	return; //KCST_EndOfThread
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteUbergraph_log_pawn__pf_17(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 66);
	return; //KCST_EndOfThread
}
void Alog_pawn_C__pf2403237688::bpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_183__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_log_pawn__pf_2(16);
}
void Alog_pawn_C__pf2403237688::bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_155__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_log_pawn__pf_3(23);
}
void Alog_pawn_C__pf2403237688::bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue3__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_log_pawn__pf_5(27);
}
void Alog_pawn_C__pf2403237688::bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue4__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_log_pawn__pf_6(28);
}
void Alog_pawn_C__pf2403237688::bpf__rotateRight__pf()
{
	bpf__ExecuteUbergraph_log_pawn__pf_7(29);
}
void Alog_pawn_C__pf2403237688::bpf__rotateLeft__pf()
{
	bpf__ExecuteUbergraph_log_pawn__pf_9(47);
}
void Alog_pawn_C__pf2403237688::bpf__BndEvt__Cube_K2Node_ComponentBoundEvent_18_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_log_pawn__pf_16(65);
}
void Alog_pawn_C__pf2403237688::bpf__BndEvt__Cube_K2Node_ComponentBoundEvent_17_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__48;
	T__Local__48& bpp__SweepResult__pf = *const_cast<T__Local__48 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor2__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp2__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_log_pawn__pf_17(66);
}
void Alog_pawn_C__pf2403237688::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_log_pawn__pf_14(69);
}
void Alog_pawn_C__pf2403237688::bpf__ExecuteTeleportation__pf(ABP_MotionController_C__pf2307895703* bpp__MotionController__pf)
{
	b0l__K2Node_CustomEvent_MotionController__pf = bpp__MotionController__pf;
	bpf__ExecuteUbergraph_log_pawn__pf_8(73);
}
void Alog_pawn_C__pf2403237688::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_log_pawn__pf_15(74);
}
void Alog_pawn_C__pf2403237688::bpf__InpActEvt_openMenu_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_log_pawn__pf_0(75);
}
void Alog_pawn_C__pf2403237688::bpf__InpActEvt_freezeRight_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_log_pawn__pf_10(71);
}
void Alog_pawn_C__pf2403237688::bpf__InpActEvt_freezeLeft_K2Node_InputActionEvent_9__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_log_pawn__pf_11(70);
}
void Alog_pawn_C__pf2403237688::bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_10__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_log_pawn__pf_13(62);
}
void Alog_pawn_C__pf2403237688::bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_11__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_log_pawn__pf_12(58);
}
void Alog_pawn_C__pf2403237688::bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_12__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_log_pawn__pf_4(24);
}
void Alog_pawn_C__pf2403237688::bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_13__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key7__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_log_pawn__pf_1(9);
}
void Alog_pawn_C__pf2403237688::bpf__UserConstructionScript__pf()
{
}
FRotator  Alog_pawn_C__pf2403237688::bpf__GetRotationFromInput__pf(float bpp__UpAxis__pf, float bpp__RightAxis__pf, ABP_MotionController_C__pf2307895703* bpp__Controller__pf)
{
	FRotator bpp__ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpv__CallFunc_BreakRotator_Roll__pf{};
	float bpv__CallFunc_BreakRotator_Pitch__pf{};
	float bpv__CallFunc_BreakRotator_Yaw__pf{};
	FTransform bpv__CallFunc_MakeTransform_ReturnValue__pf{};
	float bpv__CallFunc_Abs_ReturnValue__pf{};
	FTransform bpv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpv__CallFunc_ConvertTransformToRelative_ReturnValue__pf{};
	FVector bpv__CallFunc_Normal_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	float bpv__CallFunc_Abs_ReturnValue2__pf{};
	float bpv__CallFunc_BreakRotator_Roll2__pf{};
	float bpv__CallFunc_BreakRotator_Pitch2__pf{};
	float bpv__CallFunc_BreakRotator_Yaw2__pf{};
	float bpv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FRotator bpv__CallFunc_K2_GetActorRotation_ReturnValue2__pf(EForceInit::ForceInit);
	float bpv__CallFunc_Add_FloatFloat_ReturnValue2__pf{};
	float bpv__CallFunc_BreakRotator_Roll3__pf{};
	float bpv__CallFunc_BreakRotator_Pitch3__pf{};
	float bpv__CallFunc_BreakRotator_Yaw3__pf{};
	FRotator bpv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_MakeRotator_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_K2_GetActorRotation_ReturnValue3__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_Conv_VectorToRotator_ReturnValue__pf(EForceInit::ForceInit);
	bool bpv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	FRotator bpv__CallFunc_SelectRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_SelectRotator_ReturnValue2__pf(EForceInit::ForceInit);
	bpv__CallFunc_K2_GetActorRotation_ReturnValue__pf = AActor::K2_GetActorRotation();
	UKismetMathLibrary::BreakRotator(bpv__CallFunc_K2_GetActorRotation_ReturnValue__pf, /*out*/ bpv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpv__CallFunc_BreakRotator_Yaw__pf);
	FRotator  __Local__49 = FRotator(0.000000,0.000000,0.000000);
	bpv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), ((IsValid(bpp__Controller__pf)) ? (bpp__Controller__pf->bpv__InitialControllerRotation__pf) : (__Local__49)), FVector(1.000000,1.000000,1.000000));
	bpv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpp__RightAxis__pf);
	if(IsValid(bpp__Controller__pf) && IsValid(bpp__Controller__pf->bpv__MotionController__pf))
	{
		bpv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpp__Controller__pf->bpv__MotionController__pf->USceneComponent::K2_GetComponentToWorld();
	}
	bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpp__UpAxis__pf, bpp__RightAxis__pf, 0.000000);
	bpv__CallFunc_ConvertTransformToRelative_ReturnValue__pf = UKismetMathLibrary::ConvertTransformToRelative(bpv__CallFunc_MakeTransform_ReturnValue__pf, bpv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf);
	bpv__CallFunc_Normal_ReturnValue__pf = UKismetMathLibrary::Normal(bpv__CallFunc_MakeVector_ReturnValue__pf);
	UKismetMathLibrary::BreakTransform(bpv__CallFunc_ConvertTransformToRelative_ReturnValue__pf, /*out*/ bpv__CallFunc_BreakTransform_Location__pf, /*out*/ bpv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpv__CallFunc_BreakTransform_Scale__pf);
	bpv__CallFunc_Abs_ReturnValue2__pf = UKismetMathLibrary::Abs(bpp__UpAxis__pf);
	UKismetMathLibrary::BreakRotator(bpv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpv__CallFunc_BreakRotator_Roll2__pf, /*out*/ bpv__CallFunc_BreakRotator_Pitch2__pf, /*out*/ bpv__CallFunc_BreakRotator_Yaw2__pf);
	bpv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__CallFunc_Abs_ReturnValue2__pf, bpv__CallFunc_Abs_ReturnValue__pf);
	bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__CallFunc_BreakRotator_Roll2__pf, 3.000000);
	bpv__CallFunc_K2_GetActorRotation_ReturnValue2__pf = AActor::K2_GetActorRotation();
	bpv__CallFunc_Add_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Add_FloatFloat(bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__CallFunc_BreakRotator_Yaw__pf);
	UKismetMathLibrary::BreakRotator(bpv__CallFunc_K2_GetActorRotation_ReturnValue2__pf, /*out*/ bpv__CallFunc_BreakRotator_Roll3__pf, /*out*/ bpv__CallFunc_BreakRotator_Pitch3__pf, /*out*/ bpv__CallFunc_BreakRotator_Yaw3__pf);
	bpv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpv__CallFunc_Add_FloatFloat_ReturnValue2__pf);
	bpv__CallFunc_MakeRotator_ReturnValue2__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpv__CallFunc_BreakRotator_Yaw3__pf);
	bpv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpv__CallFunc_Normal_ReturnValue__pf, bpv__CallFunc_MakeRotator_ReturnValue2__pf);
	bpv__CallFunc_K2_GetActorRotation_ReturnValue3__pf = AActor::K2_GetActorRotation();
	bpv__CallFunc_Conv_VectorToRotator_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToRotator(bpv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf);
	bpv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpv__ThumbDeadzone__pf);
	bpv__CallFunc_SelectRotator_ReturnValue__pf = UKismetMathLibrary::SelectRotator(bpv__CallFunc_Conv_VectorToRotator_ReturnValue__pf, bpv__CallFunc_K2_GetActorRotation_ReturnValue3__pf, bpv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf);
	bpv__CallFunc_SelectRotator_ReturnValue2__pf = UKismetMathLibrary::SelectRotator(bpv__CallFunc_MakeRotator_ReturnValue__pf, bpv__CallFunc_SelectRotator_ReturnValue__pf, bpv__UseControllerRollToRotate__pf);
	bpp__ReturnValue__pf = bpv__CallFunc_SelectRotator_ReturnValue2__pf;
	return bpp__ReturnValue__pf;
}
void Alog_pawn_C__pf2403237688::bpf__randomChopSound__pf(FVector bpp__location__pf, /*out*/ UAudioComponent*& bpp__audioOutput__pf)
{
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf{};
	UAudioComponent* bpv__CallFunc_AddComponent_ReturnValue__pf{};
	UAudioComponent* bpv__CallFunc_AddComponent_ReturnValue2__pf{};
	UAudioComponent* bpv__CallFunc_AddComponent_ReturnValue3__pf{};
	UAudioComponent* bpv__CallFunc_AddComponent_ReturnValue4__pf{};
	UAudioComponent* bpv__CallFunc_AddComponent_ReturnValue5__pf{};
	UAudioComponent* bpv__CallFunc_AddComponent_ReturnValue6__pf{};
	UAudioComponent* bpv__CallFunc_AddComponent_ReturnValue7__pf{};
	UAudioComponent* bpv__CallFunc_AddComponent_ReturnValue8__pf{};
	TArray<UAudioComponent*> bpv__K2Node_MakeArray_Array__pf{};
	int32 bpv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	UAudioComponent* bpv__CallFunc_Array_Get_Item__pf{};
	bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, 0.000000);
	bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(bpv__CallFunc_MakeVector_ReturnValue__pf);
	bpv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UAudioComponent>(AActor::AddComponent(FName(TEXT("NODE_AddAudioComponent-25")), false, bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf, this), ECastCheckedType::NullAllowed);
	bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, 0.000000);
	bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(bpv__CallFunc_MakeVector_ReturnValue__pf);
	bpv__CallFunc_AddComponent_ReturnValue8__pf = CastChecked<UAudioComponent>(AActor::AddComponent(FName(TEXT("NODE_AddAudioComponent-24")), false, bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf, this), ECastCheckedType::NullAllowed);
	bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, 0.000000);
	bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(bpv__CallFunc_MakeVector_ReturnValue__pf);
	bpv__CallFunc_AddComponent_ReturnValue7__pf = CastChecked<UAudioComponent>(AActor::AddComponent(FName(TEXT("NODE_AddAudioComponent-23")), false, bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf, this), ECastCheckedType::NullAllowed);
	bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, 0.000000);
	bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(bpv__CallFunc_MakeVector_ReturnValue__pf);
	bpv__CallFunc_AddComponent_ReturnValue6__pf = CastChecked<UAudioComponent>(AActor::AddComponent(FName(TEXT("NODE_AddAudioComponent-22")), false, bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf, this), ECastCheckedType::NullAllowed);
	bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, 0.000000);
	bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(bpv__CallFunc_MakeVector_ReturnValue__pf);
	bpv__CallFunc_AddComponent_ReturnValue5__pf = CastChecked<UAudioComponent>(AActor::AddComponent(FName(TEXT("NODE_AddAudioComponent-21")), false, bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf, this), ECastCheckedType::NullAllowed);
	bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, 0.000000);
	bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(bpv__CallFunc_MakeVector_ReturnValue__pf);
	bpv__CallFunc_AddComponent_ReturnValue4__pf = CastChecked<UAudioComponent>(AActor::AddComponent(FName(TEXT("NODE_AddAudioComponent-20")), false, bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf, this), ECastCheckedType::NullAllowed);
	bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, 0.000000);
	bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(bpv__CallFunc_MakeVector_ReturnValue__pf);
	bpv__CallFunc_AddComponent_ReturnValue3__pf = CastChecked<UAudioComponent>(AActor::AddComponent(FName(TEXT("NODE_AddAudioComponent-19")), false, bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf, this), ECastCheckedType::NullAllowed);
	bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, 0.000000);
	bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(bpv__CallFunc_MakeVector_ReturnValue__pf);
	bpv__CallFunc_AddComponent_ReturnValue2__pf = CastChecked<UAudioComponent>(AActor::AddComponent(FName(TEXT("NODE_AddAudioComponent-18")), false, bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf, this), ECastCheckedType::NullAllowed);
	bpv__K2Node_MakeArray_Array__pf.SetNum(8, true);
	bpv__K2Node_MakeArray_Array__pf[0] = bpv__CallFunc_AddComponent_ReturnValue__pf;
	bpv__K2Node_MakeArray_Array__pf[1] = bpv__CallFunc_AddComponent_ReturnValue8__pf;
	bpv__K2Node_MakeArray_Array__pf[2] = bpv__CallFunc_AddComponent_ReturnValue7__pf;
	bpv__K2Node_MakeArray_Array__pf[3] = bpv__CallFunc_AddComponent_ReturnValue6__pf;
	bpv__K2Node_MakeArray_Array__pf[4] = bpv__CallFunc_AddComponent_ReturnValue5__pf;
	bpv__K2Node_MakeArray_Array__pf[5] = bpv__CallFunc_AddComponent_ReturnValue4__pf;
	bpv__K2Node_MakeArray_Array__pf[6] = bpv__CallFunc_AddComponent_ReturnValue3__pf;
	bpv__K2Node_MakeArray_Array__pf[7] = bpv__CallFunc_AddComponent_ReturnValue2__pf;
	bpv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__K2Node_MakeArray_Array__pf);
	bpv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__CallFunc_Array_Length_ReturnValue__pf, 1);
	bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpv__CallFunc_Subtract_IntInt_ReturnValue__pf);
	FCustomThunkTemplates::Array_Get(bpv__K2Node_MakeArray_Array__pf, bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf, /*out*/ bpv__CallFunc_Array_Get_Item__pf);
	bpp__audioOutput__pf = bpv__CallFunc_Array_Get_Item__pf;
}
void Alog_pawn_C__pf2403237688::bpf__spawnAmbisonicAudio__pf()
{
	FTransform bpv__Temp_struct_Variable__pf{};
	UAudioComponent* bpv__CallFunc_AddComponent_ReturnValue__pf{};
	bpv__Temp_struct_Variable__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
	bpv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UAudioComponent>(AActor::AddComponent(FName(TEXT("NODE_AddAudioComponent-17")), false, bpv__Temp_struct_Variable__pf, this), ECastCheckedType::NullAllowed);
	if(IsValid(bpv__CallFunc_AddComponent_ReturnValue__pf))
	{
		bpv__CallFunc_AddComponent_ReturnValue__pf->UAudioComponent::SetSound(nullptr);
	}
}
void Alog_pawn_C__pf2403237688::bpf__randomBirdChirps__pf(float bpp__time__pf)
{
	float bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	FVector bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	float bpv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	float bpv__CallFunc_BreakVector_X__pf{};
	float bpv__CallFunc_BreakVector_Y__pf{};
	float bpv__CallFunc_BreakVector_Z__pf{};
	int32 bpv__CallFunc_FCeil_ReturnValue__pf{};
	float bpv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bool bpv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_RandomPointInBoundingBox_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	USoundBase* bpv__CallFunc_Array_Get_Item__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(5.000000, bpp__time__pf);
				bpv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(0.000000, bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpv__CallFunc_FCeil_ReturnValue__pf = UKismetMathLibrary::FCeil(bpv__CallFunc_RandomFloatInRange_ReturnValue__pf);
				bpv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__CallFunc_FCeil_ReturnValue__pf, 1);
				if (!bpv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if(IsValid(bpv__Camera__pf))
				{
					bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentLocation();
				}
				UKismetMathLibrary::BreakVector(bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, /*out*/ bpv__CallFunc_BreakVector_X__pf, /*out*/ bpv__CallFunc_BreakVector_Y__pf, /*out*/ bpv__CallFunc_BreakVector_Z__pf);
				bpv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__CallFunc_BreakVector_Z__pf, 1000.000000);
				bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpv__CallFunc_BreakVector_X__pf, bpv__CallFunc_BreakVector_Y__pf, bpv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(2000.000000, 2000.000000, 1000.000000);
				bpv__CallFunc_RandomPointInBoundingBox_ReturnValue__pf = UKismetMathLibrary::RandomPointInBoundingBox(bpv__CallFunc_MakeVector_ReturnValue__pf, bpv__CallFunc_MakeVector_ReturnValue2__pf);
				bpv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__birdSounds__pf);
				bpv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__CallFunc_Array_Length_ReturnValue__pf, 1);
				bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__birdSounds__pf, bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf, /*out*/ bpv__CallFunc_Array_Get_Item__pf);
				UGameplayStatics::PlaySoundAtLocation(this, bpv__CallFunc_Array_Get_Item__pf, bpv__CallFunc_RandomPointInBoundingBox_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Alog_pawn_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed), nullptr);
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Alog_pawn_C__pf2403237688::bpf__setupPlayerHeightForPlatforms__pf()
{
	FName bpv__CallFunc_GetHMDDeviceName_ReturnValue__pf{};
	bool bpv__K2Node_SwitchName_CmpSuccess__pf{};
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpv__CallFunc_K2_AddLocalOffset_SweepHitResult__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__CallFunc_GetHMDDeviceName_ReturnValue__pf = UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName();
				bpv__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("OculusRift")));
				if (!bpv__K2Node_SwitchName_CmpSuccess__pf)
				{
					CurrentState = 2;
					break;
				}
				bpv__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("SteamVR")));
				if (!bpv__K2Node_SwitchName_CmpSuccess__pf)
				{
					CurrentState = 2;
					break;
				}
				bpv__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("PSVR")));
				if (!bpv__K2Node_SwitchName_CmpSuccess__pf)
				{
					CurrentState = 3;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 2:
			{
				UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Floor);
				CurrentState = -1;
				break;
			}
		case 3:
			{
				UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Eye);
			}
		case 4:
			{
				bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__DefaultPlayerHeight__pf);
				if(IsValid(bpv__VROrigin__pf))
				{
					bpv__VROrigin__pf->USceneComponent::K2_AddLocalOffset(bpv__CallFunc_MakeVector_ReturnValue__pf, false, /*out*/ bpv__CallFunc_K2_AddLocalOffset_SweepHitResult__pf, false);
				}
			}
		case 5:
			{
				bpv__UseControllerRollToRotate__pf = true;
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Alog_pawn_C__pf2403237688::bpf__spawnAndAttachMotionControllers__pf()
{
	FTransform bpv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AActor* bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf{};
	ABP_MotionController_C__pf2307895703* bpv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	ABP_MotionController_C__pf2307895703* bpv__CallFunc_FinishSpawningActor_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				StateStack.Push(6);
			}
		case 2:
			{
				bpv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_MotionController_C__pf2307895703::StaticClass(), bpv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, this);
			}
		case 3:
			{
				bpv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABP_MotionController_C__pf2307895703>(UGameplayStatics::FinishSpawningActor(bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf, bpv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 4:
			{
				bpv__LeftController__pf = bpv__CallFunc_FinishSpawningActor_ReturnValue__pf;
			}
		case 5:
			{
				if(IsValid(bpv__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					bpv__CallFunc_FinishSpawningActor_ReturnValue__pf->AActor::K2_AttachToComponent(bpv__VROrigin__pf, FName(TEXT("None")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				bpv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_MotionController_C__pf2307895703::StaticClass(), bpv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, this);
			}
		case 7:
			{
				UKismetSystemLibrary::SetBytePropertyByName(bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Hand")), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Right)));
			}
		case 8:
			{
				bpv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpv__CallFunc_FinishSpawningActor_ReturnValue2__pf = CastChecked<ABP_MotionController_C__pf2307895703>(UGameplayStatics::FinishSpawningActor(bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 9:
			{
				bpv__RightController__pf = bpv__CallFunc_FinishSpawningActor_ReturnValue2__pf;
			}
		case 10:
			{
				if(IsValid(bpv__CallFunc_FinishSpawningActor_ReturnValue2__pf))
				{
					bpv__CallFunc_FinishSpawningActor_ReturnValue2__pf->AActor::K2_AttachToComponent(bpv__VROrigin__pf, FName(TEXT("None")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void Alog_pawn_C__pf2403237688::bpf__leftHandTeleportRotation__pf()
{
	float bpv__CallFunc_GetInputAxisValue_ReturnValue__pf{};
	float bpv__CallFunc_GetInputAxisValue_ReturnValue2__pf{};
	FRotator bpv__CallFunc_GetRotationFromInput_ReturnValue__pf(EForceInit::ForceInit);
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bool  __Local__50 = false;
				if (!((IsValid(bpv__LeftController__pf)) ? (bpv__LeftController__pf->bpv__IsTeleporterActive__pf) : (__Local__50)))
				{
					CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpv__CallFunc_GetInputAxisValue_ReturnValue__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbLeft_Y")));
				bpv__CallFunc_GetInputAxisValue_ReturnValue2__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbLeft_X")));
				bpv__CallFunc_GetRotationFromInput_ReturnValue__pf = bpf__GetRotationFromInput__pf(bpv__CallFunc_GetInputAxisValue_ReturnValue__pf, bpv__CallFunc_GetInputAxisValue_ReturnValue2__pf, bpv__LeftController__pf);
				if(IsValid(bpv__LeftController__pf))
				{
					bpv__LeftController__pf->bpv__TeleportRotation__pf = bpv__CallFunc_GetRotationFromInput_ReturnValue__pf;
				}
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Alog_pawn_C__pf2403237688::bpf__rightHandTeleportRotation__pf()
{
	float bpv__CallFunc_GetInputAxisValue_ReturnValue__pf{};
	float bpv__CallFunc_GetInputAxisValue_ReturnValue2__pf{};
	FRotator bpv__CallFunc_GetRotationFromInput_ReturnValue__pf(EForceInit::ForceInit);
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bool  __Local__51 = false;
				if (!((IsValid(bpv__RightController__pf)) ? (bpv__RightController__pf->bpv__IsTeleporterActive__pf) : (__Local__51)))
				{
					CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpv__CallFunc_GetInputAxisValue_ReturnValue__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbRight_X")));
				bpv__CallFunc_GetInputAxisValue_ReturnValue2__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbRight_Y")));
				bpv__CallFunc_GetRotationFromInput_ReturnValue__pf = bpf__GetRotationFromInput__pf(bpv__CallFunc_GetInputAxisValue_ReturnValue2__pf, bpv__CallFunc_GetInputAxisValue_ReturnValue__pf, bpv__RightController__pf);
				if(IsValid(bpv__RightController__pf))
				{
					bpv__RightController__pf->bpv__TeleportRotation__pf = bpv__CallFunc_GetRotationFromInput_ReturnValue__pf;
				}
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Alog_pawn_C__pf2403237688::bpf__logSpawner__pf()
{
}
void Alog_pawn_C__pf2403237688::bpf__positionHolster__pf()
{
	FRotator bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpv__CallFunc_BreakRotator_Roll__pf{};
	float bpv__CallFunc_BreakRotator_Pitch__pf{};
	float bpv__CallFunc_BreakRotator_Yaw__pf{};
	FVector bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	float bpv__CallFunc_BreakVector_X__pf{};
	float bpv__CallFunc_BreakVector_Y__pf{};
	float bpv__CallFunc_BreakVector_Z__pf{};
	float bpv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpv__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf{};
	if(IsValid(bpv__Camera__pf))
	{
		bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentRotation();
	}
	UKismetMathLibrary::BreakRotator(bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, /*out*/ bpv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpv__CallFunc_BreakRotator_Yaw__pf);
	if(IsValid(bpv__Camera__pf))
	{
		bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentLocation();
	}
	bpv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpv__CallFunc_BreakRotator_Yaw__pf);
	UKismetMathLibrary::BreakVector(bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, /*out*/ bpv__CallFunc_BreakVector_X__pf, /*out*/ bpv__CallFunc_BreakVector_Y__pf, /*out*/ bpv__CallFunc_BreakVector_Z__pf);
	bpv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__CallFunc_BreakVector_Z__pf, 60.000000);
	bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpv__CallFunc_BreakVector_X__pf, bpv__CallFunc_BreakVector_Y__pf, bpv__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
	if(IsValid(bpv__holster__pf))
	{
		bpv__holster__pf->USceneComponent::K2_SetWorldLocationAndRotation(bpv__CallFunc_MakeVector_ReturnValue__pf, bpv__CallFunc_MakeRotator_ReturnValue__pf, true, /*out*/ bpv__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf, false);
	}
}
void Alog_pawn_C__pf2403237688::bpf__tryToRotate__pf(float bpp__axisValue__pf, float bpp__axisValue2__pf)
{
	float bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	bool bpv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpp__axisValue__pf, bpv__axisThreshold__pf);
				if (!bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpf__rotateLeft__pf();
				CurrentState = -1;
				break;
			}
		case 3:
			{
				bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__axisThreshold__pf, -1.000000);
				bpv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpp__axisValue2__pf, bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				if (!bpv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bpf__rotateRight__pf();
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Alog_pawn_C__pf2403237688::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__52 = TEXT("/Game/audio/ambient");
	const TCHAR* __Local__53 = TEXT("/Game/audio/chop");
	const TCHAR* __Local__54 = TEXT("/Game/audio");
	const TCHAR* __Local__55 = TEXT("/Game/Geometry/Meshes");
	const TCHAR* __Local__56 = TEXT("/Game/props/menu");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__52, TEXT("ambience_forest_birds_01"), TEXT("ambience_forest_birds_01"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__52, TEXT("ambience_forest_birds_02"), TEXT("ambience_forest_birds_02"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__52, TEXT("ambience_forest_birds_03"), TEXT("ambience_forest_birds_03"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__53, TEXT("wc_1"), TEXT("wc_1"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__54, TEXT("chopEffectAttenuation"), TEXT("chopEffectAttenuation"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
		FBlueprintDependencyData(__Local__53, TEXT("wc_2"), TEXT("wc_2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__53, TEXT("wc_3"), TEXT("wc_3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__53, TEXT("wc_4"), TEXT("wc_4"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__53, TEXT("wc_5"), TEXT("wc_5"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__53, TEXT("wc_6"), TEXT("wc_6"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__53, TEXT("wc_7"), TEXT("wc_7"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__53, TEXT("wc_8"), TEXT("wc_8"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__55, TEXT("1M_Cube"), TEXT("1M_Cube"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__56, TEXT("menu"), TEXT("menu"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void Alog_pawn_C__pf2403237688::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void Alog_pawn_C__pf2403237688::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__57 = TEXT("/Game/props/axe");
	const TCHAR* __Local__58 = TEXT("/Game/materials");
	const TCHAR* __Local__59 = TEXT("/Game/VirtualReality/Meshes");
	const TCHAR* __Local__60 = TEXT("/Game/VirtualReality/Materials");
	const TCHAR* __Local__61 = TEXT("/Game/ProtoVRHand/Meshes/Villain");
	const TCHAR* __Local__62 = TEXT("/Game/ProtoVRHand/Animations");
	const TCHAR* __Local__63 = TEXT("/Engine/EngineMaterials");
	const TCHAR* __Local__64 = TEXT("/Engine/EngineFonts");
	const TCHAR* __Local__65 = TEXT("/Engine/BasicShapes");
	const TCHAR* __Local__66 = TEXT("/Game/props/log");
	const TCHAR* __Local__67 = TEXT("/Game/audio");
	const TCHAR* __Local__68 = TEXT("/Game/particles");
	const TCHAR* __Local__69 = TEXT("/Game/trees/conifer_low_poly_leaves");
	const TCHAR* __Local__70 = TEXT("/Game/audio/hapticEffects");
	const TCHAR* __Local__71 = TEXT("/Game/audio/texture");
	const TCHAR* __Local__72 = TEXT("/Game/audio/woosh");
	const TCHAR* __Local__73 = TEXT("/Game/Blueprints");
	const TCHAR* __Local__74 = TEXT("/Game/VirtualRealityBP/Blueprints");
	const TCHAR* __Local__75 = TEXT("/Game/ProtoVRHand/Blueprints/Example");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__57, TEXT("axe"), TEXT("axe"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__58, TEXT("ghostAxe_off"), TEXT("ghostAxe_off"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__59, TEXT("BeamMesh"), TEXT("BeamMesh"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__60, TEXT("M_SplineArcMat"), TEXT("M_SplineArcMat"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__61, TEXT("Skel_Hand_Skeleton"), TEXT("Skel_Hand_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__62, TEXT("BS_LeftGrip"), TEXT("BS_LeftGrip"), TEXT("/Script/Engine"), TEXT("BlendSpace1D")),
		FBlueprintDependencyData(__Local__61, TEXT("Skel_Hand"), TEXT("Skel_Hand"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__63, TEXT("DefaultTextMaterialOpaque"), TEXT("DefaultTextMaterialOpaque"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__64, TEXT("RobotoDistanceField"), TEXT("RobotoDistanceField"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__65, TEXT("Sphere"), TEXT("Sphere"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__60, TEXT("M_ArcEndpoint"), TEXT("M_ArcEndpoint"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__65, TEXT("Cylinder"), TEXT("Cylinder"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__60, TEXT("MI_TeleportCylinderPreview"), TEXT("MI_TeleportCylinderPreview"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__59, TEXT("SM_FatCylinder"), TEXT("SM_FatCylinder"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__59, TEXT("BeaconDirection"), TEXT("BeaconDirection"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__59, TEXT("1x1_cube"), TEXT("1x1_cube"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__60, TEXT("MI_ChaperoneOutline"), TEXT("MI_ChaperoneOutline"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__66, TEXT("log"), TEXT("log"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__67, TEXT("chopConcurrency"), TEXT("chopConcurrency"), TEXT("/Script/Engine"), TEXT("SoundConcurrency")),
		FBlueprintDependencyData(__Local__68, TEXT("woodchipParticle"), TEXT("woodchipParticle"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__69, TEXT("choppable_conifer_low_poly_leaves"), TEXT("choppable_conifer_low_poly_leaves"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__70, TEXT("genericRumbleEffect"), TEXT("genericRumbleEffect"), TEXT("/Script/Engine"), TEXT("HapticFeedbackEffect_Curve")),
		FBlueprintDependencyData(__Local__71, TEXT("wtx_1"), TEXT("wtx_1"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__71, TEXT("wtx_2"), TEXT("wtx_2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__71, TEXT("wtx_3"), TEXT("wtx_3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__71, TEXT("wtx_4"), TEXT("wtx_4"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__71, TEXT("wtx_5"), TEXT("wtx_5"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__72, TEXT("swoosh_01"), TEXT("swoosh_01"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__72, TEXT("swoosh_02"), TEXT("swoosh_02"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__72, TEXT("swoosh_03"), TEXT("swoosh_03"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__72, TEXT("swoosh_04"), TEXT("swoosh_04"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__72, TEXT("swoosh_05"), TEXT("swoosh_05"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__72, TEXT("swoosh_06"), TEXT("swoosh_06"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__57, TEXT("axe_head_Inst"), TEXT("axe_head_Inst"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__58, TEXT("MenuTextMatInst"), TEXT("MenuTextMatInst"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__58, TEXT("bsodMat"), TEXT("bsodMat"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__73, TEXT("holster"), TEXT("holster_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__73, TEXT("axe"), TEXT("axe_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__74, TEXT("BP_MotionController"), TEXT("BP_MotionController_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__62, TEXT("AnimBP_LeftHand"), TEXT("AnimBP_LeftHand_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__73, TEXT("choppable"), TEXT("choppable_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__74, TEXT("PickupActorInterface"), TEXT("PickupActorInterface_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__73, TEXT("menu"), TEXT("menu_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__75, TEXT("Enum_Grip"), TEXT("Enum_Grip"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__Alog_pawn_C__pf2403237688
{
	FRegisterHelper__Alog_pawn_C__pf2403237688()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/Blueprints/log_pawn"), &Alog_pawn_C__pf2403237688::__StaticDependenciesAssets);
	}
	static FRegisterHelper__Alog_pawn_C__pf2403237688 Instance;
};
FRegisterHelper__Alog_pawn_C__pf2403237688 FRegisterHelper__Alog_pawn_C__pf2403237688::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
