#include "NativizedAssets.h"
#include "CH_radio__pf1172009058.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
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
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "ProceduralMeshComponent.h"
#include "CH_radio__pf1172009058.h"
#include "ForestrySaveGame__pf3054079870.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "KismetProceduralMeshLibrary.h"
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
#include "graphicsPresets__pf2672032748.h"
#include "log_pawn__pf2672032748.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "PickupActorInterface__pf563933975.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
ACH_radio_C__pf1172009058::ACH_radio_C__pf1172009058(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ACH_radio_C__pf1172009058::StaticClass() == GetClass()))
	{
		ACH_radio_C__pf1172009058::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__radioAudio__pf = CreateDefaultSubobject<UAudioComponent>(TEXT("radioAudio"));
	auto __Local__0 = NewObject<UBodySetup>(bpv__ProceduralMesh__pf, UBodySetup::StaticClass(), TEXT("BodySetup_0"));
	bpv__ProceduralMesh__pf->ProcMeshBodySetup = __Local__0;
	if(!bpv__ProceduralMesh__pf->IsTemplate())
	{
		bpv__ProceduralMesh__pf->BodyInstance.FixupData(bpv__ProceduralMesh__pf);
	}
	bpv__radioAudio__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__radioAudio__pf->AttachToComponent(bpv__ProceduralMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__radioAudio__pf->VolumeMultiplier = 0.400000f;
	bpv__radioAudio__pf->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(ACH_radio_C__pf1172009058::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__currentRadioTime__pf = 0.000000f;
	bpv__audioTickAmount__pf = 1.000000f;
	bpv__playingOnStart__pf = false;
	bpv__mesh__pf = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ACH_radio_C__pf1172009058::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
}
void ACH_radio_C__pf1172009058::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__radioAudio__pf)
	{
		bpv__radioAudio__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ACH_radio_C__pf1172009058::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Blueprints/pawn/graphicsPresets.graphicsPresets")));
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_Achoppable_C__pf1172009058();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_Achoppable_C__pf1172009058());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__1 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__1);
}
void ACH_radio_C__pf1172009058::bpf__ExecuteUbergraph_CH_radio__pf_0(int32 bpp__EntryPoint__pf)
{
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 14);
	// optimized KCST_UnconditionalGoto
	if (!bpv__playingOnStart__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpf__getSavedRadioStartTime__pf(/*out*/ b1l__CallFunc_getSavedRadioStartTime_saveGame__pf, /*out*/ b1l__CallFunc_getSavedRadioStartTime_radioStartTime__pf);
	bpv__currentRadioTime__pf = b1l__CallFunc_getSavedRadioStartTime_radioStartTime__pf;
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_K2_SetTimer_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("tickRadioTime")), bpv__audioTickAmount__pf, true);
	if(IsValid(bpv__radioAudio__pf))
	{
		bpv__radioAudio__pf->UAudioComponent::SetSound(CastChecked<USoundBase>(CastChecked<UDynamicClass>(ACH_radio_C__pf1172009058::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	}
	if(IsValid(bpv__radioAudio__pf))
	{
		bpv__radioAudio__pf->Play(bpv__currentRadioTime__pf);
	}
	bpfv__CallFunc_K2_SetTimer_ReturnValue2__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("saveRadioStartTime")), 10.000000, true);
	return; // KCST_GotoReturn
}
void ACH_radio_C__pf1172009058::bpf__ExecuteUbergraph_CH_radio__pf_1(int32 bpp__EntryPoint__pf)
{
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue3__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue4__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__playingOnStart__pf)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				bpf__getSavedRadioStartTime__pf(/*out*/ b1l__CallFunc_getSavedRadioStartTime_saveGame2__pf, /*out*/ b1l__CallFunc_getSavedRadioStartTime_radioStartTime2__pf);
			}
		case 3:
			{
				bpv__currentRadioTime__pf = b1l__CallFunc_getSavedRadioStartTime_radioStartTime2__pf;
			}
		case 4:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue4__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("tickRadioTime")), bpv__audioTickAmount__pf, true);
			}
		case 5:
			{
				if(IsValid(bpv__radioAudio__pf))
				{
					bpv__radioAudio__pf->UAudioComponent::SetSound(CastChecked<USoundBase>(CastChecked<UDynamicClass>(ACH_radio_C__pf1172009058::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
				}
			}
		case 6:
			{
				if(IsValid(bpv__radioAudio__pf))
				{
					bpv__radioAudio__pf->Play(bpv__currentRadioTime__pf);
				}
			}
		case 7:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue3__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("saveRadioStartTime")), 10.000000, true);
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				__CurrentState = 1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ACH_radio_C__pf1172009058::bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
{
	b1l__K2Node_Event_AttachTo__pf = bpp__AttachTo__pf;
	bpf__ExecuteUbergraph_CH_radio__pf_1(16);
}
void ACH_radio_C__pf1172009058::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_CH_radio__pf_0(14);
}
void ACH_radio_C__pf1172009058::bpf__UserConstructionScript__pf()
{
	Super::bpf__UserConstructionScript__pf();
}
void ACH_radio_C__pf1172009058::bpf__saveRadioStartTime__pf()
{
	USaveGame* bpfv__CallFunc_getSavedRadioStartTime_saveGame__pf{};
	float bpfv__CallFunc_getSavedRadioStartTime_radioStartTime__pf{};
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__getSavedRadioStartTime__pf(/*out*/ bpfv__CallFunc_getSavedRadioStartTime_saveGame__pf, /*out*/ bpfv__CallFunc_getSavedRadioStartTime_radioStartTime__pf);
			}
		case 2:
			{
				bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::NotEqual_FloatFloat(bpv__currentRadioTime__pf, bpfv__CallFunc_getSavedRadioStartTime_radioStartTime__pf);
				if (!bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(IsValid(bpfv__CallFunc_getSavedRadioStartTime_saveGame__pf))
				{
					FUnconvertedWrapper__UForestrySaveGame_C__pf3054079870(bpfv__CallFunc_getSavedRadioStartTime_saveGame__pf).GetRef__radioStartTime__pf() = bpv__currentRadioTime__pf;
				}
			}
		case 4:
			{
				FString  __Local__2 = FString(TEXT(""));
				int32  __Local__3 = 0;
				bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf = UGameplayStatics::SaveGameToSlot(bpfv__CallFunc_getSavedRadioStartTime_saveGame__pf, ((IsValid(bpfv__CallFunc_getSavedRadioStartTime_saveGame__pf)) ? (FUnconvertedWrapper__UForestrySaveGame_C__pf3054079870(bpfv__CallFunc_getSavedRadioStartTime_saveGame__pf).GetRef__saveSlotName__pf()) : (__Local__2)), ((IsValid(bpfv__CallFunc_getSavedRadioStartTime_saveGame__pf)) ? (FUnconvertedWrapper__UForestrySaveGame_C__pf3054079870(bpfv__CallFunc_getSavedRadioStartTime_saveGame__pf).GetRef__userIndex__pf()) : (__Local__3)));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ACH_radio_C__pf1172009058::bpf__tickRadioTime__pf()
{
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				float  __Local__4 = 0.000000;
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(((IsValid(bpv__radioAudio__pf) && IsValid(bpv__radioAudio__pf->Sound)) ? (bpv__radioAudio__pf->Sound->Duration) : (__Local__4)), bpv__currentRadioTime__pf);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__currentRadioTime__pf, bpv__audioTickAmount__pf);
				bpv__currentRadioTime__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpv__currentRadioTime__pf = 0.000000;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ACH_radio_C__pf1172009058::bpf__getSavedRadioStartTime__pf(/*out*/ USaveGame*& bpp__saveGame__pf, /*out*/ float& bpp__radioStartTime__pf)
{
	APawn* bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf{};
	APawn* bpfv__K2Node_DynamicCast_AsLog_Pawn__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf = UGameplayStatics::GetPlayerPawn(this, 0);
				bpfv__K2Node_DynamicCast_AsLog_Pawn__pf = NoNativeCast<APawn>(CastChecked<UClass>(CastChecked<UDynamicClass>(ACH_radio_C__pf1172009058::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed), bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsLog_Pawn__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
			}
		case 2:
			{
				USaveGame*  __Local__5 = ((USaveGame*)nullptr);
				bpp__saveGame__pf = ((IsValid(bpfv__K2Node_DynamicCast_AsLog_Pawn__pf)) ? (FUnconvertedWrapper__Alog_pawn_C__pf2672032748(bpfv__K2Node_DynamicCast_AsLog_Pawn__pf).GetRef__saveGame__pf()) : (__Local__5));
				float  __Local__6 = 0.000000;
				bpp__radioStartTime__pf = ((IsValid(bpfv__K2Node_DynamicCast_AsLog_Pawn__pf) && IsValid(FUnconvertedWrapper__Alog_pawn_C__pf2672032748(bpfv__K2Node_DynamicCast_AsLog_Pawn__pf).GetRef__saveGame__pf())) ? (FUnconvertedWrapper__UForestrySaveGame_C__pf3054079870(FUnconvertedWrapper__Alog_pawn_C__pf2672032748(bpfv__K2Node_DynamicCast_AsLog_Pawn__pf).GetRef__saveGame__pf()).GetRef__radioStartTime__pf()) : (__Local__6));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ACH_radio_C__pf1172009058::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundAttenuation /Game/audio/radioAttenuation.radioAttenuation 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/props/radio/SM_radio.SM_radio 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/soundtrack/ForestryRadioUnreal.ForestryRadioUnreal 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/pawn/log_pawn.log_pawn_C 
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
void ACH_radio_C__pf1172009058::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{32, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/choppableItems/choppable.choppable_C 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/props/log/log.log 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/BP_MotionController.BP_MotionController_C 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/particles/woodchipParticle.woodchipParticle 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundAttenuation /Game/audio/chopEffectAttenuation.chopEffectAttenuation 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/freeze/ui_casual_pops_back.ui_casual_pops_back 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundConcurrency /Game/audio/chopConcurrency.chopConcurrency 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/thump/wood_thump_low.wood_thump_low 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_1.wc_1 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_2.wc_2 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_3.wc_3 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_4.wc_4 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_5.wc_5 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_6.wc_6 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_7.wc_7 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/chop/wc_8.wc_8 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/game/ForestrySaveGame.ForestrySaveGame_C 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/PickupActorInterface.PickupActorInterface_C 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/ProtoVRHand/Blueprints/Example/Enum_Grip.Enum_Grip 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/pawn/graphicsPresets.graphicsPresets 
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
struct FRegisterHelper__ACH_radio_C__pf1172009058
{
	FRegisterHelper__ACH_radio_C__pf1172009058()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/choppableItems/CH_radio"), &ACH_radio_C__pf1172009058::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ACH_radio_C__pf1172009058 Instance;
};
FRegisterHelper__ACH_radio_C__pf1172009058 FRegisterHelper__ACH_radio_C__pf1172009058::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
