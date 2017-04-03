#include "NativizedAssets.h"
#include "debugmenu__pf1174402038.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "ProceduralMeshComponent.h"
#include "choppable__pf1172009058.h"
#include "debugmenu__pf1174402038.h"
#include "log_pawn__pf2672032748.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "graphicsPresets__pf2672032748.h"
#include "ForestrySaveGame__pf3054079870.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "KismetProceduralMeshLibrary.h"
#include "BP_MotionController__pf563933975.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
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
#include "BT_pdDown__pf4146785996.h"
#include "BT_pdUp__pf4146785996.h"
#include "BT_reset__pf4146785996.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "PickupActorInterface__pf563933975.h"
#include "BT_master__pf4146785996.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
AdebugMenu_C__pf1174402038::AdebugMenu_C__pf1174402038(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AdebugMenu_C__pf1174402038::StaticClass() == GetClass()))
	{
		AdebugMenu_C__pf1174402038::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__fpsValue__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("fpsValue"));
	bpv__fpsLabel__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("fpsLabel"));
	bpv__title__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("title"));
	bpv__pdLabel__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("pdLabel"));
	bpv__miscValue__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("miscValue"));
	bpv__pdValue__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("pdValue"));
	if(!bpv__ProceduralMesh__pf->IsTemplate())
	{
		bpv__ProceduralMesh__pf->BodyInstance.FixupData(bpv__ProceduralMesh__pf);
	}
	bpv__fpsValue__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__fpsValue__pf->AttachToComponent(bpv__ProceduralMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__fpsValue__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("nil"), /* Literal Text */
	TEXT("[A2C219D34AF882B6CB1F548E3ACD8632]"), /* Namespace */
	TEXT("08260D6449F91A5F2B29CEB78E742BA2") /* Key */
	);
	bpv__fpsValue__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AdebugMenu_C__pf1174402038::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__fpsValue__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Right;
	bpv__fpsValue__pf->WorldSize = 5.000000f;
	bpv__fpsValue__pf->RelativeLocation = FVector(4.581292, -31.000000, 78.445663);
	bpv__fpsValue__pf->RelativeRotation = FRotator(42.187309, 0.000000, 0.000000);
	bpv__fpsValue__pf->ComponentTags = TArray<FName> ();
	bpv__fpsValue__pf->ComponentTags.Reserve(1);
	bpv__fpsValue__pf->ComponentTags.Add(FName(TEXT("menuItem")));
	if(!bpv__fpsValue__pf->IsTemplate())
	{
		bpv__fpsValue__pf->BodyInstance.FixupData(bpv__fpsValue__pf);
	}
	bpv__fpsLabel__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__fpsLabel__pf->AttachToComponent(bpv__ProceduralMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__fpsLabel__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("FPS"), /* Literal Text */
	TEXT("[A2C219D34AF882B6CB1F548E3ACD8632]"), /* Namespace */
	TEXT("5F77B8FD4F9D29AD891C0CA3B23AE5A7") /* Key */
	);
	bpv__fpsLabel__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AdebugMenu_C__pf1174402038::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__fpsLabel__pf->WorldSize = 5.000000f;
	bpv__fpsLabel__pf->RelativeLocation = FVector(4.581292, 39.000000, 78.445663);
	bpv__fpsLabel__pf->RelativeRotation = FRotator(42.187309, 0.000000, 0.000000);
	bpv__fpsLabel__pf->ComponentTags = TArray<FName> ();
	bpv__fpsLabel__pf->ComponentTags.Reserve(1);
	bpv__fpsLabel__pf->ComponentTags.Add(FName(TEXT("menuItem")));
	if(!bpv__fpsLabel__pf->IsTemplate())
	{
		bpv__fpsLabel__pf->BodyInstance.FixupData(bpv__fpsLabel__pf);
	}
	bpv__title__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__title__pf->AttachToComponent(bpv__ProceduralMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__title__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("FORESTRY"), /* Literal Text */
	TEXT("[A2C219D34AF882B6CB1F548E3ACD8632]"), /* Namespace */
	TEXT("20F2BAF64957F7755F4391B46F878D13") /* Key */
	);
	bpv__title__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AdebugMenu_C__pf1174402038::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__title__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	bpv__title__pf->WorldSize = 12.000000f;
	bpv__title__pf->RelativeLocation = FVector(-12.207621, 3.000000, 96.969498);
	bpv__title__pf->RelativeRotation = FRotator(42.187309, 0.000000, 0.000000);
	bpv__title__pf->ComponentTags = TArray<FName> ();
	bpv__title__pf->ComponentTags.Reserve(1);
	bpv__title__pf->ComponentTags.Add(FName(TEXT("menuItem")));
	if(!bpv__title__pf->IsTemplate())
	{
		bpv__title__pf->BodyInstance.FixupData(bpv__title__pf);
	}
	bpv__pdLabel__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__pdLabel__pf->AttachToComponent(bpv__ProceduralMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__pdLabel__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Quality"), /* Literal Text */
	TEXT("[A2C219D34AF882B6CB1F548E3ACD8632]"), /* Namespace */
	TEXT("AA0157E747CF3E2638BDA1B55E36046C") /* Key */
	);
	bpv__pdLabel__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AdebugMenu_C__pf1174402038::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__pdLabel__pf->WorldSize = 5.000000f;
	bpv__pdLabel__pf->RelativeLocation = FVector(1.223510, 39.000000, 82.150429);
	bpv__pdLabel__pf->RelativeRotation = FRotator(42.187309, 0.000000, 0.000000);
	bpv__pdLabel__pf->ComponentTags = TArray<FName> ();
	bpv__pdLabel__pf->ComponentTags.Reserve(1);
	bpv__pdLabel__pf->ComponentTags.Add(FName(TEXT("menuItem")));
	if(!bpv__pdLabel__pf->IsTemplate())
	{
		bpv__pdLabel__pf->BodyInstance.FixupData(bpv__pdLabel__pf);
	}
	bpv__miscValue__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__miscValue__pf->AttachToComponent(bpv__ProceduralMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__miscValue__pf->Text = FText::GetEmpty();
	bpv__miscValue__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AdebugMenu_C__pf1174402038::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__miscValue__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	bpv__miscValue__pf->WorldSize = 5.000000f;
	bpv__miscValue__pf->RelativeLocation = FVector(-5.492055, 4.000000, 89.559937);
	bpv__miscValue__pf->RelativeRotation = FRotator(42.187309, 0.000000, 0.000000);
	bpv__miscValue__pf->ComponentTags = TArray<FName> ();
	bpv__miscValue__pf->ComponentTags.Reserve(1);
	bpv__miscValue__pf->ComponentTags.Add(FName(TEXT("menuItem")));
	if(!bpv__miscValue__pf->IsTemplate())
	{
		bpv__miscValue__pf->BodyInstance.FixupData(bpv__miscValue__pf);
	}
	bpv__pdValue__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__pdValue__pf->AttachToComponent(bpv__ProceduralMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__pdValue__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("1.0"), /* Literal Text */
	TEXT("[A2C219D34AF882B6CB1F548E3ACD8632]"), /* Namespace */
	TEXT("C282BB5149C12C629DF327BE3B46AA66") /* Key */
	);
	bpv__pdValue__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AdebugMenu_C__pf1174402038::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__pdValue__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Right;
	bpv__pdValue__pf->WorldSize = 5.000000f;
	bpv__pdValue__pf->RelativeLocation = FVector(1.223510, -31.000000, 82.150429);
	bpv__pdValue__pf->RelativeRotation = FRotator(42.187309, 0.000000, 0.000000);
	bpv__pdValue__pf->ComponentTags = TArray<FName> ();
	bpv__pdValue__pf->ComponentTags.Reserve(1);
	bpv__pdValue__pf->ComponentTags.Add(FName(TEXT("menuItem")));
	if(!bpv__pdValue__pf->IsTemplate())
	{
		bpv__pdValue__pf->BodyInstance.FixupData(bpv__pdValue__pf);
	}
	bpv__blueScreened__pf = false;
	PrimaryActorTick.bCanEverTick = true;
}
void AdebugMenu_C__pf1174402038::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__fpsValue__pf)
	{
		bpv__fpsValue__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__fpsLabel__pf)
	{
		bpv__fpsLabel__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__title__pf)
	{
		bpv__title__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__pdLabel__pf)
	{
		bpv__pdLabel__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__miscValue__pf)
	{
		bpv__miscValue__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__pdValue__pf)
	{
		bpv__pdValue__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void AdebugMenu_C__pf1174402038::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	extern UClass* Z_Construct_UClass_ABT_pdDown_C__pf4146785996();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABT_pdDown_C__pf4146785996());
	extern UClass* Z_Construct_UClass_ABT_master_C__pf4146785996();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABT_master_C__pf4146785996());
	extern UClass* Z_Construct_UClass_ABT_pdUp_C__pf4146785996();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABT_pdUp_C__pf4146785996());
	extern UClass* Z_Construct_UClass_ABT_reset_C__pf4146785996();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABT_reset_C__pf4146785996());
	extern UClass* Z_Construct_UClass_Amenu_C__pf1174402038();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_Amenu_C__pf1174402038());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UChildActorComponent>(InDynamicClass, UChildActorComponent::StaticClass(), TEXT("NODE_AddChildActorComponent-1"));
	InDynamicClass->ComponentTemplates.Add(__Local__0);
	auto __Local__1 = NewObject<UChildActorComponent>(InDynamicClass, UChildActorComponent::StaticClass(), TEXT("NODE_AddChildActorComponent-2"));
	InDynamicClass->ComponentTemplates.Add(__Local__1);
	auto __Local__2 = NewObject<UChildActorComponent>(InDynamicClass, UChildActorComponent::StaticClass(), TEXT("NODE_AddChildActorComponent-3"));
	InDynamicClass->ComponentTemplates.Add(__Local__2);
	auto __Local__3 = NewObject<UChildActorComponent>(InDynamicClass, UChildActorComponent::StaticClass(), TEXT("NODE_AddChildActorComponent-4"));
	InDynamicClass->ComponentTemplates.Add(__Local__3);
	auto __Local__4 = NewObject<UChildActorComponent>(InDynamicClass, UChildActorComponent::StaticClass(), TEXT("NODE_AddChildActorComponent-5"));
	InDynamicClass->ComponentTemplates.Add(__Local__4);
	auto __Local__5 = NewObject<UChildActorComponent>(InDynamicClass, UChildActorComponent::StaticClass(), TEXT("NODE_AddChildActorComponent-6"));
	InDynamicClass->ComponentTemplates.Add(__Local__5);
	auto __Local__6 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__6);
}
void AdebugMenu_C__pf1174402038::bpf__ExecuteUbergraph_debugMenu__pf_0(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_FCeil_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 10:
			{
				__CurrentState = 11;
				break;
			}
		case 11:
			{
				/*This function cannot be called from BP. See bIsValidFunction in UObject::CallFunction*/
			}
		case 12:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(b2l__K2Node_Event_DeltaSeconds__pf, 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 13:
			{
				bpfv__CallFunc_IsValid_ReturnValue3__pf = UKismetSystemLibrary::IsValid(bpv__fpsValue__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue3__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 14:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(1.000000, b2l__K2Node_Event_DeltaSeconds__pf);
				bpfv__CallFunc_FCeil_ReturnValue__pf = UKismetMathLibrary::FCeil(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(bpfv__CallFunc_FCeil_ReturnValue__pf, true, 1, 324);
				bpf__updateDebugMenuItem__pf(bpv__fpsValue__pf, bpfv__CallFunc_Conv_IntToText_ReturnValue__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AdebugMenu_C__pf1174402038::bpf__ExecuteUbergraph_debugMenu__pf_1(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf{};
	FString bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
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
				bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf = UGameplayStatics::GetPlayerPawn(this, 0);
				b2l__K2Node_DynamicCast_AsLog_Pawn__pf = NoNativeCast<APawn>(CastChecked<UClass>(CastChecked<UDynamicClass>(AdebugMenu_C__pf1174402038::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf);
				b2l__K2Node_DynamicCast_bSuccess__pf = (b2l__K2Node_DynamicCast_AsLog_Pawn__pf != nullptr);;
				if (!b2l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				E__graphicsPresets__pf  __Local__7 = E__graphicsPresets__pf::NewEnumerator0;
				bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(CastChecked<UEnum>(CastChecked<UDynamicClass>(AdebugMenu_C__pf1174402038::StaticClass())->ReferencedConvertedFields[1]), EnumToByte<E__graphicsPresets__pf>(TEnumAsByte<E__graphicsPresets__pf>(((IsValid(b2l__K2Node_DynamicCast_AsLog_Pawn__pf) && IsValid(FUnconvertedWrapper__Alog_pawn_C__pf2672032748(b2l__K2Node_DynamicCast_AsLog_Pawn__pf).GetRef__saveGame__pf())) ? (FUnconvertedWrapper__UForestrySaveGame_C__pf3054079870(FUnconvertedWrapper__Alog_pawn_C__pf2672032748(b2l__K2Node_DynamicCast_AsLog_Pawn__pf).GetRef__saveGame__pf()).GetRef__graphics__pf()) : (__Local__7)))));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf);
				if(IsValid(bpv__pdValue__pf))
				{
					bpv__pdValue__pf->UTextRenderComponent::K2_SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AdebugMenu_C__pf1174402038::bpf__ExecuteUbergraph_debugMenu__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 4:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpv__destructionCounter__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 5:
			{
				__StateStack.Push(4);
			}
		case 6:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__destructionCounter__pf, 1);
				bpv__destructionCounter__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
			}
		case 7:
			{
				(b2l__CallFunc_GetAllChildActors_ChildActors__pf).Reset();
				AActor::GetAllChildActors(/*out*/ b2l__CallFunc_GetAllChildActors_ChildActors__pf, false);
				FCustomThunkTemplates::Array_Get(b2l__CallFunc_GetAllChildActors_ChildActors__pf, bpv__destructionCounter__pf, /*out*/ b2l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(b2l__CallFunc_Array_Get_Item__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				(b2l__CallFunc_GetAllChildActors_ChildActors__pf).Reset();
				AActor::GetAllChildActors(/*out*/ b2l__CallFunc_GetAllChildActors_ChildActors__pf, false);
				FCustomThunkTemplates::Array_Get(b2l__CallFunc_GetAllChildActors_ChildActors__pf, bpv__destructionCounter__pf, /*out*/ b2l__CallFunc_Array_Get_Item__pf);
				if(IsValid(b2l__CallFunc_Array_Get_Item__pf))
				{
					b2l__CallFunc_Array_Get_Item__pf->K2_DestroyActor();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpv__blueScreened__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				__CurrentState = 19;
				break;
			}
		case 19:
			{
				Super::bpf__bsod__pf();
			}
		case 20:
			{
				if (!bpv__blueScreened__pf)
				{
					__CurrentState = 21;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				(b2l__CallFunc_GetAllChildActors_ChildActors__pf).Reset();
				AActor::GetAllChildActors(/*out*/ b2l__CallFunc_GetAllChildActors_ChildActors__pf, false);
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b2l__CallFunc_GetAllChildActors_ChildActors__pf);
				bpv__destructionCounter__pf = bpfv__CallFunc_Array_Length_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AdebugMenu_C__pf1174402038::bpf__ExecuteUbergraph_debugMenu__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsBeingDestroyed_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue2__pf{};
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
				if(IsValid(b2l__K2Node_CustomEvent_textComponent__pf))
				{
					bpfv__CallFunc_IsBeingDestroyed_ReturnValue__pf = b2l__K2Node_CustomEvent_textComponent__pf->UActorComponent::IsBeingDestroyed();
				}
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_IsBeingDestroyed_ReturnValue__pf);
				bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::NotEqual_ObjectObject(b2l__K2Node_CustomEvent_textComponent__pf, ((UObject*)nullptr));
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b2l__K2Node_CustomEvent_textComponent__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf, bpfv__CallFunc_IsValid_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_BooleanAND_ReturnValue__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 17:
			{
				if(IsValid(b2l__K2Node_CustomEvent_textComponent__pf))
				{
					b2l__K2Node_CustomEvent_textComponent__pf->UTextRenderComponent::K2_SetText(b2l__K2Node_CustomEvent_text__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AdebugMenu_C__pf1174402038::bpf__bsod__pf()
{
	bpf__ExecuteUbergraph_debugMenu__pf_2(18);
}
void AdebugMenu_C__pf1174402038::bpf__updateDebugMenuItem__pf(UTextRenderComponent* bpp__textComponent__pf, const FText& bpp__text__pf__const)
{
	typedef FText  T__Local__8;
	T__Local__8& bpp__text__pf = *const_cast<T__Local__8 *>(&bpp__text__pf__const);
	b2l__K2Node_CustomEvent_textComponent__pf = bpp__textComponent__pf;
	b2l__K2Node_CustomEvent_text__pf = bpp__text__pf;
	bpf__ExecuteUbergraph_debugMenu__pf_3(15);
}
void AdebugMenu_C__pf1174402038::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b2l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_debugMenu__pf_0(10);
}
void AdebugMenu_C__pf1174402038::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_debugMenu__pf_1(1);
}
void AdebugMenu_C__pf1174402038::bpf__UserConstructionScript__pf()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue2__pf{};
	UChildActorComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	UChildActorComponent* bpfv__CallFunc_AddComponent_ReturnValue2__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue3__pf{};
	TArray<UTextRenderComponent*> bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf{};
	UChildActorComponent* bpfv__CallFunc_AddComponent_ReturnValue3__pf{};
	UTextRenderComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				Super::bpf__UserConstructionScript__pf();
			}
		case 2:
			{
				__StateStack.Push(9);
			}
		case 3:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::GetComponentsByTag(UTextRenderComponent::StaticClass(), FName(TEXT("menuItem")))).Get<UTextRenderComponent*>();
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 7:
			{
				__StateStack.Push(15);
			}
		case 8:
			{
				bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::GetComponentsByTag(UTextRenderComponent::StaticClass(), FName(TEXT("menuItem")))).Get<UTextRenderComponent*>();
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->UPrimitiveComponent::SetCullDistance(2000.000000);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue3__pf = UKismetMathLibrary::MakeTransform(FVector(-7.770000,26.000000,91.400002), FRotator(-47.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_AddComponent_ReturnValue3__pf = CastChecked<UChildActorComponent>(AActor::AddComponent(FName(TEXT("NODE_AddChildActorComponent-6")), false, bpfv__CallFunc_MakeTransform_ReturnValue3__pf, this), ECastCheckedType::NullAllowed);
			}
		case 10:
			{
				if(IsValid(bpfv__CallFunc_AddComponent_ReturnValue3__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue3__pf->UChildActorComponent::SetChildActorClass(ABT_pdDown_C__pf4146785996::StaticClass());
				}
			}
		case 11:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue2__pf = UKismetMathLibrary::MakeTransform(FVector(-7.770000,4.000000,91.400002), FRotator(-47.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_AddComponent_ReturnValue2__pf = CastChecked<UChildActorComponent>(AActor::AddComponent(FName(TEXT("NODE_AddChildActorComponent-5")), false, bpfv__CallFunc_MakeTransform_ReturnValue2__pf, this), ECastCheckedType::NullAllowed);
			}
		case 12:
			{
				if(IsValid(bpfv__CallFunc_AddComponent_ReturnValue2__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue2__pf->UChildActorComponent::SetChildActorClass(ABT_pdUp_C__pf4146785996::StaticClass());
				}
			}
		case 13:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(-7.770000,-26.000000,91.400002), FRotator(-47.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UChildActorComponent>(AActor::AddComponent(FName(TEXT("NODE_AddChildActorComponent-4")), false, bpfv__CallFunc_MakeTransform_ReturnValue__pf, this), ECastCheckedType::NullAllowed);
			}
		case 14:
			{
				if(IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->UChildActorComponent::SetChildActorClass(ABT_reset_C__pf4146785996::StaticClass());
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 5;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AdebugMenu_C__pf1174402038::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/materials/menu/MenuTextMatInst.MenuTextMatInst 
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
void AdebugMenu_C__pf1174402038::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{36, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/menus/menu.menu_C 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
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
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/materials/menu/bsodMat.bsodMat 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/props/button/SM_button.SM_button 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/materials/buttons/buttonReleasedMatInst.buttonReleasedMatInst 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/materials/buttons/buttonPressedMatInst.buttonPressedMatInst 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/audio/holster/ui_wood_confirm.ui_wood_confirm 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/materials/buttons/buttonRedMatInst.buttonRedMatInst 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/props/menu/SM_menu.SM_menu 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/choppableItems/choppable.choppable_C 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/PickupActorInterface.PickupActorInterface_C 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/buttons/BT_pdDown.BT_pdDown_C 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/buttons/BT_master.BT_master_C 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/buttons/BT_pdUp.BT_pdUp_C 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/buttons/BT_reset.BT_reset_C 
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
struct FRegisterHelper__AdebugMenu_C__pf1174402038
{
	FRegisterHelper__AdebugMenu_C__pf1174402038()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/menus/debugmenu"), &AdebugMenu_C__pf1174402038::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AdebugMenu_C__pf1174402038 Instance;
};
FRegisterHelper__AdebugMenu_C__pf1174402038 FRegisterHelper__AdebugMenu_C__pf1174402038::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
