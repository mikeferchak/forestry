#include "NativizedAssets.h"
#include "choppable__pf2403237688.h"
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
#include "choppable__pf2403237688.h"
#include "BP_MotionController__pf2307895703.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
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
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "KismetProceduralMeshLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "AnimBP_LeftHand__pf4240717260.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
Achoppable_C__pf2403237688::Achoppable_C__pf2403237688(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (Achoppable_C__pf2403237688::StaticClass() == GetClass()))
	{
		Achoppable_C__pf2403237688::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__ProceduralMesh__pf = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProceduralMesh"));
	bpv__staticmeshref__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("staticmeshref"));
	RootComponent = bpv__ProceduralMesh__pf;
	bpv__ProceduralMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ProceduralMesh__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	bpv__ProceduralMesh__pf->BodyInstance.bNotifyRigidBodyCollision = true;
	bpv__ProceduralMesh__pf->BodyInstance.bSimulatePhysics = true;
	bpv__ProceduralMesh__pf->BodyInstance.LinearDamping = 0.100000f;
	bpv__ProceduralMesh__pf->BodyInstance.AngularDamping = 0.100000f;
	auto& __Local__0 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__ProceduralMesh__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__0 = ECollisionChannel::ECC_WorldDynamic;
	bpv__ProceduralMesh__pf->bUseComplexAsSimpleCollision = false;
	auto __Local__1 = NewObject<UBodySetup>(bpv__ProceduralMesh__pf, UBodySetup::StaticClass(), TEXT("BodySetup_0"));
	bpv__ProceduralMesh__pf->ProcMeshBodySetup = __Local__1;
	bpv__ProceduralMesh__pf->bAffectDynamicIndirectLighting = false;
	bpv__ProceduralMesh__pf->bAffectDistanceFieldLighting = false;
	bpv__ProceduralMesh__pf->bCastStaticShadow = false;
	if(!bpv__ProceduralMesh__pf->IsTemplate())
	{
		bpv__ProceduralMesh__pf->BodyInstance.FixupData(bpv__ProceduralMesh__pf);
	}
	bpv__staticmeshref__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__staticmeshref__pf->AttachToComponent(bpv__ProceduralMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__staticmeshref__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__staticmeshref__pf->BodyInstance.LinearDamping = 0.100000f;
	bpv__staticmeshref__pf->BodyInstance.AngularDamping = 0.100000f;
	bpv__staticmeshref__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(Achoppable_C__pf2403237688::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__staticmeshref__pf->bAffectDynamicIndirectLighting = false;
	bpv__staticmeshref__pf->bAffectDistanceFieldLighting = false;
	bpv__staticmeshref__pf->bCastStaticShadow = false;
	bpv__staticmeshref__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	bpv__staticmeshref__pf->bVisible = false;
	bpv__staticmeshref__pf->bHiddenInGame = true;
	bpv__staticmeshref__pf->RelativeScale3D = FVector(2.000000, 2.000000, 2.000000);
	static TWeakObjectPtr<UProperty> __Local__3{};
	const UProperty* __Local__2 = __Local__3.Get();
	if (nullptr == __Local__2)
	{
		__Local__2 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__2);
		__Local__3 = __Local__2;
	}
	(((UBoolProperty*)__Local__2)->SetPropertyValue_InContainer((bpv__staticmeshref__pf), false, 0));
	if(!bpv__staticmeshref__pf->IsTemplate())
	{
		bpv__staticmeshref__pf->BodyInstance.FixupData(bpv__staticmeshref__pf);
	}
	bpv__canhit__pf = false;
	bpv__NewVar_1__pf = nullptr;
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
	bpv__thumpSound__pf = nullptr;
	bpv__canPlayThump__pf = true;
	bpv__maxViewDistance__pf = 40000.000000f;
	bpv__minViewDistance__pf = 4000.000000f;
	bpv__massToVisibilityExponent__pf = 1.500000f;
	bpv__startFrozen__pf = false;
}
void Achoppable_C__pf2403237688::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
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
void Achoppable_C__pf2403237688::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	extern UClass* Z_Construct_UClass_UPickupActorInterface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPickupActorInterface_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
void Achoppable_C__pf2403237688::bpf__ExecuteUbergraph_choppable__pf_0(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_VSize_ReturnValue2__pf{};
	float bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	bool bpv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	float bpv__CallFunc_FClamp_ReturnValue__pf{};
	float bpv__CallFunc_FClamp_ReturnValue2__pf{};
	bool bpv__CallFunc_IsValid_ReturnValue3__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				if (!bpv__canPlayThump__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpv__CallFunc_VSize_ReturnValue2__pf = UKismetMathLibrary::VSize(b0l__K2Node_Event_NormalImpulse__pf);
				bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__CallFunc_VSize_ReturnValue2__pf, 4000.000000);
				bpv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 0.300000);
				if (!bpv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpv__CallFunc_IsValid_ReturnValue3__pf = UKismetSystemLibrary::IsValid(bpv__thumpSound__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue3__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bpv__canPlayThump__pf = false;
			}
		case 5:
			{
				bpv__CallFunc_VSize_ReturnValue2__pf = UKismetMathLibrary::VSize(b0l__K2Node_Event_NormalImpulse__pf);
				bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__CallFunc_VSize_ReturnValue2__pf, 4000.000000);
				bpv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 0.000000, 2.000000);
				bpv__CallFunc_FClamp_ReturnValue2__pf = UKismetMathLibrary::FClamp(bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 0.000000, 1.000000);
				UGameplayStatics::PlaySoundAtLocation(this, bpv__thumpSound__pf, b0l__K2Node_Event_HitLocation__pf, FRotator(0.000000,0.000000,0.000000), bpv__CallFunc_FClamp_ReturnValue2__pf, bpv__CallFunc_FClamp_ReturnValue__pf, 0.000000, CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(Achoppable_C__pf2403237688::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), CastChecked<USoundConcurrency>(CastChecked<UDynamicClass>(Achoppable_C__pf2403237688::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
			}
		case 6:
			{
				float  __Local__4 = 0.000000;
				UKismetSystemLibrary::Delay(this, ((IsValid(bpv__thumpSound__pf)) ? (bpv__thumpSound__pf->Duration) : (__Local__4)), FLatentActionInfo(7, 1335260775, TEXT("ExecuteUbergraph_choppable_0"), this));
				CurrentState = -1;
				break;
			}
		case 7:
			{
				CurrentState = 8;
				break;
			}
		case 8:
			{
				bpv__canPlayThump__pf = true;
				CurrentState = -1;
				break;
			}
		case 23:
			{
				CurrentState = 1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Achoppable_C__pf2403237688::bpf__ExecuteUbergraph_choppable__pf_1(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_VSize_ReturnValue__pf{};
	float bpv__CallFunc_GetAngularDamping_ReturnValue__pf{};
	float bpv__CallFunc_GetLinearDamping_ReturnValue__pf{};
	bool bpv__CallFunc_IsValid_ReturnValue__pf{};
	FRotator bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpv__CallFunc_IsValid_ReturnValue2__pf{};
	FVector bpv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Multiply_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	UMaterialInterface* bpv__CallFunc_GetMaterial_ReturnValue__pf{};
	FVector bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	UParticleSystemComponent* bpv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf{};
	AActor* bpv__CallFunc_GetOwner_ReturnValue__pf{};
	float bpv__CallFunc_GetMass_ReturnValue__pf{};
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	float bpv__CallFunc_GetMass_ReturnValue2__pf{};
	float bpv__CallFunc_Sqrt_ReturnValue__pf{};
	float bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpv__CallFunc_FClamp_ReturnValue3__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 9:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__CallFunc_GetMass_ReturnValue2__pf = bpv__outProcMesh__pf->GetMass();
				}
				bpv__CallFunc_Sqrt_ReturnValue__pf = UKismetMathLibrary::Sqrt(bpv__CallFunc_GetMass_ReturnValue2__pf);
				bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__CallFunc_Sqrt_ReturnValue__pf, 5.000000);
				bpv__CallFunc_FClamp_ReturnValue3__pf = UKismetMathLibrary::FClamp(bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 1.000000, 40.000000);
				UKismetSystemLibrary::Delay(this, bpv__CallFunc_FClamp_ReturnValue3__pf, FLatentActionInfo(10, -316424673, TEXT("ExecuteUbergraph_choppable_1"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				CurrentState = 11;
				break;
			}
		case 11:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetSimulatePhysics(false);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetEnableGravity(true);
				}
			}
		case 13:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__CallFunc_GetMass_ReturnValue__pf = bpv__outProcMesh__pf->GetMass();
				}
				bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__CallFunc_GetMass_ReturnValue__pf, 40.000000);
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->UPrimitiveComponent::SetCastShadow(bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf);
				}
			}
		case 14:
			{
				bpf__bsod__pf();
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetSimulatePhysics(true);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				if(IsValid(b0l__K2Node_CustomEvent_component__pf))
				{
					bpv__CallFunc_GetLinearDamping_ReturnValue__pf = b0l__K2Node_CustomEvent_component__pf->GetLinearDamping();
				}
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetLinearDamping(bpv__CallFunc_GetLinearDamping_ReturnValue__pf);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				if(IsValid(b0l__K2Node_CustomEvent_component__pf))
				{
					bpv__CallFunc_GetAngularDamping_ReturnValue__pf = b0l__K2Node_CustomEvent_component__pf->GetAngularDamping();
				}
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetAngularDamping(bpv__CallFunc_GetAngularDamping_ReturnValue__pf);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf))
				{
					b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf->bpf__GrabComponent__pf();
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf))
				{
					b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf->bpv__bWantsToGrip__pf = true;
				}
				CurrentState = 19;
				break;
			}
		case 21:
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
				CurrentState = 20;
				break;
			}
		case 22:
			{
				b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf = Cast<UMotionControllerComponent>(bpv__grabbingHandComponent__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				CurrentState = 21;
				break;
			}
		case 28:
			{
				UKismetSystemLibrary::Delay(this, 10.000000, FLatentActionInfo(29, -2102500685, TEXT("ExecuteUbergraph_choppable_1"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				CurrentState = 30;
				break;
			}
		case 30:
			{
				if(IsValid(b0l__K2Node_CustomEvent_component__pf))
				{
					b0l__K2Node_CustomEvent_component__pf->SetSimulatePhysics(false);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 31:
			{
				bpv__canChop__pf = true;
				CurrentState = 28;
				break;
			}
		case 32:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(33, 909263755, TEXT("ExecuteUbergraph_choppable_1"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				CurrentState = 31;
				break;
			}
		case 34:
			{
				if (!bpv__canChop__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 35:
			{
				bpv__canChop__pf = false;
			}
		case 36:
			{
				bpv__planeNormalMuliplier__pf = FVector(-1.000000,-1.000000,-1.000000);
			}
		case 37:
			{
				if(IsValid(b0l__K2Node_CustomEvent_axe__pf))
				{
					bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = b0l__K2Node_CustomEvent_axe__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpv__CallFunc_GetRightVector_ReturnValue__pf = UKismetMathLibrary::GetRightVector(bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf);
				bpv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpv__CallFunc_GetRightVector_ReturnValue__pf, bpv__planeNormalMuliplier__pf);
				UGameplayStatics::BreakHitResult(b0l__K2Node_CustomEvent_hit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				if(IsValid(b0l__CallFunc_BreakHitResult_HitComponent__pf))
				{
					bpv__CallFunc_GetMaterial_ReturnValue__pf = b0l__CallFunc_BreakHitResult_HitComponent__pf->GetMaterial(0);
				}
				UKismetProceduralMeshLibrary::SliceProceduralMesh(b0l__K2Node_CustomEvent_component__pf, b0l__CallFunc_BreakHitResult_ImpactPoint__pf, bpv__CallFunc_Multiply_VectorVector_ReturnValue__pf, true, /*out*/ b0l__CallFunc_SliceProceduralMesh_OutOtherHalfProcMesh__pf, EProcMeshSliceCapOption::CreateNewSectionForCap, bpv__CallFunc_GetMaterial_ReturnValue__pf);
			}
		case 38:
			{
				bpv__outProcMesh__pf = b0l__CallFunc_SliceProceduralMesh_OutOtherHalfProcMesh__pf;
			}
		case 39:
			{
				StateStack.Push(42);
				StateStack.Push(22);
				StateStack.Push(9);
				StateStack.Push(41);
				StateStack.Push(40);
				StateStack.Push(18);
				StateStack.Push(17);
				StateStack.Push(16);
				StateStack.Push(15);
				CurrentState = 12;
				break;
			}
		case 40:
			{
				AActor::K2_DetachFromActor(EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 41:
			{
				if(IsValid(b0l__K2Node_CustomEvent_component__pf))
				{
					b0l__K2Node_CustomEvent_component__pf->USceneComponent::K2_DetachFromComponent(EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, true);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 42:
			{
				UGameplayStatics::BreakHitResult(b0l__K2Node_CustomEvent_hit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf = UGameplayStatics::SpawnEmitterAtLocation(this, CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(Achoppable_C__pf2403237688::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed), b0l__CallFunc_BreakHitResult_ImpactPoint__pf, FRotator(0.000000,0.000000,0.000000), true);
			}
		case 43:
			{
				bpv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(b0l__K2Node_CustomEvent_impulse__pf);
				UGameplayStatics::BreakHitResult(b0l__K2Node_CustomEvent_hit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(b0l__CallFunc_BreakHitResult_ImpactNormal__pf, bpv__CallFunc_VSize_ReturnValue__pf);
				if(IsValid(bpv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf))
				{
					bpv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf->UParticleSystemComponent::SetVectorParameter(FName(TEXT("woodchipInitialVelocity")), bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				}
				CurrentState = 32;
				break;
			}
		case 48:
			{
				bpv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_CustomEvent_axe__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue2__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 49:
			{
				bpv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_CustomEvent_component__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 50:
			{
				if(IsValid(b0l__K2Node_CustomEvent_component__pf))
				{
					b0l__K2Node_CustomEvent_component__pf->SetSimulatePhysics(true);
				}
				CurrentState = 34;
				break;
			}
		case 51:
			{
				CurrentState = 48;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void Achoppable_C__pf2403237688::bpf__ExecuteUbergraph_choppable__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 27);
	// optimized KCST_UnconditionalGoto
	bpv__isFrozen__pf = true;
	bpf__DropComponent__pf(bpv__grabbedComponent__pf);
	if(IsValid(bpv__ProceduralMesh__pf))
	{
		bpv__ProceduralMesh__pf->SetSimulatePhysics(false);
	}
	return; //KCST_EndOfThread
}
void Achoppable_C__pf2403237688::bpf__ExecuteUbergraph_choppable__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 45);
	// optimized KCST_UnconditionalGoto
	bpf__dropFunction__pf(b0l__K2Node_Event_component__pf, b0l__K2Node_Event_component__pf, b0l__K2Node_Event_component__pf);
	return; //KCST_EndOfThread
}
void Achoppable_C__pf2403237688::bpf__ExecuteUbergraph_choppable__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 47);
	// optimized KCST_UnconditionalGoto
	bpf__pickupFunction__pf(b0l__K2Node_Event_Component2__pf, b0l__K2Node_Event_Component2__pf, b0l__K2Node_Event_AttachTo__pf, b0l__K2Node_Event_Component2__pf, b0l__K2Node_Event_AttachTo__pf);
	return; //KCST_EndOfThread
}
void Achoppable_C__pf2403237688::bpf__ExecuteUbergraph_choppable__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 53);
	// optimized KCST_UnconditionalGoto
	bpf__initialize__pf();
	return; //KCST_EndOfThread
}
void Achoppable_C__pf2403237688::bpf__ExecuteUbergraph_choppable__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 54);
	return; //KCST_EndOfThread
}
void Achoppable_C__pf2403237688::bpf__ExecuteUbergraph_choppable__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 55);
	return; //KCST_EndOfThread
}
void Achoppable_C__pf2403237688::bpf__ExecuteUbergraph_choppable__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 56);
	return; //KCST_EndOfThread
}
void Achoppable_C__pf2403237688::bpf__bsod__pf()
{
	bpf__ExecuteUbergraph_choppable__pf_8(56);
}
void Achoppable_C__pf2403237688::bpf__ReceiveHit__pf(UPrimitiveComponent* bpp__MyComp__pf, AActor* bpp__Other__pf, UPrimitiveComponent* bpp__OtherComp__pf, bool bpp__bSelfMoved__pf, FVector bpp__HitLocation__pf, FVector bpp__HitNormal__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const)
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
	bpf__ExecuteUbergraph_choppable__pf_0(23);
}
void Achoppable_C__pf2403237688::bpf__freezeChoppable__pf()
{
	bpf__ExecuteUbergraph_choppable__pf_2(27);
}
void Achoppable_C__pf2403237688::bpf__DropComponent__pf(UPrimitiveComponent* bpp__component__pf)
{
	b0l__K2Node_Event_component__pf = bpp__component__pf;
	bpf__ExecuteUbergraph_choppable__pf_3(45);
}
void Achoppable_C__pf2403237688::bpf__PickupComponent__pf(USceneComponent* bpp__AttachTo__pf, UPrimitiveComponent* bpp__Component__pf)
{
	b0l__K2Node_Event_AttachTo__pf = bpp__AttachTo__pf;
	b0l__K2Node_Event_Component2__pf = bpp__Component__pf;
	bpf__ExecuteUbergraph_choppable__pf_4(47);
}
void Achoppable_C__pf2403237688::bpf__chopEvent__pf(FHitResult bpp__hit__pf, UStaticMeshComponent* bpp__axe__pf, UProceduralMeshComponent* bpp__component__pf, FVector bpp__impulse__pf)
{
	b0l__K2Node_CustomEvent_hit__pf = bpp__hit__pf;
	b0l__K2Node_CustomEvent_axe__pf = bpp__axe__pf;
	b0l__K2Node_CustomEvent_component__pf = bpp__component__pf;
	b0l__K2Node_CustomEvent_impulse__pf = bpp__impulse__pf;
	bpf__ExecuteUbergraph_choppable__pf_1(51);
}
void Achoppable_C__pf2403237688::bpf__reinitChoppableObjectEvent__pf()
{
	bpf__ExecuteUbergraph_choppable__pf_5(53);
}
void Achoppable_C__pf2403237688::bpf__Drop__pf()
{
	bpf__ExecuteUbergraph_choppable__pf_6(54);
}
void Achoppable_C__pf2403237688::bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
{
	b0l__K2Node_Event_AttachTo2__pf = bpp__AttachTo__pf;
	bpf__ExecuteUbergraph_choppable__pf_7(55);
}
void Achoppable_C__pf2403237688::bpf__UserConstructionScript__pf()
{
	bpf__initialize__pf();
}
void Achoppable_C__pf2403237688::bpf__initialize__pf()
{
	float bpv__CallFunc_GetMass_ReturnValue__pf{};
	float bpv__CallFunc_MultiplyMultiply_FloatFloat_ReturnValue__pf{};
	float bpv__CallFunc_FClamp_ReturnValue__pf{};
	bool bpv__CallFunc_SetStaticMesh_ReturnValue__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__staticmeshref__pf))
				{
					bpv__CallFunc_SetStaticMesh_ReturnValue__pf = bpv__staticmeshref__pf->SetStaticMesh(bpv__mesh__pf);
				}
			}
		case 2:
			{
				if(IsValid(bpv__staticmeshref__pf))
				{
					bpv__staticmeshref__pf->SetMassOverrideInKg(FName(TEXT("None")), 100.000000, true);
				}
			}
		case 3:
			{
				UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(bpv__staticmeshref__pf, 0, bpv__ProceduralMesh__pf, bpv__createCollision__pf);
			}
		case 4:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__ProceduralMesh__pf->SetEnableGravity(bpv__gravity__pf);
				}
			}
		case 5:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__ProceduralMesh__pf->SetSimulatePhysics(bpv__physics__pf);
				}
			}
		case 6:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__ProceduralMesh__pf->CanCharacterStepUpOn = bpv__canStepOn__pf;
				}
			}
		case 7:
			{
				if (!bpv__startFrozen__pf)
				{
					CurrentState = 9;
					break;
				}
			}
		case 8:
			{
				bpf__freezeChoppable__pf();
			}
		case 9:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__CallFunc_GetMass_ReturnValue__pf = bpv__ProceduralMesh__pf->GetMass();
				}
				bpv__CallFunc_MultiplyMultiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::MultiplyMultiply_FloatFloat(bpv__CallFunc_GetMass_ReturnValue__pf, bpv__massToVisibilityExponent__pf);
				bpv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpv__CallFunc_MultiplyMultiply_FloatFloat_ReturnValue__pf, bpv__minViewDistance__pf, bpv__maxViewDistance__pf);
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__ProceduralMesh__pf->UPrimitiveComponent::SetCullDistance(bpv__CallFunc_FClamp_ReturnValue__pf);
				}
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Achoppable_C__pf2403237688::bpf__pickupFunction__pf(UPrimitiveComponent* bpp__self2__pf, USceneComponent* bpp__self3__pf, USceneComponent* bpp__InputPin__pf, UPrimitiveComponent* bpp__grabbedComponent__pf, USceneComponent* bpp__grabbingHandComponent__pf)
{
	bool bpv__CallFunc_K2_AttachToComponent_ReturnValue__pf{};
	bpv__grabbingHandComponent__pf = bpp__grabbingHandComponent__pf;
	bpv__isFrozen__pf = false;
	bpv__grabbedComponent__pf = bpp__grabbedComponent__pf;
	if(IsValid(bpp__self2__pf))
	{
		bpp__self2__pf->SetSimulatePhysics(false);
	}
	if(IsValid(bpp__self3__pf))
	{
		bpv__CallFunc_K2_AttachToComponent_ReturnValue__pf = bpp__self3__pf->USceneComponent::K2_AttachToComponent(bpp__InputPin__pf, FName(TEXT("None")), EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false);
	}
}
void Achoppable_C__pf2403237688::bpf__dropFunction__pf(UPrimitiveComponent* bpp__self2__pf, USceneComponent* bpp__self3__pf, UObject* bpp__InputObject__pf)
{
	bool bpv__CallFunc_IsValid_ReturnValue__pf{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__grabbingHandComponent__pf = nullptr;
			}
		case 2:
			{
				bpv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpp__InputObject__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if (!bpv__isFrozen__pf)
				{
					CurrentState = 7;
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
				bpv__grabbedComponent__pf = nullptr;
				CurrentState = -1;
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
				CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Achoppable_C__pf2403237688::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__10 = TEXT("/Game/props/log");
	const TCHAR* __Local__11 = TEXT("/Game/audio");
	const TCHAR* __Local__12 = TEXT("/Game/particles");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__10, TEXT("log"), TEXT("log"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__11, TEXT("chopEffectAttenuation"), TEXT("chopEffectAttenuation"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
		FBlueprintDependencyData(__Local__11, TEXT("chopConcurrency"), TEXT("chopConcurrency"), TEXT("/Script/Engine"), TEXT("SoundConcurrency")),
		FBlueprintDependencyData(__Local__12, TEXT("woodchipParticle"), TEXT("woodchipParticle"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void Achoppable_C__pf2403237688::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void Achoppable_C__pf2403237688::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__13 = TEXT("/Game/VirtualReality/Meshes");
	const TCHAR* __Local__14 = TEXT("/Game/VirtualReality/Materials");
	const TCHAR* __Local__15 = TEXT("/Game/ProtoVRHand/Meshes/Villain");
	const TCHAR* __Local__16 = TEXT("/Game/ProtoVRHand/Animations");
	const TCHAR* __Local__17 = TEXT("/Engine/EngineMaterials");
	const TCHAR* __Local__18 = TEXT("/Engine/EngineFonts");
	const TCHAR* __Local__19 = TEXT("/Engine/BasicShapes");
	const TCHAR* __Local__20 = TEXT("/Game/trees/conifer_low_poly_leaves");
	const TCHAR* __Local__21 = TEXT("/Game/audio/hapticEffects");
	const TCHAR* __Local__22 = TEXT("/Game/VirtualRealityBP/Blueprints");
	const TCHAR* __Local__23 = TEXT("/Game/ProtoVRHand/Blueprints/Example");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__13, TEXT("BeamMesh"), TEXT("BeamMesh"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__14, TEXT("M_SplineArcMat"), TEXT("M_SplineArcMat"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__15, TEXT("Skel_Hand_Skeleton"), TEXT("Skel_Hand_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__16, TEXT("BS_LeftGrip"), TEXT("BS_LeftGrip"), TEXT("/Script/Engine"), TEXT("BlendSpace1D")),
		FBlueprintDependencyData(__Local__15, TEXT("Skel_Hand"), TEXT("Skel_Hand"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__17, TEXT("DefaultTextMaterialOpaque"), TEXT("DefaultTextMaterialOpaque"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__18, TEXT("RobotoDistanceField"), TEXT("RobotoDistanceField"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__19, TEXT("Sphere"), TEXT("Sphere"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__14, TEXT("M_ArcEndpoint"), TEXT("M_ArcEndpoint"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__19, TEXT("Cylinder"), TEXT("Cylinder"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__14, TEXT("MI_TeleportCylinderPreview"), TEXT("MI_TeleportCylinderPreview"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__13, TEXT("SM_FatCylinder"), TEXT("SM_FatCylinder"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__13, TEXT("BeaconDirection"), TEXT("BeaconDirection"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__13, TEXT("1x1_cube"), TEXT("1x1_cube"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__14, TEXT("MI_ChaperoneOutline"), TEXT("MI_ChaperoneOutline"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__20, TEXT("choppable_conifer_low_poly_leaves"), TEXT("choppable_conifer_low_poly_leaves"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__21, TEXT("genericRumbleEffect"), TEXT("genericRumbleEffect"), TEXT("/Script/Engine"), TEXT("HapticFeedbackEffect_Curve")),
		FBlueprintDependencyData(__Local__22, TEXT("BP_MotionController"), TEXT("BP_MotionController_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__16, TEXT("AnimBP_LeftHand"), TEXT("AnimBP_LeftHand_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__22, TEXT("PickupActorInterface"), TEXT("PickupActorInterface_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__23, TEXT("Enum_Grip"), TEXT("Enum_Grip"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__Achoppable_C__pf2403237688
{
	FRegisterHelper__Achoppable_C__pf2403237688()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/Blueprints/choppable"), &Achoppable_C__pf2403237688::__StaticDependenciesAssets);
	}
	static FRegisterHelper__Achoppable_C__pf2403237688 Instance;
};
FRegisterHelper__Achoppable_C__pf2403237688 FRegisterHelper__Achoppable_C__pf2403237688::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
