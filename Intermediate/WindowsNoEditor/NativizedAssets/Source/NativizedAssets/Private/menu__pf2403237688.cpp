#include "NativizedAssets.h"
#include "menu__pf2403237688.h"
#include "GeneratedCodeHelpers.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "ProceduralMeshComponent.h"
#include "menu__pf2403237688.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "BP_MotionController__pf2307895703.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
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
#include "PickupActorInterface__pf2307895703.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
Amenu_C__pf2403237688::Amenu_C__pf2403237688(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (Amenu_C__pf2403237688::StaticClass() == GetClass()))
	{
		Amenu_C__pf2403237688::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__PixelDensityValue__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("PixelDensityValue"));
	bpv__FPSValue__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("FPSValue"));
	bpv__FPSLabel__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("FPSLabel"));
	bpv__headerText__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("headerText"));
	bpv__PixelDensityLabel__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("PixelDensityLabel"));
	bpv__PixelDensityLabelExtra__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("PixelDensityLabelExtra"));
	auto __Local__0 = NewObject<UBodySetup>(bpv__ProceduralMesh__pf, UBodySetup::StaticClass(), TEXT("BodySetup_0"));
	bpv__ProceduralMesh__pf->ProcMeshBodySetup = __Local__0;
	if(!bpv__ProceduralMesh__pf->IsTemplate())
	{
		bpv__ProceduralMesh__pf->BodyInstance.FixupData(bpv__ProceduralMesh__pf);
	}
	bpv__staticmeshref__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(Amenu_C__pf2403237688::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	if(!bpv__staticmeshref__pf->IsTemplate())
	{
		bpv__staticmeshref__pf->BodyInstance.FixupData(bpv__staticmeshref__pf);
	}
	bpv__PixelDensityValue__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PixelDensityValue__pf->AttachToComponent(bpv__ProceduralMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PixelDensityValue__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("1.0"), /* Literal Text */
	TEXT("[29858F8C496233D5EE3AFDB8D694FAFC]"), /* Namespace */
	TEXT("EEECAF4C4EAA05E549DB98B344A66387") /* Key */
	);
	bpv__PixelDensityValue__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Amenu_C__pf2403237688::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__PixelDensityValue__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Right;
	bpv__PixelDensityValue__pf->WorldSize = 5.000000f;
	bpv__PixelDensityValue__pf->RelativeLocation = FVector(1.223510, -31.000000, 82.150429);
	bpv__PixelDensityValue__pf->RelativeRotation = FRotator(42.187309, 0.000000, 0.000000);
	bpv__PixelDensityValue__pf->ComponentTags = TArray<FName> ();
	bpv__PixelDensityValue__pf->ComponentTags.Reserve(1);
	bpv__PixelDensityValue__pf->ComponentTags.Add(FName(TEXT("menuItem")));
	if(!bpv__PixelDensityValue__pf->IsTemplate())
	{
		bpv__PixelDensityValue__pf->BodyInstance.FixupData(bpv__PixelDensityValue__pf);
	}
	bpv__FPSValue__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FPSValue__pf->AttachToComponent(bpv__ProceduralMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__FPSValue__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("nil"), /* Literal Text */
	TEXT("[29858F8C496233D5EE3AFDB8D694FAFC]"), /* Namespace */
	TEXT("59A23BC74D1197CE6211768B95BBF7F7") /* Key */
	);
	bpv__FPSValue__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Amenu_C__pf2403237688::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__FPSValue__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Right;
	bpv__FPSValue__pf->WorldSize = 5.000000f;
	bpv__FPSValue__pf->RelativeLocation = FVector(4.581292, -31.000000, 78.445663);
	bpv__FPSValue__pf->RelativeRotation = FRotator(42.187309, 0.000000, 0.000000);
	bpv__FPSValue__pf->ComponentTags = TArray<FName> ();
	bpv__FPSValue__pf->ComponentTags.Reserve(1);
	bpv__FPSValue__pf->ComponentTags.Add(FName(TEXT("menuItem")));
	if(!bpv__FPSValue__pf->IsTemplate())
	{
		bpv__FPSValue__pf->BodyInstance.FixupData(bpv__FPSValue__pf);
	}
	bpv__FPSLabel__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FPSLabel__pf->AttachToComponent(bpv__ProceduralMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__FPSLabel__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("FPS"), /* Literal Text */
	TEXT("[29858F8C496233D5EE3AFDB8D694FAFC]"), /* Namespace */
	TEXT("75BD826543F09F26239AD5B84CB2458E") /* Key */
	);
	bpv__FPSLabel__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Amenu_C__pf2403237688::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__FPSLabel__pf->WorldSize = 5.000000f;
	bpv__FPSLabel__pf->RelativeLocation = FVector(4.581292, 39.000000, 78.445663);
	bpv__FPSLabel__pf->RelativeRotation = FRotator(42.187309, 0.000000, 0.000000);
	bpv__FPSLabel__pf->ComponentTags = TArray<FName> ();
	bpv__FPSLabel__pf->ComponentTags.Reserve(1);
	bpv__FPSLabel__pf->ComponentTags.Add(FName(TEXT("menuItem")));
	if(!bpv__FPSLabel__pf->IsTemplate())
	{
		bpv__FPSLabel__pf->BodyInstance.FixupData(bpv__FPSLabel__pf);
	}
	bpv__headerText__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__headerText__pf->AttachToComponent(bpv__ProceduralMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__headerText__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("FORESTRY"), /* Literal Text */
	TEXT("[29858F8C496233D5EE3AFDB8D694FAFC]"), /* Namespace */
	TEXT("1BE7F29C41174068877BE0B336D50648") /* Key */
	);
	bpv__headerText__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Amenu_C__pf2403237688::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__headerText__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	bpv__headerText__pf->WorldSize = 12.000000f;
	bpv__headerText__pf->RelativeLocation = FVector(-12.207621, 3.000000, 96.969498);
	bpv__headerText__pf->RelativeRotation = FRotator(42.187309, 0.000000, 0.000000);
	bpv__headerText__pf->ComponentTags = TArray<FName> ();
	bpv__headerText__pf->ComponentTags.Reserve(1);
	bpv__headerText__pf->ComponentTags.Add(FName(TEXT("menuItem")));
	if(!bpv__headerText__pf->IsTemplate())
	{
		bpv__headerText__pf->BodyInstance.FixupData(bpv__headerText__pf);
	}
	bpv__PixelDensityLabel__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PixelDensityLabel__pf->AttachToComponent(bpv__ProceduralMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PixelDensityLabel__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Pixel density"), /* Literal Text */
	TEXT("[29858F8C496233D5EE3AFDB8D694FAFC]"), /* Namespace */
	TEXT("035C296A4D38D3A93A14B68751DB2010") /* Key */
	);
	bpv__PixelDensityLabel__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Amenu_C__pf2403237688::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__PixelDensityLabel__pf->WorldSize = 5.000000f;
	bpv__PixelDensityLabel__pf->RelativeLocation = FVector(1.223510, 39.000000, 82.150429);
	bpv__PixelDensityLabel__pf->RelativeRotation = FRotator(42.187309, 0.000000, 0.000000);
	bpv__PixelDensityLabel__pf->ComponentTags = TArray<FName> ();
	bpv__PixelDensityLabel__pf->ComponentTags.Reserve(1);
	bpv__PixelDensityLabel__pf->ComponentTags.Add(FName(TEXT("menuItem")));
	if(!bpv__PixelDensityLabel__pf->IsTemplate())
	{
		bpv__PixelDensityLabel__pf->BodyInstance.FixupData(bpv__PixelDensityLabel__pf);
	}
	bpv__PixelDensityLabelExtra__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PixelDensityLabelExtra__pf->AttachToComponent(bpv__ProceduralMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PixelDensityLabelExtra__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT(" (adjust with -/+ keys for now)"), /* Literal Text */
	TEXT("[29858F8C496233D5EE3AFDB8D694FAFC]"), /* Namespace */
	TEXT("0582A07941D858514F8E788A8E8F391F") /* Key */
	);
	bpv__PixelDensityLabelExtra__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Amenu_C__pf2403237688::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__PixelDensityLabelExtra__pf->WorldSize = 2.500000f;
	bpv__PixelDensityLabelExtra__pf->RelativeLocation = FVector(0.551953, 14.000000, 82.891380);
	bpv__PixelDensityLabelExtra__pf->RelativeRotation = FRotator(42.187309, 0.000000, 0.000000);
	bpv__PixelDensityLabelExtra__pf->ComponentTags = TArray<FName> ();
	bpv__PixelDensityLabelExtra__pf->ComponentTags.Reserve(1);
	bpv__PixelDensityLabelExtra__pf->ComponentTags.Add(FName(TEXT("menuItem")));
	if(!bpv__PixelDensityLabelExtra__pf->IsTemplate())
	{
		bpv__PixelDensityLabelExtra__pf->BodyInstance.FixupData(bpv__PixelDensityLabelExtra__pf);
	}
}
void Amenu_C__pf2403237688::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__PixelDensityValue__pf)
	{
		bpv__PixelDensityValue__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FPSValue__pf)
	{
		bpv__FPSValue__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FPSLabel__pf)
	{
		bpv__FPSLabel__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__headerText__pf)
	{
		bpv__headerText__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PixelDensityLabel__pf)
	{
		bpv__PixelDensityLabel__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PixelDensityLabelExtra__pf)
	{
		bpv__PixelDensityLabelExtra__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void Amenu_C__pf2403237688::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	extern UClass* Z_Construct_UClass_Achoppable_C__pf2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_Achoppable_C__pf2403237688());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
