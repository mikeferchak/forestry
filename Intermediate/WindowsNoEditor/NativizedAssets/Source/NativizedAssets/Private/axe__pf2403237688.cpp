#include "NativizedAssets.h"
#include "axe__pf2403237688.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
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
#include "axe__pf2403237688.h"
#include "BP_MotionController__pf2307895703.h"
#include "ProceduralMeshComponent.h"
#include "choppable__pf2403237688.h"
#include "Runtime/Foliage/Public/FoliageInstancedStaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/InstancedStaticMeshComponent.h"
#include "Runtime/Engine/Public/PhysicsSerializer.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Enum_Grip__pf2873424652.h"
#include "Runtime/Engine/Classes/Components/SplineMeshComponent.h"
#include "SteamVRChaperoneComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Components/SplineComponent.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
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
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "AnimBP_LeftHand__pf4240717260.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
Aaxe_C__pf2403237688::Aaxe_C__pf2403237688(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (Aaxe_C__pf2403237688::StaticClass() == GetClass()))
	{
		Aaxe_C__pf2403237688::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("StaticMeshComponent0")));
	__Local__0->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__0->bOverrideLightMapRes = true;
	__Local__0->bUseDefaultCollision = false;
	__Local__0->OverrideMaterials = TArray<UMaterialInterface*> ();
	__Local__0->OverrideMaterials.Reserve(1);
	__Local__0->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	__Local__0->bGenerateOverlapEvents = true;
	__Local__0->bMultiBodyOverlap = true;
	__Local__0->bSingleSampleShadowFromStationaryLights = true;
	auto& __Local__1 = (*(AccessPrivateProperty<FName >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__1 = FName(TEXT("Custom"));
	__Local__0->BodyInstance.bNotifyRigidBodyCollision = true;
	__Local__0->BodyInstance.bSimulatePhysics = true;
	__Local__0->BodyInstance.bEnableGravity = false;
	__Local__0->BodyInstance.bAutoWeld = false;
	auto& __Local__2 = (*(AccessPrivateProperty<float >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
	__Local__2 = 3.000000f;
	__Local__0->BodyInstance.COMNudge = FVector(0.000000, 0.000000, 16.623493);
	auto& __Local__3 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__3 = ECollisionChannel::ECC_PhysicsBody;
	__Local__0->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	__Local__0->Mobility = EComponentMobility::Type::Movable;
	static TWeakObjectPtr<UProperty> __Local__5{};
	const UProperty* __Local__4 = __Local__5.Get();
	if (nullptr == __Local__4)
	{
		__Local__4 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__4);
		__Local__5 = __Local__4;
	}
	(((UBoolProperty*)__Local__4)->SetPropertyValue_InContainer((__Local__0), false, 0));
	bpv__canchop__pf = true;
	bpv__init_with_physics__pf = false;
	bpv__init_with_gravity__pf = false;
	bpv__chop1__pf = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__chopSounds__pf = TArray<USoundBase*> ();
	bpv__chopSounds__pf.Reserve(8);
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__chopThreshold__pf = 1000.000000f;
	bpv__hitSounds__pf = TArray<USoundBase*> ();
	bpv__hitSounds__pf.Reserve(5);
	bpv__hitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed));
	bpv__hitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed));
	bpv__hitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed));
	bpv__hitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed));
	bpv__hitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed));
	bpv__hasBeenGripped__pf = false;
	bpv__controller__pf = nullptr;
	bpv__canDespawn__pf = true;
	bpv__axeCollisionLineLength__pf = 12.500000f;
	bpv__axeCollisionLineOffset__pf = 53.000000f;
	bpv__isGrabbing__pf = false;
	bpv__NewVar_0__pf = false;
	bpv__grabbingHandComponent__pf = nullptr;
	bpv__throwSounds__pf = TArray<USoundBase*> ();
	bpv__throwSounds__pf.Reserve(6);
	bpv__throwSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed));
	bpv__throwSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed));
	bpv__throwSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed));
	bpv__throwSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed));
	bpv__throwSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed));
	bpv__throwSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed));
	PrimaryActorTick.bCanEverTick = true;
	bCanBeDamaged = true;
}
void Aaxe_C__pf2403237688::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void Aaxe_C__pf2403237688::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	extern UClass* Z_Construct_UClass_ABP_MotionController_C__pf2307895703();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABP_MotionController_C__pf2307895703());
	extern UClass* Z_Construct_UClass_UAnimBP_LeftHand_C__pf4240717260();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UAnimBP_LeftHand_C__pf4240717260());
	extern UClass* Z_Construct_UClass_Achoppable_C__pf2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_Achoppable_C__pf2403237688());
	extern UClass* Z_Construct_UClass_UPickupActorInterface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPickupActorInterface_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__6 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__6);
	__Local__6->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__6->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__6->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__7 = __Local__6->ComponentDelegateBindings[0];
	__Local__7.ComponentPropertyName = FName(TEXT("StaticMeshComponent"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnComponentHit"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature"));
}
void Aaxe_C__pf2403237688::bpf__ExecuteUbergraph_axe__pf_0(int32 bpp__EntryPoint__pf)
{
	FVector bpv__CallFunc_GetComponentVelocity_ReturnValue__pf(EForceInit::ForceInit);
	float bpv__CallFunc_VSize_ReturnValue__pf{};
	bool bpv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				if(IsValid(StaticMeshComponent))
				{
					bpv__CallFunc_GetComponentVelocity_ReturnValue__pf = StaticMeshComponent->GetComponentVelocity();
				}
				bpv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpv__CallFunc_GetComponentVelocity_ReturnValue__pf);
				bpv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpv__CallFunc_VSize_ReturnValue__pf, 500.000000);
				if (!bpv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 2:
			{
				if(IsValid(StaticMeshComponent))
				{
					bpv__CallFunc_GetComponentVelocity_ReturnValue__pf = StaticMeshComponent->GetComponentVelocity();
				}
				bpv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpv__CallFunc_GetComponentVelocity_ReturnValue__pf);
				bpf__randomSwooshSound__pf(bpv__CallFunc_VSize_ReturnValue__pf);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				StateStack.Push(1);
			}
		case 23:
			{
				bpv__canDespawn__pf = true;
			}
		case 24:
			{
				if(IsValid(b0l__K2Node_Event_component__pf))
				{
					b0l__K2Node_Event_component__pf->SetSimulatePhysics(true);
				}
			}
		case 25:
			{
				if(IsValid(b0l__K2Node_Event_component__pf))
				{
					b0l__K2Node_Event_component__pf->USceneComponent::K2_DetachFromComponent(EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, true);
				}
			}
		case 26:
			{
				bpv__controller__pf = nullptr;
			}
		case 27:
			{
				UKismetSystemLibrary::Delay(this, 20.000000, FLatentActionInfo(28, 1680933309, TEXT("ExecuteUbergraph_axe_0"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				CurrentState = 29;
				break;
			}
		case 29:
			{
				if (!bpv__canDespawn__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 30:
			{
				K2_DestroyActor();
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 54:
			{
				CurrentState = 22;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void Aaxe_C__pf2403237688::bpf__ExecuteUbergraph_axe__pf_1(int32 bpp__EntryPoint__pf)
{
	FVector bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_K2_GetComponentRotation_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GetUpVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Add_VectorVector_ReturnValue2__pf(EForceInit::ForceInit);
	bool bpv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 3:
			{
				CurrentState = 4;
				break;
			}
		case 4:
			{
				if (!bpv__canchop__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 5:
			{
				if (!bpv__isGrabbing__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array__pf[0] = EObjectTypeQuery::ObjectTypeQuery2;
				b0l__K2Node_MakeArray_Array__pf[1] = EObjectTypeQuery::ObjectTypeQuery1;
				b0l__K2Node_MakeArray_Array__pf[2] = EObjectTypeQuery::ObjectTypeQuery1;
				if(IsValid(StaticMeshComponent))
				{
					bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = StaticMeshComponent->USceneComponent::K2_GetComponentLocation();
				}
				if(IsValid(StaticMeshComponent))
				{
					bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = StaticMeshComponent->USceneComponent::K2_GetComponentRotation();
				}
				bpv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf);
				if(IsValid(StaticMeshComponent))
				{
					bpv__CallFunc_K2_GetComponentRotation_ReturnValue2__pf = StaticMeshComponent->USceneComponent::K2_GetComponentRotation();
				}
				bpv__CallFunc_GetUpVector_ReturnValue__pf = UKismetMathLibrary::GetUpVector(bpv__CallFunc_K2_GetComponentRotation_ReturnValue2__pf);
				bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__CallFunc_GetForwardVector_ReturnValue__pf, bpv__axeCollisionLineLength__pf);
				bpv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__CallFunc_GetUpVector_ReturnValue__pf, bpv__axeCollisionLineOffset__pf);
				bpv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf);
				bpv__CallFunc_Add_VectorVector_ReturnValue2__pf = UKismetMathLibrary::Add_VectorVector(bpv__CallFunc_Add_VectorVector_ReturnValue__pf, bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingleForObjects(this, bpv__CallFunc_Add_VectorVector_ReturnValue__pf, bpv__CallFunc_Add_VectorVector_ReturnValue2__pf, b0l__K2Node_MakeArray_Array__pf, false, b0l__Temp_object_Variable__pf, EDrawDebugTrace::None, /*out*/ b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), b0l__K2Node_Event_DeltaSeconds__pf);
			}
		case 7:
			{
				if (!bpv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				StateStack.Push(14);
			}
		case 9:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				b0l__K2Node_DynamicCast_AsFoliage_Instanced_Static_Mesh_Component__pf = Cast<UFoliageInstancedStaticMeshComponent>(b0l__CallFunc_BreakHitResult_HitComponent__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsFoliage_Instanced_Static_Mesh_Component__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 10:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpf__tryToChopFoliage__pf(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, b0l__CallFunc_BreakHitResult_HitActor__pf, b0l__K2Node_DynamicCast_AsFoliage_Instanced_Static_Mesh_Component__pf, FVector(100000.000000,0.000000,0.000000), /*out*/ b0l__CallFunc_tryToChopFoliage_sound2__pf, /*out*/ b0l__CallFunc_tryToChopFoliage_success2__pf);
			}
		case 11:
			{
				if (!b0l__CallFunc_tryToChopFoliage_success2__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				bpv__canchop__pf = false;
			}
		case 13:
			{
				UKismetSystemLibrary::Delay(this, 0.100000, FLatentActionInfo(20, 2147483647, TEXT("ExecuteUbergraph_axe_1"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				b0l__K2Node_DynamicCast_AsChoppable__pf = Cast<Achoppable_C__pf2403237688>(b0l__CallFunc_BreakHitResult_HitActor__pf);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsChoppable__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess4__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 15:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpf__tryToChopProcMesh__pf(b0l__K2Node_DynamicCast_AsChoppable__pf, b0l__CallFunc_BreakHitResult_HitComponent__pf, FVector(100000.000000,0.000000,0.000000), b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf);
			}
		case 16:
			{
				bpv__canchop__pf = false;
			}
		case 17:
			{
				UKismetSystemLibrary::Delay(this, 0.100000, FLatentActionInfo(18, 895995408, TEXT("ExecuteUbergraph_axe_1"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				CurrentState = 19;
				break;
			}
		case 19:
			{
				bpv__canchop__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				CurrentState = 21;
				break;
			}
		case 21:
			{
				bpv__canchop__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 48:
			{
				CurrentState = 3;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void Aaxe_C__pf2403237688::bpf__ExecuteUbergraph_axe__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_K2_AttachToComponent_ReturnValue__pf{};
	AActor* bpv__CallFunc_GetOwner_ReturnValue__pf{};
	FTransform bpv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 31:
			{
				bpv__isGrabbing__pf = true;
			}
		case 32:
			{
				bpv__canDespawn__pf = false;
			}
		case 33:
			{
				if(IsValid(b0l__K2Node_Event_Component2__pf))
				{
					b0l__K2Node_Event_Component2__pf->SetSimulatePhysics(false);
				}
			}
		case 34:
			{
				if(IsValid(StaticMeshComponent))
				{
					StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				}
			}
		case 35:
			{
				StateStack.Push(40);
			}
		case 36:
			{
				b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf = Cast<UMotionControllerComponent>(b0l__K2Node_Event_AttachTo__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 37:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf))
				{
					bpv__CallFunc_GetOwner_ReturnValue__pf = b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf->UActorComponent::GetOwner();
				}
				b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf = Cast<ABP_MotionController_C__pf2307895703>(bpv__CallFunc_GetOwner_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 38:
			{
				bpv__controller__pf = b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf;
			}
		case 39:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf) && IsValid(b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf->bpv__axeGrabDirection__pf))
				{
					bpv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf->bpv__axeGrabDirection__pf->USceneComponent::K2_GetComponentToWorld();
				}
				if(IsValid(StaticMeshComponent))
				{
					StaticMeshComponent->USceneComponent::K2_SetWorldTransform(bpv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldTransform_SweepHitResult__pf, true);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 40:
			{
				if(IsValid(b0l__K2Node_Event_Component2__pf))
				{
					bpv__CallFunc_K2_AttachToComponent_ReturnValue__pf = b0l__K2Node_Event_Component2__pf->USceneComponent::K2_AttachToComponent(b0l__K2Node_Event_AttachTo__pf, FName(TEXT("None")), EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false);
				}
			}
		case 41:
			{
				if (!bpv__CallFunc_K2_AttachToComponent_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 42:
			{
				bpv__hasBeenGripped__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 57:
			{
				CurrentState = 31;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void Aaxe_C__pf2403237688::bpf__ExecuteUbergraph_axe__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 43);
	return; //KCST_EndOfThread
}
void Aaxe_C__pf2403237688::bpf__ExecuteUbergraph_axe__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpv__CallFunc_IsValid_ReturnValue2__pf{};
	bool bpv__CallFunc_IsValid_ReturnValue3__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 44:
			{
				bpv__canchop__pf = false;
			}
		case 45:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(46, 376807489, TEXT("ExecuteUbergraph_axe_4"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 46:
			{
				CurrentState = 47;
				break;
			}
		case 47:
			{
				bpv__canchop__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 49:
			{
				bpv__CallFunc_IsValid_ReturnValue3__pf = UKismetSystemLibrary::IsValid(bpv__controller__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue3__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 50:
			{
				if(IsValid(bpv__controller__pf))
				{
					bpv__controller__pf->bpf__RumbleController__pf(0.300000);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 51:
			{
				StateStack.Push(44);
				StateStack.Push(52);
				StateStack.Push(53);
				CurrentState = 49;
				break;
			}
		case 52:
			{
				bpf__tryToChopProcMesh__pf(b0l__K2Node_ComponentBoundEvent_OtherActor__pf, b0l__K2Node_ComponentBoundEvent_OtherComp__pf, b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf, b0l__K2Node_ComponentBoundEvent_Hit__pf);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 53:
			{
				bpf__tryToChopFoliage__pf(b0l__K2Node_ComponentBoundEvent_Hit__pf, b0l__K2Node_ComponentBoundEvent_OtherActor__pf, b0l__K2Node_ComponentBoundEvent_OtherComp__pf, b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf, /*out*/ b0l__CallFunc_tryToChopFoliage_sound__pf, /*out*/ b0l__CallFunc_tryToChopFoliage_success__pf);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 58:
			{
				bpv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue2__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 59:
			{
				bpv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				CurrentState = 51;
				break;
			}
		case 61:
			{
				CurrentState = 58;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void Aaxe_C__pf2403237688::bpf__ExecuteUbergraph_axe__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 60);
	// optimized KCST_UnconditionalGoto
	if(IsValid(StaticMeshComponent))
	{
		StaticMeshComponent->SetSimulatePhysics(bpv__init_with_physics__pf);
	}
	if(IsValid(StaticMeshComponent))
	{
		StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	return; //KCST_EndOfThread
}
void Aaxe_C__pf2403237688::bpf__ExecuteUbergraph_axe__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 62);
	return; //KCST_EndOfThread
}
void Aaxe_C__pf2403237688::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_axe__pf_1(48);
}
void Aaxe_C__pf2403237688::bpf__DropComponent__pf(UPrimitiveComponent* bpp__component__pf)
{
	b0l__K2Node_Event_component__pf = bpp__component__pf;
	bpf__ExecuteUbergraph_axe__pf_0(54);
}
void Aaxe_C__pf2403237688::bpf__PickupComponent__pf(USceneComponent* bpp__AttachTo__pf, UPrimitiveComponent* bpp__Component__pf)
{
	b0l__K2Node_Event_AttachTo__pf = bpp__AttachTo__pf;
	b0l__K2Node_Event_Component2__pf = bpp__Component__pf;
	bpf__ExecuteUbergraph_axe__pf_2(57);
}
void Aaxe_C__pf2403237688::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_axe__pf_5(60);
}
void Aaxe_C__pf2403237688::bpf__BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const)
{
	typedef FHitResult  T__Local__12;
	T__Local__12& bpp__Hit__pf = *const_cast<T__Local__12 *>(&bpp__Hit__pf__const);
	b0l__K2Node_ComponentBoundEvent_HitComponent__pf = bpp__HitComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf = bpp__NormalImpulse__pf;
	b0l__K2Node_ComponentBoundEvent_Hit__pf = bpp__Hit__pf;
	bpf__ExecuteUbergraph_axe__pf_4(61);
}
void Aaxe_C__pf2403237688::bpf__Drop__pf()
{
	bpf__ExecuteUbergraph_axe__pf_6(62);
}
void Aaxe_C__pf2403237688::bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
{
	b0l__K2Node_Event_AttachTo2__pf = bpp__AttachTo__pf;
	bpf__ExecuteUbergraph_axe__pf_3(43);
}
void Aaxe_C__pf2403237688::bpf__UserConstructionScript__pf()
{
}
void Aaxe_C__pf2403237688::bpf__randomChopSound__pf(FVector bpp__impulse__pf, FHitResult bpp__hit__pf, /*out*/ USoundBase*& bpp__sound__pf)
{
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
	int32 bpv__CallFunc_Array_Length_ReturnValue__pf{};
	float bpv__CallFunc_VSize_ReturnValue__pf{};
	int32 bpv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	float bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	int32 bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	float bpv__CallFunc_FClamp_ReturnValue__pf{};
	USoundBase* bpv__CallFunc_Array_Get_Item__pf{};
	UGameplayStatics::BreakHitResult(bpp__hit__pf, /*out*/ bpv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpv__CallFunc_BreakHitResult_TraceEnd__pf);
	bpv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__chopSounds__pf);
	bpv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpp__impulse__pf);
	bpv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__CallFunc_Array_Length_ReturnValue__pf, 1);
	bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__CallFunc_VSize_ReturnValue__pf, 2500.000000);
	bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpv__CallFunc_Subtract_IntInt_ReturnValue__pf);
	bpv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 0.000000, 5.000000);
	FCustomThunkTemplates::Array_Get(bpv__chopSounds__pf, bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf, /*out*/ bpv__CallFunc_Array_Get_Item__pf);
	UGameplayStatics::PlaySoundAtLocation(this, bpv__CallFunc_Array_Get_Item__pf, bpv__CallFunc_BreakHitResult_ImpactPoint__pf, FRotator(0.000000,0.000000,0.000000), bpv__CallFunc_FClamp_ReturnValue__pf, 1.000000, 0.000000, CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed), nullptr);
	bpv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__chopSounds__pf);
	bpv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__CallFunc_Array_Length_ReturnValue__pf, 1);
	bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpv__CallFunc_Subtract_IntInt_ReturnValue__pf);
	FCustomThunkTemplates::Array_Get(bpv__chopSounds__pf, bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf, /*out*/ bpv__CallFunc_Array_Get_Item__pf);
	bpp__sound__pf = bpv__CallFunc_Array_Get_Item__pf;
}
void Aaxe_C__pf2403237688::bpf__randomHitSound__pf(FVector bpp__impulse__pf, FHitResult bpp__hit__pf)
{
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
	int32 bpv__CallFunc_Array_Length_ReturnValue__pf{};
	float bpv__CallFunc_VSize_ReturnValue__pf{};
	int32 bpv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	float bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	int32 bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	float bpv__CallFunc_FClamp_ReturnValue__pf{};
	USoundBase* bpv__CallFunc_Array_Get_Item__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				UGameplayStatics::BreakHitResult(bpp__hit__pf, /*out*/ bpv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__hitSounds__pf);
				bpv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpp__impulse__pf);
				bpv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__CallFunc_Array_Length_ReturnValue__pf, 1);
				bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__CallFunc_VSize_ReturnValue__pf, 2500.000000);
				bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				bpv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 0.000000, 5.000000);
				FCustomThunkTemplates::Array_Get(bpv__hitSounds__pf, bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf, /*out*/ bpv__CallFunc_Array_Get_Item__pf);
				UGameplayStatics::PlaySoundAtLocation(this, bpv__CallFunc_Array_Get_Item__pf, bpv__CallFunc_BreakHitResult_ImpactPoint__pf, FRotator(0.000000,0.000000,0.000000), bpv__CallFunc_FClamp_ReturnValue__pf, 1.000000, 0.000000, CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed), nullptr);
			}
		case 2:
			{
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Aaxe_C__pf2403237688::bpf__shouldChop__pf(FVector bpp__impulse__pf, /*out*/ bool& bpp__shouldchop__pf)
{
	float bpv__CallFunc_VSize_ReturnValue__pf{};
	bool bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpp__impulse__pf);
				bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpv__CallFunc_VSize_ReturnValue__pf, bpv__chopThreshold__pf);
				if (!bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				if (!bpv__canchop__pf)
				{
					CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpv__canchop__pf = false;
			}
		case 4:
			{
				bpp__shouldchop__pf = true;
				CurrentState = -1;
				break;
			}
		case 5:
			{
				bpp__shouldchop__pf = false;
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Aaxe_C__pf2403237688::bpf__tryToChopFoliage__pf(FHitResult bpp__hit__pf, AActor* bpp__actor__pf, UPrimitiveComponent* bpp__component__pf, FVector bpp__impulse__pf, /*out*/ USoundBase*& bpp__sound__pf, /*out*/ bool& bpp__success__pf)
{
	bool bpv__CallFunc_shouldChop_shouldchop__pf{};
	USoundBase* bpv__CallFunc_randomChopSound_sound__pf{};
	bool bpv__CallFunc_RemoveInstance_ReturnValue__pf{};
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
	FTransform bpv__CallFunc_GetInstanceTransform_OutInstanceTransform__pf{};
	bool bpv__CallFunc_GetInstanceTransform_ReturnValue__pf{};
	AActor* bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	Achoppable_C__pf2403237688* bpv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	UInstancedStaticMeshComponent* bpv__K2Node_DynamicCast_AsInstanced_Static_Mesh_Component__pf{};
	bool bpv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpv__chopSuccess__pf{};
	Achoppable_C__pf2403237688* bpv__newChoppableActor__pf{};
	int32 bpv__hitItemIndex__pf{};
	UInstancedStaticMeshComponent* bpv__foliageInstancedComponent__pf{};
	UPrimitiveComponent* bpv___component__pf{};
	AActor* bpv___actor__pf{};
	FHitResult bpv___hit__pf{};
	FVector bpv___impulse__pf(EForceInit::ForceInit);
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv___hit__pf = bpp__hit__pf;
			}
		case 2:
			{
				bpv___actor__pf = bpp__actor__pf;
			}
		case 3:
			{
				bpv___component__pf = bpp__component__pf;
			}
		case 4:
			{
				bpv___impulse__pf = bpp__impulse__pf;
			}
		case 5:
			{
				bpv__K2Node_DynamicCast_AsInstanced_Static_Mesh_Component__pf = Cast<UInstancedStaticMeshComponent>(bpv___component__pf);
				bpv__K2Node_DynamicCast_bSuccess__pf = (bpv__K2Node_DynamicCast_AsInstanced_Static_Mesh_Component__pf != nullptr);;
				if (!bpv__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = 19;
					break;
				}
			}
		case 6:
			{
				bpv__foliageInstancedComponent__pf = bpv__K2Node_DynamicCast_AsInstanced_Static_Mesh_Component__pf;
			}
		case 7:
			{
				UGameplayStatics::BreakHitResult(bpv___hit__pf, /*out*/ bpv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpv__hitItemIndex__pf = bpv__CallFunc_BreakHitResult_HitItem__pf;
			}
		case 8:
			{
				bpf__shouldChop__pf(bpv___impulse__pf, /*out*/ bpv__CallFunc_shouldChop_shouldchop__pf);
			}
		case 9:
			{
				if (!bpv__CallFunc_shouldChop_shouldchop__pf)
				{
					CurrentState = 19;
					break;
				}
			}
		case 10:
			{
				if(IsValid(bpv__foliageInstancedComponent__pf))
				{
					bpv__CallFunc_GetInstanceTransform_ReturnValue__pf = bpv__foliageInstancedComponent__pf->UInstancedStaticMeshComponent::GetInstanceTransform(bpv__hitItemIndex__pf, /*out*/ bpv__CallFunc_GetInstanceTransform_OutInstanceTransform__pf, true);
				}
				bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, Achoppable_C__pf2403237688::StaticClass(), bpv__CallFunc_GetInstanceTransform_OutInstanceTransform__pf, ESpawnActorCollisionHandlingMethod::Undefined, nullptr);
			}
		case 11:
			{
				if(IsValid(bpv__foliageInstancedComponent__pf))
				{
					bpv__CallFunc_GetInstanceTransform_ReturnValue__pf = bpv__foliageInstancedComponent__pf->UInstancedStaticMeshComponent::GetInstanceTransform(bpv__hitItemIndex__pf, /*out*/ bpv__CallFunc_GetInstanceTransform_OutInstanceTransform__pf, true);
				}
				bpv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<Achoppable_C__pf2403237688>(UGameplayStatics::FinishSpawningActor(bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpv__CallFunc_GetInstanceTransform_OutInstanceTransform__pf), ECastCheckedType::NullAllowed);
			}
		case 12:
			{
				bpv__newChoppableActor__pf = bpv__CallFunc_FinishSpawningActor_ReturnValue__pf;
			}
		case 13:
			{
				UStaticMesh*  __Local__13 = nullptr;
				if(IsValid(bpv__newChoppableActor__pf))
				{
					bpv__newChoppableActor__pf->bpv__mesh__pf = ((IsValid(bpv__foliageInstancedComponent__pf)) ? (bpv__foliageInstancedComponent__pf->StaticMesh) : (__Local__13));
				}
			}
		case 14:
			{
				if(IsValid(bpv__newChoppableActor__pf))
				{
					bpv__newChoppableActor__pf->bpf__reinitChoppableObjectEvent__pf();
				}
			}
		case 15:
			{
				if(IsValid(bpv__foliageInstancedComponent__pf))
				{
					bpv__CallFunc_RemoveInstance_ReturnValue__pf = bpv__foliageInstancedComponent__pf->RemoveInstance(bpv__hitItemIndex__pf);
				}
			}
		case 16:
			{
				if(IsValid(bpv__newChoppableActor__pf))
				{
					UProceduralMeshComponent*  __Local__14 = nullptr;
					bpv__newChoppableActor__pf->bpf__chopEvent__pf(bpv___hit__pf, StaticMeshComponent, ((IsValid(bpv__newChoppableActor__pf)) ? (bpv__newChoppableActor__pf->bpv__ProceduralMesh__pf) : (__Local__14)), FVector(0.000000,0.000000,0.000000));
				}
			}
		case 17:
			{
				bpf__randomChopSound__pf(bpv___impulse__pf, bpv___hit__pf, /*out*/ bpv__CallFunc_randomChopSound_sound__pf);
			}
		case 18:
			{
				bpv__chopSuccess__pf = true;
			}
		case 19:
			{
				bpp__sound__pf = bpv__CallFunc_randomChopSound_sound__pf;
				bpp__success__pf = bpv__chopSuccess__pf;
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Aaxe_C__pf2403237688::bpf__tryToChopProcMesh__pf(AActor* bpp__actor__pf, UPrimitiveComponent* bpp__component__pf, FVector bpp__inpulse__pf, FHitResult bpp__hit__pf)
{
	USoundBase* bpv__CallFunc_randomChopSound_sound__pf{};
	bool bpv__CallFunc_shouldChop_shouldchop__pf{};
	UProceduralMeshComponent* bpv__K2Node_DynamicCast_AsProcedural_Mesh_Component__pf{};
	bool bpv__K2Node_DynamicCast_bSuccess__pf{};
	Achoppable_C__pf2403237688* bpv__K2Node_DynamicCast_AsChoppable__pf{};
	bool bpv__K2Node_DynamicCast_bSuccess2__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__K2Node_DynamicCast_AsProcedural_Mesh_Component__pf = Cast<UProceduralMeshComponent>(bpp__component__pf);
				bpv__K2Node_DynamicCast_bSuccess__pf = (bpv__K2Node_DynamicCast_AsProcedural_Mesh_Component__pf != nullptr);;
				if (!bpv__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpf__shouldChop__pf(bpp__inpulse__pf, /*out*/ bpv__CallFunc_shouldChop_shouldchop__pf);
			}
		case 3:
			{
				if (!bpv__CallFunc_shouldChop_shouldchop__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bpv__K2Node_DynamicCast_AsChoppable__pf = Cast<Achoppable_C__pf2403237688>(bpp__actor__pf);
				bpv__K2Node_DynamicCast_bSuccess2__pf = (bpv__K2Node_DynamicCast_AsChoppable__pf != nullptr);;
				if (!bpv__K2Node_DynamicCast_bSuccess2__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				if(IsValid(bpv__K2Node_DynamicCast_AsChoppable__pf))
				{
					bpv__K2Node_DynamicCast_AsChoppable__pf->bpf__chopEvent__pf(bpp__hit__pf, StaticMeshComponent, bpv__K2Node_DynamicCast_AsProcedural_Mesh_Component__pf, bpp__inpulse__pf);
				}
			}
		case 6:
			{
				bpf__randomChopSound__pf(bpp__inpulse__pf, bpp__hit__pf, /*out*/ bpv__CallFunc_randomChopSound_sound__pf);
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Aaxe_C__pf2403237688::bpf__randomSwooshSound__pf(float bpp__velocity__pf)
{
	float bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpv__CallFunc_Divide_FloatFloat_ReturnValue2__pf{};
	float bpv__CallFunc_FClamp_ReturnValue__pf{};
	float bpv__CallFunc_FClamp_ReturnValue2__pf{};
	int32 bpv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	USoundBase* bpv__CallFunc_Array_Get_Item__pf{};
	UAudioComponent* bpv__CallFunc_SpawnSoundAttached_ReturnValue__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__throwSounds__pf);
				bpv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__CallFunc_Array_Length_ReturnValue__pf, 1);
				bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__throwSounds__pf, bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf, /*out*/ bpv__CallFunc_Array_Get_Item__pf);
				bpv__CallFunc_SpawnSoundAttached_ReturnValue__pf = UGameplayStatics::SpawnSoundAttached(bpv__CallFunc_Array_Get_Item__pf, StaticMeshComponent, FName(TEXT("None")), FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), EAttachLocation::KeepRelativeOffset, false, 1.000000, 1.000000, 0.000000, nullptr, nullptr);
			}
		case 2:
			{
				if(IsValid(bpv__CallFunc_SpawnSoundAttached_ReturnValue__pf))
				{
					bpv__CallFunc_SpawnSoundAttached_ReturnValue__pf->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Aaxe_C__pf2403237688::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed);
				}
			}
		case 3:
			{
				bpv__CallFunc_Divide_FloatFloat_ReturnValue2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpp__velocity__pf, 1500.000000);
				bpv__CallFunc_FClamp_ReturnValue2__pf = UKismetMathLibrary::FClamp(bpv__CallFunc_Divide_FloatFloat_ReturnValue2__pf, 0.000000, 3.000000);
				if(IsValid(bpv__CallFunc_SpawnSoundAttached_ReturnValue__pf))
				{
					bpv__CallFunc_SpawnSoundAttached_ReturnValue__pf->UAudioComponent::SetVolumeMultiplier(bpv__CallFunc_FClamp_ReturnValue2__pf);
				}
			}
		case 4:
			{
				bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpp__velocity__pf, 1000.000000);
				bpv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 0.500000, 2.000000);
				if(IsValid(bpv__CallFunc_SpawnSoundAttached_ReturnValue__pf))
				{
					bpv__CallFunc_SpawnSoundAttached_ReturnValue__pf->UAudioComponent::SetPitchMultiplier(bpv__CallFunc_FClamp_ReturnValue__pf);
				}
			}
		case 5:
			{
				if(IsValid(bpv__CallFunc_SpawnSoundAttached_ReturnValue__pf))
				{
					bpv__CallFunc_SpawnSoundAttached_ReturnValue__pf->UAudioComponent::Play(0.000000);
				}
			}
		case 6:
			{
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Aaxe_C__pf2403237688::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__15 = TEXT("/Game/props/axe");
	const TCHAR* __Local__16 = TEXT("/Game/audio/chop");
	const TCHAR* __Local__17 = TEXT("/Game/audio/texture");
	const TCHAR* __Local__18 = TEXT("/Game/audio/woosh");
	const TCHAR* __Local__19 = TEXT("/Game/audio");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__15, TEXT("axe"), TEXT("axe"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__15, TEXT("axe_head_Inst"), TEXT("axe_head_Inst"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__16, TEXT("wc_1"), TEXT("wc_1"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__16, TEXT("wc_2"), TEXT("wc_2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__16, TEXT("wc_3"), TEXT("wc_3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__16, TEXT("wc_4"), TEXT("wc_4"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__16, TEXT("wc_5"), TEXT("wc_5"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__16, TEXT("wc_6"), TEXT("wc_6"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__16, TEXT("wc_7"), TEXT("wc_7"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__16, TEXT("wc_8"), TEXT("wc_8"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__17, TEXT("wtx_1"), TEXT("wtx_1"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__17, TEXT("wtx_2"), TEXT("wtx_2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__17, TEXT("wtx_3"), TEXT("wtx_3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__17, TEXT("wtx_4"), TEXT("wtx_4"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__17, TEXT("wtx_5"), TEXT("wtx_5"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__18, TEXT("swoosh_01"), TEXT("swoosh_01"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__18, TEXT("swoosh_02"), TEXT("swoosh_02"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__18, TEXT("swoosh_03"), TEXT("swoosh_03"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__18, TEXT("swoosh_04"), TEXT("swoosh_04"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__18, TEXT("swoosh_05"), TEXT("swoosh_05"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__18, TEXT("swoosh_06"), TEXT("swoosh_06"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__19, TEXT("chopEffectAttenuation"), TEXT("chopEffectAttenuation"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void Aaxe_C__pf2403237688::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void Aaxe_C__pf2403237688::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
	const TCHAR* __Local__32 = TEXT("/Game/VirtualRealityBP/Blueprints");
	const TCHAR* __Local__33 = TEXT("/Game/Blueprints");
	const TCHAR* __Local__34 = TEXT("/Game/ProtoVRHand/Blueprints/Example");
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
		FBlueprintDependencyData(__Local__28, TEXT("chopConcurrency"), TEXT("chopConcurrency"), TEXT("/Script/Engine"), TEXT("SoundConcurrency")),
		FBlueprintDependencyData(__Local__29, TEXT("woodchipParticle"), TEXT("woodchipParticle"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__30, TEXT("choppable_conifer_low_poly_leaves"), TEXT("choppable_conifer_low_poly_leaves"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__31, TEXT("genericRumbleEffect"), TEXT("genericRumbleEffect"), TEXT("/Script/Engine"), TEXT("HapticFeedbackEffect_Curve")),
		FBlueprintDependencyData(__Local__32, TEXT("BP_MotionController"), TEXT("BP_MotionController_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__23, TEXT("AnimBP_LeftHand"), TEXT("AnimBP_LeftHand_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__33, TEXT("choppable"), TEXT("choppable_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__32, TEXT("PickupActorInterface"), TEXT("PickupActorInterface_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__34, TEXT("Enum_Grip"), TEXT("Enum_Grip"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__Aaxe_C__pf2403237688
{
	FRegisterHelper__Aaxe_C__pf2403237688()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/Blueprints/axe"), &Aaxe_C__pf2403237688::__StaticDependenciesAssets);
	}
	static FRegisterHelper__Aaxe_C__pf2403237688 Instance;
};
FRegisterHelper__Aaxe_C__pf2403237688 FRegisterHelper__Aaxe_C__pf2403237688::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
