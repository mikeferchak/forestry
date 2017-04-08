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
#include "BP_MotionController__pf563933975.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
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
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Enum_Grip__pf3811345418.h"
#include "Runtime/Engine/Classes/Components/SplineMeshComponent.h"
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
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	float bpfv__CallFunc_GetLinearDamping_ReturnValue__pf{};
	float bpfv__CallFunc_GetMass_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_GetMass_ReturnValue2__pf{};
	float bpfv__CallFunc_Sqrt_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	float bpfv__CallFunc_GetMass_ReturnValue3__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue2__pf{};
	UMaterialInterface* bpfv__CallFunc_GetMaterial_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue3__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue2__pf{};
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
					bpv__outProcMesh__pf->SetCollisionProfileName(FName(TEXT("choppable")));
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
					bpv__outProcMesh__pf->SetSimulatePhysics(false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				__CurrentState = 6;
				break;
			}
		case 6:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__ProceduralMesh__pf->SetCollisionProfileName(FName(TEXT("choppable")));
				}
			}
		case 7:
			{
				b0l__Temp_int_Loop_Counter_Variable2__pf = 0;
			}
		case 8:
			{
				b0l__Temp_int_Array_Index_Variable2__pf = 0;
			}
		case 9:
			{
				bpfv__CallFunc_Array_Length_ReturnValue3__pf = FCustomThunkTemplates::Array_Length(bpv__newProcMeshes__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue2__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable2__pf, bpfv__CallFunc_Array_Length_ReturnValue3__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 10:
			{
				b0l__Temp_int_Array_Index_Variable2__pf = b0l__Temp_int_Loop_Counter_Variable2__pf;
			}
		case 11:
			{
				__StateStack.Push(14);
			}
		case 12:
			{
				FCustomThunkTemplates::Array_Get(bpv__newProcMeshes__pf, b0l__Temp_int_Array_Index_Variable2__pf, /*out*/ b0l__CallFunc_Array_Get_Item3__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item3__pf))
				{
					b0l__CallFunc_Array_Get_Item3__pf->SetCollisionProfileName(FName(TEXT("choppable")));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				bpv__canChop__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable2__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = 9;
				break;
			}
		case 17:
			{
				b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf = Cast<UMotionControllerComponent>(bpv__grabbingHand__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 18:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue__pf = b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf->UActorComponent::GetOwner();
				}
				b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf = NoNativeCast<AActor>(CastChecked<UClass>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed), bpfv__CallFunc_GetOwner_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 19:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf))
				{
					FUnconvertedWrapper__ABP_MotionController_C__pf563933975(b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf).bpf__GrabComponent__pf(/*out*/ b0l__CallFunc_GrabComponent_didGrab__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf = UGameplayStatics::SpawnEmitterAtLocation(this, CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed), bpv__chopImpactPoint__pf, FRotator(0.000000,0.000000,0.000000), true);
			}
		case 21:
			{
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpv__chopImpulse__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__chopImpactNormal__pf, bpfv__CallFunc_VSize_ReturnValue__pf);
				if(IsValid(bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf))
				{
					bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf->UParticleSystemComponent::SetVectorParameter(FName(TEXT("woodchipInitialVelocity")), bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				}
			}
		case 22:
			{
				bpf__bsod__pf();
			}
		case 23:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__ProceduralMesh__pf->SetCollisionProfileName(FName(TEXT("pickupNoChop")));
				}
			}
		case 24:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 25:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 26:
			{
				bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(bpv__newProcMeshes__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 31;
					break;
				}
			}
		case 27:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 28:
			{
				__StateStack.Push(30);
			}
		case 29:
			{
				FCustomThunkTemplates::Array_Get(bpv__newProcMeshes__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item2__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item2__pf))
				{
					b0l__CallFunc_Array_Get_Item2__pf->SetCollisionProfileName(FName(TEXT("pickupNoChop")));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 26;
				break;
			}
		case 31:
			{
				UKismetSystemLibrary::Delay(this, 0.300000, FLatentActionInfo(5, 909263755, TEXT("ExecuteUbergraph_choppable_0"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				if(IsValid(bpv__grabbingHand__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue2__pf = bpv__grabbingHand__pf->UActorComponent::GetOwner();
				}
				b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf = NoNativeCast<AActor>(CastChecked<UClass>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed), bpfv__CallFunc_GetOwner_ReturnValue2__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					__CurrentState = 48;
					break;
				}
			}
		case 33:
			{
				b0l__Temp_struct_Variable__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable2__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable3__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable4__pf = FVector(0.000000,0.000000,0.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(-1.000000, -1.000000, -1.000000);
				bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(1.000000, 1.000000, 1.000000);
				b0l__Temp_struct_Variable5__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable6__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable7__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable8__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable9__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable10__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable11__pf = FVector(0.000000,0.000000,0.000000);
				b0l__Temp_struct_Variable12__pf = FVector(0.000000,0.000000,0.000000);
				EControllerHand  __Local__5 = EControllerHand::Left;
				b0l__Temp_byte_Variable__pf = ((IsValid(b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf)) ? (FUnconvertedWrapper__ABP_MotionController_C__pf563933975(b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf).GetRef__Hand__pf()) : (__Local__5));
				bpv__planeNormalMuliplier__pf = TSwitchValue<EControllerHand , FVector >(b0l__Temp_byte_Variable__pf, b0l__K2Node_Select_Default__pf, 14, TSwitchPair<EControllerHand , FVector >(EControllerHand::Left, bpfv__CallFunc_MakeVector_ReturnValue__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Right, bpfv__CallFunc_MakeVector_ReturnValue2__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Pad, b0l__Temp_struct_Variable3__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::ExternalCamera, b0l__Temp_struct_Variable5__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Gun, b0l__Temp_struct_Variable6__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_1, b0l__Temp_struct_Variable11__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_2, b0l__Temp_struct_Variable__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_3, b0l__Temp_struct_Variable2__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_4, b0l__Temp_struct_Variable4__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_5, b0l__Temp_struct_Variable7__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_6, b0l__Temp_struct_Variable8__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_7, b0l__Temp_struct_Variable9__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_8, b0l__Temp_struct_Variable10__pf), TSwitchPair<EControllerHand , FVector >(EControllerHand::Special_9, b0l__Temp_struct_Variable12__pf));
			}
		case 34:
			{
				if(IsValid(bpv__chopAxe__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__chopAxe__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_GetRightVector_ReturnValue__pf = UKismetMathLibrary::GetRightVector(bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf);
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpfv__CallFunc_GetRightVector_ReturnValue__pf, bpv__planeNormalMuliplier__pf);
				UKismetProceduralMeshLibrary::SliceProceduralMesh(bpv__chopComponent__pf, bpv__chopImpactPoint__pf, bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf, true, /*out*/ b0l__CallFunc_SliceProceduralMesh_OutOtherHalfProcMesh__pf, bpv__capOption__pf, bpv__chopMaterial__pf);
			}
		case 35:
			{
				bpv__outProcMesh__pf = b0l__CallFunc_SliceProceduralMesh_OutOtherHalfProcMesh__pf;
			}
		case 36:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__newProcMeshes__pf, bpv__outProcMesh__pf);
			}
		case 37:
			{
				bpv__hasBeenChopped__pf = true;
			}
		case 38:
			{
				__StateStack.Push(20);
				__StateStack.Push(51);
				__StateStack.Push(17);
				__StateStack.Push(49);
				__StateStack.Push(46);
			}
		case 39:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetCollisionProfileName(FName(TEXT("pickupNoChop")));
				}
			}
		case 40:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetEnableGravity(true);
				}
			}
		case 41:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetSimulatePhysics(true);
				}
			}
		case 42:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpfv__CallFunc_GetMass_ReturnValue__pf = bpv__outProcMesh__pf->GetMass();
				}
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_GetMass_ReturnValue__pf, 40.000000);
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->UPrimitiveComponent::SetCastShadow(bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf);
				}
			}
		case 43:
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
		case 44:
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
		case 45:
			{
				UKismetSystemLibrary::Delay(this, 0.300000, FLatentActionInfo(1, 1440855481, TEXT("ExecuteUbergraph_choppable_0"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 46:
			{
				AActor::K2_DetachFromActor(EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative);
			}
		case 47:
			{
				if(IsValid(bpv__chopComponent__pf))
				{
					bpv__chopComponent__pf->USceneComponent::K2_DetachFromComponent(EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 48:
			{
				bpv__planeNormalMuliplier__pf = FVector(-1.000000,-1.000000,-1.000000);
				__CurrentState = 34;
				break;
			}
		case 49:
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
		case 50:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpfv__CallFunc_GetMass_ReturnValue2__pf = bpv__outProcMesh__pf->GetMass();
				}
				bpfv__CallFunc_Sqrt_ReturnValue__pf = UKismetMathLibrary::Sqrt(bpfv__CallFunc_GetMass_ReturnValue2__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Sqrt_ReturnValue__pf, 5.000000);
				bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 1.000000, 40.000000);
				UKismetSystemLibrary::Delay(this, bpfv__CallFunc_FClamp_ReturnValue__pf, FLatentActionInfo(3, 2147483647, TEXT("ExecuteUbergraph_choppable_0"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 51:
			{
				bpfv__CallFunc_VSize_ReturnValue2__pf = UKismetMathLibrary::VSize(bpv__chopImpulse__pf);
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__chopSounds__pf);
				bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_VSize_ReturnValue2__pf, 0.000000, 10000.000000, 0.000000, 5.000000);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 1);
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__chopSounds__pf, bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				UGameplayStatics::PlaySoundAtLocation(this, b0l__CallFunc_Array_Get_Item__pf, bpv__chopImpactPoint__pf, FRotator(0.000000,0.000000,0.000000), bpfv__CallFunc_MapRangeClamped_ReturnValue__pf, 1.000000, 0.000000, CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed), ((USoundConcurrency*)nullptr));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 52:
			{
				bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::NotEqual_ObjectObject(bpv__grabbingHand__pf, ((UObject*)nullptr));
				if (!bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 48;
					break;
				}
				__CurrentState = 32;
				break;
			}
		case 53:
			{
				__StateStack.Push(52);
				__StateStack.Push(60);
				__StateStack.Push(59);
				__StateStack.Push(55);
				__StateStack.Push(56);
				__StateStack.Push(57);
				__StateStack.Push(58);
			}
		case 54:
			{
				bpv__chopAxe__pf = b0l__K2Node_CustomEvent_axe__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 55:
			{
				UGameplayStatics::BreakHitResult(b0l__K2Node_CustomEvent_hit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpv__chopImpactPoint__pf = b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 56:
			{
				bpv__chopImpulse__pf = b0l__K2Node_CustomEvent_impulse__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 57:
			{
				bpv__grabbingHand__pf = bpv__grabbingHandComponent__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 58:
			{
				bpv__chopComponent__pf = b0l__K2Node_CustomEvent_component__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 59:
			{
				UGameplayStatics::BreakHitResult(b0l__K2Node_CustomEvent_hit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpv__chopImpactNormal__pf = b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 60:
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
		case 73:
			{
				__CurrentState = 74;
				break;
			}
		case 74:
			{
				if (!bpv__isSticky__pf)
				{
					__CurrentState = 75;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 75:
			{
				bpfv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_CustomEvent_axe__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 76:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_CustomEvent_component__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 77:
			{
				if(IsValid(b0l__K2Node_CustomEvent_component__pf))
				{
					b0l__K2Node_CustomEvent_component__pf->SetSimulatePhysics(true);
				}
			}
		case 78:
			{
				if(IsValid(b0l__K2Node_CustomEvent_component__pf))
				{
					bpfv__CallFunc_GetMass_ReturnValue3__pf = b0l__K2Node_CustomEvent_component__pf->GetMass();
				}
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_GetMass_ReturnValue3__pf, bpv__minChoppableMass__pf);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 79:
			{
				if (!bpv__canChop__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 80:
			{
				bpv__canChop__pf = false;
				__CurrentState = 53;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void Achoppable_C__pf1172009058::bpf__ExecuteUbergraph_choppable__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 96:
			{
				__CurrentState = -1;
				break;
			}
		default:
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
		case 95:
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
		case 94:
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
	float bpfv__CallFunc_VSize_ReturnValue3__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue4__pf{};
	bool bpfv__CallFunc_IsSimulatingPhysics_ReturnValue2__pf{};
	float bpfv__CallFunc_GetMass_ReturnValue4__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue2__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 15:
			{
				__CurrentState = 16;
				break;
			}
		case 16:
			{
				bpv__canPlayThump__pf = true;
				__CurrentState = -1;
				break;
			}
		case 86:
			{
				__CurrentState = 87;
				break;
			}
		case 87:
			{
				if (!bpv__canPlayThump__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 88:
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
		case 89:
			{
				bpfv__CallFunc_VSize_ReturnValue3__pf = UKismetMathLibrary::VSize(b0l__K2Node_Event_NormalImpulse__pf);
				if(IsValid(b0l__K2Node_Event_MyComp__pf))
				{
					bpfv__CallFunc_GetMass_ReturnValue4__pf = b0l__K2Node_Event_MyComp__pf->GetMass();
				}
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_VSize_ReturnValue3__pf, bpfv__CallFunc_GetMass_ReturnValue4__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 500.000000);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf, 0.300000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 90:
			{
				bpfv__CallFunc_IsValid_ReturnValue4__pf = UKismetSystemLibrary::IsValid(bpv__thumpSound__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue4__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 91:
			{
				bpv__canPlayThump__pf = false;
			}
		case 92:
			{
				bpfv__CallFunc_VSize_ReturnValue3__pf = UKismetMathLibrary::VSize(b0l__K2Node_Event_NormalImpulse__pf);
				if(IsValid(b0l__K2Node_Event_MyComp__pf))
				{
					bpfv__CallFunc_GetMass_ReturnValue4__pf = b0l__K2Node_Event_MyComp__pf->GetMass();
				}
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_VSize_ReturnValue3__pf, bpfv__CallFunc_GetMass_ReturnValue4__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 500.000000);
				bpfv__CallFunc_FClamp_ReturnValue2__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf, 0.000000, 2.000000);
				bpfv__CallFunc_FClamp_ReturnValue3__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf, 0.000000, 1.000000);
				UGameplayStatics::PlaySoundAtLocation(this, bpv__thumpSound__pf, b0l__K2Node_Event_HitLocation__pf, FRotator(0.000000,0.000000,0.000000), bpfv__CallFunc_FClamp_ReturnValue3__pf, bpfv__CallFunc_FClamp_ReturnValue2__pf, 0.000000, CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed), CastChecked<USoundConcurrency>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed));
			}
		case 93:
			{
				UKismetSystemLibrary::Delay(this, 0.500000, FLatentActionInfo(15, 1335260775, TEXT("ExecuteUbergraph_choppable_4"), this));
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
		case 61:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__ProceduralMesh__pf->SetSimulatePhysics(false);
				}
			}
		case 62:
			{
				bpv__grabbedComponent__pf = ((UPrimitiveComponent*)nullptr);
			}
		case 63:
			{
				if (!b0l__K2Node_CustomEvent_playFreezeSound__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 64:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__ProceduralMesh__pf->USceneComponent::K2_GetComponentLocation();
				}
				UGameplayStatics::PlaySoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), 0.400000, 1.000000, 0.000000, CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Achoppable_C__pf1172009058::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed), ((USoundConcurrency*)nullptr));
				__CurrentState = -1;
				break;
			}
		case 65:
			{
				bpv__isFrozen__pf = true;
			}
		case 66:
			{
				bpfv__CallFunc_IsValid_ReturnValue3__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_CustomEvent_currentComponent__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue3__pf)
				{
					__CurrentState = 68;
					break;
				}
			}
		case 67:
			{
				if(IsValid(b0l__K2Node_CustomEvent_currentComponent__pf))
				{
					b0l__K2Node_CustomEvent_currentComponent__pf->SetSimulatePhysics(false);
				}
			}
		case 68:
			{
				bpf__DropComponent__pf(bpv__grabbedComponent__pf);
				__CurrentState = 61;
				break;
			}
		case 85:
			{
				__CurrentState = 65;
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
		case 83:
			{
				__CurrentState = 84;
				break;
			}
		case 84:
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
		case 81:
			{
				__CurrentState = 82;
				break;
			}
		case 82:
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
		case 71:
			{
				__CurrentState = 72;
				break;
			}
		case 72:
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
		case 70:
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
		case 69:
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
	bpf__ExecuteUbergraph_choppable__pf_1(96);
}
void Achoppable_C__pf1172009058::bpf__stickToWeapon__pf()
{
	bpf__ExecuteUbergraph_choppable__pf_2(95);
}
void Achoppable_C__pf1172009058::bpf__bsod__pf()
{
	bpf__ExecuteUbergraph_choppable__pf_3(94);
}
void Achoppable_C__pf1172009058::bpf__ReceiveHit__pf(UPrimitiveComponent* bpp__MyComp__pf, AActor* bpp__Other__pf, UPrimitiveComponent* bpp__OtherComp__pf, bool bpp__bSelfMoved__pf, FVector bpp__HitLocation__pf, FVector bpp__HitNormal__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const)
{
	typedef FHitResult  T__Local__9;
	T__Local__9& bpp__Hit__pf = *const_cast<T__Local__9 *>(&bpp__Hit__pf__const);
	b0l__K2Node_Event_MyComp__pf = bpp__MyComp__pf;
	b0l__K2Node_Event_Other__pf = bpp__Other__pf;
	b0l__K2Node_Event_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_Event_bSelfMoved__pf = bpp__bSelfMoved__pf;
	b0l__K2Node_Event_HitLocation__pf = bpp__HitLocation__pf;
	b0l__K2Node_Event_HitNormal__pf = bpp__HitNormal__pf;
	b0l__K2Node_Event_NormalImpulse__pf = bpp__NormalImpulse__pf;
	b0l__K2Node_Event_Hit__pf = bpp__Hit__pf;
	bpf__ExecuteUbergraph_choppable__pf_4(86);
}
void Achoppable_C__pf1172009058::bpf__freezeChoppable__pf(bool bpp__playFreezeSound__pf, UPrimitiveComponent* bpp__currentComponent__pf)
{
	b0l__K2Node_CustomEvent_playFreezeSound__pf = bpp__playFreezeSound__pf;
	b0l__K2Node_CustomEvent_currentComponent__pf = bpp__currentComponent__pf;
	bpf__ExecuteUbergraph_choppable__pf_5(85);
}
void Achoppable_C__pf1172009058::bpf__DropComponent__pf(UPrimitiveComponent* bpp__component__pf)
{
	b0l__K2Node_Event_component__pf = bpp__component__pf;
	bpf__ExecuteUbergraph_choppable__pf_6(83);
}
void Achoppable_C__pf1172009058::bpf__PickupComponent__pf(USceneComponent* bpp__AttachTo__pf, UPrimitiveComponent* bpp__Component__pf)
{
	b0l__K2Node_Event_AttachTo__pf = bpp__AttachTo__pf;
	b0l__K2Node_Event_Component2__pf = bpp__Component__pf;
	bpf__ExecuteUbergraph_choppable__pf_7(81);
}
void Achoppable_C__pf1172009058::bpf__chopEvent__pf(FHitResult bpp__hit__pf, UStaticMeshComponent* bpp__axe__pf, UProceduralMeshComponent* bpp__component__pf, FVector bpp__impulse__pf)
{
	b0l__K2Node_CustomEvent_hit__pf = bpp__hit__pf;
	b0l__K2Node_CustomEvent_axe__pf = bpp__axe__pf;
	b0l__K2Node_CustomEvent_component__pf = bpp__component__pf;
	b0l__K2Node_CustomEvent_impulse__pf = bpp__impulse__pf;
	bpf__ExecuteUbergraph_choppable__pf_0(73);
}
void Achoppable_C__pf1172009058::bpf__reinitChoppableObjectEvent__pf()
{
	bpf__ExecuteUbergraph_choppable__pf_8(71);
}
void Achoppable_C__pf1172009058::bpf__Drop__pf()
{
	bpf__ExecuteUbergraph_choppable__pf_9(70);
}
void Achoppable_C__pf1172009058::bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
{
	b0l__K2Node_Event_AttachTo2__pf = bpp__AttachTo__pf;
	bpf__ExecuteUbergraph_choppable__pf_10(69);
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
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/thump/wood_thump_low.wood_thump_low 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_1.wc_1 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_2.wc_2 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_3.wc_3 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_4.wc_4 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_5.wc_5 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_6.wc_6 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_7.wc_7 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_8.wc_8 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/BP_MotionController.BP_MotionController_C 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/particles/woodchipParticle.woodchipParticle 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundAttenuation /Game/audio/chopEffectAttenuation.chopEffectAttenuation 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundConcurrency /Game/audio/chopConcurrency.chopConcurrency 
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
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/ProtoVRHand/Blueprints/Example/Enum_Grip.Enum_Grip 
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