void Amenu_C__pf2403237688::bpf__ExecuteUbergraph_menu__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpv__CallFunc_Add_IntInt_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	int32 bpv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				b1l__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::GetComponentsByTag(UTextRenderComponent::StaticClass(), FName(TEXT("menuItem")))).Get<UTextRenderComponent*>();
				bpv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b1l__CallFunc_GetComponentsByTag_ReturnValue__pf);
				bpv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b1l__Temp_int_Loop_Counter_Variable__pf, bpv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 2:
			{
				b1l__Temp_int_Array_Index_Variable__pf = b1l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 3:
			{
				StateStack.Push(5);
			}
		case 4:
			{
				b1l__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::GetComponentsByTag(UTextRenderComponent::StaticClass(), FName(TEXT("menuItem")))).Get<UTextRenderComponent*>();
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetComponentsByTag_ReturnValue__pf, b1l__Temp_int_Array_Index_Variable__pf, /*out*/ b1l__CallFunc_Array_Get_Item__pf);
				if(IsValid(b1l__CallFunc_Array_Get_Item__pf))
				{
					b1l__CallFunc_Array_Get_Item__pf->SetVisibility(false, false);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Loop_Counter_Variable__pf, 1);
				b1l__Temp_int_Loop_Counter_Variable__pf = bpv__CallFunc_Add_IntInt_ReturnValue__pf;
				CurrentState = 1;
				break;
			}
		case 6:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__ProceduralMesh__pf->SetMaterialByName(FName(TEXT("screen")), bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf);
				}
			}
		case 7:
			{
				if(IsValid(bpv__outProcMesh__pf))
				{
					bpv__outProcMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Amenu_C__pf2403237688::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpv__ProceduralMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Amenu_C__pf2403237688::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
				}
				CurrentState = 6;
				break;
			}
		case 9:
			{
				StateStack.Push(10);
				CurrentState = 8;
				break;
			}
		case 10:
			{
				b1l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 11:
			{
				b1l__Temp_int_Array_Index_Variable__pf = 0;
				CurrentState = 1;
				break;
			}
		case 12:
			{
				CurrentState = 9;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void Amenu_C__pf2403237688::bpf__ExecuteUbergraph_menu__pf_1(int32 bpp__EntryPoint__pf)
{
	FText bpv__CallFunc_Conv_FloatToText_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 15);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_Conv_FloatToText_ReturnValue2__pf = UKismetTextLibrary::Conv_FloatToText(b1l__K2Node_CustomEvent_FPS__pf, ERoundingMode::HalfToEven, true, 1, 324, 0, 3);
	if(IsValid(bpv__FPSValue__pf))
	{
		bpv__FPSValue__pf->UTextRenderComponent::K2_SetText(bpv__CallFunc_Conv_FloatToText_ReturnValue2__pf);
	}
	return; //KCST_EndOfThread
}
void Amenu_C__pf2403237688::bpf__ExecuteUbergraph_menu__pf_2(int32 bpp__EntryPoint__pf)
{
	FText bpv__CallFunc_Conv_FloatToText_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 16);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_Conv_FloatToText_ReturnValue__pf = UKismetTextLibrary::Conv_FloatToText(b1l__K2Node_CustomEvent_PD__pf, ERoundingMode::HalfToEven, true, 1, 324, 0, 3);
	if(IsValid(bpv__PixelDensityValue__pf))
	{
		bpv__PixelDensityValue__pf->UTextRenderComponent::K2_SetText(bpv__CallFunc_Conv_FloatToText_ReturnValue__pf);
	}
	return; //KCST_EndOfThread
}
void Amenu_C__pf2403237688::bpf__bsod__pf()
{
	bpf__ExecuteUbergraph_menu__pf_0(12);
}
void Amenu_C__pf2403237688::bpf__updateFPSValue__pf(float bpp__FPS__pf)
{
	b1l__K2Node_CustomEvent_FPS__pf = bpp__FPS__pf;
	bpf__ExecuteUbergraph_menu__pf_1(15);
}
void Amenu_C__pf2403237688::bpf__updatePixelDensityValue__pf(float bpp__PD__pf)
{
	b1l__K2Node_CustomEvent_PD__pf = bpp__PD__pf;
	bpf__ExecuteUbergraph_menu__pf_2(16);
}
void Amenu_C__pf2403237688::bpf__UserConstructionScript__pf()
{
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpf__initialize__pf();
			}
		case 2:
			{
				if (!false)
				{
					CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpf__freezeChoppable__pf();
			}
		case 4:
			{
				if(IsValid(bpv__ProceduralMesh__pf))
				{
					bpv__ProceduralMesh__pf->SetCollisionProfileName(FName(TEXT("WorldDynamic")));
				}
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void Amenu_C__pf2403237688::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__1 = TEXT("/Game/props/menu");
	const TCHAR* __Local__2 = TEXT("/Game/materials");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__1, TEXT("menu"), TEXT("menu"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__2, TEXT("MenuTextMatInst"), TEXT("MenuTextMatInst"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
		FBlueprintDependencyData(__Local__2, TEXT("bsodMat"), TEXT("bsodMat"), TEXT("/Script/Engine"), TEXT("Material")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void Amenu_C__pf2403237688::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void Amenu_C__pf2403237688::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	Achoppable_C__pf2403237688::__StaticDependenciesAssets(AssetsToLoad);
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__3 = TEXT("/Game/Blueprints");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__3, TEXT("choppable"), TEXT("choppable_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__Amenu_C__pf2403237688
{
	FRegisterHelper__Amenu_C__pf2403237688()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/Blueprints/menu"), &Amenu_C__pf2403237688::__StaticDependenciesAssets);
	}
	static FRegisterHelper__Amenu_C__pf2403237688 Instance;
};
FRegisterHelper__Amenu_C__pf2403237688 FRegisterHelper__Amenu_C__pf2403237688::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
