#include "NativizedAssets.h"
#include "BT_master__pf4146785996.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "BT_master__pf4146785996.h"
#include "BP_MotionController__pf563933975.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
ABT_master_C__pf4146785996::ABT_master_C__pf4146785996(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABT_master_C__pf4146785996::StaticClass() == GetClass()))
	{
		ABT_master_C__pf4146785996::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Scene__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	bpv__buttonStaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("buttonStaticMesh"));
	bpv__buttonAudio__pf = CreateDefaultSubobject<UAudioComponent>(TEXT("buttonAudio"));
	bpv__buttonTextRender__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("buttonTextRender"));
	bpv__buttonTriggerVolume__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("buttonTriggerVolume"));
	RootComponent = bpv__Scene__pf;
	bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__buttonStaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__buttonStaticMesh__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__buttonStaticMesh__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__0 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__buttonStaticMesh__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__1 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__0), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__1 = TArray<FResponseChannel> ();
	__Local__1.AddUninitialized(2);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__1.GetData(), 2);
	auto& __Local__2 = __Local__1[0];
	__Local__2.Channel = FName(TEXT("choppable"));
	__Local__2.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__3 = __Local__1[1];
	__Local__3.Channel = FName(TEXT("button"));
	__Local__3.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__4 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__buttonStaticMesh__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__4 = ECollisionChannel::ECC_GameTraceChannel1;
	bpv__buttonStaticMesh__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABT_master_C__pf4146785996::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	if(!bpv__buttonStaticMesh__pf->IsTemplate())
	{
		bpv__buttonStaticMesh__pf->BodyInstance.FixupData(bpv__buttonStaticMesh__pf);
	}
	bpv__buttonAudio__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__buttonAudio__pf->AttachToComponent(bpv__buttonStaticMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__buttonAudio__pf->VolumeMultiplier = 0.200000f;
	bpv__buttonAudio__pf->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(ABT_master_C__pf4146785996::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__buttonTextRender__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__buttonTextRender__pf->AttachToComponent(bpv__buttonStaticMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__buttonTextRender__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("TEXTWOW"), /* Literal Text */
	TEXT("[E5C5CC634E937522C7058BB5AFB7A1D6]"), /* Namespace */
	TEXT("063B4790445CC883494FA1AB9F3391F0") /* Key */
	);
	bpv__buttonTextRender__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABT_master_C__pf4146785996::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__buttonTextRender__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	bpv__buttonTextRender__pf->WorldSize = 4.186206f;
	bpv__buttonTextRender__pf->bVisible = false;
	bpv__buttonTextRender__pf->RelativeLocation = FVector(2.000000, 0.000000, 3.700000);
	bpv__buttonTextRender__pf->RelativeRotation = FRotator(90.000000, 0.000000, 0.000000);
	if(!bpv__buttonTextRender__pf->IsTemplate())
	{
		bpv__buttonTextRender__pf->BodyInstance.FixupData(bpv__buttonTextRender__pf);
	}
	bpv__buttonTriggerVolume__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__buttonTriggerVolume__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__buttonTriggerVolume__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__5 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__buttonTriggerVolume__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__6 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__5), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__6 = TArray<FResponseChannel> ();
	__Local__6.AddUninitialized(12);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__6.GetData(), 12);
	auto& __Local__7 = __Local__6[0];
	__Local__7.Channel = FName(TEXT("WorldStatic"));
	__Local__7.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__8 = __Local__6[1];
	__Local__8.Channel = FName(TEXT("WorldDynamic"));
	__Local__8.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__9 = __Local__6[2];
	__Local__9.Channel = FName(TEXT("Pawn"));
	__Local__9.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__10 = __Local__6[3];
	__Local__10.Channel = FName(TEXT("Visibility"));
	__Local__10.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__11 = __Local__6[4];
	__Local__11.Channel = FName(TEXT("Camera"));
	__Local__11.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__12 = __Local__6[5];
	__Local__12.Channel = FName(TEXT("PhysicsBody"));
	__Local__12.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__13 = __Local__6[6];
	__Local__13.Channel = FName(TEXT("Vehicle"));
	__Local__13.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__14 = __Local__6[7];
	__Local__14.Channel = FName(TEXT("Destructible"));
	__Local__14.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__15 = __Local__6[8];
	__Local__15.Channel = FName(TEXT("weapon"));
	__Local__15.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__16 = __Local__6[9];
	__Local__16.Channel = FName(TEXT("pickupNoChop"));
	__Local__16.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__17 = __Local__6[10];
	__Local__17.Channel = FName(TEXT("button"));
	__Local__17.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__18 = __Local__6[11];
	__Local__18.Channel = FName(TEXT("choppable"));
	__Local__18.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__19 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(bpv__buttonTriggerVolume__pf->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__19 = ECollisionEnabled::Type::QueryOnly;
	auto& __Local__20 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__buttonTriggerVolume__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__20 = ECollisionChannel::ECC_GameTraceChannel1;
	bpv__buttonTriggerVolume__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABT_master_C__pf4146785996::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__buttonTriggerVolume__pf->bVisible = false;
	if(!bpv__buttonTriggerVolume__pf->IsTemplate())
	{
		bpv__buttonTriggerVolume__pf->BodyInstance.FixupData(bpv__buttonTriggerVolume__pf);
	}
	bpv__buttonReleasedMaterial__pf = CastChecked<UMaterialInstance>(CastChecked<UDynamicClass>(ABT_master_C__pf4146785996::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__buttonPressedMaterial__pf = CastChecked<UMaterialInstance>(CastChecked<UDynamicClass>(ABT_master_C__pf4146785996::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__buttonPressedSound__pf = CastChecked<USoundWave>(CastChecked<UDynamicClass>(ABT_master_C__pf4146785996::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__buttonReleasedSound__pf = CastChecked<USoundWave>(CastChecked<UDynamicClass>(ABT_master_C__pf4146785996::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__buttonPressDistance__pf = -3.000000f;
	bpv__buttonReleaseDistance__pf = 0.000000f;
}
void ABT_master_C__pf4146785996::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Scene__pf)
	{
		bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__buttonStaticMesh__pf)
	{
		bpv__buttonStaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__buttonAudio__pf)
	{
		bpv__buttonAudio__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__buttonTextRender__pf)
	{
		bpv__buttonTextRender__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__buttonTriggerVolume__pf)
	{
		bpv__buttonTriggerVolume__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ABT_master_C__pf4146785996::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__21 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__21);
	auto __Local__22 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__22);
	__Local__22->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__22->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__22->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__23 = __Local__22->ComponentDelegateBindings[0];
	__Local__23.ComponentPropertyName = FName(TEXT("buttonTriggerVolume"));
	__Local__23.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__23.FunctionNameToBind = FName(TEXT("BndEvt__buttonTriggerVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__24 = __Local__22->ComponentDelegateBindings[1];
	__Local__24.ComponentPropertyName = FName(TEXT("buttonTriggerVolume"));
	__Local__24.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__24.FunctionNameToBind = FName(TEXT("BndEvt__buttonTriggerVolume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"));
}
void ABT_master_C__pf4146785996::bpf__ExecuteUbergraph_BT_master__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 18);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf = NoNativeCast<AActor>(CastChecked<UClass>(CastChecked<UDynamicClass>(ABT_master_C__pf4146785996::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed), b0l__K2Node_ComponentBoundEvent_OtherActor2__pf);
	b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpf__buttonPressed__pf(b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf);
	return; // KCST_GotoReturn
}
void ABT_master_C__pf4146785996::bpf__ExecuteUbergraph_BT_master__pf_1(int32 bpp__EntryPoint__pf)
{
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 14);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__buttonStaticMesh__pf))
	{
		bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpv__buttonStaticMesh__pf->CreateDynamicMaterialInstance(0, bpv__buttonReleasedMaterial__pf);
	}
	if(IsValid(bpv__buttonStaticMesh__pf))
	{
		bpv__buttonStaticMesh__pf->SetMaterial(0, bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf);
	}
	if(IsValid(bpv__buttonAudio__pf))
	{
		bpv__buttonAudio__pf->Sound = bpv__buttonReleasedSound__pf;
	}
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__buttonAudio__pf))
	{
		bpv__buttonAudio__pf->Play(0.000000);
	}
	bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__buttonReleaseDistance__pf);
	if(IsValid(bpv__buttonStaticMesh__pf))
	{
		bpv__buttonStaticMesh__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_MakeVector_ReturnValue2__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult2__pf, true);
	}
	if(IsValid(b0l__K2Node_CustomEvent_controller__pf))
	{
		FUnconvertedWrapper__ABP_MotionController_C__pf563933975(b0l__K2Node_CustomEvent_controller__pf).bpf__RumbleController__pf(0.200000);
	}
	return; // KCST_GotoReturn
}
void ABT_master_C__pf4146785996::bpf__ExecuteUbergraph_BT_master__pf_2(int32 bpp__EntryPoint__pf)
{
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 7);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__buttonStaticMesh__pf))
	{
		bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue2__pf = bpv__buttonStaticMesh__pf->CreateDynamicMaterialInstance(0, bpv__buttonPressedMaterial__pf);
	}
	if(IsValid(bpv__buttonStaticMesh__pf))
	{
		bpv__buttonStaticMesh__pf->SetMaterial(0, bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue2__pf);
	}
	if(IsValid(bpv__buttonAudio__pf))
	{
		bpv__buttonAudio__pf->Sound = bpv__buttonPressedSound__pf;
	}
	if(IsValid(bpv__buttonAudio__pf))
	{
		bpv__buttonAudio__pf->Play(0.000000);
	}
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__buttonPressDistance__pf);
	if(IsValid(bpv__buttonStaticMesh__pf))
	{
		bpv__buttonStaticMesh__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_MakeVector_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, true);
	}
	if(IsValid(b0l__K2Node_CustomEvent_controller2__pf))
	{
		FUnconvertedWrapper__ABP_MotionController_C__pf563933975(b0l__K2Node_CustomEvent_controller2__pf).bpf__RumbleController__pf(0.400000);
	}
	return; // KCST_GotoReturn
}
void ABT_master_C__pf4146785996::bpf__ExecuteUbergraph_BT_master__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf = NoNativeCast<AActor>(CastChecked<UClass>(CastChecked<UDynamicClass>(ABT_master_C__pf4146785996::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed), b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpf__buttonReleased__pf(b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf);
	return; // KCST_GotoReturn
}
void ABT_master_C__pf4146785996::bpf__BndEvt__buttonTriggerVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_BT_master__pf_3(1);
}
void ABT_master_C__pf4146785996::bpf__BndEvt__buttonTriggerVolume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__25;
	T__Local__25& bpp__SweepResult__pf = *const_cast<T__Local__25 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor2__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp2__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BT_master__pf_0(18);
}
void ABT_master_C__pf4146785996::bpf__buttonReleased__pf(AActor* bpp__controller__pf)
{
	b0l__K2Node_CustomEvent_controller__pf = bpp__controller__pf;
	bpf__ExecuteUbergraph_BT_master__pf_1(14);
}
void ABT_master_C__pf4146785996::bpf__buttonPressed__pf(AActor* bpp__controller__pf)
{
	b0l__K2Node_CustomEvent_controller2__pf = bpp__controller__pf;
	bpf__ExecuteUbergraph_BT_master__pf_2(7);
}
void ABT_master_C__pf4146785996::bpf__UserConstructionScript__pf()
{
	FText bpfv__emptyText__pf{};
}
void ABT_master_C__pf4146785996::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/props/button/SM_button.SM_button 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundAttenuation /Game/audio/chopEffectAttenuation.chopEffectAttenuation 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/materials/menu/MenuTextMatInst.MenuTextMatInst 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/materials/buttons/buttonReleasedMatInst.buttonReleasedMatInst 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/materials/buttons/buttonPressedMatInst.buttonPressedMatInst 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/holster/ui_wood_confirm.ui_wood_confirm 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/BP_MotionController.BP_MotionController_C 
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
void ABT_master_C__pf4146785996::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
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
struct FRegisterHelper__ABT_master_C__pf4146785996
{
	FRegisterHelper__ABT_master_C__pf4146785996()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/buttons/BT_master"), &ABT_master_C__pf4146785996::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABT_master_C__pf4146785996 Instance;
};
FRegisterHelper__ABT_master_C__pf4146785996 FRegisterHelper__ABT_master_C__pf4146785996::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
