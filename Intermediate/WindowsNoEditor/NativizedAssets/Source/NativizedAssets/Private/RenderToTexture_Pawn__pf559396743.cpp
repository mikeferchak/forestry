#include "NativizedAssets.h"
#include "RenderToTexture_Pawn__pf559396743.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
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
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "RenderToTexture_Pawn__pf559396743.h"
#include "RenderToTexture_LevelBP__pf559396743.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "TilingMesh__pf559396743.h"
#include "PhysMesh__pf559396743.h"
#include "RenderToTexture_Imposter_Enum__pf2123454684.h"
#include "Runtime/Engine/Classes/Engine/DirectionalLight.h"
#include "Runtime/Engine/Classes/Engine/Light.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "Runtime/Engine/Classes/Components/DirectionalLightComponent.h"
#include "RenderToTexture_Enum__pf2123454684.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
ARenderToTexture_Pawn_C__pf559396743::ARenderToTexture_Pawn_C__pf559396743(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ARenderToTexture_Pawn_C__pf559396743::StaticClass() == GetClass()))
	{
		ARenderToTexture_Pawn_C__pf559396743::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Root__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
	bpv__Pawncam__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Pawncam"));
	RootComponent = bpv__Root__pf;
	bpv__Root__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Root__pf->BodyInstance.bAutoWeld = false;
	if(!bpv__Root__pf->IsTemplate())
	{
		bpv__Root__pf->BodyInstance.FixupData(bpv__Root__pf);
	}
	bpv__Pawncam__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pawncam__pf->AttachToComponent(bpv__Root__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Pawncam__pf->FieldOfView = 15.000000f;
	bpv__Pawncam__pf->OrthoWidth = 100.000000f;
	bpv__Pawncam__pf->AspectRatio = 1.000000f;
	bpv__Pawncam__pf->bConstrainAspectRatio = true;
	bpv__Pawncam__pf->ProjectionMode = ECameraProjectionMode::Type::Orthographic;
	bpv__Pawncam__pf->RelativeLocation = FVector(0.000000, 0.000000, 200.000000);
	bpv__Pawncam__pf->RelativeRotation = FRotator(-90.000000, 0.000000, 90.000000);
	bpv__BaseColor__pf = false;
	bpv__Specular__pf = false;
	bpv__Normal__pf = false;
	bpv__Opacity__pf = false;
	bpv__Roughness__pf = false;
	bpv__AmbientOcclusion__pf = false;
	bpv__MaterialAmbientOcclusion__pf = false;
	bpv__ResolutionMultiplier__pf = 1;
	bpv__BufferCommands__pf = FString(TEXT(""));
	bpv__ShotCommand__pf = FString(TEXT(""));
	bpv__BackfacexSSSxMeshes__pfTT = TArray<AStaticMeshActor*> ();
	bpv__MIDArray__pf = TArray<UMaterialInstanceDynamic*> ();
	bpv__Generator__pf = nullptr;
}
void ARenderToTexture_Pawn_C__pf559396743::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Root__pf)
	{
		bpv__Root__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pawncam__pf)
	{
		bpv__Pawncam__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ARenderToTexture_Pawn_C__pf559396743::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Engine/ArtTools/RenderToTexture/Enums/RenderToTexture_Imposter_Enum.RenderToTexture_Imposter_Enum")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Engine/ArtTools/RenderToTexture/Enums/RenderToTexture_Enum.RenderToTexture_Enum")));
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_ARenderToTexture_LevelBP_C__pf559396743();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ARenderToTexture_LevelBP_C__pf559396743());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FTilingMesh__pf559396743();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FTilingMesh__pf559396743());
	extern UScriptStruct* Z_Construct_UScriptStruct_FPhysMesh__pf559396743();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FPhysMesh__pf559396743());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
