#include "NativizedAssets.h"
#include "BP_MotionController_Proto__pf2873424652.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
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
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "AnimBP_LeftHand__pf4240717260.h"
#include "BP_MotionController_Proto__pf2873424652.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "BPI_PickupActor__pf2873424652.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
ABP_MotionController_Proto_C__pf2873424652::ABP_MotionController_Proto_C__pf2873424652(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABP_MotionController_Proto_C__pf2873424652::StaticClass() == GetClass()))
	{
		ABP_MotionController_Proto_C__pf2873424652::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Scene__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	bpv__MotionController__pf = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController"));
	bpv__HandMesh__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HandMesh"));
	bpv__Sphere__pf = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	RootComponent = bpv__Scene__pf;
	bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MotionController__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MotionController__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	if(!bpv__MotionController__pf->IsTemplate())
	{
		bpv__MotionController__pf->BodyInstance.FixupData(bpv__MotionController__pf);
	}
	bpv__HandMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__HandMesh__pf->AttachToComponent(bpv__MotionController__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__HandMesh__pf->AnimClass = UAnimBP_LeftHand_C__pf4240717260::StaticClass();
	bpv__HandMesh__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(ABP_MotionController_Proto_C__pf2873424652::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__HandMesh__pf->RelativeLocation = FVector(-12.785664, -0.028015, -1.789026);
	bpv__HandMesh__pf->RelativeRotation = FRotator(0.000000, 0.000000, -90.000534);
	bpv__HandMesh__pf->RelativeScale3D = FVector(1.000000, 1.000000, -1.000000);
	if(!bpv__HandMesh__pf->IsTemplate())
	{
		bpv__HandMesh__pf->BodyInstance.FixupData(bpv__HandMesh__pf);
	}
	bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere__pf->AttachToComponent(bpv__HandMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__0 = (*(AccessPrivateProperty<float >((bpv__Sphere__pf), USphereComponent::__PPO__SphereRadius() )));
	__Local__0 = 10.000000f;
	bpv__Sphere__pf->RelativeLocation = FVector(17.072006, 3.273956, 0.252283);
	bpv__Sphere__pf->RelativeRotation = FRotator(0.000000, 0.000000, -90.000549);
	bpv__Sphere__pf->RelativeScale3D = FVector(1.000000, 1.000000, -1.000000);
	if(!bpv__Sphere__pf->IsTemplate())
	{
		bpv__Sphere__pf->BodyInstance.FixupData(bpv__Sphere__pf);
	}
	bpv__Hand__pf = EControllerHand::Right;
	bpv__AttachedActor__pf = nullptr;
	bpv__bWantsToGrip__pf = false;
	bpv__GripState__pf = E__Enum_Grip__pf::NewEnumerator0;
	PrimaryActorTick.bCanEverTick = true;
}
void ABP_MotionController_Proto_C__pf2873424652::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
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
	if(bpv__Sphere__pf)
	{
		bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ABP_MotionController_Proto_C__pf2873424652::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	extern UClass* Z_Construct_UClass_UBPI_PickupActor_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_PickupActor_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__1 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__1);
	__Local__1->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__1->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__1->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__2 = __Local__1->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Sphere"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__3 = __Local__1->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("HandMesh"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnComponentHit"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__HandMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature"));
}
void ABP_MotionController_Proto_C__pf2873424652::bpf__ExecuteUbergraph_BP_MotionController_Proto__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_IsSimulatingPhysics_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 5);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf = Cast<UStaticMeshComponent>(b0l__K2Node_ComponentBoundEvent_OtherComp__pf);
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
void ABP_MotionController_Proto_C__pf2873424652::bpf__ExecuteUbergraph_BP_MotionController_Proto__pf_1(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_VSize_ReturnValue__pf{};
	float bpv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 7);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf);
	bpv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpv__CallFunc_VSize_ReturnValue__pf, 0.000000, 1500.000000, 0.000000, 0.800000);
	bpf__RumbleController__pf(bpv__CallFunc_MapRangeClamped_ReturnValue__pf);
	return; //KCST_EndOfThread
}
void ABP_MotionController_Proto_C__pf2873424652::bpf__ExecuteUbergraph_BP_MotionController_Proto__pf_2(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpv__CallFunc_GetPlayerController_ReturnValue__pf{};
	bool bpv__CallFunc_Not_PreBool_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 9);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_byte_Variable2__pf = EDynamicForceFeedbackAction::Start;
	// optimized KCST_UnconditionalGoto
	b0l__Temp_bool_Variable__pf = false;
	b0l__Temp_bool_Variable2__pf = false;
	b0l__Temp_bool_Variable3__pf = false;
	b0l__Temp_bool_Variable4__pf = false;
	b0l__Temp_bool_Variable5__pf = false;
	b0l__Temp_bool_Variable6__pf = false;
	b0l__Temp_bool_Variable7__pf = false;
	b0l__Temp_bool_Variable8__pf = false;
	b0l__Temp_bool_Variable9__pf = false;
	b0l__Temp_bool_Variable10__pf = true;
	b0l__Temp_bool_Variable11__pf = false;
	b0l__Temp_bool_Variable12__pf = false;
	b0l__Temp_bool_Variable13__pf = false;
	bpv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	b0l__Temp_byte_Variable__pf = bpv__Hand__pf;
	bpv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(TSwitchValue<EControllerHand , bool >(b0l__Temp_byte_Variable__pf, b0l__K2Node_Select_Default__pf, 13, TSwitchPair<EControllerHand , bool >(EControllerHand::Left, b0l__Temp_bool_Variable10__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Right, b0l__Temp_bool_Variable9__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Pad, b0l__Temp_bool_Variable8__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::ExternalCamera, b0l__Temp_bool_Variable7__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_1, b0l__Temp_bool_Variable6__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_2, b0l__Temp_bool_Variable5__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_3, b0l__Temp_bool_Variable4__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_4, b0l__Temp_bool_Variable3__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_5, b0l__Temp_bool_Variable2__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_6, b0l__Temp_bool_Variable__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_7, b0l__Temp_bool_Variable11__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_8, b0l__Temp_bool_Variable12__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_9, b0l__Temp_bool_Variable13__pf)));
	if(IsValid(bpv__CallFunc_GetPlayerController_ReturnValue__pf))
	{
		bpv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::PlayDynamicForceFeedback(b0l__K2Node_CustomEvent_Intensity__pf, 0.040000, TSwitchValue<EControllerHand , bool >(b0l__Temp_byte_Variable__pf, b0l__K2Node_Select_Default__pf, 13, TSwitchPair<EControllerHand , bool >(EControllerHand::Left, b0l__Temp_bool_Variable10__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Right, b0l__Temp_bool_Variable9__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Pad, b0l__Temp_bool_Variable8__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::ExternalCamera, b0l__Temp_bool_Variable7__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_1, b0l__Temp_bool_Variable6__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_2, b0l__Temp_bool_Variable5__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_3, b0l__Temp_bool_Variable4__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_4, b0l__Temp_bool_Variable3__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_5, b0l__Temp_bool_Variable2__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_6, b0l__Temp_bool_Variable__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_7, b0l__Temp_bool_Variable11__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_8, b0l__Temp_bool_Variable12__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_9, b0l__Temp_bool_Variable13__pf)), TSwitchValue<EControllerHand , bool >(b0l__Temp_byte_Variable__pf, b0l__K2Node_Select_Default__pf, 13, TSwitchPair<EControllerHand , bool >(EControllerHand::Left, b0l__Temp_bool_Variable10__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Right, b0l__Temp_bool_Variable9__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Pad, b0l__Temp_bool_Variable8__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::ExternalCamera, b0l__Temp_bool_Variable7__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_1, b0l__Temp_bool_Variable6__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_2, b0l__Temp_bool_Variable5__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_3, b0l__Temp_bool_Variable4__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_4, b0l__Temp_bool_Variable3__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_5, b0l__Temp_bool_Variable2__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_6, b0l__Temp_bool_Variable__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_7, b0l__Temp_bool_Variable11__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_8, b0l__Temp_bool_Variable12__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_9, b0l__Temp_bool_Variable13__pf)), bpv__CallFunc_Not_PreBool_ReturnValue__pf, bpv__CallFunc_Not_PreBool_ReturnValue__pf, b0l__Temp_byte_Variable2__pf, FLatentActionInfo(-1, -1941938922, TEXT("ExecuteUbergraph_BP_MotionController_Proto"), this));
	}
	return; //KCST_EndOfThread
}
void ABP_MotionController_Proto_C__pf2873424652::bpf__ExecuteUbergraph_BP_MotionController_Proto__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf{};
	bool bpv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpv__CallFunc_IsValid_ReturnValue__pf{};
	UAnimInstance* bpv__CallFunc_GetAnimInstance_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 10:
			{
				if(IsValid(bpv__HandMesh__pf))
				{
					bpv__HandMesh__pf->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				if(IsValid(bpv__HandMesh__pf))
				{
					bpv__HandMesh__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				if(IsValid(bpv__HandMesh__pf))
				{
					bpv__HandMesh__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__Enum_Grip__pf>(TEnumAsByte<E__Enum_Grip__pf>(bpv__GripState__pf)), EnumToByte<E__Enum_Grip__pf>(TEnumAsByte<E__Enum_Grip__pf>(E__Enum_Grip__pf::NewEnumerator0)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					CurrentState = 16;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__Enum_Grip__pf>(TEnumAsByte<E__Enum_Grip__pf>(bpv__GripState__pf)), EnumToByte<E__Enum_Grip__pf>(TEnumAsByte<E__Enum_Grip__pf>(E__Enum_Grip__pf::NewEnumerator1)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					CurrentState = 15;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__Enum_Grip__pf>(TEnumAsByte<E__Enum_Grip__pf>(bpv__GripState__pf)), EnumToByte<E__Enum_Grip__pf>(TEnumAsByte<E__Enum_Grip__pf>(E__Enum_Grip__pf::NewEnumerator2)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					CurrentState = 10;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsAnim_BP_Left_Hand__pf))
				{
					b0l__K2Node_DynamicCast_AsAnim_BP_Left_Hand__pf->bpv__GripEnum__pf = E__Enum_Grip__pf::NewEnumerator0;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				if(IsValid(bpv__HandMesh__pf))
				{
					bpv__CallFunc_GetAnimInstance_ReturnValue__pf = bpv__HandMesh__pf->USkeletalMeshComponent::GetAnimInstance();
				}
				b0l__K2Node_DynamicCast_AsAnim_BP_Left_Hand__pf = Cast<UAnimBP_LeftHand_C__pf4240717260>(bpv__CallFunc_GetAnimInstance_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsAnim_BP_Left_Hand__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = 20;
					break;
				}
				CurrentState = 18;
				break;
			}
		case 20:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("TRIED TO REFERENCE ANIMBP_LEFTHAND IN BP_MOTIONCONTROLLER BUT FAILED TO REACH ANIMBP_LEFTHAND")), true, true, FLinearColor(1.000000,0.017360,0.000000,1.000000), 10.000000);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				bpv__GripState__pf = E__Enum_Grip__pf::NewEnumerator0;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				if (!bpv__bWantsToGrip__pf)
				{
					CurrentState = 21;
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
				bpv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_GetActorNearHand_NearestActor1__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue__pf)
				{
					CurrentState = 22;
					break;
				}
			}
		case 25:
			{
				bpv__GripState__pf = E__Enum_Grip__pf::NewEnumerator1;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 26:
			{
				bpv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::NotEqual_ObjectObject(bpv__AttachedActor__pf, nullptr);
				bpv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf, bpv__bWantsToGrip__pf);
				if (!bpv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					CurrentState = 28;
					break;
				}
			}
		case 27:
			{
				bpv__GripState__pf = E__Enum_Grip__pf::NewEnumerator2;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				bpf__GetActorNearHand__pf(/*out*/ b0l__CallFunc_GetActorNearHand_NearestActor1__pf);
				CurrentState = 24;
				break;
			}
		case 29:
			{
				StateStack.Push(17);
				StateStack.Push(19);
				CurrentState = 26;
				break;
			}
		case 30:
			{
				CurrentState = 29;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void ABP_MotionController_Proto_C__pf2873424652::bpf__ExecuteUbergraph_BP_MotionController_Proto__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 11:
			{
				CurrentState = 12;
				break;
			}
		case 12:
			{
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Left)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = 13;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Right)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = 14;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Pad)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::ExternalCamera)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_1)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_2)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_3)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_4)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_5)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_6)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_7)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_8)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_9)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 13:
			{
				if(IsValid(bpv__HandMesh__pf))
				{
					bpv__HandMesh__pf->USceneComponent::SetWorldScale3D(FVector(1.000000,1.000000,1.000000));
				}
				CurrentState = -1;
				break;
			}
		case 14:
			{
				if(IsValid(bpv__HandMesh__pf))
				{
					bpv__HandMesh__pf->USceneComponent::SetWorldScale3D(FVector(1.000000,1.000000,-1.000000));
				}
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void ABP_MotionController_Proto_C__pf2873424652::bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__5;
	T__Local__5& bpp__SweepResult__pf = *const_cast<T__Local__5 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BP_MotionController_Proto__pf_0(5);
}
void ABP_MotionController_Proto_C__pf2873424652::bpf__BndEvt__HandMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const)
{
	typedef FHitResult  T__Local__6;
	T__Local__6& bpp__Hit__pf = *const_cast<T__Local__6 *>(&bpp__Hit__pf__const);
	b0l__K2Node_ComponentBoundEvent_HitComponent__pf = bpp__HitComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor2__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp2__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf = bpp__NormalImpulse__pf;
	b0l__K2Node_ComponentBoundEvent_Hit__pf = bpp__Hit__pf;
	bpf__ExecuteUbergraph_BP_MotionController_Proto__pf_1(7);
}
void ABP_MotionController_Proto_C__pf2873424652::bpf__RumbleController__pf(float bpp__Intensity__pf)
{
	b0l__K2Node_CustomEvent_Intensity__pf = bpp__Intensity__pf;
	bpf__ExecuteUbergraph_BP_MotionController_Proto__pf_2(9);
}
void ABP_MotionController_Proto_C__pf2873424652::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_MotionController_Proto__pf_4(11);
}
void ABP_MotionController_Proto_C__pf2873424652::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_MotionController_Proto__pf_3(30);
}
void ABP_MotionController_Proto_C__pf2873424652::bpf__UserConstructionScript__pf()
{
	if(IsValid(bpv__MotionController__pf))
	{
		bpv__MotionController__pf->Hand = bpv__Hand__pf;
	}
}
void ABP_MotionController_Proto_C__pf2873424652::bpf__GetActorNearHand__pf(/*out*/ AActor*& bpp__NearestActor1__pf)
{
	int32 bpv__Temp_int_Array_Index_Variable__pf{};
	FVector bpv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpv__CallFunc_VSize_ReturnValue__pf{};
	FVector bpv__CallFunc_K2_GetActorLocation_ReturnValue2__pf(EForceInit::ForceInit);
	int32 bpv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpv__CallFunc_DoesImplementInterface_ReturnValue__pf{};
	FVector bpv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Subtract_VectorVector_ReturnValue2__pf(EForceInit::ForceInit);
	float bpv__CallFunc_VSize_ReturnValue2__pf{};
	TArray<AActor*> bpv__CallFunc_GetOverlappingActors_OverlappingActors__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	AActor* bpv__CallFunc_Array_Get_Item__pf{};
	int32 bpv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpv__CallFunc_Less_IntInt_ReturnValue__pf{};
	AActor* bpv__NearestActor__pf{};
	float bpv__NearestOverlap__pf{};
	AActor* bpv__LocalActor__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 2:
			{
				bpv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 3:
			{
				if(IsValid(bpv__Sphere__pf))
				{
					bpv__Sphere__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				bpv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__CallFunc_GetOverlappingActors_OverlappingActors__pf);
				bpv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpv__Temp_int_Loop_Counter_Variable__pf, bpv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					CurrentState = 11;
					break;
				}
			}
		case 4:
			{
				bpv__Temp_int_Array_Index_Variable__pf = bpv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 5:
			{
				StateStack.Push(12);
			}
		case 6:
			{
				if(IsValid(bpv__Sphere__pf))
				{
					bpv__Sphere__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(bpv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpv__Temp_int_Array_Index_Variable__pf, /*out*/ bpv__CallFunc_Array_Get_Item__pf);
				bpv__LocalActor__pf = bpv__CallFunc_Array_Get_Item__pf;
			}
		case 7:
			{
				bpv__CallFunc_DoesImplementInterface_ReturnValue__pf = UKismetSystemLibrary::DoesImplementInterface(bpv__LocalActor__pf, UBPI_PickupActor_C::StaticClass());
				if (!bpv__CallFunc_DoesImplementInterface_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				if(IsValid(bpv__LocalActor__pf))
				{
					bpv__CallFunc_K2_GetActorLocation_ReturnValue2__pf = bpv__LocalActor__pf->AActor::K2_GetActorLocation();
				}
				if(IsValid(bpv__Sphere__pf))
				{
					bpv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf = bpv__Sphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpv__CallFunc_Subtract_VectorVector_ReturnValue2__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__CallFunc_K2_GetActorLocation_ReturnValue2__pf, bpv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf);
				bpv__CallFunc_VSize_ReturnValue2__pf = UKismetMathLibrary::VSize(bpv__CallFunc_Subtract_VectorVector_ReturnValue2__pf);
				bpv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_VSize_ReturnValue2__pf, bpv__NearestOverlap__pf);
				if (!bpv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				bpv__NearestActor__pf = bpv__NearestActor__pf;
			}
		case 10:
			{
				if(IsValid(bpv__LocalActor__pf))
				{
					bpv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpv__LocalActor__pf->AActor::K2_GetActorLocation();
				}
				if(IsValid(bpv__Sphere__pf))
				{
					bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Sphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
				bpv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpv__NearestOverlap__pf = bpv__CallFunc_VSize_ReturnValue__pf;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpp__NearestActor1__pf = bpv__NearestActor__pf;
				CurrentState = -1;
				break;
			}
		case 12:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpv__Temp_int_Loop_Counter_Variable__pf = bpv__CallFunc_Add_IntInt_ReturnValue__pf;
				CurrentState = 3;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void ABP_MotionController_Proto_C__pf2873424652::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__7 = TEXT("/Game/ProtoVRHand/Meshes/Villain");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__7, TEXT("Skel_Hand"), TEXT("Skel_Hand"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void ABP_MotionController_Proto_C__pf2873424652::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void ABP_MotionController_Proto_C__pf2873424652::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__8 = TEXT("/Game/ProtoVRHand/Meshes/Villain");
	const TCHAR* __Local__9 = TEXT("/Game/ProtoVRHand/Animations");
	const TCHAR* __Local__10 = TEXT("/Game/ProtoVRHand/Blueprints/Example");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__8, TEXT("Skel_Hand_Skeleton"), TEXT("Skel_Hand_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__9, TEXT("BS_LeftGrip"), TEXT("BS_LeftGrip"), TEXT("/Script/Engine"), TEXT("BlendSpace1D")),
		FBlueprintDependencyData(__Local__9, TEXT("AnimBP_LeftHand"), TEXT("AnimBP_LeftHand_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__10, TEXT("BPI_PickupActor"), TEXT("BPI_PickupActor_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__10, TEXT("Enum_Grip"), TEXT("Enum_Grip"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__ABP_MotionController_Proto_C__pf2873424652
{
	FRegisterHelper__ABP_MotionController_Proto_C__pf2873424652()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/ProtoVRHand/Blueprints/Example/BP_MotionController_Proto"), &ABP_MotionController_Proto_C__pf2873424652::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_MotionController_Proto_C__pf2873424652 Instance;
};
FRegisterHelper__ABP_MotionController_Proto_C__pf2873424652 FRegisterHelper__ABP_MotionController_Proto_C__pf2873424652::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
