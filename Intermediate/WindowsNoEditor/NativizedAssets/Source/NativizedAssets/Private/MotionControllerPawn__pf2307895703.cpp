#include "NativizedAssets.h"
#include "MotionControllerPawn__pf2307895703.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
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
#include "MotionControllerPawn__pf2307895703.h"
#include "BP_MotionController__pf2307895703.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
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
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "AnimBP_LeftHand__pf4240717260.h"
#include "choppable__pf2403237688.h"
#include "PickupActorInterface__pf2307895703.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
AMotionControllerPawn_C__pf2307895703::AMotionControllerPawn_C__pf2307895703(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AMotionControllerPawn_C__pf2307895703::StaticClass() == GetClass()))
	{
		AMotionControllerPawn_C__pf2307895703::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__VROrigin__pf = CreateDefaultSubobject<USceneComponent>(TEXT("VROrigin"));
	bpv__Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__VROrigin__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__VROrigin__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Camera__pf->AttachToComponent(bpv__VROrigin__pf, FAttachmentTransformRules::KeepRelativeTransform );
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
}
void AMotionControllerPawn_C__pf2307895703::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
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
}
void AMotionControllerPawn_C__pf2307895703::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__0 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__1);
	__Local__0->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__0->InputAxisDelegateBindings.AddUninitialized(4);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->InputAxisDelegateBindings.GetData(), 4);
	auto& __Local__2 = __Local__0->InputAxisDelegateBindings[0];
	__Local__2.InputAxisName = FName(TEXT("MotionControllerThumbRight_X"));
	__Local__2.bOverrideParentBinding = false;
	auto& __Local__3 = __Local__0->InputAxisDelegateBindings[1];
	__Local__3.InputAxisName = FName(TEXT("MotionControllerThumbRight_Y"));
	__Local__3.bOverrideParentBinding = false;
	auto& __Local__4 = __Local__0->InputAxisDelegateBindings[2];
	__Local__4.InputAxisName = FName(TEXT("MotionControllerThumbLeft_Y"));
	__Local__4.bOverrideParentBinding = false;
	auto& __Local__5 = __Local__0->InputAxisDelegateBindings[3];
	__Local__5.InputAxisName = FName(TEXT("MotionControllerThumbLeft_X"));
	__Local__5.bOverrideParentBinding = false;
	__Local__1->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__1->InputActionDelegateBindings.AddUninitialized(8);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__1->InputActionDelegateBindings.GetData(), 8);
	auto& __Local__6 = __Local__1->InputActionDelegateBindings[0];
	__Local__6.InputActionName = FName(TEXT("GrabRight"));
	__Local__6.InputKeyEvent = EInputEvent::IE_Released;
	__Local__6.FunctionNameToBind = FName(TEXT("InpActEvt_GrabRight_K2Node_InputActionEvent_13"));
	auto& __Local__7 = __Local__1->InputActionDelegateBindings[1];
	__Local__7.InputActionName = FName(TEXT("GrabRight"));
	__Local__7.FunctionNameToBind = FName(TEXT("InpActEvt_GrabRight_K2Node_InputActionEvent_12"));
	auto& __Local__8 = __Local__1->InputActionDelegateBindings[2];
	__Local__8.InputActionName = FName(TEXT("TeleportLeft"));
	__Local__8.InputKeyEvent = EInputEvent::IE_Released;
	__Local__8.FunctionNameToBind = FName(TEXT("InpActEvt_TeleportLeft_K2Node_InputActionEvent_11"));
	auto& __Local__9 = __Local__1->InputActionDelegateBindings[3];
	__Local__9.InputActionName = FName(TEXT("GrabLeft"));
	__Local__9.InputKeyEvent = EInputEvent::IE_Released;
	__Local__9.FunctionNameToBind = FName(TEXT("InpActEvt_GrabLeft_K2Node_InputActionEvent_15"));
	auto& __Local__10 = __Local__1->InputActionDelegateBindings[4];
	__Local__10.InputActionName = FName(TEXT("GrabLeft"));
	__Local__10.FunctionNameToBind = FName(TEXT("InpActEvt_GrabLeft_K2Node_InputActionEvent_14"));
	auto& __Local__11 = __Local__1->InputActionDelegateBindings[5];
	__Local__11.InputActionName = FName(TEXT("TeleportRight"));
	__Local__11.FunctionNameToBind = FName(TEXT("InpActEvt_TeleportRight_K2Node_InputActionEvent_8"));
	auto& __Local__12 = __Local__1->InputActionDelegateBindings[6];
	__Local__12.InputActionName = FName(TEXT("TeleportRight"));
	__Local__12.InputKeyEvent = EInputEvent::IE_Released;
	__Local__12.FunctionNameToBind = FName(TEXT("InpActEvt_TeleportRight_K2Node_InputActionEvent_9"));
	auto& __Local__13 = __Local__1->InputActionDelegateBindings[7];
	__Local__13.InputActionName = FName(TEXT("TeleportLeft"));
	__Local__13.FunctionNameToBind = FName(TEXT("InpActEvt_TeleportLeft_K2Node_InputActionEvent_10"));
}
void AMotionControllerPawn_C__pf2307895703::bpf__ExecuteUbergraph_MotionControllerPawn__pf_0(int32 bpp__EntryPoint__pf)
{
	FName bpv__CallFunc_GetHMDDeviceName_ReturnValue__pf{};
	FTransform bpv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AActor* bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf{};
	ABP_MotionController_C__pf2307895703* bpv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	ABP_MotionController_C__pf2307895703* bpv__CallFunc_FinishSpawningActor_ReturnValue2__pf{};
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__UseControllerRollToRotate__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 2:
			{
				bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__DefaultPlayerHeight__pf);
				if(IsValid(bpv__VROrigin__pf))
				{
					bpv__VROrigin__pf->USceneComponent::K2_AddLocalOffset(bpv__CallFunc_MakeVector_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf, false);
				}
				CurrentState = 1;
				break;
			}
		case 3:
			{
				UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Eye);
				CurrentState = 2;
				break;
			}
		case 4:
			{
				UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Floor);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				UKismetSystemLibrary::SetBytePropertyByName(bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf, FName(TEXT("Hand")), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Right)));
			}
		case 10:
			{
				bpv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpv__CallFunc_FinishSpawningActor_ReturnValue2__pf = CastChecked<ABP_MotionController_C__pf2307895703>(UGameplayStatics::FinishSpawningActor(bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf, bpv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 11:
			{
				bpv__RightController__pf = bpv__CallFunc_FinishSpawningActor_ReturnValue2__pf;
			}
		case 12:
			{
				if(IsValid(bpv__CallFunc_FinishSpawningActor_ReturnValue2__pf))
				{
					bpv__CallFunc_FinishSpawningActor_ReturnValue2__pf->AActor::K2_AttachToComponent(bpv__VROrigin__pf, FName(TEXT("None")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				CurrentState = 16;
				break;
			}
		case 16:
			{
				StateStack.Push(18);
			}
		case 17:
			{
				bpv__CallFunc_GetHMDDeviceName_ReturnValue__pf = UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName();
				b0l__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("OculusRift")));
				if (!b0l__K2Node_SwitchName_CmpSuccess__pf)
				{
					CurrentState = 4;
					break;
				}
				b0l__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("SteamVR")));
				if (!b0l__K2Node_SwitchName_CmpSuccess__pf)
				{
					CurrentState = 4;
					break;
				}
				b0l__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("PSVR")));
				if (!b0l__K2Node_SwitchName_CmpSuccess__pf)
				{
					CurrentState = 3;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				StateStack.Push(23);
			}
		case 19:
			{
				bpv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_MotionController_C__pf2307895703::StaticClass(), bpv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, this);
			}
		case 20:
			{
				bpv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABP_MotionController_C__pf2307895703>(UGameplayStatics::FinishSpawningActor(bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 21:
			{
				bpv__LeftController__pf = bpv__CallFunc_FinishSpawningActor_ReturnValue__pf;
			}
		case 22:
			{
				if(IsValid(bpv__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					bpv__CallFunc_FinishSpawningActor_ReturnValue__pf->AActor::K2_AttachToComponent(bpv__VROrigin__pf, FName(TEXT("None")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				bpv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_MotionController_C__pf2307895703::StaticClass(), bpv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, this);
				CurrentState = 9;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void AMotionControllerPawn_C__pf2307895703::bpf__ExecuteUbergraph_MotionControllerPawn__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 59);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable4__pf = b0l__K2Node_InputActionEvent_Key7__pf;
	if(IsValid(bpv__LeftController__pf))
	{
		bpv__LeftController__pf->bpf__GrabActor__pf();
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf2307895703::bpf__ExecuteUbergraph_MotionControllerPawn__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 56);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable4__pf = b0l__K2Node_InputActionEvent_Key8__pf;
	if(IsValid(bpv__LeftController__pf))
	{
		bpv__LeftController__pf->bpf__ReleaseActor__pf();
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf2307895703::bpf__ExecuteUbergraph_MotionControllerPawn__pf_3(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInputAxisValue_ReturnValue__pf{};
	float bpv__CallFunc_GetInputAxisValue_ReturnValue2__pf{};
	FRotator bpv__CallFunc_GetRotationFromInput_ReturnValue__pf(EForceInit::ForceInit);
	float bpv__CallFunc_GetInputAxisValue_ReturnValue3__pf{};
	float bpv__CallFunc_GetInputAxisValue_ReturnValue4__pf{};
	FRotator bpv__CallFunc_GetRotationFromInput_ReturnValue2__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 13:
			{
				bool  __Local__14 = false;
				if (!((IsValid(bpv__RightController__pf)) ? (bpv__RightController__pf->bpv__IsTeleporterActive__pf) : (__Local__14)))
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				bpv__CallFunc_GetInputAxisValue_ReturnValue3__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbRight_Y")));
				bpv__CallFunc_GetInputAxisValue_ReturnValue4__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbRight_X")));
				bpv__CallFunc_GetRotationFromInput_ReturnValue2__pf = bpf__GetRotationFromInput__pf(bpv__CallFunc_GetInputAxisValue_ReturnValue3__pf, bpv__CallFunc_GetInputAxisValue_ReturnValue4__pf, bpv__RightController__pf);
				if(IsValid(bpv__RightController__pf))
				{
					bpv__RightController__pf->bpv__TeleportRotation__pf = bpv__CallFunc_GetRotationFromInput_ReturnValue2__pf;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 36:
			{
				bpv__CallFunc_GetInputAxisValue_ReturnValue__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbLeft_X")));
				bpv__CallFunc_GetInputAxisValue_ReturnValue2__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbLeft_Y")));
				bpv__CallFunc_GetRotationFromInput_ReturnValue__pf = bpf__GetRotationFromInput__pf(bpv__CallFunc_GetInputAxisValue_ReturnValue2__pf, bpv__CallFunc_GetInputAxisValue_ReturnValue__pf, bpv__LeftController__pf);
				if(IsValid(bpv__LeftController__pf))
				{
					bpv__LeftController__pf->bpv__TeleportRotation__pf = bpv__CallFunc_GetRotationFromInput_ReturnValue__pf;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 37:
			{
				StateStack.Push(13);
			}
		case 38:
			{
				bool  __Local__15 = false;
				if (!((IsValid(bpv__LeftController__pf)) ? (bpv__LeftController__pf->bpv__IsTeleporterActive__pf) : (__Local__15)))
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				CurrentState = 36;
				break;
			}
		case 39:
			{
				CurrentState = 37;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void AMotionControllerPawn_C__pf2307895703::bpf__ExecuteUbergraph_MotionControllerPawn__pf_4(int32 bpp__EntryPoint__pf)
{
	APlayerCameraManager* bpv__CallFunc_GetPlayerCameraManager_ReturnValue__pf{};
	APlayerCameraManager* bpv__CallFunc_GetPlayerCameraManager_ReturnValue2__pf{};
	bool bpv__CallFunc_K2_TeleportTo_ReturnValue__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 24:
			{
				if(IsValid(b0l__K2Node_CustomEvent_MotionController__pf))
				{
					b0l__K2Node_CustomEvent_MotionController__pf->bpf__GetTeleportDestination__pf(/*out*/ b0l__CallFunc_GetTeleportDestination_Location__pf, /*out*/ b0l__CallFunc_GetTeleportDestination_Rotation__pf);
				}
				bpv__CallFunc_K2_TeleportTo_ReturnValue__pf = AActor::K2_TeleportTo(b0l__CallFunc_GetTeleportDestination_Location__pf, b0l__CallFunc_GetTeleportDestination_Rotation__pf);
			}
		case 25:
			{
				bpv__CallFunc_GetPlayerCameraManager_ReturnValue2__pf = UGameplayStatics::GetPlayerCameraManager(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerCameraManager_ReturnValue2__pf))
				{
					bpv__CallFunc_GetPlayerCameraManager_ReturnValue2__pf->StartCameraFade(1.000000, 0.000000, bpv__FadeInDuration__pf, bpv__TeleportFadeColor__pf, false, false);
				}
			}
		case 26:
			{
				bpv__IsTeleporting__pf = false;
				CurrentState = -1;
				break;
			}
		case 27:
			{
				bool  __Local__16 = false;
				if (!((IsValid(b0l__K2Node_CustomEvent_MotionController__pf)) ? (b0l__K2Node_CustomEvent_MotionController__pf->bpv__IsValidTeleportDestination__pf) : (__Local__16)))
				{
					CurrentState = 31;
					break;
				}
			}
		case 28:
			{
				bpv__IsTeleporting__pf = true;
			}
		case 29:
			{
				bpv__CallFunc_GetPlayerCameraManager_ReturnValue__pf = UGameplayStatics::GetPlayerCameraManager(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerCameraManager_ReturnValue__pf))
				{
					bpv__CallFunc_GetPlayerCameraManager_ReturnValue__pf->StartCameraFade(0.000000, 1.000000, bpv__FadeOutDuration__pf, bpv__TeleportFadeColor__pf, false, true);
				}
			}
		case 30:
			{
				UKismetSystemLibrary::Delay(this, bpv__FadeOutDuration__pf, FLatentActionInfo(32, 614746158, TEXT("ExecuteUbergraph_MotionControllerPawn_4"), this));
				CurrentState = -1;
				break;
			}
		case 31:
			{
				if(IsValid(b0l__K2Node_CustomEvent_MotionController__pf))
				{
					b0l__K2Node_CustomEvent_MotionController__pf->bpf__DisableTeleporter__pf();
				}
				CurrentState = -1;
				break;
			}
		case 32:
			{
				CurrentState = 33;
				break;
			}
		case 33:
			{
				if(IsValid(b0l__K2Node_CustomEvent_MotionController__pf))
				{
					b0l__K2Node_CustomEvent_MotionController__pf->bpf__DisableTeleporter__pf();
				}
				CurrentState = 24;
				break;
			}
		case 34:
			{
				CurrentState = 35;
				break;
			}
		case 35:
			{
				if (!bpv__IsTeleporting__pf)
				{
					CurrentState = 27;
					break;
				}
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AMotionControllerPawn_C__pf2307895703::bpf__ExecuteUbergraph_MotionControllerPawn__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 44);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable3__pf = b0l__K2Node_InputActionEvent_Key6__pf;
	if(IsValid(bpv__RightController__pf))
	{
		bpv__RightController__pf->bpf__ReleaseActor__pf();
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf2307895703::bpf__ExecuteUbergraph_MotionControllerPawn__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 45);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable3__pf = b0l__K2Node_InputActionEvent_Key5__pf;
	if(IsValid(bpv__RightController__pf))
	{
		bpv__RightController__pf->bpf__GrabActor__pf();
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf2307895703::bpf__ExecuteUbergraph_MotionControllerPawn__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 60);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputActionEvent_Key__pf;
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__RightController__pf))
	{
		bpv__RightController__pf->bpf__ActivateTeleporter__pf();
	}
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__LeftController__pf))
	{
		bpv__LeftController__pf->bpf__DisableTeleporter__pf();
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf2307895703::bpf__ExecuteUbergraph_MotionControllerPawn__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 62);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputActionEvent_Key2__pf;
	// optimized KCST_UnconditionalGoto
	bool  __Local__18 = false;
	if (!((IsValid(bpv__RightController__pf)) ? (bpv__RightController__pf->bpv__IsTeleporterActive__pf) : (__Local__18)))
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpf__ExecuteTeleportation__pf(bpv__RightController__pf);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf2307895703::bpf__ExecuteUbergraph_MotionControllerPawn__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 53);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key4__pf;
	bool  __Local__19 = false;
	if (!((IsValid(bpv__LeftController__pf)) ? (bpv__LeftController__pf->bpv__IsTeleporterActive__pf) : (__Local__19)))
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpf__ExecuteTeleportation__pf(bpv__LeftController__pf);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf2307895703::bpf__ExecuteUbergraph_MotionControllerPawn__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 63);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key3__pf;
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__LeftController__pf))
	{
		bpv__LeftController__pf->bpf__ActivateTeleporter__pf();
	}
	if(IsValid(bpv__RightController__pf))
	{
		bpv__RightController__pf->bpf__DisableTeleporter__pf();
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf2307895703::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_0(15);
}
void AMotionControllerPawn_C__pf2307895703::bpf__ExecuteTeleportation__pf(ABP_MotionController_C__pf2307895703* bpp__MotionController__pf)
{
	b0l__K2Node_CustomEvent_MotionController__pf = bpp__MotionController__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_4(34);
}
void AMotionControllerPawn_C__pf2307895703::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_3(39);
}
void AMotionControllerPawn_C__pf2307895703::bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_7(60);
}
void AMotionControllerPawn_C__pf2307895703::bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_9__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_8(62);
}
void AMotionControllerPawn_C__pf2307895703::bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_10__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_10(63);
}
void AMotionControllerPawn_C__pf2307895703::bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_11__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_9(53);
}
void AMotionControllerPawn_C__pf2307895703::bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_12__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_6(45);
}
void AMotionControllerPawn_C__pf2307895703::bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_13__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_5(44);
}
void AMotionControllerPawn_C__pf2307895703::bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_14__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key7__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_1(59);
}
void AMotionControllerPawn_C__pf2307895703::bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_15__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key8__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_2(56);
}
void AMotionControllerPawn_C__pf2307895703::bpf__UserConstructionScript__pf()
{
}
FRotator  AMotionControllerPawn_C__pf2307895703::bpf__GetRotationFromInput__pf(float bpp__UpAxis__pf, float bpp__RightAxis__pf, ABP_MotionController_C__pf2307895703* bpp__Controller__pf)
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
	FRotator  __Local__20 = FRotator(0.000000,0.000000,0.000000);
	bpv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), ((IsValid(bpp__Controller__pf)) ? (bpp__Controller__pf->bpv__InitialControllerRotation__pf) : (__Local__20)), FVector(1.000000,1.000000,1.000000));
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
void AMotionControllerPawn_C__pf2307895703::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
void AMotionControllerPawn_C__pf2307895703::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void AMotionControllerPawn_C__pf2307895703::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__21 = TEXT("/Game/VirtualReality/Meshes");
	const TCHAR* __Local__22 = TEXT("/Game/VirtualReality/Materials");
	const TCHAR* __Local__23 = TEXT("/Game/ProtoVRHand/Meshes/Villain");
	const TCHAR* __Local__24 = TEXT("/Game/ProtoVRHand/Animations");
	const TCHAR* __Local__25 = TEXT("/Engine/EngineMaterials");
	const TCHAR* __Local__26 = TEXT("/Engine/EngineFonts");
	const TCHAR* __Local__27 = TEXT("/Engine/BasicShapes");
	const TCHAR* __Local__28 = TEXT("/Game/props/log");
	const TCHAR* __Local__29 = TEXT("/Game/audio");
	const TCHAR* __Local__30 = TEXT("/Game/particles");
	const TCHAR* __Local__31 = TEXT("/Game/trees/conifer_low_poly_leaves");
	const TCHAR* __Local__32 = TEXT("/Game/audio/hapticEffects");
	const TCHAR* __Local__33 = TEXT("/Game/VirtualRealityBP/Blueprints");
	const TCHAR* __Local__34 = TEXT("/Game/Blueprints");
	const TCHAR* __Local__35 = TEXT("/Game/ProtoVRHand/Blueprints/Example");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__21, TEXT("BeamMesh"), TEXT("BeamMesh"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__22, TEXT("M_SplineArcMat"), TEXT("M_SplineArcMat"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__23, TEXT("Skel_Hand_Skeleton"), TEXT("Skel_Hand_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__24, TEXT("BS_LeftGrip"), TEXT("BS_LeftGrip"), TEXT("/Script/Engine"), TEXT("BlendSpace1D")),
		FBlueprintDependencyData(__Local__23, TEXT("Skel_Hand"), TEXT("Skel_Hand"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__25, TEXT("DefaultTextMaterialOpaque"), TEXT("DefaultTextMaterialOpaque"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__26, TEXT("RobotoDistanceField"), TEXT("RobotoDistanceField"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__27, TEXT("Sphere"), TEXT("Sphere"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__22, TEXT("M_ArcEndpoint"), TEXT("M_ArcEndpoint"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__27, TEXT("Cylinder"), TEXT("Cylinder"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__22, TEXT("MI_TeleportCylinderPreview"), TEXT("MI_TeleportCylinderPreview"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__21, TEXT("SM_FatCylinder"), TEXT("SM_FatCylinder"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__21, TEXT("BeaconDirection"), TEXT("BeaconDirection"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__21, TEXT("1x1_cube"), TEXT("1x1_cube"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__22, TEXT("MI_ChaperoneOutline"), TEXT("MI_ChaperoneOutline"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__28, TEXT("log"), TEXT("log"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__29, TEXT("chopEffectAttenuation"), TEXT("chopEffectAttenuation"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
		FBlueprintDependencyData(__Local__29, TEXT("chopConcurrency"), TEXT("chopConcurrency"), TEXT("/Script/Engine"), TEXT("SoundConcurrency")),
		FBlueprintDependencyData(__Local__30, TEXT("woodchipParticle"), TEXT("woodchipParticle"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__31, TEXT("choppable_conifer_low_poly_leaves"), TEXT("choppable_conifer_low_poly_leaves"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__32, TEXT("genericRumbleEffect"), TEXT("genericRumbleEffect"), TEXT("/Script/Engine"), TEXT("HapticFeedbackEffect_Curve")),
		FBlueprintDependencyData(__Local__33, TEXT("BP_MotionController"), TEXT("BP_MotionController_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__24, TEXT("AnimBP_LeftHand"), TEXT("AnimBP_LeftHand_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__34, TEXT("choppable"), TEXT("choppable_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__33, TEXT("PickupActorInterface"), TEXT("PickupActorInterface_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__35, TEXT("Enum_Grip"), TEXT("Enum_Grip"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__AMotionControllerPawn_C__pf2307895703
{
	FRegisterHelper__AMotionControllerPawn_C__pf2307895703()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn"), &AMotionControllerPawn_C__pf2307895703::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AMotionControllerPawn_C__pf2307895703 Instance;
};
FRegisterHelper__AMotionControllerPawn_C__pf2307895703 FRegisterHelper__AMotionControllerPawn_C__pf2307895703::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
