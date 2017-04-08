#include "NativizedAssets.h"
#include "choppable__pf1172009058.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "ProceduralMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
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
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "choppable__pf1172009058.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "BP_MotionController__pf563933975.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
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
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Enum_Grip__pf3811345418.h"
#include "Runtime/Engine/Classes/Components/SplineMeshComponent.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
Achoppable_C__pf1172009058::Achoppable_C__pf1172009058(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (Achoppable_C__pf1172009058::StaticClass() == GetClass()))
	{
		Achoppable_C__pf1172009058::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__ProceduralMesh__pf = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProceduralMesh"));
	bpv__staticmeshref__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("staticmeshref"));
	RootComponent = bpv__ProceduralMesh__pf;
	bpv__ProceduralMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ProceduralMesh__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("choppable")));
	bpv__ProceduralMesh__pf->BodyInstance.bNotifyRigidBodyCollision = true;
	bpv__ProceduralMesh__pf->BodyInstance.bSimulatePhysics = true;
	bpv__ProceduralMesh__pf->BodyInstance.LinearDamping = 0.100000f;
	bpv__ProceduralMesh__pf->BodyInstance.AngularDamping = 0.100000f;
	bpv__ProceduralMesh__pf->bUseComplexAsSimpleCollision = false;
	auto __Local__0 = NewObject<UBodySetup>(bpv__ProceduralMesh__pf, UBodySetup::StaticClass(), TEXT("BodySetup_0"));
	bpv__ProceduralMesh__pf->ProcMeshBodySetup = __Local__0;
	bpv__ProceduralMesh__pf->bAffectDynamicIndirectLighting = false;
	bpv__ProceduralMesh__pf->bAffectDistanceFieldLighting = false;
	bpv__ProceduralMesh__pf->bCastStaticShadow = false;
	static TWeakObjectPtr<UProperty> __Local__2{};
	const UProperty* __Local__1 = __Local__2.Get();
	if (nullptr == __Local__1)
	{
		__Local__1 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__1);
		__Local__2 = __Local__1;
	}
	(((UBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__ProceduralMesh__pf), false, 0));
	if(!bpv__ProceduralMesh__pf->IsTemplate())
	{
		bpv__ProceduralMesh__pf->BodyInstance.FixupData(bpv__ProceduralMesh__pf);
	}
	bpv__staticmeshref__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__staticmeshref__pf->AttachToComponent(bpv__ProceduralMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__staticmeshref__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__staticmeshref__pf->BodyInstance.LinearDamping = 0.100000f;
	bpv__staticmeshref__pf->BodyInstance.AngularDamping = 0.100000f;
	bpv__staticmeshref__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__staticmeshref__pf->bAllowCullDistanceVolume = false;
	bpv__staticmeshref__pf->bAffectDynamicIndirectLighting = false;
	bpv__staticmeshref__pf->bAffectDistanceFieldLighting = false;
	bpv__staticmeshref__pf->bCastStaticShadow = false;
	bpv__staticmeshref__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	bpv__staticmeshref__pf->bVisible = false;
	bpv__staticmeshref__pf->bHiddenInGame = true;
	bpv__staticmeshref__pf->RelativeScale3D = FVector(2.000000, 2.000000, 2.000000);
	(((UBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__staticmeshref__pf), false, 0));
	if(!bpv__staticmeshref__pf->IsTemplate())
	{
		bpv__staticmeshref__pf->BodyInstance.FixupData(bpv__staticmeshref__pf);
	}
	bpv__mesh__pf = nullptr;
	bpv__gravity__pf = true;
	bpv__physics__pf = true;
	bpv__createCollision__pf = false;
	bpv__outProcMesh__pf = nullptr;
	bpv__planeNormalMuliplier__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__canChop__pf = true;
	bpv__grabbedComponent__pf = nullptr;
	bpv__isFrozen__pf = false;
	bpv__canStepOn__pf = ECanBeCharacterBase::ECB_Yes;
	bpv__grabbingHandComponent__pf = nullptr;
	bpv__thumpSound__pf = CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__canPlayThump__pf = true;
	bpv__maxViewDistance__pf = 40000.000000f;
	bpv__minViewDistance__pf = 5000.000000f;
	bpv__massToVisibilityExponent__pf = 3.000000f;
	bpv__startFrozen__pf = false;
	bpv__NewVar_0__pf = false;
	bpv__chopAxe__pf = nullptr;
	bpv__chopComponent__pf = nullptr;
	bpv__grabbingHand__pf = nullptr;
	bpv__chopImpulse__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__chopImpactPoint__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__chopImpactNormal__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__chopMaterial__pf = nullptr;
	bpv__hasBeenChopped__pf = false;
	bpv__velocityPosition__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__tickDelta__pf = 0.000000f;
	bpv__velocitySquared__pf = 0.000000f;
	bpv__randomRotationForce__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__capOption__pf = EProcMeshSliceCapOption::CreateNewSectionForCap;
	bpv__newProcMeshes__pf = TArray<UProceduralMeshComponent*> ();
	bpv__isSticky__pf = false;
	bpv__chopSounds__pf = TArray<USoundBase*> ();
	bpv__chopSounds__pf.Reserve(8);
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed));
	bpv__chopSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__minChoppableMass__pf = 0.300000f;
	bpv__hitMass__pf = E__choppableHitMass__pf::NewEnumerator4;
	bpv__branchHitSounds__pf = TArray<USoundBase*> ();
	bpv__branchHitSounds__pf.Reserve(10);
	bpv__branchHitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed));
	bpv__branchHitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed));
	bpv__branchHitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed));
	bpv__branchHitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed));
	bpv__branchHitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed));
	bpv__branchHitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed));
	bpv__branchHitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed));
	bpv__branchHitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed));
	bpv__branchHitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed));
	bpv__branchHitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed));
	bpv__hitSound__pf = nullptr;
	bpv__logHitSounds__pf = TArray<USoundBase*> ();
	bpv__logHitSounds__pf.Reserve(5);
	bpv__logHitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed));
	bpv__logHitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed));
	bpv__logHitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[22], ECastCheckedType::NullAllowed));
	bpv__logHitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[23], ECastCheckedType::NullAllowed));
	bpv__logHitSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[24], ECastCheckedType::NullAllowed));
	bpv__hitAttenuation__pf = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[25], ECastCheckedType::NullAllowed);
	bpv__initialMaxVelocity__pf = 1.000000f;
	bpv__finalMaxVelocity__pf = 100.000000f;
}
void Achoppable_C__pf1172009058::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__ProceduralMesh__pf)
	{
		bpv__ProceduralMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__staticmeshref__pf)
	{
		bpv__staticmeshref__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void Achoppable_C__pf1172009058::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	extern UClass* Z_Construct_UClass_UPickupActorInterface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPickupActorInterface_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__3 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_REMOVED_FC86288743CF56AEEEE2C7AD4E3BC949"));
	InDynamicClass->ComponentTemplates.Add(__Local__3);
}
void Achoppable_C__pf1172009058::bpf__ExecuteUbergraph_choppable__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue3__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue3__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue3__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue2__pf{};
	float bpfv__CallFunc_VSize_ReturnValue3__pf{};
	FVector bpfv__CallFunc_GetComponentVelocity_ReturnValue5__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf{};
	float bpfv__CallFunc_VSize_ReturnValue4__pf{};
	bool bpfv__CallFunc_IsSimulatingPhysics_ReturnValue2__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue3__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_GetMass_ReturnValue4__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue4__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue5__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue4__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf{};
	UAudioComponent* bpfv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue5__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 19:
			{
				__CurrentState = 20;
				break;
			}
		case 20:
			{
				bpv__canPlayThump__pf = true;
				__CurrentState = -1;
				break;
			}
		case 75:
			{
				bpv__hitSound__pf = bpv__thumpSound__pf;
			}
		case 76:
			{
				if(IsValid(b0l__K2Node_Event_MyComp__pf))
				{
					bpfv__CallFunc_IsSimulatingPhysics_ReturnValue2__pf = b0l__K2Node_Event_MyComp__pf->IsSimulatingPhysics(FName(TEXT("None")));
				}
				if (!bpfv__CallFunc_IsSimulatingPhysics_ReturnValue2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 77:
			{
				if(IsValid(b0l__K2Node_Event_MyComp__pf))
				{
					bpfv__CallFunc_GetComponentVelocity_ReturnValue5__pf = b0l__K2Node_Event_MyComp__pf->GetComponentVelocity();
				}
				bpfv__CallFunc_VSize_ReturnValue4__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetComponentVelocity_ReturnValue5__pf);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_VSize_ReturnValue4__pf, 50.000000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 78:
			{
				bpfv__CallFunc_IsValid_ReturnValue4__pf = UKismetSystemLibrary::IsValid(bpv__hitSound__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue4__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 79:
			{
				bpv__canPlayThump__pf = false;
			}
		case 80:
			{
				bpfv__CallFunc_VSize_ReturnValue3__pf = UKismetMathLibrary::VSize(b0l__K2Node_Event_NormalImpulse__pf);
				if(IsValid(b0l__K2Node_Event_MyComp__pf))
				{
					bpfv__CallFunc_GetComponentVelocity_ReturnValue5__pf = b0l__K2Node_Event_MyComp__pf->GetComponentVelocity();
				}
				bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_VSize_ReturnValue3__pf, 0.000000, 10000.000000, 0.000000, 2.000000);
				bpfv__CallFunc_VSize_ReturnValue4__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetComponentVelocity_ReturnValue5__pf);
				bpfv__CallFunc_MapRangeClamped_ReturnValue3__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_VSize_ReturnValue4__pf, 0.000000, 1000.000000, 0.200000, 2.000000);
				if(IsValid(b0l__K2Node_Event_MyComp__pf))
				{
					bpfv__CallFunc_GetMass_ReturnValue4__pf = b0l__K2Node_Event_MyComp__pf->GetMass();
				}
				bpfv__CallFunc_MapRangeClamped_ReturnValue5__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_GetMass_ReturnValue4__pf, 0.000000, 2000.000000, 1.000000, 0.100000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_MapRangeClamped_ReturnValue5__pf, bpfv__CallFunc_MapRangeClamped_ReturnValue3__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 2.000000);
				bpfv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf = UGameplayStatics::SpawnSoundAtLocation(this, bpv__hitSound__pf, b0l__K2Node_Event_HitLocation__pf, FRotator(0.000000,0.000000,0.000000), bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 0.000000, bpv__hitAttenuation__pf, ((USoundConcurrency*)nullptr));
			}
		case 81:
			{
				bpfv__CallFunc_IsValid_ReturnValue5__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue5__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 82:
			{
				if(IsValid(b0l__K2Node_Event_MyComp__pf))
				{
					bpfv__CallFunc_GetMass_ReturnValue4__pf = b0l__K2Node_Event_MyComp__pf->GetMass();
				}
				bpfv__CallFunc_MapRangeClamped_ReturnValue4__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_GetMass_ReturnValue4__pf, 0.000000, 3000.000000, 1000.000000, 5000.000000);
				b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf.bAttenuate = true;
				b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf.bSpatialize = true;
				b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf.bAttenuateWithLPF = true;
				b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf.OmniRadius = 0.000000;
				b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf.bSpatialize = true;
				b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf.StereoSpread = 0.000000;
				b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf.bSpatialize = true;
				b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf.SpatializationAlgorithm = ESoundSpatializationAlgorithm::SPATIALIZATION_HRTF;
				b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf.bSpatialize = true;
				b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf.LPFRadiusMax = bpfv__CallFunc_MapRangeClamped_ReturnValue4__pf;
				b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf.LPFFrequencyAtMax = 10000.000000;
				b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf.ReverbDistanceMin = 400.000000;
				b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf.ReverbDistanceMax = bpfv__CallFunc_MapRangeClamped_ReturnValue4__pf;
				b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf.AttenuationShape = EAttenuationShape::Sphere;
				b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf.dBAttenuationAtMax = -60.000000;
				b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf.FalloffDistance = bpfv__CallFunc_MapRangeClamped_ReturnValue4__pf;
				if(IsValid(bpfv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf))
				{
					bpfv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf->UAudioComponent::AdjustAttenuation(b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf);
				}
			}
		case 83:
			{
				if(IsValid(bpfv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf))
				{
					bpfv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf->Play(0.000000);
				}
			}
		case 84:
			{
				float  __Local__4 = 0.000000;
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf = FCustomThunkTemplates::Divide_FloatFloat(((IsValid(bpv__hitSound__pf)) ? (bpv__hitSound__pf->Duration) : (__Local__4)), 1.000000);
				UKismetSystemLibrary::Delay(this, bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf, FLatentActionInfo(19, 1335260775, TEXT("ExecuteUbergraph_choppable_0"), this));
				__CurrentState = -1;
				break;
			}
		case 85:
			{
				bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(bpv__branchHitSounds__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue2__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue2__pf, 1);
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue2__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpfv__CallFunc_Subtract_IntInt_ReturnValue2__pf);
				FCustomThunkTemplates::Array_Get(bpv__branchHitSounds__pf, bpfv__CallFunc_RandomIntegerInRange_ReturnValue2__pf, /*out*/ b0l__CallFunc_Array_Get_Item2__pf);
				bpv__hitSound__pf = b0l__CallFunc_Array_Get_Item2__pf;
				__CurrentState = 76;
				break;
			}
		case 87:
			{
				bpfv__CallFunc_Array_Length_ReturnValue3__pf = FCustomThunkTemplates::Array_Length(bpv__logHitSounds__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue3__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue3__pf, 1);
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue3__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpfv__CallFunc_Subtract_IntInt_ReturnValue3__pf);
				FCustomThunkTemplates::Array_Get(bpv__logHitSounds__pf, bpfv__CallFunc_RandomIntegerInRange_ReturnValue3__pf, /*out*/ b0l__CallFunc_Array_Get_Item3__pf);
				bpv__hitSound__pf = b0l__CallFunc_Array_Get_Item3__pf;
				__CurrentState = 76;
				break;
			}
		case 104:
			{
				__CurrentState = 105;
				break;
			}
		case 105:
			{
				if (!bpv__canPlayThump__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 106:
			{
				UGameplayStatics::BreakHitResult(b0l__K2Node_Event_Hit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit2__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap2__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time2__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location2__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint2__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal2__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal2__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat2__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor2__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent2__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName2__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem2__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex2__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart2__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd2__pf);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_ObjectObject(b0l__CallFunc_BreakHitResult_PhysMat2__pf, CastChecked<UObject>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[26], ECastCheckedType::NullAllowed));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue2__pf)
				{
					__CurrentState = 107;
					break;
				}
				__CurrentState = 85;
				break;
			}
		case 107:
			{
				UGameplayStatics::BreakHitResult(b0l__K2Node_Event_Hit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit2__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap2__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time2__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location2__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint2__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal2__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal2__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat2__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor2__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent2__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName2__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem2__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex2__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart2__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd2__pf);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(b0l__CallFunc_BreakHitResult_PhysMat2__pf, CastChecked<UObject>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[27], ECastCheckedType::NullAllowed));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 75;
					break;
				}
				__CurrentState = 87;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Achoppable_C__pf1172009058::bpf__ExecuteUbergraph_choppable__pf_1(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetMass_ReturnValue__pf{};
	float bpfv__CallFunc_Sqrt_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetComponentVelocity_ReturnValue__pf(EForceInit::ForceInit);
	AActor* bpfv__CallFunc_GetOwner_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	UParticleSystemComponent* bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf{};
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	AActor* bpfv__CallFunc_GetOwner_ReturnValue2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	float bpfv__CallFunc_GetAngularDamping_ReturnValue__pf{};
	float bpfv__CallFunc_GetLinearDamping_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetComponentVelocity_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_ClampVectorSize_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetComponentVelocity_ReturnValue3__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_ClampVectorSize_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetComponentVelocity_ReturnValue4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_ClampVectorSize_ReturnValue3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_ClampVectorSize_ReturnValue4__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	float bpfv__CallFunc_GetMass_ReturnValue2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue2__pf{};
	UMaterialInterface* bpfv__CallFunc_GetMaterial_ReturnValue__pf{};
	float bpfv__CallFunc_GetMass_ReturnValue3__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue4__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue5__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetSimulatePhysics(false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 3:
			{
				__CurrentState = 4;
				break;
			}
		case 4:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetCollisionProfileName(FName(TEXT("choppable")));
				}
			}
		case 5:
			{
				if(IsValid(bpv__chopComponent__pf))
				{
					bpfv__CallFunc_GetLinearDamping_ReturnValue__pf = bpv__chopComponent__pf->GetLinearDamping();
				}
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetLinearDamping(bpfv__CallFunc_GetLinearDamping_ReturnValue__pf);
				}
			}
		case 6:
			{
				if(IsValid(bpv__chopComponent__pf))
				{
					bpfv__CallFunc_GetAngularDamping_ReturnValue__pf = bpv__chopComponent__pf->GetAngularDamping();
				}
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetAngularDamping(bpfv__CallFunc_GetAngularDamping_ReturnValue__pf);
				}
			}
		case 7:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpfv__CallFunc_GetComponentVelocity_ReturnValue2__pf = bpv__outProcMesh__pf->GetComponentVelocity();
				}
				bpfv__CallFunc_ClampVectorSize_ReturnValue__pf = UKismetMathLibrary::ClampVectorSize(bpfv__CallFunc_GetComponentVelocity_ReturnValue2__pf, 0.000000, bpv__finalMaxVelocity__pf);
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->UPrimitiveComponent::SetPhysicsLinearVelocity(bpfv__CallFunc_ClampVectorSize_ReturnValue__pf, false, FName(TEXT("None")));
				}
			}
		case 8:
			{
				if(IsValid(bpv__chopComponent__pf))
				{
					bpfv__CallFunc_GetComponentVelocity_ReturnValue3__pf = bpv__chopComponent__pf->GetComponentVelocity();
				}
				bpfv__CallFunc_ClampVectorSize_ReturnValue2__pf = UKismetMathLibrary::ClampVectorSize(bpfv__CallFunc_GetComponentVelocity_ReturnValue3__pf, 0.000000, bpv__finalMaxVelocity__pf);
				if(IsValid(bpv__chopComponent__pf))
				{
					bpv__chopComponent__pf->UPrimitiveComponent::SetPhysicsLinearVelocity(bpfv__CallFunc_ClampVectorSize_ReturnValue2__pf, false, FName(TEXT("None")));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				__CurrentState = 10;
				break;
			}
		case 10:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__ProceduralMesh__pf->SetCollisionProfileName(FName(TEXT("choppable")));
				}
			}
		case 11:
			{
				b0l__Temp_int_Loop_Counter_Variable2__pf = 0;
			}
		case 12:
			{
				b0l__Temp_int_Array_Index_Variable2__pf = 0;
			}
		case 13:
			{
				bpfv__CallFunc_Array_Length_ReturnValue4__pf = FCustomThunkTemplates::Array_Length(bpv__newProcMeshes__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable2__pf, bpfv__CallFunc_Array_Length_ReturnValue4__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 14:
			{
				b0l__Temp_int_Array_Index_Variable2__pf = b0l__Temp_int_Loop_Counter_Variable2__pf;
			}
		case 15:
			{
				__StateStack.Push(18);
			}
		case 16:
			{
				FCustomThunkTemplates::Array_Get(bpv__newProcMeshes__pf, b0l__Temp_int_Array_Index_Variable2__pf, /*out*/ b0l__CallFunc_Array_Get_Item5__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item5__pf))
				{
					b0l__CallFunc_Array_Get_Item5__pf->SetCollisionProfileName(FName(TEXT("choppable")));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				bpv__canChop__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable2__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = 13;
				break;
			}
		case 21:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf = bpv__outProcMesh__pf->IsSimulatingPhysics(FName(TEXT("None")));
				}
				if (!bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 22:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpfv__CallFunc_GetMass_ReturnValue__pf = bpv__outProcMesh__pf->GetMass();
				}
				bpfv__CallFunc_Sqrt_ReturnValue__pf = UKismetMathLibrary::Sqrt(bpfv__CallFunc_GetMass_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Sqrt_ReturnValue__pf, 5.000000);
				bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 1.000000, 40.000000);
				UKismetSystemLibrary::Delay(this, bpfv__CallFunc_FClamp_ReturnValue__pf, FLatentActionInfo(1, 1749343656, TEXT("ExecuteUbergraph_choppable_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf = Cast<UMotionControllerComponent>(bpv__grabbingHand__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 24:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue__pf = b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf->UActorComponent::GetOwner();
				}
				b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf = NoNativeCast<AActor>(CastChecked<UClass>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[28], ECastCheckedType::NullAllowed), bpfv__CallFunc_GetOwner_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 25:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf))
				{
					FUnconvertedWrapper__ABP_MotionController_C__pf563933975(b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf).bpf__GrabComponent__pf(/*out*/ b0l__CallFunc_GrabComponent_didGrab__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 26:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetAngularDamping(10.000000);
				}
			}
		case 27:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpfv__CallFunc_GetComponentVelocity_ReturnValue__pf = bpv__outProcMesh__pf->GetComponentVelocity();
				}
				bpfv__CallFunc_ClampVectorSize_ReturnValue4__pf = UKismetMathLibrary::ClampVectorSize(bpfv__CallFunc_GetComponentVelocity_ReturnValue__pf, 0.000000, bpv__initialMaxVelocity__pf);
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->UPrimitiveComponent::SetPhysicsLinearVelocity(bpfv__CallFunc_ClampVectorSize_ReturnValue4__pf, false, FName(TEXT("None")));
				}
			}
		case 28:
			{
				if(IsValid(bpv__chopComponent__pf))
				{
					bpfv__CallFunc_GetComponentVelocity_ReturnValue4__pf = bpv__chopComponent__pf->GetComponentVelocity();
				}
				bpfv__CallFunc_ClampVectorSize_ReturnValue3__pf = UKismetMathLibrary::ClampVectorSize(bpfv__CallFunc_GetComponentVelocity_ReturnValue4__pf, 0.000000, bpv__initialMaxVelocity__pf);
				if(IsValid(bpv__chopComponent__pf))
				{
					bpv__chopComponent__pf->UPrimitiveComponent::SetPhysicsLinearVelocity(bpfv__CallFunc_ClampVectorSize_ReturnValue3__pf, false, FName(TEXT("None")));
				}
			}
		case 29:
			{
				UKismetSystemLibrary::Delay(this, 0.300000, FLatentActionInfo(3, 1440855481, TEXT("ExecuteUbergraph_choppable_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf = UGameplayStatics::SpawnEmitterAtLocation(this, CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[29], ECastCheckedType::NullAllowed), bpv__chopImpactPoint__pf, FRotator(0.000000,0.000000,0.000000), true);
			}
		case 31:
			{
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpv__chopImpulse__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__chopImpactNormal__pf, bpfv__CallFunc_VSize_ReturnValue__pf);
				if(IsValid(bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf))
				{
					bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf->UParticleSystemComponent::SetVectorParameter(FName(TEXT("woodchipInitialVelocity")), bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				}
			}
		case 32:
			{
				bpf__bsod__pf();
			}
		case 33:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__ProceduralMesh__pf->SetCollisionProfileName(FName(TEXT("pickupNoChop")));
				}
			}
		case 34:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 35:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 36:
			{
				bpfv__CallFunc_Array_Length_ReturnValue5__pf = FCustomThunkTemplates::Array_Length(bpv__newProcMeshes__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue2__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue5__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 41;
					break;
				}
			}
		case 37:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 38:
			{
				__StateStack.Push(40);
			}
		case 39:
			{
				FCustomThunkTemplates::Array_Get(bpv__newProcMeshes__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item4__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item4__pf))
				{
					b0l__CallFunc_Array_Get_Item4__pf->SetCollisionProfileName(FName(TEXT("pickupNoChop")));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 40:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 36;
				break;
			}
		case 41:
			{
				UKismetSystemLibrary::Delay(this, 0.300000, FLatentActionInfo(9, 909263755, TEXT("ExecuteUbergraph_choppable_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 42:
			{
				if(IsValid(bpv__grabbingHand__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue2__pf = bpv__grabbingHand__pf->UActorComponent::GetOwner();
				}
				b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf = NoNativeCast<AActor>(CastChecked<UClass>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[28], ECastCheckedType::NullAllowed), bpfv__CallFunc_GetOwner_ReturnValue2__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					__CurrentState = 56;
					break;
				}
			}
		case 43:
			{
				b0l__Temp_struct_Variable__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable2__pf = FVector(0.000000,0.000000,0.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(-1.000000, -1.000000, -1.000000);
				bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(1.000000, 1.000000, 1.000000);
				b0l__Temp_struct_Variable3__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable4__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable5__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable6__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable7__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable8__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable9__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable10__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable11__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable12__pf = FVector(0.000000,0.000000,0.000000);
				EControllerHand  __Local__9 = EControllerHand::Left;
				b0l__Temp_byte_Variable__pf = ((IsValid(b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf)) ? (FUnconvertedWrapper__ABP_MotionController_C__pf563933975(b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf).GetRef__Hand__pf()) : (__Local__9));
				bpv__planeNormalMuliplier__pf = TSwitchValue<EControllerHand , FVector >(b0l__Temp_byte_Variable__pf, b0l__K2Node_Select_Default__pf, 14, TSwitchPair<EControllerHand , FVector >(EControllerHand::Left, bpfv__CallFunc_MakeVector_ReturnValue__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Right, bpfv__CallFunc_MakeVector_ReturnValue2__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Pad, b0l__Temp_struct_Variable7__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::ExternalCamera, b0l__Temp_struct_Variable10__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Gun, b0l__Temp_struct_Variable3__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_1, b0l__Temp_struct_Variable__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_2, b0l__Temp_struct_Variable2__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_3, b0l__Temp_struct_Variable4__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_4, b0l__Temp_struct_Variable5__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_5, b0l__Temp_struct_Variable6__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_6, b0l__Temp_struct_Variable8__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_7, b0l__Temp_struct_Variable9__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_8, b0l__Temp_struct_Variable11__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_9, b0l__Temp_struct_Variable12__pf));
			}
		case 44:
			{
				if(IsValid(bpv__chopAxe__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__chopAxe__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_GetRightVector_ReturnValue__pf = UKismetMathLibrary::GetRightVector(bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf);
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpfv__CallFunc_GetRightVector_ReturnValue__pf, bpv__planeNormalMuliplier__pf);
				UKismetProceduralMeshLibrary::SliceProceduralMesh(bpv__chopComponent__pf, bpv__chopImpactPoint__pf, bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf, true, /*out*/ b0l__CallFunc_SliceProceduralMesh_OutOtherHalfProcMesh__pf, bpv__capOption__pf, bpv__chopMaterial__pf);
			}
		case 45:
			{
				bpv__outProcMesh__pf = b0l__CallFunc_SliceProceduralMesh_OutOtherHalfProcMesh__pf;
			}
		case 46:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__newProcMeshes__pf, bpv__outProcMesh__pf);
			}
		case 47:
			{
				bpv__hasBeenChopped__pf = true;
			}
		case 48:
			{
				__StateStack.Push(30);
				__StateStack.Push(57);
				__StateStack.Push(23);
				__StateStack.Push(21);
				__StateStack.Push(54);
			}
		case 49:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetCollisionProfileName(FName(TEXT("pickupNoChop")));
				}
			}
		case 50:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetEnableGravity(true);
				}
			}
		case 51:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetSimulatePhysics(true);
				}
			}
		case 52:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpfv__CallFunc_GetMass_ReturnValue3__pf = bpv__outProcMesh__pf->GetMass();
				}
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_GetMass_ReturnValue3__pf, 40.000000);
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->UPrimitiveComponent::SetCastShadow(bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf);
				}
			}
		case 53:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetLinearDamping(10.000000);
				}
				__CurrentState = 26;
				break;
			}
		case 54:
			{
				AActor::K2_DetachFromActor(EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative);
			}
		case 55:
			{
				if(IsValid(bpv__chopComponent__pf))
				{
					bpv__chopComponent__pf->USceneComponent::K2_DetachFromComponent(EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 56:
			{
				bpv__planeNormalMuliplier__pf = FVector(-1.000000,-1.000000,-1.000000);
				__CurrentState = 44;
				break;
			}
		case 57:
			{
				bpfv__CallFunc_VSize_ReturnValue2__pf = UKismetMathLibrary::VSize(bpv__chopImpulse__pf);
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__chopSounds__pf);
				bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_VSize_ReturnValue2__pf, 0.000000, 10000.000000, 0.000000, 5.000000);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 1);
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__chopSounds__pf, bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				UGameplayStatics::PlaySoundAtLocation(this, b0l__CallFunc_Array_Get_Item__pf, bpv__chopImpactPoint__pf, FRotator(0.000000,0.000000,0.000000), bpfv__CallFunc_MapRangeClamped_ReturnValue__pf, 1.000000, 0.000000, CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[25], ECastCheckedType::NullAllowed), ((USoundConcurrency*)nullptr));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 58:
			{
				bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::NotEqual_ObjectObject(bpv__grabbingHand__pf, ((UObject*)nullptr));
				if (!bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 56;
					break;
				}
				__CurrentState = 42;
				break;
			}
		case 59:
			{
				__StateStack.Push(58);
				__StateStack.Push(66);
				__StateStack.Push(65);
				__StateStack.Push(64);
				__StateStack.Push(61);
				__StateStack.Push(62);
				__StateStack.Push(63);
			}
		case 60:
			{
				bpv__chopAxe__pf = b0l__K2Node_CustomEvent_axe__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 61:
			{
				bpv__chopImpulse__pf = b0l__K2Node_CustomEvent_impulse__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 62:
			{
				bpv__grabbingHand__pf = bpv__grabbingHandComponent__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 63:
			{
				bpv__chopComponent__pf = b0l__K2Node_CustomEvent_component__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 64:
			{
				UGameplayStatics::BreakHitResult(b0l__K2Node_CustomEvent_hit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpv__chopImpactPoint__pf = b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 65:
			{
				UGameplayStatics::BreakHitResult(b0l__K2Node_CustomEvent_hit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpv__chopImpactNormal__pf = b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 66:
			{
				UGameplayStatics::BreakHitResult(b0l__K2Node_CustomEvent_hit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				if(IsValid(b0l__CallFunc_BreakHitResult_HitComponent__pf))
				{
					bpfv__CallFunc_GetMaterial_ReturnValue__pf = b0l__CallFunc_BreakHitResult_HitComponent__pf->GetMaterial(0);
				}
				bpv__chopMaterial__pf = bpfv__CallFunc_GetMaterial_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 91:
			{
				__CurrentState = 92;
				break;
			}
		case 92:
			{
				if (!bpv__isSticky__pf)
				{
					__CurrentState = 93;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 93:
			{
				bpfv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_CustomEvent_axe__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 94:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_CustomEvent_component__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 95:
			{
				if(IsValid(b0l__K2Node_CustomEvent_component__pf))
				{
					b0l__K2Node_CustomEvent_component__pf->SetSimulatePhysics(true);
				}
			}
		case 96:
			{
				if(IsValid(b0l__K2Node_CustomEvent_component__pf))
				{
					bpfv__CallFunc_GetMass_ReturnValue2__pf = b0l__K2Node_CustomEvent_component__pf->GetMass();
				}
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_GetMass_ReturnValue2__pf, bpv__minChoppableMass__pf);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 97:
			{
				if (!bpv__canChop__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 98:
			{
				bpv__canChop__pf = false;
				__CurrentState = 59;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void Achoppable_C__pf1172009058::bpf__ExecuteUbergraph_choppable__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 110:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Achoppable_C__pf1172009058::bpf__ExecuteUbergraph_choppable__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 109:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Achoppable_C__pf1172009058::bpf__ExecuteUbergraph_choppable__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 108:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Achoppable_C__pf1172009058::bpf__ExecuteUbergraph_choppable__pf_5(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsValid_ReturnValue3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 67:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__ProceduralMesh__pf->SetSimulatePhysics(false);
				}
			}
		case 68:
			{
				bpv__grabbedComponent__pf = ((UPrimitiveComponent*)nullptr);
			}
		case 69:
			{
				if (!b0l__K2Node_CustomEvent_playFreezeSound__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 70:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__ProceduralMesh__pf->USceneComponent::K2_GetComponentLocation();
				}
				UGameplayStatics::PlaySoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[30], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), 0.400000, 1.000000, 0.000000, CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[25], ECastCheckedType::NullAllowed), ((USoundConcurrency*)nullptr));
				__CurrentState = -1;
				break;
			}
		case 71:
			{
				bpf__DropComponent__pf(bpv__grabbedComponent__pf);
				__CurrentState = 67;
				break;
			}
		case 72:
			{
				bpv__isFrozen__pf = true;
			}
		case 73:
			{
				bpfv__CallFunc_IsValid_ReturnValue3__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_CustomEvent_currentComponent__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue3__pf)
				{
					__CurrentState = 71;
					break;
				}
			}
		case 74:
			{
				if(IsValid(b0l__K2Node_CustomEvent_currentComponent__pf))
				{
					b0l__K2Node_CustomEvent_currentComponent__pf->SetSimulatePhysics(false);
				}
				__CurrentState = 71;
				break;
			}
		case 103:
			{
				__CurrentState = 72;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Achoppable_C__pf1172009058::bpf__ExecuteUbergraph_choppable__pf_6(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 101:
			{
				__CurrentState = 102;
				break;
			}
		case 102:
			{
				bpf__dropFunction__pf(b0l__K2Node_Event_component__pf, b0l__K2Node_Event_component__pf, b0l__K2Node_Event_component__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Achoppable_C__pf1172009058::bpf__ExecuteUbergraph_choppable__pf_7(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 99:
			{
				__CurrentState = 100;
				break;
			}
		case 100:
			{
				bpf__pickupFunction__pf(b0l__K2Node_Event_Component2__pf, b0l__K2Node_Event_Component2__pf, b0l__K2Node_Event_AttachTo__pf, b0l__K2Node_Event_Component2__pf, b0l__K2Node_Event_AttachTo__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Achoppable_C__pf1172009058::bpf__ExecuteUbergraph_choppable__pf_8(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 89:
			{
				__CurrentState = 90;
				break;
			}
		case 90:
			{
				bpf__initialize__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Achoppable_C__pf1172009058::bpf__ExecuteUbergraph_choppable__pf_9(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 88:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Achoppable_C__pf1172009058::bpf__ExecuteUbergraph_choppable__pf_10(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 86:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Achoppable_C__pf1172009058::bpf__highlight__pf()
{
	bpf__ExecuteUbergraph_choppable__pf_2(110);
}
void Achoppable_C__pf1172009058::bpf__stickToWeapon__pf()
{
	bpf__ExecuteUbergraph_choppable__pf_3(109);
}
void Achoppable_C__pf1172009058::bpf__bsod__pf()
{
	bpf__ExecuteUbergraph_choppable__pf_4(108);
}
void Achoppable_C__pf1172009058::bpf__ReceiveHit__pf(UPrimitiveComponent* bpp__MyComp__pf, AActor* bpp__Other__pf, UPrimitiveComponent* bpp__OtherComp__pf, bool bpp__bSelfMoved__pf, FVector bpp__HitLocation__pf, FVector bpp__HitNormal__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const)
{
	typedef FHitResult  T__Local__10;
	T__Local__10& bpp__Hit__pf = *const_cast<T__Local__10 *>(&bpp__Hit__pf__const);
	b0l__K2Node_Event_MyComp__pf = bpp__MyComp__pf;
	b0l__K2Node_Event_Other__pf = bpp__Other__pf;
	b0l__K2Node_Event_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_Event_bSelfMoved__pf = bpp__bSelfMoved__pf;
	b0l__K2Node_Event_HitLocation__pf = bpp__HitLocation__pf;
	b0l__K2Node_Event_HitNormal__pf = bpp__HitNormal__pf;
	b0l__K2Node_Event_NormalImpulse__pf = bpp__NormalImpulse__pf;
	b0l__K2Node_Event_Hit__pf = bpp__Hit__pf;
	bpf__ExecuteUbergraph_choppable__pf_0(104);
}
void Achoppable_C__pf1172009058::bpf__freezeChoppable__pf(bool bpp__playFreezeSound__pf, UPrimitiveComponent* bpp__currentComponent__pf)
{
	b0l__K2Node_CustomEvent_playFreezeSound__pf = bpp__playFreezeSound__pf;
	b0l__K2Node_CustomEvent_currentComponent__pf = bpp__currentComponent__pf;
	bpf__ExecuteUbergraph_choppable__pf_5(103);
}
void Achoppable_C__pf1172009058::bpf__DropComponent__pf(UPrimitiveComponent* bpp__component__pf)
{
	b0l__K2Node_Event_component__pf = bpp__component__pf;
	bpf__ExecuteUbergraph_choppable__pf_6(101);
}
void Achoppable_C__pf1172009058::bpf__PickupComponent__pf(USceneComponent* bpp__AttachTo__pf, UPrimitiveComponent* bpp__Component__pf)
{
	b0l__K2Node_Event_AttachTo__pf = bpp__AttachTo__pf;
	b0l__K2Node_Event_Component2__pf = bpp__Component__pf;
	bpf__ExecuteUbergraph_choppable__pf_7(99);
}
void Achoppable_C__pf1172009058::bpf__chopEvent__pf(FHitResult bpp__hit__pf, UStaticMeshComponent* bpp__axe__pf, UProceduralMeshComponent* bpp__component__pf, FVector bpp__impulse__pf)
{
	b0l__K2Node_CustomEvent_hit__pf = bpp__hit__pf;
	b0l__K2Node_CustomEvent_axe__pf = bpp__axe__pf;
	b0l__K2Node_CustomEvent_component__pf = bpp__component__pf;
	b0l__K2Node_CustomEvent_impulse__pf = bpp__impulse__pf;
	bpf__ExecuteUbergraph_choppable__pf_1(91);
}
void Achoppable_C__pf1172009058::bpf__reinitChoppableObjectEvent__pf()
{
	bpf__ExecuteUbergraph_choppable__pf_8(89);
}
void Achoppable_C__pf1172009058::bpf__Drop__pf()
{
	bpf__ExecuteUbergraph_choppable__pf_9(88);
}
void Achoppable_C__pf1172009058::bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
{
	b0l__K2Node_Event_AttachTo2__pf = bpp__AttachTo__pf;
	bpf__ExecuteUbergraph_choppable__pf_10(86);
}
void Achoppable_C__pf1172009058::bpf__UserConstructionScript__pf()
{
	bpf__initialize__pf();
}
void Achoppable_C__pf1172009058::bpf__initialize__pf()
{
	bool bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf{};
	float bpfv__CallFunc_GetMass_ReturnValue__pf{};
	float bpfv__CallFunc_Sqrt_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::NotEqual_ObjectObject(bpv__mesh__pf, ((UObject*)nullptr));
				if (!bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				if(IsValid(bpv__staticmeshref__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue__pf = bpv__staticmeshref__pf->SetStaticMesh(bpv__mesh__pf);
				}
			}
		case 3:
			{
				if(IsValid(bpv__staticmeshref__pf))
				{
					bpv__staticmeshref__pf->SetCollisionProfileName(FName(TEXT("WorldDynamic")));
				}
			}
		case 4:
			{
				if(IsValid(bpv__staticmeshref__pf))
				{
					bpv__staticmeshref__pf->SetMassOverrideInKg(FName(TEXT("None")), 100.000000, true);
				}
			}
		case 5:
			{
				UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(bpv__staticmeshref__pf, 0, bpv__ProceduralMesh__pf, bpv__createCollision__pf);
			}
		case 6:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__ProceduralMesh__pf->SetEnableGravity(bpv__gravity__pf);
				}
			}
		case 7:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__ProceduralMesh__pf->SetSimulatePhysics(bpv__physics__pf);
				}
			}
		case 8:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__ProceduralMesh__pf->CanCharacterStepUpOn = bpv__canStepOn__pf;
				}
			}
		case 9:
			{
				if (!bpv__startFrozen__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 10:
			{
				bpf__freezeChoppable__pf(false, ((UPrimitiveComponent*)nullptr));
			}
		case 11:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf = bpv__ProceduralMesh__pf->IsSimulatingPhysics(FName(TEXT("None")));
				}
				if (!bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 12:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpfv__CallFunc_GetMass_ReturnValue__pf = bpv__ProceduralMesh__pf->GetMass();
				}
				bpfv__CallFunc_Sqrt_ReturnValue__pf = UKismetMathLibrary::Sqrt(bpfv__CallFunc_GetMass_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Sqrt_ReturnValue__pf, 1500.000000);
				bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__minViewDistance__pf, bpv__maxViewDistance__pf);
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__ProceduralMesh__pf->UPrimitiveComponent::SetCullDistance(bpfv__CallFunc_FClamp_ReturnValue__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Achoppable_C__pf1172009058::bpf__pickupFunction__pf(UPrimitiveComponent* bpp__self2__pf, USceneComponent* bpp__self3__pf, USceneComponent* bpp__InputPin__pf, UPrimitiveComponent* bpp__grabbedComponent__pf, USceneComponent* bpp__grabbingHandComponent__pf)
{
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf{};
	bpv__grabbingHandComponent__pf = bpp__grabbingHandComponent__pf;
	bpv__isFrozen__pf = false;
	bpv__canChop__pf = true;
	bpv__grabbedComponent__pf = bpp__grabbedComponent__pf;
	if(IsValid(bpp__self2__pf))
	{
		bpp__self2__pf->SetSimulatePhysics(false);
	}
	if(IsValid(bpp__self3__pf))
	{
		bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf = bpp__self3__pf->USceneComponent::K2_AttachToComponent(bpp__InputPin__pf, FName(TEXT("None")), EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false);
	}
}
void Achoppable_C__pf1172009058::bpf__dropFunction__pf(UPrimitiveComponent* bpp__self2__pf, USceneComponent* bpp__self3__pf, UObject* bpp__InputObject__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__grabbingHandComponent__pf = ((USceneComponent*)nullptr);
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpp__InputObject__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if (!bpv__isFrozen__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 4:
			{
				if(IsValid(bpp__self3__pf))
				{
					bpp__self3__pf->USceneComponent::K2_DetachFromComponent(EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld, true);
				}
			}
		case 5:
			{
				AActor::K2_DetachFromActor(EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative);
			}
		case 6:
			{
				bpv__grabbedComponent__pf = ((UPrimitiveComponent*)nullptr);
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__ProceduralMesh__pf->SetSimulatePhysics(true);
				}
				if(IsValid(bpp__self2__pf))
				{
					bpp__self2__pf->SetSimulatePhysics(true);
				}
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Achoppable_C__pf1172009058::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/props/log/log.log 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/thump/wood_thump_low.wood_thump_low 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_1.wc_1 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_2.wc_2 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_3.wc_3 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_4.wc_4 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_5.wc_5 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_6.wc_6 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_7.wc_7 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_8.wc_8 
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
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundAttenuation /Game/audio/chopEffectAttenuation.chopEffectAttenuation 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PhysicalMaterial /Game/materials/physicalMat/bigTreeLeafPhysicalMat.bigTreeLeafPhysicalMat 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PhysicalMaterial /Game/materials/physicalMat/bigTreeTrunkPhysicalMat.bigTreeTrunkPhysicalMat 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/BP_MotionController.BP_MotionController_C 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/particles/woodchipParticle.woodchipParticle 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/freeze/ui_casual_pops_back.ui_casual_pops_back 
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
void Achoppable_C__pf1172009058::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{25, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/PickupActorInterface.PickupActorInterface_C 
		{49, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/choppableItems/choppableHitMass.choppableHitMass 
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
struct FRegisterHelper__Achoppable_C__pf1172009058
{
	FRegisterHelper__Achoppable_C__pf1172009058()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/choppableItems/choppable"), &Achoppable_C__pf1172009058::__StaticDependenciesAssets);
	}
	static FRegisterHelper__Achoppable_C__pf1172009058 Instance;
};
FRegisterHelper__Achoppable_C__pf1172009058 FRegisterHelper__Achoppable_C__pf1172009058::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