void ARenderToTexture_Pawn_C__pf559396743::bpf__ExecuteUbergraph_RenderToTexture_Pawn__pf_0(int32 bpp__EntryPoint__pf)
{
	FRotator bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(2, 2147483647, TEXT("ExecuteUbergraph_RenderToTexture_Pawn_0"), this));
				CurrentState = -1;
				break;
			}
		case 2:
			{
				CurrentState = 3;
				break;
			}
		case 3:
			{
				UGameplayStatics::GetAllActorsOfClass(this, ARenderToTexture_LevelBP_C__pf559396743::StaticClass(), /*out*/ TArrayCaster<ARenderToTexture_LevelBP_C__pf559396743*>(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 4:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpv__Generator__pf = b0l__CallFunc_Array_Get_Item__pf;
			}
		case 5:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				float  __Local__1 = 0.000000;
				if(IsValid(bpv__Pawncam__pf))
				{
					bpv__Pawncam__pf->OrthoWidth = ((IsValid(b0l__CallFunc_Array_Get_Item__pf)) ? (b0l__CallFunc_Array_Get_Item__pf->bpv__SheetSize__pf) : (__Local__1));
				}
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item__pf) && IsValid(b0l__CallFunc_Array_Get_Item__pf->bpv__Camera1__pf))
				{
					bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = b0l__CallFunc_Array_Get_Item__pf->bpv__Camera1__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(IsValid(bpv__Pawncam__pf))
				{
					bpv__Pawncam__pf->USceneComponent::K2_SetWorldLocation(bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, false);
				}
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item__pf) && IsValid(b0l__CallFunc_Array_Get_Item__pf->bpv__Camera1__pf))
				{
					bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = b0l__CallFunc_Array_Get_Item__pf->bpv__Camera1__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(IsValid(bpv__Pawncam__pf))
				{
					bpv__Pawncam__pf->USceneComponent::K2_SetWorldRotation(bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
				}
			}
		case 8:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.BufferVisualizationDumpFrames 1")), nullptr);
			}
		case 9:
			{
				FString  __Local__2 = FString(TEXT(""));
				UKismetSystemLibrary::ExecuteConsoleCommand(this, ((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__BufferCommands__pf) : (__Local__2)), nullptr);
			}
		case 10:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bool  __Local__3 = false;
				if (!((IsValid(b0l__CallFunc_Array_Get_Item__pf)) ? (b0l__CallFunc_Array_Get_Item__pf->bpv__ExportximagesxasxEXR__pfTTT) : (__Local__3)))
				{
					CurrentState = 12;
					break;
				}
			}
		case 11:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.BufferVisualizationDumpFramesAsHDR 1")), nullptr);
				CurrentState = -1;
				break;
			}
		case 12:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.BufferVisualizationDumpFramesAsHDR 0")), nullptr);
				CurrentState = -1;
				break;
			}
		case 117:
			{
				CurrentState = 1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void ARenderToTexture_Pawn_C__pf559396743::bpf__ExecuteUbergraph_RenderToTexture_Pawn__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	int32 bpv__CallFunc_Add_IntInt_ReturnValue4__pf{};
	int32 bpv__CallFunc_Add_IntInt_ReturnValue6__pf{};
	int32 bpv__CallFunc_Add_IntInt_ReturnValue7__pf{};
	int32 bpv__CallFunc_Add_IntInt_ReturnValue8__pf{};
	int32 bpv__CallFunc_Array_Length_ReturnValue5__pf{};
	bool bpv__CallFunc_Less_IntInt_ReturnValue4__pf{};
	float bpv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	int32 bpv__CallFunc_Array_Length_ReturnValue6__pf{};
	bool bpv__CallFunc_Less_IntInt_ReturnValue5__pf{};
	int32 bpv__CallFunc_Array_Length_ReturnValue7__pf{};
	bool bpv__CallFunc_Less_IntInt_ReturnValue7__pf{};
	UMaterialInstanceDynamic* bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue2__pf{};
	int32 bpv__CallFunc_Array_LastIndex_ReturnValue__pf{};
	bool bpv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	int32 bpv__CallFunc_Array_LastIndex_ReturnValue2__pf{};
	bool bpv__CallFunc_Greater_IntInt_ReturnValue2__pf{};
	int32 bpv__CallFunc_Array_Length_ReturnValue8__pf{};
	bool bpv__CallFunc_Less_IntInt_ReturnValue8__pf{};
	int32 bpv__CallFunc_GetNumMaterials_ReturnValue__pf{};
	bool bpv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	bool bpv__CallFunc_LessEqual_IntInt_ReturnValue2__pf{};
	int32 bpv__CallFunc_Array_Add_ReturnValue__pf{};
	FLinearColor bpv__CallFunc_MakeColor_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpv__CallFunc_SelectColor_ReturnValue__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 13:
			{
				CurrentState = 14;
				break;
			}
		case 14:
			{
				bool  __Local__4 = false;
				if (!((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__OutputxDepthxMaps__pfTT) : (__Local__4)))
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 15:
			{
				b0l__Temp_int_Variable2__pf = 0;
			}
		case 16:
			{
				TArray<UStaticMeshComponent*>  __Local__5 = TArray<UStaticMeshComponent*> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__ImposterMeshComponents__pf) : (__Local__5)), 0, /*out*/ b0l__CallFunc_Array_Get_Item11__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item11__pf))
				{
					bpv__CallFunc_GetNumMaterials_ReturnValue__pf = b0l__CallFunc_Array_Get_Item11__pf->GetNumMaterials();
				}
				bpv__CallFunc_LessEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::LessEqual_IntInt(b0l__Temp_int_Variable2__pf, bpv__CallFunc_GetNumMaterials_ReturnValue__pf);
				if (!bpv__CallFunc_LessEqual_IntInt_ReturnValue2__pf)
				{
					CurrentState = 22;
					break;
				}
			}
		case 17:
			{
				StateStack.Push(35);
			}
		case 18:
			{
				b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue3__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ARenderToTexture_Pawn_C__pf559396743::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed));
			}
		case 19:
			{
				bpv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__MIDArray__pf, b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue3__pf);
			}
		case 20:
			{
				b0l__Temp_object_Variable__pf = CastChecked<UTexture>(CastChecked<UDynamicClass>(ARenderToTexture_Pawn_C__pf559396743::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
				TArray<UTexture*>  __Local__6 = TArray<UTexture*> {};
				bpv__CallFunc_Array_LastIndex_ReturnValue2__pf = FCustomThunkTemplates::Array_LastIndex(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__OpacityxMaskxTextures__pfTT) : (__Local__6)));
				bpv__CallFunc_Greater_IntInt_ReturnValue2__pf = UKismetMathLibrary::Greater_IntInt(b0l__Temp_int_Variable2__pf, bpv__CallFunc_Array_LastIndex_ReturnValue2__pf);
				b0l__Temp_bool_Variable__pf = bpv__CallFunc_Greater_IntInt_ReturnValue2__pf;
				TArray<UTexture*>  __Local__7 = TArray<UTexture*> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__OpacityxMaskxTextures__pfTT) : (__Local__7)), b0l__Temp_int_Variable2__pf, /*out*/ b0l__CallFunc_Array_Get_Item12__pf);
				if(IsValid(b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue3__pf))
				{
					b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue3__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Opacity Mask")), TSwitchValue<bool , UTexture* >(b0l__Temp_bool_Variable__pf, b0l__K2Node_Select_Default__pf, 2, TSwitchPair<bool , UTexture* >(false, b0l__CallFunc_Array_Get_Item12__pf), TSwitchPair<bool , UTexture* >(true, b0l__Temp_object_Variable__pf)));
				}
			}
		case 21:
			{
				TArray<FLinearColor>  __Local__8 = TArray<FLinearColor> {};
				bpv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__OpacityxMaskxChannels__pfTT) : (__Local__8)));
				TArray<FLinearColor>  __Local__9 = TArray<FLinearColor> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__OpacityxMaskxChannels__pfTT) : (__Local__9)), b0l__Temp_int_Variable2__pf, /*out*/ b0l__CallFunc_Array_Get_Item9__pf);
				bpv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(b0l__Temp_int_Variable2__pf, bpv__CallFunc_Array_LastIndex_ReturnValue__pf);
				bpv__CallFunc_MakeColor_ReturnValue__pf = UKismetMathLibrary::MakeColor(0.000000, 0.000000, 0.000000, 1.000000);
				bpv__CallFunc_SelectColor_ReturnValue__pf = UKismetMathLibrary::SelectColor(bpv__CallFunc_MakeColor_ReturnValue__pf, b0l__CallFunc_Array_Get_Item9__pf, bpv__CallFunc_Greater_IntInt_ReturnValue__pf);
				if(IsValid(b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue3__pf))
				{
					b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue3__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Mask Channel")), bpv__CallFunc_SelectColor_ReturnValue__pf);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				b0l__Temp_int_Loop_Counter_Variable6__pf = 0;
			}
		case 23:
			{
				b0l__Temp_int_Array_Index_Variable7__pf = 0;
			}
		case 24:
			{
				TArray<UStaticMeshComponent*>  __Local__10 = TArray<UStaticMeshComponent*> {};
				bpv__CallFunc_Array_Length_ReturnValue8__pf = FCustomThunkTemplates::Array_Length(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__ImposterMeshComponents__pf) : (__Local__10)));
				bpv__CallFunc_Less_IntInt_ReturnValue8__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable6__pf, bpv__CallFunc_Array_Length_ReturnValue8__pf);
				if (!bpv__CallFunc_Less_IntInt_ReturnValue8__pf)
				{
					CurrentState = 31;
					break;
				}
			}
		case 25:
			{
				b0l__Temp_int_Array_Index_Variable7__pf = b0l__Temp_int_Loop_Counter_Variable6__pf;
			}
		case 26:
			{
				StateStack.Push(36);
			}
		case 27:
			{
				b0l__Temp_int_Variable__pf = 0;
			}
		case 28:
			{
				TArray<UStaticMeshComponent*>  __Local__11 = TArray<UStaticMeshComponent*> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__ImposterMeshComponents__pf) : (__Local__11)), 0, /*out*/ b0l__CallFunc_Array_Get_Item11__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item11__pf))
				{
					bpv__CallFunc_GetNumMaterials_ReturnValue__pf = b0l__CallFunc_Array_Get_Item11__pf->GetNumMaterials();
				}
				bpv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(b0l__Temp_int_Variable__pf, bpv__CallFunc_GetNumMaterials_ReturnValue__pf);
				if (!bpv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 29:
			{
				StateStack.Push(37);
			}
		case 30:
			{
				TArray<UStaticMeshComponent*>  __Local__12 = TArray<UStaticMeshComponent*> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__ImposterMeshComponents__pf) : (__Local__12)), b0l__Temp_int_Array_Index_Variable7__pf, /*out*/ b0l__CallFunc_Array_Get_Item10__pf);
				FCustomThunkTemplates::Array_Get(bpv__MIDArray__pf, b0l__Temp_int_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item13__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item10__pf))
				{
					b0l__CallFunc_Array_Get_Item10__pf->SetMaterial(b0l__Temp_int_Variable__pf, b0l__CallFunc_Array_Get_Item13__pf);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 31:
			{
				if(IsValid(bpv__Generator__pf) && IsValid(bpv__Generator__pf->bpv__BackgroundSheetMID__pf))
				{
					bpv__Generator__pf->bpv__BackgroundSheetMID__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Grey")), 1.000000);
				}
			}
		case 32:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.BufferVisualizationOverviewTargets BaseColor")), nullptr);
			}
		case 33:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("viewmode unlit")), nullptr);
			}
		case 34:
			{
				FString  __Local__13 = FString(TEXT(""));
				UKismetSystemLibrary::ExecuteConsoleCommand(this, ((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__ShotCommand__pf) : (__Local__13)), nullptr);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 35:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue8__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Variable2__pf, 1);
				b0l__Temp_int_Variable2__pf = bpv__CallFunc_Add_IntInt_ReturnValue8__pf;
				CurrentState = 16;
				break;
			}
		case 36:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue6__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable6__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable6__pf = bpv__CallFunc_Add_IntInt_ReturnValue6__pf;
				CurrentState = 24;
				break;
			}
		case 37:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue7__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Variable__pf, 1);
				b0l__Temp_int_Variable__pf = bpv__CallFunc_Add_IntInt_ReturnValue7__pf;
				CurrentState = 28;
				break;
			}
		case 38:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(39, 2147483647, TEXT("ExecuteUbergraph_RenderToTexture_Pawn_1"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 39:
			{
				CurrentState = 14;
				break;
			}
		case 74:
			{
				TArray<UStaticMeshComponent*>  __Local__15 = TArray<UStaticMeshComponent*> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__CopiedxMeshxArray__pfTT) : (__Local__15)), b0l__Temp_int_Array_Index_Variable2__pf, /*out*/ b0l__CallFunc_Array_Get_Item7__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item7__pf))
				{
					b0l__CallFunc_Array_Get_Item7__pf->SetMaterial(0, bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue2__pf);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 75:
			{
				if(IsValid(bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue2__pf))
				{
					float  __Local__16 = 0.000000;
					bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue2__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Min")), ((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__DisplacementMin__pf) : (__Local__16)));
				}
			}
		case 76:
			{
				if(IsValid(bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue2__pf))
				{
					float  __Local__17 = 0.000000;
					bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue2__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Max")), ((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__DisplacementMax__pf) : (__Local__17)));
				}
			}
		case 77:
			{
				b0l__Temp_int_Loop_Counter_Variable4__pf = 0;
			}
		case 78:
			{
				b0l__Temp_int_Array_Index_Variable2__pf = 0;
			}
		case 79:
			{
				TArray<UStaticMeshComponent*>  __Local__18 = TArray<UStaticMeshComponent*> {};
				bpv__CallFunc_Array_Length_ReturnValue7__pf = FCustomThunkTemplates::Array_Length(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__CopiedxMeshxArray__pfTT) : (__Local__18)));
				bpv__CallFunc_Less_IntInt_ReturnValue7__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable4__pf, bpv__CallFunc_Array_Length_ReturnValue7__pf);
				if (!bpv__CallFunc_Less_IntInt_ReturnValue7__pf)
				{
					CurrentState = 83;
					break;
				}
			}
		case 80:
			{
				b0l__Temp_int_Array_Index_Variable2__pf = b0l__Temp_int_Loop_Counter_Variable4__pf;
			}
		case 81:
			{
				StateStack.Push(82);
				CurrentState = 74;
				break;
			}
		case 82:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue4__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable4__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable4__pf = bpv__CallFunc_Add_IntInt_ReturnValue4__pf;
				CurrentState = 79;
				break;
			}
		case 83:
			{
				if(IsValid(bpv__Generator__pf) && IsValid(bpv__Generator__pf->bpv__PlaneMesh__pf))
				{
					bpv__Generator__pf->bpv__PlaneMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ARenderToTexture_Pawn_C__pf559396743::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
				}
				CurrentState = 32;
				break;
			}
		case 84:
			{
				bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue2__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ARenderToTexture_Pawn_C__pf559396743::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
				CurrentState = 75;
				break;
			}
		case 85:
			{
				bpv__CallFunc_Array_Length_ReturnValue6__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf);
				bpv__CallFunc_Less_IntInt_ReturnValue5__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpv__CallFunc_Array_Length_ReturnValue6__pf);
				if (!bpv__CallFunc_Less_IntInt_ReturnValue5__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 86:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 87:
			{
				StateStack.Push(89);
			}
		case 88:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item6__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item6__pf) && IsValid(b0l__CallFunc_Array_Get_Item6__pf->StaticMeshComponent))
				{
					b0l__CallFunc_Array_Get_Item6__pf->StaticMeshComponent->SetMaterial(0, bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf);
				}
				CurrentState = 32;
				break;
			}
		case 89:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpv__CallFunc_Add_IntInt_ReturnValue__pf;
				CurrentState = 85;
				break;
			}
		case 90:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(91, 1769799757, TEXT("ExecuteUbergraph_RenderToTexture_Pawn_1"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 91:
			{
				CurrentState = 84;
				break;
			}
		case 92:
			{
				UGameplayStatics::GetAllActorsOfClass(this, AStaticMeshActor::StaticClass(), /*out*/ TArrayCaster<AStaticMeshActor*>(b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf).Get<AActor*>());
			}
		case 93:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 94:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
				CurrentState = 85;
				break;
			}
		case 95:
			{
				if(IsValid(bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf))
				{
					float  __Local__20 = 0.000000;
					bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Min")), ((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__DisplacementxMin__pfT) : (__Local__20)));
				}
			}
		case 96:
			{
				float  __Local__21 = 0.000000;
				float  __Local__22 = 0.000000;
				bpv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__DisplacementxMax__pfT) : (__Local__21)), ((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__DisplacementxMin__pfT) : (__Local__22)));
				if(IsValid(bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf))
				{
					bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Length")), bpv__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
				}
			}
		case 97:
			{
				b0l__Temp_int_Loop_Counter_Variable2__pf = 0;
			}
		case 98:
			{
				b0l__Temp_int_Array_Index_Variable4__pf = 0;
			}
		case 99:
			{
				TArray<UStaticMeshComponent*>  __Local__23 = TArray<UStaticMeshComponent*> {};
				bpv__CallFunc_Array_Length_ReturnValue5__pf = FCustomThunkTemplates::Array_Length(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__SavedMeshComponents__pf) : (__Local__23)));
				bpv__CallFunc_Less_IntInt_ReturnValue4__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable2__pf, bpv__CallFunc_Array_Length_ReturnValue5__pf);
				if (!bpv__CallFunc_Less_IntInt_ReturnValue4__pf)
				{
					CurrentState = 104;
					break;
				}
			}
		case 100:
			{
				b0l__Temp_int_Array_Index_Variable4__pf = b0l__Temp_int_Loop_Counter_Variable2__pf;
			}
		case 101:
			{
				StateStack.Push(103);
			}
		case 102:
			{
				TArray<UStaticMeshComponent*>  __Local__24 = TArray<UStaticMeshComponent*> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__SavedMeshComponents__pf) : (__Local__24)), b0l__Temp_int_Array_Index_Variable4__pf, /*out*/ b0l__CallFunc_Array_Get_Item5__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item5__pf))
				{
					b0l__CallFunc_Array_Get_Item5__pf->SetMaterial(0, bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 103:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable2__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable2__pf = bpv__CallFunc_Add_IntInt_ReturnValue2__pf;
				CurrentState = 99;
				break;
			}
		case 104:
			{
				if(IsValid(bpv__Generator__pf) && IsValid(bpv__Generator__pf->bpv__PlaneMesh__pf))
				{
					bpv__Generator__pf->bpv__PlaneMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ARenderToTexture_Pawn_C__pf559396743::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
				}
				CurrentState = 92;
				break;
			}
		case 105:
			{
				bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ARenderToTexture_Pawn_C__pf559396743::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
				CurrentState = 95;
				break;
			}
		case 106:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(107, 26835908, TEXT("ExecuteUbergraph_RenderToTexture_Pawn_1"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 107:
			{
				CurrentState = 105;
				break;
			}
		case 108:
			{
				StateStack.Push(110);
			}
		case 109:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("viewmode unlit")), nullptr);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 110:
			{
				FString  __Local__26 = FString(TEXT(""));
				UKismetSystemLibrary::ExecuteConsoleCommand(this, ((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__BufferCommands__pf) : (__Local__26)), nullptr);
			}
		case 111:
			{
				FString  __Local__27 = FString(TEXT(""));
				UKismetSystemLibrary::ExecuteConsoleCommand(this, ((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__ShotCommand__pf) : (__Local__27)), nullptr);
			}
		case 112:
			{
				E__RenderToTexture_Enum__pf  __Local__28 = E__RenderToTexture_Enum__pf::NewEnumerator10;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__RenderxType__pfT) : (__Local__28)))), EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(E__RenderToTexture_Enum__pf::NewEnumerator10)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__RenderToTexture_Enum__pf  __Local__29 = E__RenderToTexture_Enum__pf::NewEnumerator10;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__RenderxType__pfT) : (__Local__29)))), EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(E__RenderToTexture_Enum__pf::NewEnumerator0)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = 38;
					break;
				}
				E__RenderToTexture_Enum__pf  __Local__30 = E__RenderToTexture_Enum__pf::NewEnumerator10;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__RenderxType__pfT) : (__Local__30)))), EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(E__RenderToTexture_Enum__pf::NewEnumerator5)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__RenderToTexture_Enum__pf  __Local__31 = E__RenderToTexture_Enum__pf::NewEnumerator10;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__RenderxType__pfT) : (__Local__31)))), EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(E__RenderToTexture_Enum__pf::NewEnumerator2)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__RenderToTexture_Enum__pf  __Local__32 = E__RenderToTexture_Enum__pf::NewEnumerator10;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__RenderxType__pfT) : (__Local__32)))), EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(E__RenderToTexture_Enum__pf::NewEnumerator3)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__RenderToTexture_Enum__pf  __Local__33 = E__RenderToTexture_Enum__pf::NewEnumerator10;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__RenderxType__pfT) : (__Local__33)))), EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(E__RenderToTexture_Enum__pf::NewEnumerator4)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__RenderToTexture_Enum__pf  __Local__34 = E__RenderToTexture_Enum__pf::NewEnumerator10;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__RenderxType__pfT) : (__Local__34)))), EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(E__RenderToTexture_Enum__pf::NewEnumerator6)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__RenderToTexture_Enum__pf  __Local__35 = E__RenderToTexture_Enum__pf::NewEnumerator10;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__RenderxType__pfT) : (__Local__35)))), EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(E__RenderToTexture_Enum__pf::NewEnumerator8)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = 106;
					break;
				}
				E__RenderToTexture_Enum__pf  __Local__36 = E__RenderToTexture_Enum__pf::NewEnumerator10;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__RenderxType__pfT) : (__Local__36)))), EnumToByte<E__RenderToTexture_Enum__pf>(TEnumAsByte<E__RenderToTexture_Enum__pf>(E__RenderToTexture_Enum__pf::NewEnumerator9)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = 90;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 113:
			{
				CurrentState = 110;
				break;
			}
		case 114:
			{
				CurrentState = 108;
				break;
			}
		case 118:
			{
				CurrentState = 110;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void ARenderToTexture_Pawn_C__pf559396743::bpf__ExecuteUbergraph_RenderToTexture_Pawn__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 bpv__CallFunc_Add_IntInt_ReturnValue3__pf{};
	int32 bpv__CallFunc_Add_IntInt_ReturnValue5__pf{};
	int32 bpv__CallFunc_Add_IntInt_ReturnValue9__pf{};
	int32 bpv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpv__CallFunc_Array_Length_ReturnValue2__pf{};
	int32 bpv__CallFunc_Array_Length_ReturnValue3__pf{};
	bool bpv__CallFunc_Less_IntInt_ReturnValue2__pf{};
	int32 bpv__CallFunc_Array_Length_ReturnValue4__pf{};
	bool bpv__CallFunc_Less_IntInt_ReturnValue3__pf{};
	bool bpv__CallFunc_Less_IntInt_ReturnValue6__pf{};
	int32 bpv__CallFunc_Add_IntInt_ReturnValue10__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 40:
			{
				StateStack.Push(42);
			}
		case 41:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				TArray<UMaterialInstanceDynamic*>  __Local__37 = TArray<UMaterialInstanceDynamic*> {};
				FCustomThunkTemplates::Array_Get(((IsValid(b0l__CallFunc_Array_Get_Item__pf)) ? (b0l__CallFunc_Array_Get_Item__pf->bpv__Unwrap2sidedMIDListB__pf) : (__Local__37)), b0l__Temp_int_Array_Index_Variable8__pf, /*out*/ b0l__CallFunc_Array_Get_Item8__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item8__pf))
				{
					b0l__CallFunc_Array_Get_Item8__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Opacity")), 0.000000);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 42:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue3__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable3__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable3__pf = bpv__CallFunc_Add_IntInt_ReturnValue3__pf;
			}
		case 43:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				TArray<UMaterialInstanceDynamic*>  __Local__38 = TArray<UMaterialInstanceDynamic*> {};
				bpv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((IsValid(b0l__CallFunc_Array_Get_Item__pf)) ? (b0l__CallFunc_Array_Get_Item__pf->bpv__Unwrap2sidedMIDListB__pf) : (__Local__38)));
				bpv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable3__pf, bpv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					CurrentState = 45;
					break;
				}
			}
		case 44:
			{
				b0l__Temp_int_Array_Index_Variable8__pf = b0l__Temp_int_Loop_Counter_Variable3__pf;
				CurrentState = 40;
				break;
			}
		case 45:
			{
				FString  __Local__39 = FString(TEXT(""));
				UKismetSystemLibrary::ExecuteConsoleCommand(this, ((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__BufferCommands__pf) : (__Local__39)), nullptr);
			}
		case 46:
			{
				FString  __Local__40 = FString(TEXT(""));
				UKismetSystemLibrary::ExecuteConsoleCommand(this, ((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__ShotCommand__pf) : (__Local__40)), nullptr);
			}
		case 47:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(48, 610324205, TEXT("ExecuteUbergraph_RenderToTexture_Pawn_2"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 48:
			{
				CurrentState = 49;
				break;
			}
		case 49:
			{
				b0l__Temp_int_Loop_Counter_Variable8__pf = 0;
			}
		case 50:
			{
				b0l__Temp_int_Array_Index_Variable6__pf = 0;
			}
		case 51:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				TArray<UMaterialInstanceDynamic*>  __Local__42 = TArray<UMaterialInstanceDynamic*> {};
				bpv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(((IsValid(b0l__CallFunc_Array_Get_Item__pf)) ? (b0l__CallFunc_Array_Get_Item__pf->bpv__Unwrap2sidedMIDlistA__pf) : (__Local__42)));
				bpv__CallFunc_Less_IntInt_ReturnValue6__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable8__pf, bpv__CallFunc_Array_Length_ReturnValue2__pf);
				if (!bpv__CallFunc_Less_IntInt_ReturnValue6__pf)
				{
					CurrentState = 56;
					break;
				}
			}
		case 52:
			{
				b0l__Temp_int_Array_Index_Variable6__pf = b0l__Temp_int_Loop_Counter_Variable8__pf;
			}
		case 53:
			{
				StateStack.Push(55);
			}
		case 54:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				TArray<UMaterialInstanceDynamic*>  __Local__43 = TArray<UMaterialInstanceDynamic*> {};
				FCustomThunkTemplates::Array_Get(((IsValid(b0l__CallFunc_Array_Get_Item__pf)) ? (b0l__CallFunc_Array_Get_Item__pf->bpv__Unwrap2sidedMIDlistA__pf) : (__Local__43)), b0l__Temp_int_Array_Index_Variable6__pf, /*out*/ b0l__CallFunc_Array_Get_Item2__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item2__pf))
				{
					b0l__CallFunc_Array_Get_Item2__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Opacity")), 0.000000);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 55:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue10__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable8__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable8__pf = bpv__CallFunc_Add_IntInt_ReturnValue10__pf;
				CurrentState = 51;
				break;
			}
		case 56:
			{
				b0l__Temp_int_Loop_Counter_Variable7__pf = 0;
			}
		case 57:
			{
				b0l__Temp_int_Array_Index_Variable5__pf = 0;
			}
		case 58:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				TArray<UMaterialInstanceDynamic*>  __Local__44 = TArray<UMaterialInstanceDynamic*> {};
				bpv__CallFunc_Array_Length_ReturnValue4__pf = FCustomThunkTemplates::Array_Length(((IsValid(b0l__CallFunc_Array_Get_Item__pf)) ? (b0l__CallFunc_Array_Get_Item__pf->bpv__Unwrap2sidedMIDListB__pf) : (__Local__44)));
				bpv__CallFunc_Less_IntInt_ReturnValue3__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable7__pf, bpv__CallFunc_Array_Length_ReturnValue4__pf);
				if (!bpv__CallFunc_Less_IntInt_ReturnValue3__pf)
				{
					CurrentState = 63;
					break;
				}
			}
		case 59:
			{
				b0l__Temp_int_Array_Index_Variable5__pf = b0l__Temp_int_Loop_Counter_Variable7__pf;
			}
		case 60:
			{
				StateStack.Push(62);
			}
		case 61:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				TArray<UMaterialInstanceDynamic*>  __Local__45 = TArray<UMaterialInstanceDynamic*> {};
				FCustomThunkTemplates::Array_Get(((IsValid(b0l__CallFunc_Array_Get_Item__pf)) ? (b0l__CallFunc_Array_Get_Item__pf->bpv__Unwrap2sidedMIDListB__pf) : (__Local__45)), b0l__Temp_int_Array_Index_Variable5__pf, /*out*/ b0l__CallFunc_Array_Get_Item4__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item4__pf))
				{
					b0l__CallFunc_Array_Get_Item4__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Opacity")), 1.000000);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 62:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue9__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable7__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable7__pf = bpv__CallFunc_Add_IntInt_ReturnValue9__pf;
				CurrentState = 58;
				break;
			}
		case 63:
			{
				FString  __Local__46 = FString(TEXT(""));
				UKismetSystemLibrary::ExecuteConsoleCommand(this, ((IsValid(bpv__Generator__pf)) ? (bpv__Generator__pf->bpv__ShotCommand__pf) : (__Local__46)), nullptr);
			}
		case 64:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(65, 805843924, TEXT("ExecuteUbergraph_RenderToTexture_Pawn_2"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 65:
			{
				CurrentState = 66;
				break;
			}
		case 66:
			{
				b0l__Temp_int_Loop_Counter_Variable5__pf = 0;
			}
		case 67:
			{
				b0l__Temp_int_Array_Index_Variable3__pf = 0;
			}
		case 68:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				TArray<UMaterialInstanceDynamic*>  __Local__48 = TArray<UMaterialInstanceDynamic*> {};
				bpv__CallFunc_Array_Length_ReturnValue3__pf = FCustomThunkTemplates::Array_Length(((IsValid(b0l__CallFunc_Array_Get_Item__pf)) ? (b0l__CallFunc_Array_Get_Item__pf->bpv__Unwrap2sidedMIDlistA__pf) : (__Local__48)));
				bpv__CallFunc_Less_IntInt_ReturnValue2__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable5__pf, bpv__CallFunc_Array_Length_ReturnValue3__pf);
				if (!bpv__CallFunc_Less_IntInt_ReturnValue2__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 69:
			{
				b0l__Temp_int_Array_Index_Variable3__pf = b0l__Temp_int_Loop_Counter_Variable5__pf;
			}
		case 70:
			{
				StateStack.Push(72);
			}
		case 71:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				TArray<UMaterialInstanceDynamic*>  __Local__49 = TArray<UMaterialInstanceDynamic*> {};
				FCustomThunkTemplates::Array_Get(((IsValid(b0l__CallFunc_Array_Get_Item__pf)) ? (b0l__CallFunc_Array_Get_Item__pf->bpv__Unwrap2sidedMIDlistA__pf) : (__Local__49)), b0l__Temp_int_Array_Index_Variable3__pf, /*out*/ b0l__CallFunc_Array_Get_Item3__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item3__pf))
				{
					b0l__CallFunc_Array_Get_Item3__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Opacity")), 1.000000);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 72:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue5__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable5__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable5__pf = bpv__CallFunc_Add_IntInt_ReturnValue5__pf;
				CurrentState = 68;
				break;
			}
		case 73:
			{
				b0l__Temp_int_Array_Index_Variable8__pf = 0;
				CurrentState = 43;
				break;
			}
		case 115:
			{
				CurrentState = 116;
				break;
			}
		case 116:
			{
				b0l__Temp_int_Loop_Counter_Variable3__pf = 0;
				CurrentState = 73;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void ARenderToTexture_Pawn_C__pf559396743::bpf__debugdepth__pf()
{
	bpf__ExecuteUbergraph_RenderToTexture_Pawn__pf_1(13);
}
void ARenderToTexture_Pawn_C__pf559396743::bpf__rendertextures__pf()
{
	bpf__ExecuteUbergraph_RenderToTexture_Pawn__pf_1(113);
}
void ARenderToTexture_Pawn_C__pf559396743::bpf__renderdepth__pf()
{
	bpf__ExecuteUbergraph_RenderToTexture_Pawn__pf_1(114);
}
void ARenderToTexture_Pawn_C__pf559396743::bpf__renderlightmaps__pf()
{
	bpf__ExecuteUbergraph_RenderToTexture_Pawn__pf_2(115);
}
void ARenderToTexture_Pawn_C__pf559396743::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_RenderToTexture_Pawn__pf_0(117);
}
void ARenderToTexture_Pawn_C__pf559396743::bpf__renderimposter__pf()
{
	bpf__ExecuteUbergraph_RenderToTexture_Pawn__pf_1(118);
}
void ARenderToTexture_Pawn_C__pf559396743::bpf__UserConstructionScript__pf()
{
}
void ARenderToTexture_Pawn_C__pf559396743::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__50 = TEXT("/Engine/ArtTools/RenderToTexture/Materials");
	const TCHAR* __Local__51 = TEXT("/Engine/ArtTools/RenderToTexture/Textures");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__50, TEXT("M_RenderNormalizedDepth_01_Inst"), TEXT("M_RenderNormalizedDepth_01_Inst"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__51, TEXT("T_EV_BlankWhite_01"), TEXT("T_EV_BlankWhite_01"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__50, TEXT("M_BackgroundCard_01"), TEXT("M_BackgroundCard_01"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__50, TEXT("M_RenderCustomHeightmap_01"), TEXT("M_RenderCustomHeightmap_01"), TEXT("/Script/Engine"), TEXT("Material")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void ARenderToTexture_Pawn_C__pf559396743::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void ARenderToTexture_Pawn_C__pf559396743::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__52 = TEXT("/Engine/ArtTools/RenderToTexture/Materials");
	const TCHAR* __Local__53 = TEXT("/Engine/EngineFonts");
	const TCHAR* __Local__54 = TEXT("/Engine/ArtTools/RenderToTexture/Meshes");
	const TCHAR* __Local__55 = TEXT("/Engine/EditorMeshes");
	const TCHAR* __Local__56 = TEXT("/Engine/EngineMaterials");
	const TCHAR* __Local__57 = TEXT("/Engine/ArtTools/RenderToTexture/Textures");
	const TCHAR* __Local__58 = TEXT("/Engine/ArtTools/RenderToTexture/Materials/Debug");
	const TCHAR* __Local__59 = TEXT("/Engine/ArtTools/RenderToTexture/Textures/FlipbookMotionVectors");
	const TCHAR* __Local__60 = TEXT("/Engine/ArtTools/RenderToTexture/Materials/Imposters");
	const TCHAR* __Local__61 = TEXT("/Engine/ArtTools/RenderToTexture/Materials/Flipbooks");
	const TCHAR* __Local__62 = TEXT("/Engine/ArtTools/RenderToTexture/Blueprints");
	const TCHAR* __Local__63 = TEXT("/Engine/ArtTools/RenderToTexture/Enums");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__52, TEXT("M_UnlitText_01"), TEXT("M_UnlitText_01"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__53, TEXT("RobotoDistanceField"), TEXT("RobotoDistanceField"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__54, TEXT("S_1_Unit_Sphere"), TEXT("S_1_Unit_Sphere"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__52, TEXT("M_RadiusDebugTranslucent"), TEXT("M_RadiusDebugTransLucent"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__54, TEXT("S_1_Unit_Plane"), TEXT("S_1_Unit_Plane"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__55, TEXT("EditorCube"), TEXT("EditorCube"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__56, TEXT("DefaultTextMaterialOpaque"), TEXT("DefaultTextMaterialOpaque"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__57, TEXT("TilingTexturePreview"), TEXT("TilingTexturePreview"), TEXT("/Script/Engine"), TEXT("TextureRenderTarget2D")),
		FBlueprintDependencyData(__Local__52, TEXT("M_TilingPreviewMat_01"), TEXT("M_TilingPreviewMat_01"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__52, TEXT("MPC_R2T"), TEXT("MPC_R2T"), TEXT("/Script/Engine"), TEXT("MaterialParameterCollection")),
		FBlueprintDependencyData(__Local__58, TEXT("M_Emissive_Color_127-127-0"), TEXT("M_Emissive_Color_127-127-0"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__59, TEXT("Position1"), TEXT("Position1"), TEXT("/Script/Engine"), TEXT("TextureRenderTarget2D")),
		FBlueprintDependencyData(__Local__60, TEXT("M_ImposterTest_01_Inst"), TEXT("M_ImposterTest_01_Inst"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__52, TEXT("M_RenderNormalizedDepth_01"), TEXT("M_RenderNormalizedDepth_01"), TEXT("/Script/Engine"), TEXT("Material")),
		FBlueprintDependencyData(__Local__61, TEXT("M_RenderMotionVectors_Inst"), TEXT("M_RenderMotionVectors_Inst"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__61, TEXT("M_RenderMotionVectors_Applied"), TEXT("M_RenderMotionVectors_Applied"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__61, TEXT("M_RenderMotionVectors_Applied_Imposter"), TEXT("M_RenderMotionVectors_Applied_Imposter"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__61, TEXT("M_FlipbookPreview_01_Inst"), TEXT("M_FlipbookPreview_01_Inst"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__60, TEXT("M_ImposterTest_01_Inst_SingleAxis"), TEXT("M_ImposterTest_01_Inst_SingleAxis"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__62, TEXT("RenderToTexture_LevelBP"), TEXT("RenderToTexture_LevelBP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__62, TEXT("TilingMesh"), TEXT("TilingMesh"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
		FBlueprintDependencyData(__Local__62, TEXT("PhysMesh"), TEXT("PhysMesh"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
		FBlueprintDependencyData(__Local__63, TEXT("RenderToTexture_Imposter_Enum"), TEXT("RenderToTexture_Imposter_Enum"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
		FBlueprintDependencyData(__Local__63, TEXT("RenderToTexture_Enum"), TEXT("RenderToTexture_Enum"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__ARenderToTexture_Pawn_C__pf559396743
{
	FRegisterHelper__ARenderToTexture_Pawn_C__pf559396743()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Engine/ArtTools/RenderToTexture/Blueprints/RenderToTexture_Pawn"), &ARenderToTexture_Pawn_C__pf559396743::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ARenderToTexture_Pawn_C__pf559396743 Instance;
};
FRegisterHelper__ARenderToTexture_Pawn_C__pf559396743 FRegisterHelper__ARenderToTexture_Pawn_C__pf559396743::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
