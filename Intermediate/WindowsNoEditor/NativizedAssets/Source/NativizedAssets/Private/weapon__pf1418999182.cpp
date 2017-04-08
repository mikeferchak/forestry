#include "NativizedAssets.h"
#include "weapon__pf1418999182.h"
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
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
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
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
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
#include "weapon__pf1418999182.h"
#include "BP_MotionController__pf563933975.h"
#include "ProceduralMeshComponent.h"
#include "choppable__pf1172009058.h"
#include "Runtime/Foliage/Public/FoliageInstancedStaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/InstancedStaticMeshComponent.h"
#include "Runtime/Engine/Public/PhysicsSerializer.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Enum_Grip__pf3811345418.h"
#include "Runtime/Engine/Classes/Components/SplineMeshComponent.h"
#include "SteamVRChaperoneComponent.h"
#include "Runtime/Engine/Classes/Components/SplineComponent.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
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
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "choppableHitMass__pf1172009058.h"
#include "KismetProceduralMeshLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
Aweapon_C__pf1418999182::Aweapon_C__pf1418999182(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (Aweapon_C__pf1418999182::StaticClass() == GetClass()))
	{
		Aweapon_C__pf1418999182::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("StaticMeshComponent0")));
	__Local__0->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__0->bOverrideLightMapRes = true;
	__Local__0->bUseDefaultCollision = false;
	__Local__0->OverrideMaterials = TArray<UMaterialInterface*> ();
	__Local__0->OverrideMaterials.Reserve(1);
	__Local__0->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
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
	bpv__collisionLineStart__pf = CreateDefaultSubobject<USceneComponent>(TEXT("collisionLineStart"));
	bpv__collisionLineEnd__pf = CreateDefaultSubobject<USceneComponent>(TEXT("collisionLineEnd"));
	bpv__grabDirection__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("grabDirection"));
	bpv__collisionLineStart__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__collisionLineStart__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__collisionLineStart__pf->RelativeLocation = FVector(12.000000, 0.500000, 47.000000);
	bpv__collisionLineEnd__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__collisionLineEnd__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__collisionLineEnd__pf->RelativeLocation = FVector(12.000000, 0.500000, 57.000000);
	bpv__grabDirection__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__grabDirection__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__grabDirection__pf->ArrowSize = 0.500000f;
	bpv__grabDirection__pf->RelativeLocation = FVector(-6.000000, -1.000000, -1.000000);
	bpv__grabDirection__pf->RelativeRotation = FRotator(-60.000061, 0.000000, 0.000000);
	if(!bpv__grabDirection__pf->IsTemplate())
	{
		bpv__grabDirection__pf->BodyInstance.FixupData(bpv__grabDirection__pf);
	}
	bpv__canchop__pf = true;
	bpv__init_with_physics__pf = false;
	bpv__init_with_gravity__pf = false;
	bpv__chop1__pf = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__chopSounds__pf = TArray<USoundBase*> ();
	bpv__chopSounds__pf.Reserve(8);
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__chopThreshold__pf = 300.000000f;
	bpv__hitSounds__pf = TArray<USoundBase*> ();
	bpv__hitSounds__pf.Reserve(5);
	bpv__hitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed));
	bpv__hitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed));
	bpv__hitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed));
	bpv__hitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed));
	bpv__hitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed));
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
	bpv__throwSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed));
	bpv__throwSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed));
	bpv__throwSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed));
	bpv__throwSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed));
	bpv__throwSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed));
	bpv__throwSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed));
	bpv__holstered__pf = false;
	bpv__randomExtraChopForce__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__currentVelocity__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__location__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__tickDelta__pf = 0.000000f;
	bpv__speed__pf = 0.000000f;
	bpv__canPlayChopSound__pf = true;
	bpv__isStuck__pf = false;
	bpv__spawnerClass__pf = CastChecked<UClass>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed);
	PrimaryActorTick.bCanEverTick = true;
	bCanBeDamaged = true;
}
void Aweapon_C__pf1418999182::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__collisionLineStart__pf)
	{
		bpv__collisionLineStart__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__collisionLineEnd__pf)
	{
		bpv__collisionLineEnd__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__grabDirection__pf)
	{
		bpv__grabDirection__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void Aweapon_C__pf1418999182::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Blueprints/choppableItems/choppableHitMass.choppableHitMass")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/ProtoVRHand/Blueprints/Example/Enum_Grip.Enum_Grip")));
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_Achoppable_C__pf1172009058();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_Achoppable_C__pf1172009058());
	extern UClass* Z_Construct_UClass_UPickupActorInterface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPickupActorInterface_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__6 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__6);
	auto __Local__7 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__7);
	__Local__7->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__7->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__7->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__8 = __Local__7->ComponentDelegateBindings[0];
	__Local__8.ComponentPropertyName = FName(TEXT("StaticMeshComponent"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnComponentHit"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature"));
}
void Aweapon_C__pf1418999182::bpf__ExecuteUbergraph_weapon__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue3__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 9:
			{
				__CurrentState = 10;
				break;
			}
		case 10:
			{
				bpv__canPlayChopSound__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				__CurrentState = 23;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 24:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 25:
			{
				__StateStack.Push(33);
				__StateStack.Push(28);
			}
		case 26:
			{
				bpfv__CallFunc_IsValid_ReturnValue3__pf = UKismetSystemLibrary::IsValid(bpv__controller__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 27:
			{
				if(IsValid(bpv__controller__pf))
				{
					FUnconvertedWrapper__ABP_MotionController_C__pf563933975(bpv__controller__pf).bpf__RumbleController__pf(0.300000);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				bpf__tryToChopFoliage__pf(b0l__K2Node_ComponentBoundEvent_Hit__pf, b0l__K2Node_ComponentBoundEvent_OtherActor__pf, b0l__K2Node_ComponentBoundEvent_OtherComp__pf, b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf, /*out*/ b0l__CallFunc_tryToChopFoliage_sound__pf, /*out*/ b0l__CallFunc_tryToChopFoliage_success__pf);
			}
		case 29:
			{
				if (!bpv__canPlayChopSound__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 30:
			{
				bpv__canPlayChopSound__pf = false;
			}
		case 31:
			{
				bpf__randomChopSound__pf(b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf, b0l__K2Node_ComponentBoundEvent_Hit__pf, /*out*/ b0l__CallFunc_randomChopSound_sound__pf);
			}
		case 32:
			{
				UKismetSystemLibrary::Delay(this, 0.300000, FLatentActionInfo(9, 1944633129, TEXT("ExecuteUbergraph_weapon_0"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				bpf__tryToChopProcMesh__pf(b0l__K2Node_ComponentBoundEvent_OtherActor__pf, b0l__K2Node_ComponentBoundEvent_OtherComp__pf, b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf, b0l__K2Node_ComponentBoundEvent_Hit__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void Aweapon_C__pf1418999182::bpf__ExecuteUbergraph_weapon__pf_1(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 11:
			{
				__StateStack.Push(14);
			}
		case 12:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				b0l__K2Node_DynamicCast_AsFoliage_Instanced_Static_Mesh_Component__pf = Cast<UFoliageInstancedStaticMeshComponent>(b0l__CallFunc_BreakHitResult_HitComponent__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsFoliage_Instanced_Static_Mesh_Component__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpf__tryToChopFoliage__pf(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, b0l__CallFunc_BreakHitResult_HitActor__pf, b0l__K2Node_DynamicCast_AsFoliage_Instanced_Static_Mesh_Component__pf, FVector(-10000.000000,0.000000,0.000000), /*out*/ b0l__CallFunc_tryToChopFoliage_sound2__pf, /*out*/ b0l__CallFunc_tryToChopFoliage_success2__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				b0l__K2Node_DynamicCast_AsChoppable__pf = Cast<Achoppable_C__pf1172009058>(b0l__CallFunc_BreakHitResult_HitActor__pf);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsChoppable__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 15:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpf__tryToChopProcMesh__pf(b0l__K2Node_DynamicCast_AsChoppable__pf, b0l__CallFunc_BreakHitResult_HitComponent__pf, FVector(-10000.000000,0.000000,0.000000), b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				if (!bpv__canchop__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 17:
			{
				if (!bpv__isGrabbing__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 18:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(1, true);
				b0l__K2Node_MakeArray_Array__pf[0] = EObjectTypeQuery::ObjectTypeQuery8;
				if(IsValid(bpv__collisionLineEnd__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__collisionLineEnd__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(IsValid(bpv__collisionLineStart__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf = bpv__collisionLineStart__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingleForObjects(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, b0l__K2Node_MakeArray_Array__pf, false, b0l__Temp_object_Variable__pf, EDrawDebugTrace::None, /*out*/ b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), b0l__K2Node_Event_DeltaSeconds__pf);
			}
		case 19:
			{
				if (!bpfv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 11;
				break;
			}
		case 60:
			{
				__CurrentState = 16;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void Aweapon_C__pf1418999182::bpf__ExecuteUbergraph_weapon__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue3__pf(EForceInit::ForceInit);
	AActor* bpfv__CallFunc_GetOwner_ReturnValue__pf{};
	FTransform bpfv__CallFunc_GetRelativeTransform_ReturnValue__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 37:
			{
				__CurrentState = 38;
				break;
			}
		case 38:
			{
				bpv__isGrabbing__pf = true;
			}
		case 39:
			{
				bpv__canDespawn__pf = false;
			}
		case 40:
			{
				if(IsValid(b0l__K2Node_Event_Component2__pf))
				{
					b0l__K2Node_Event_Component2__pf->SetSimulatePhysics(false);
				}
			}
		case 41:
			{
				if(IsValid(StaticMeshComponent))
				{
					StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				}
			}
		case 42:
			{
				__StateStack.Push(49);
				__StateStack.Push(52);
			}
		case 43:
			{
				b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf = Cast<UMotionControllerComponent>(b0l__K2Node_Event_AttachTo__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 44:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue__pf = b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf->UActorComponent::GetOwner();
				}
				b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf = NoNativeCast<AActor>(CastChecked<UClass>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[22], ECastCheckedType::NullAllowed), bpfv__CallFunc_GetOwner_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 45:
			{
				bpv__controller__pf = b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf;
			}
		case 46:
			{
				if(IsValid(bpv__grabDirection__pf))
				{
					bpfv__CallFunc_GetRelativeTransform_ReturnValue__pf = bpv__grabDirection__pf->USceneComponent::GetRelativeTransform();
				}
				if(IsValid(bpv__controller__pf) && IsValid(FUnconvertedWrapper__ABP_MotionController_C__pf563933975(bpv__controller__pf).GetRef__axeGrabDirection__pf()))
				{
					FUnconvertedWrapper__ABP_MotionController_C__pf563933975(bpv__controller__pf).GetRef__axeGrabDirection__pf()->USceneComponent::K2_SetRelativeTransform(bpfv__CallFunc_GetRelativeTransform_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf, false);
				}
			}
		case 47:
			{
				if(IsValid(bpv__controller__pf) && IsValid(FUnconvertedWrapper__ABP_MotionController_C__pf563933975(bpv__controller__pf).GetRef__axeGrabDirection__pf()))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = FUnconvertedWrapper__ABP_MotionController_C__pf563933975(bpv__controller__pf).GetRef__axeGrabDirection__pf()->USceneComponent::K2_GetComponentToWorld();
				}
				if(IsValid(StaticMeshComponent))
				{
					StaticMeshComponent->USceneComponent::K2_SetWorldTransform(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldTransform_SweepHitResult__pf, true);
				}
			}
		case 48:
			{
				if(IsValid(bpv__controller__pf))
				{
					FUnconvertedWrapper__ABP_MotionController_C__pf563933975(bpv__controller__pf).bpf__RumbleController__pf(1.000000);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 49:
			{
				if (!bpv__holstered__pf)
				{
					__CurrentState = 51;
					break;
				}
			}
		case 50:
			{
				if(IsValid(b0l__K2Node_Event_AttachTo__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue3__pf = b0l__K2Node_Event_AttachTo__pf->USceneComponent::K2_GetComponentLocation();
				}
				UGameplayStatics::PlaySoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[23], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetComponentLocation_ReturnValue3__pf, FRotator(0.000000,0.000000,0.000000), 0.500000, 1.000000, 0.000000, CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[24], ECastCheckedType::NullAllowed), ((USoundConcurrency*)nullptr));
			}
		case 51:
			{
				bpv__holstered__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 52:
			{
				if(IsValid(b0l__K2Node_Event_Component2__pf))
				{
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf = b0l__K2Node_Event_Component2__pf->USceneComponent::K2_AttachToComponent(b0l__K2Node_Event_AttachTo__pf, FName(TEXT("None")), EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false);
				}
			}
		case 53:
			{
				if (!bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 54:
			{
				bpv__hasBeenGripped__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void Aweapon_C__pf1418999182::bpf__ExecuteUbergraph_weapon__pf_3(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetComponentVelocity_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__isGrabbing__pf = false;
			}
		case 2:
			{
				if(IsValid(b0l__K2Node_Event_component__pf))
				{
					b0l__K2Node_Event_component__pf->SetSimulatePhysics(true);
				}
			}
		case 3:
			{
				if(IsValid(b0l__K2Node_Event_component__pf))
				{
					b0l__K2Node_Event_component__pf->USceneComponent::K2_DetachFromComponent(EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, true);
				}
			}
		case 4:
			{
				bpv__controller__pf = ((AActor*)nullptr);
			}
		case 5:
			{
				UKismetSystemLibrary::Delay(this, 60.000000, FLatentActionInfo(6, 1680933309, TEXT("ExecuteUbergraph_weapon_3"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				__CurrentState = 7;
				break;
			}
		case 7:
			{
				if (!bpv__canDespawn__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				K2_DestroyActor();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 55:
			{
				__CurrentState = 56;
				break;
			}
		case 56:
			{
				__StateStack.Push(58);
			}
		case 57:
			{
				bpv__canDespawn__pf = true;
				__CurrentState = 1;
				break;
			}
		case 58:
			{
				if(IsValid(b0l__K2Node_Event_component__pf))
				{
					bpfv__CallFunc_GetComponentVelocity_ReturnValue__pf = b0l__K2Node_Event_component__pf->GetComponentVelocity();
				}
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetComponentVelocity_ReturnValue__pf);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 100.000000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 59:
			{
				if(IsValid(b0l__K2Node_Event_component__pf))
				{
					bpfv__CallFunc_GetComponentVelocity_ReturnValue__pf = b0l__K2Node_Event_component__pf->GetComponentVelocity();
				}
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetComponentVelocity_ReturnValue__pf);
				bpf__randomSwooshSound__pf(bpfv__CallFunc_VSize_ReturnValue__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void Aweapon_C__pf1418999182::bpf__ExecuteUbergraph_weapon__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 34:
			{
				__CurrentState = 35;
				break;
			}
		case 35:
			{
				if(IsValid(StaticMeshComponent))
				{
					StaticMeshComponent->SetSimulatePhysics(bpv__init_with_physics__pf);
				}
			}
		case 36:
			{
				if(IsValid(StaticMeshComponent))
				{
					StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aweapon_C__pf1418999182::bpf__ExecuteUbergraph_weapon__pf_5(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 21:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aweapon_C__pf1418999182::bpf__ExecuteUbergraph_weapon__pf_6(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 20:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aweapon_C__pf1418999182::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_weapon__pf_1(60);
}
void Aweapon_C__pf1418999182::bpf__DropComponent__pf(UPrimitiveComponent* bpp__component__pf)
{
	b0l__K2Node_Event_component__pf = bpp__component__pf;
	bpf__ExecuteUbergraph_weapon__pf_3(55);
}
void Aweapon_C__pf1418999182::bpf__PickupComponent__pf(USceneComponent* bpp__AttachTo__pf, UPrimitiveComponent* bpp__Component__pf)
{
	b0l__K2Node_Event_AttachTo__pf = bpp__AttachTo__pf;
	b0l__K2Node_Event_Component2__pf = bpp__Component__pf;
	bpf__ExecuteUbergraph_weapon__pf_2(37);
}
void Aweapon_C__pf1418999182::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_weapon__pf_4(34);
}
void Aweapon_C__pf1418999182::bpf__BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const)
{
	typedef FHitResult  T__Local__11;
	T__Local__11& bpp__Hit__pf = *const_cast<T__Local__11 *>(&bpp__Hit__pf__const);
	b0l__K2Node_ComponentBoundEvent_HitComponent__pf = bpp__HitComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf = bpp__NormalImpulse__pf;
	b0l__K2Node_ComponentBoundEvent_Hit__pf = bpp__Hit__pf;
	bpf__ExecuteUbergraph_weapon__pf_0(22);
}
void Aweapon_C__pf1418999182::bpf__Drop__pf()
{
	bpf__ExecuteUbergraph_weapon__pf_5(21);
}
void Aweapon_C__pf1418999182::bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
{
	b0l__K2Node_Event_AttachTo2__pf = bpp__AttachTo__pf;
	bpf__ExecuteUbergraph_weapon__pf_6(20);
}
void Aweapon_C__pf1418999182::bpf__UserConstructionScript__pf()
{
}
void Aweapon_C__pf1418999182::bpf__randomChopSound__pf(FVector bpp__impulse__pf, FHitResult bpp__hit__pf, /*out*/ USoundBase*& bpp__sound__pf)
{
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetVelocity_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue2__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	USoundBase* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetVelocity_ReturnValue__pf = GetVelocity();
				bpfv__CallFunc_VSize_ReturnValue2__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetVelocity_ReturnValue__pf);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_VSize_ReturnValue2__pf, bpv__chopThreshold__pf);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				UGameplayStatics::BreakHitResult(bpp__hit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpp__impulse__pf);
				bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_VSize_ReturnValue__pf, 0.000000, 5000.000000, 0.000000, 2.000000);
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__chopSounds__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 1);
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__chopSounds__pf, bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				UGameplayStatics::PlaySoundAtLocation(this, bpfv__CallFunc_Array_Get_Item__pf, bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, FRotator(0.000000,0.000000,0.000000), bpfv__CallFunc_MapRangeClamped_ReturnValue__pf, 1.000000, 0.000000, CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[24], ECastCheckedType::NullAllowed), ((USoundConcurrency*)nullptr));
			}
		case 3:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__chopSounds__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 1);
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__chopSounds__pf, bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpp__sound__pf = bpfv__CallFunc_Array_Get_Item__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aweapon_C__pf1418999182::bpf__randomHitSound__pf(FVector bpp__impulse__pf, FHitResult bpp__hit__pf)
{
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	USoundBase* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				UGameplayStatics::BreakHitResult(bpp__hit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__hitSounds__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpp__impulse__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 1);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 2500.000000);
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 0.000000, 5.000000);
				FCustomThunkTemplates::Array_Get(bpv__hitSounds__pf, bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				UGameplayStatics::PlaySoundAtLocation(this, bpfv__CallFunc_Array_Get_Item__pf, bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, FRotator(0.000000,0.000000,0.000000), bpfv__CallFunc_FClamp_ReturnValue__pf, 1.000000, 0.000000, CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[24], ECastCheckedType::NullAllowed), ((USoundConcurrency*)nullptr));
			}
		case 2:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aweapon_C__pf1418999182::bpf__shouldChop__pf(FVector bpp__impulse__pf, bool bpp__blocksWeapon__pf, /*out*/ bool& bpp__shouldchop__pf)
{
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetComponentVelocity_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue2__pf{};
	bool bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpp__impulse__pf);
				if(IsValid(StaticMeshComponent))
				{
					bpfv__CallFunc_GetComponentVelocity_ReturnValue__pf = StaticMeshComponent->GetComponentVelocity();
				}
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 20000.000000);
				bpfv__CallFunc_VSize_ReturnValue2__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetComponentVelocity_ReturnValue__pf);
				bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::NearlyEqual_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 10000.000000, 1.000000);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_VSize_ReturnValue2__pf, bpv__chopThreshold__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue2__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_BooleanOR_ReturnValue__pf, bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_BooleanOR_ReturnValue2__pf, bpv__canchop__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_BooleanAND_ReturnValue__pf, bpp__blocksWeapon__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue2__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpp__shouldchop__pf = true;
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpp__shouldchop__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aweapon_C__pf1418999182::bpf__tryToChopFoliage__pf(FHitResult bpp__hit__pf, AActor* bpp__actor__pf, UPrimitiveComponent* bpp__component__pf, FVector bpp__impulse__pf, /*out*/ USoundBase*& bpp__sound__pf, /*out*/ bool& bpp__success__pf)
{
	bool bpfv__Temp_bool_Variable__pf{};
	bool bpfv__Temp_bool_Variable2__pf{};
	bool bpfv__Temp_bool_Variable3__pf{};
	TEnumAsByte<ECollisionResponse> bpfv__CallFunc_GetCollisionResponseToChannel_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	Achoppable_C__pf1172009058* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	FTransform bpfv__CallFunc_GetInstanceTransform_OutInstanceTransform__pf{};
	bool bpfv__CallFunc_GetInstanceTransform_ReturnValue__pf{};
	bool bpfv__CallFunc_RemoveInstance_ReturnValue__pf{};
	TEnumAsByte<ECollisionResponse> bpfv__Temp_byte_Variable__pf{};
	bool bpfv__K2Node_Select_Default__pf{};
	bool bpfv__CallFunc_shouldChop_shouldchop__pf{};
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	UInstancedStaticMeshComponent* bpfv__K2Node_DynamicCast_AsInstanced_Static_Mesh_Component__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	FTransform bpfv__instanceTransform__pf{};
	bool bpfv__chopSuccess__pf{};
	Achoppable_C__pf1172009058* bpfv__newChoppableActor__pf{};
	int32 bpfv__hitItemIndex__pf{};
	UInstancedStaticMeshComponent* bpfv__foliageInstancedComponent__pf{};
	UPrimitiveComponent* bpfv___component__pf{};
	AActor* bpfv___actor__pf{};
	FHitResult bpfv___hit__pf{};
	FVector bpfv___impulse__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv___hit__pf = bpp__hit__pf;
			}
		case 2:
			{
				bpfv___actor__pf = bpp__actor__pf;
			}
		case 3:
			{
				bpfv___component__pf = bpp__component__pf;
			}
		case 4:
			{
				bpfv___impulse__pf = bpp__impulse__pf;
			}
		case 5:
			{
				bpfv__K2Node_DynamicCast_AsInstanced_Static_Mesh_Component__pf = Cast<UInstancedStaticMeshComponent>(bpfv___component__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsInstanced_Static_Mesh_Component__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 6:
			{
				bpfv__foliageInstancedComponent__pf = bpfv__K2Node_DynamicCast_AsInstanced_Static_Mesh_Component__pf;
			}
		case 7:
			{
				UGameplayStatics::BreakHitResult(bpfv___hit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__hitItemIndex__pf = bpfv__CallFunc_BreakHitResult_HitItem__pf;
			}
		case 8:
			{
				bpfv__Temp_bool_Variable__pf = true;
				bpfv__Temp_bool_Variable2__pf = false;
				bpfv__Temp_bool_Variable3__pf = false;
				if(IsValid(bpfv__foliageInstancedComponent__pf))
				{
					bpfv__CallFunc_GetCollisionResponseToChannel_ReturnValue__pf = bpfv__foliageInstancedComponent__pf->GetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel3);
				}
				bpfv__Temp_byte_Variable__pf = bpfv__CallFunc_GetCollisionResponseToChannel_ReturnValue__pf;
				bpf__shouldChop__pf(bpfv___impulse__pf, TSwitchValue<TEnumAsByte<ECollisionResponse> , bool >(bpfv__Temp_byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 3, TSwitchPair<TEnumAsByte<ECollisionResponse> , bool >(ECollisionResponse::ECR_Ignore, bpfv__Temp_bool_Variable3__pf), TSwitchPair<TEnumAsByte<ECollisionResponse> , bool >(ECollisionResponse::ECR_Overlap, bpfv__Temp_bool_Variable2__pf), TSwitchPair<TEnumAsByte<ECollisionResponse> , bool >(ECollisionResponse::ECR_Block, bpfv__Temp_bool_Variable__pf)), /*out*/ bpfv__CallFunc_shouldChop_shouldchop__pf);
			}
		case 9:
			{
				if (!bpfv__CallFunc_shouldChop_shouldchop__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 10:
			{
				if(IsValid(bpfv__foliageInstancedComponent__pf))
				{
					bpfv__CallFunc_GetInstanceTransform_ReturnValue__pf = bpfv__foliageInstancedComponent__pf->UInstancedStaticMeshComponent::GetInstanceTransform(bpfv__hitItemIndex__pf, /*out*/ bpfv__CallFunc_GetInstanceTransform_OutInstanceTransform__pf, true);
				}
				bpfv__instanceTransform__pf = bpfv__CallFunc_GetInstanceTransform_OutInstanceTransform__pf;
			}
		case 11:
			{
				if(IsValid(bpfv__foliageInstancedComponent__pf))
				{
					bpfv__CallFunc_RemoveInstance_ReturnValue__pf = bpfv__foliageInstancedComponent__pf->RemoveInstance(bpfv__hitItemIndex__pf);
				}
			}
		case 12:
			{
				if (!bpfv__CallFunc_RemoveInstance_ReturnValue__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 13:
			{
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, Achoppable_C__pf1172009058::StaticClass(), bpfv__instanceTransform__pf, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, ((AActor*)nullptr));
			}
		case 14:
			{
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<Achoppable_C__pf1172009058>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__instanceTransform__pf), ECastCheckedType::NullAllowed);
			}
		case 15:
			{
				bpfv__newChoppableActor__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf;
			}
		case 16:
			{
				UStaticMesh*  __Local__12 = ((UStaticMesh*)nullptr);
				if(IsValid(bpfv__newChoppableActor__pf))
				{
					bpfv__newChoppableActor__pf->bpv__mesh__pf = ((IsValid(bpfv__foliageInstancedComponent__pf)) ? (bpfv__foliageInstancedComponent__pf->StaticMesh) : (__Local__12));
				}
			}
		case 17:
			{
				if(IsValid(bpfv__newChoppableActor__pf))
				{
					bpfv__newChoppableActor__pf->bpf__reinitChoppableObjectEvent__pf();
				}
			}
		case 18:
			{
				if(IsValid(bpfv__newChoppableActor__pf) && IsValid(bpfv__newChoppableActor__pf->bpv__ProceduralMesh__pf))
				{
					bpfv__newChoppableActor__pf->bpv__ProceduralMesh__pf->SetLinearDamping(0.300000);
				}
			}
		case 19:
			{
				if(IsValid(bpfv__newChoppableActor__pf) && IsValid(bpfv__newChoppableActor__pf->bpv__ProceduralMesh__pf))
				{
					bpfv__newChoppableActor__pf->bpv__ProceduralMesh__pf->SetAngularDamping(0.300000);
				}
			}
		case 20:
			{
				if(IsValid(bpfv__newChoppableActor__pf))
				{
					UProceduralMeshComponent*  __Local__13 = ((UProceduralMeshComponent*)nullptr);
					bpfv__newChoppableActor__pf->bpf__chopEvent__pf(bpfv___hit__pf, StaticMeshComponent, ((IsValid(bpfv__newChoppableActor__pf)) ? (bpfv__newChoppableActor__pf->bpv__ProceduralMesh__pf) : (__Local__13)), bpfv___impulse__pf);
				}
			}
		case 21:
			{
				bpp__sound__pf = ((USoundBase*)nullptr);
				bpp__success__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aweapon_C__pf1418999182::bpf__tryToChopProcMesh__pf(AActor* bpp__actor__pf, UPrimitiveComponent* bpp__component__pf, FVector bpp__inpulse__pf, FHitResult bpp__hit__pf)
{
	TEnumAsByte<ECollisionResponse> bpfv__Temp_byte_Variable__pf{};
	UProceduralMeshComponent* bpfv__K2Node_DynamicCast_AsProcedural_Mesh_Component__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	Achoppable_C__pf1172009058* bpfv__K2Node_DynamicCast_AsChoppable__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess2__pf{};
	TEnumAsByte<ECollisionResponse> bpfv__CallFunc_GetCollisionResponseToChannel_ReturnValue__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	bool bpfv__Temp_bool_Variable2__pf{};
	bool bpfv__Temp_bool_Variable3__pf{};
	bool bpfv__K2Node_Select_Default__pf{};
	bool bpfv__CallFunc_shouldChop_shouldchop__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsProcedural_Mesh_Component__pf = Cast<UProceduralMeshComponent>(bpp__component__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsProcedural_Mesh_Component__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if(IsValid(bpfv__K2Node_DynamicCast_AsProcedural_Mesh_Component__pf))
				{
					bpfv__CallFunc_GetCollisionResponseToChannel_ReturnValue__pf = bpfv__K2Node_DynamicCast_AsProcedural_Mesh_Component__pf->GetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel3);
				}
				bpfv__Temp_byte_Variable__pf = bpfv__CallFunc_GetCollisionResponseToChannel_ReturnValue__pf;
				bpfv__Temp_bool_Variable__pf = true;
				bpfv__Temp_bool_Variable2__pf = false;
				bpfv__Temp_bool_Variable3__pf = false;
				bpf__shouldChop__pf(bpp__inpulse__pf, TSwitchValue<TEnumAsByte<ECollisionResponse> , bool >(bpfv__Temp_byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 3, TSwitchPair<TEnumAsByte<ECollisionResponse> , bool >(ECollisionResponse::ECR_Ignore, bpfv__Temp_bool_Variable3__pf), TSwitchPair<TEnumAsByte<ECollisionResponse> , bool >(ECollisionResponse::ECR_Overlap, bpfv__Temp_bool_Variable2__pf), TSwitchPair<TEnumAsByte<ECollisionResponse> , bool >(ECollisionResponse::ECR_Block, bpfv__Temp_bool_Variable__pf)), /*out*/ bpfv__CallFunc_shouldChop_shouldchop__pf);
			}
		case 3:
			{
				if (!bpfv__CallFunc_shouldChop_shouldchop__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bpfv__K2Node_DynamicCast_AsChoppable__pf = Cast<Achoppable_C__pf1172009058>(bpp__actor__pf);
				bpfv__K2Node_DynamicCast_bSuccess2__pf = (bpfv__K2Node_DynamicCast_AsChoppable__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				if(IsValid(bpfv__K2Node_DynamicCast_AsChoppable__pf))
				{
					bpfv__K2Node_DynamicCast_AsChoppable__pf->bpf__chopEvent__pf(bpp__hit__pf, StaticMeshComponent, bpfv__K2Node_DynamicCast_AsProcedural_Mesh_Component__pf, bpp__inpulse__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aweapon_C__pf1418999182::bpf__randomSwooshSound__pf(float bpp__velocity__pf)
{
	float bpfv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	USoundBase* bpfv__CallFunc_Array_Get_Item__pf{};
	UAudioComponent* bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__throwSounds__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 1);
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__throwSounds__pf, bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf = UGameplayStatics::SpawnSoundAttached(bpfv__CallFunc_Array_Get_Item__pf, StaticMeshComponent, FName(TEXT("None")), FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), EAttachLocation::KeepRelativeOffset, false, 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr));
			}
		case 2:
			{
				if(IsValid(bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf))
				{
					bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Aweapon_C__pf1418999182::StaticClass())->UsedAssets[24], ECastCheckedType::NullAllowed);
				}
			}
		case 3:
			{
				bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf = UKismetMathLibrary::MapRangeClamped(bpp__velocity__pf, 100.000000, 2000.000000, 0.000000, 2.000000);
				if(IsValid(bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf))
				{
					bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf->UAudioComponent::SetVolumeMultiplier(bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf);
				}
			}
		case 4:
			{
				bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpp__velocity__pf, 100.000000, 2000.000000, 0.500000, 2.000000);
				if(IsValid(bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf))
				{
					bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf->UAudioComponent::SetPitchMultiplier(bpfv__CallFunc_MapRangeClamped_ReturnValue__pf);
				}
			}
		case 5:
			{
				if(IsValid(bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf))
				{
					bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf->Play(0.000000);
				}
			}
		case 6:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Aweapon_C__pf1418999182::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/props/axe/SM_axe.SM_axe 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/props/axe/M_axeHead.M_axeHead 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_1.wc_1 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_2.wc_2 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_3.wc_3 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_4.wc_4 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_5.wc_5 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_6.wc_6 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_7.wc_7 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_8.wc_8 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/texture/wtx_1.wtx_1 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/texture/wtx_2.wtx_2 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/texture/wtx_3.wtx_3 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/texture/wtx_4.wtx_4 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/texture/wtx_5.wtx_5 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/woosh/swoosh_01.swoosh_01 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/woosh/swoosh_02.swoosh_02 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/woosh/swoosh_03.swoosh_03 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/woosh/swoosh_04.swoosh_04 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/woosh/swoosh_05.swoosh_05 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/woosh/swoosh_06.swoosh_06 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/spawners/axeSpawner.axeSpawner_C 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/BP_MotionController.BP_MotionController_C 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/holster/ui_wood_confirm.ui_wood_confirm 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundAttenuation /Game/audio/chopEffectAttenuation.chopEffectAttenuation 
	};
	for(const FCompactBlueprintDependencyData CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(
			F__NativeDependencies::Get(CompactData.ObjectRefIndex)
			,CompactData.ClassDependency
			,CompactData.CDODependency
		));
	} 
}
void Aweapon_C__pf1418999182::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{25, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/PickupActorInterface.PickupActorInterface_C 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/props/log/log.log 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/particles/woodchipParticle.woodchipParticle 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/freeze/ui_casual_pops_back.ui_casual_pops_back 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PhysicalMaterial /Game/materials/physicalMat/bigTreeLeafPhysicalMat.bigTreeLeafPhysicalMat 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PhysicalMaterial /Game/materials/physicalMat/bigTreeTrunkPhysicalMat.bigTreeTrunkPhysicalMat 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/thump/wood_thump_low.wood_thump_low 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/branchFallDebris/WOOD_Branch_Fall_Debris_SBPWD1_064.WOOD_Branch_Fall_Debris_SBPWD1_064 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/branchFallDebris/WOOD_Branch_Fall_Debris_SBPWD1_065.WOOD_Branch_Fall_Debris_SBPWD1_065 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/branchFallDebris/WOOD_Branch_Fall_Debris_SBPWD1_066.WOOD_Branch_Fall_Debris_SBPWD1_066 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/branchFallDebris/WOOD_Branch_Fall_Debris_SBPWD1_067.WOOD_Branch_Fall_Debris_SBPWD1_067 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/branchFallDebris/WOOD_Branch_Fall_Debris_SBPWD1_068.WOOD_Branch_Fall_Debris_SBPWD1_068 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/branchFallDebris/WOOD_Branch_Fall_Debris_SBPWD1_069.WOOD_Branch_Fall_Debris_SBPWD1_069 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/branchFallDebris/WOOD_Branch_Fall_Debris_SBPWD1_070.WOOD_Branch_Fall_Debris_SBPWD1_070 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/branchFallDebris/WOOD_Branch_Fall_Debris_SBPWD1_071.WOOD_Branch_Fall_Debris_SBPWD1_071 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/branchFallDebris/WOOD_Branch_Fall_Debris_SBPWD1_072.WOOD_Branch_Fall_Debris_SBPWD1_072 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/branchFallDebris/WOOD_Branch_Fall_Debris_SBPWD1_073.WOOD_Branch_Fall_Debris_SBPWD1_073 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/logFall/WOOD_Impact_Log_SBPWD1_267.WOOD_Impact_Log_SBPWD1_267 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/logFall/WOOD_Impact_Log_SBPWD1_268.WOOD_Impact_Log_SBPWD1_268 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/logFall/WOOD_Impact_Log_SBPWD1_269.WOOD_Impact_Log_SBPWD1_269 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/logFall/WOOD_Impact_Log_SBPWD1_270.WOOD_Impact_Log_SBPWD1_270 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/logFall/WOOD_Impact_Log_SBPWD1_271.WOOD_Impact_Log_SBPWD1_271 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/spawners/holsterSpawner.holsterSpawner_C 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/choppableItems/choppable.choppable_C 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/choppableItems/choppableHitMass.choppableHitMass 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/ProtoVRHand/Blueprints/Example/Enum_Grip.Enum_Grip 
	};
	for(const FCompactBlueprintDependencyData CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(
			F__NativeDependencies::Get(CompactData.ObjectRefIndex)
			,CompactData.ClassDependency
			,CompactData.CDODependency
		));
	} 
}
struct FRegisterHelper__Aweapon_C__pf1418999182
{
	FRegisterHelper__Aweapon_C__pf1418999182()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/weapons/weapon"), &Aweapon_C__pf1418999182::__StaticDependenciesAssets);
	}
	static FRegisterHelper__Aweapon_C__pf1418999182 Instance;
};
FRegisterHelper__Aweapon_C__pf1418999182 FRegisterHelper__Aweapon_C__pf1418999182::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
