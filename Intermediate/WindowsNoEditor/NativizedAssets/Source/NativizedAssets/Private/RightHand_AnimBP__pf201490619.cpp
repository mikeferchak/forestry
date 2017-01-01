#include "NativizedAssets.h"
#include "RightHand_AnimBP__pf201490619.h"
#include "GeneratedCodeHelpers.h"
#include "Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "RightHand_AnimBP__pf201490619.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_AssetPlayerBase.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/BlendSpaceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
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
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
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
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
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
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
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
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Animation/BlendSpace1D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
URightHand_AnimBP_C__pf201490619::URightHand_AnimBP_C__pf201490619(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (URightHand_AnimBP_C__pf201490619::StaticClass() == GetClass()))
	{
		URightHand_AnimBP_C__pf201490619::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__AnimGraphNode_Root_5AC1092F4EF0949D151F1D9EC2FBEA7D__pf.Result.LinkID = 1;
	bpv__AnimGraphNode_BlendSpacePlayer_576D30B241B2C62D0E9AB2A7EE11CFC5__pf.BlendSpace = CastChecked<UBlendSpaceBase>(CastChecked<UDynamicClass>(URightHand_AnimBP_C__pf201490619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_BlendSpacePlayer_576D30B241B2C62D0E9AB2A7EE11CFC5__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_BlendSpacePlayer_576D30B241B2C62D0E9AB2A7EE11CFC5__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_BlendSpacePlayer_576D30B241B2C62D0E9AB2A7EE11CFC5__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__0 = bpv__AnimGraphNode_BlendSpacePlayer_576D30B241B2C62D0E9AB2A7EE11CFC5__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__0.SourcePropertyName = FName(TEXT("Grip"));
	__Local__0.DestProperty = FindFieldChecked<UFloatProperty>(FAnimNode_BlendSpacePlayer::StaticStruct(), TEXT("X"));
	__Local__0.Size = 4;
	bpv__GripState__pf = E__GripEnum__pf::NewEnumerator0;
	bpv__InterpSpeed__pf = 7.000000f;
	bpv__Grip__pf = 0.000000f;
}
void URightHand_AnimBP_C__pf201490619::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void URightHand_AnimBP_C__pf201490619::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/VirtualRealityBP/Blueprints/GripEnum.GripEnum")));
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__1 = NewObject<UAnimClassData>(InDynamicClass, TEXT("AnimClassData"));
	__Local__1->TargetSkeleton = CastChecked<USkeleton>(CastChecked<UDynamicClass>(URightHand_AnimBP_C__pf201490619::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__1->RootAnimNodeIndex = 1;
	__Local__1->RootAnimNodeProperty = InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_Root_5AC1092F4EF0949D151F1D9EC2FBEA7D"));
	__Local__1->AnimNodeProperties = TArray<UStructProperty*> ();
	__Local__1->AnimNodeProperties.Reserve(2);
	__Local__1->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_Root_5AC1092F4EF0949D151F1D9EC2FBEA7D")));
	__Local__1->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_BlendSpacePlayer_576D30B241B2C62D0E9AB2A7EE11CFC5")));
	InDynamicClass->AnimClassImplementation = __Local__1;
}
void URightHand_AnimBP_C__pf201490619::bpf__ExecuteUbergraph_RightHand_AnimBP__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpv__CallFunc_Conv_ByteToInt_ReturnValue__pf{};
	float bpv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	float bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpv__CallFunc_FInterpTo_Constant_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_Conv_ByteToInt_ReturnValue__pf = UKismetMathLibrary::Conv_ByteToInt(EnumToByte<E__GripEnum__pf>(TEnumAsByte<E__GripEnum__pf>(bpv__GripState__pf)));
	bpv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__CallFunc_Conv_ByteToInt_ReturnValue__pf);
	bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__CallFunc_Conv_IntToFloat_ReturnValue__pf, 2.000000);
	bpv__CallFunc_FInterpTo_Constant_ReturnValue__pf = UKismetMathLibrary::FInterpTo_Constant(bpv__Grip__pf, bpv__CallFunc_Divide_FloatFloat_ReturnValue__pf, b0l__K2Node_Event_DeltaTimeX__pf, bpv__InterpSpeed__pf);
	bpv__Grip__pf = bpv__CallFunc_FInterpTo_Constant_ReturnValue__pf;
	return; // KCST_GotoReturn
}
void URightHand_AnimBP_C__pf201490619::bpf__ExecuteUbergraph_RightHand_AnimBP__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	return; // KCST_GotoReturn
}
void URightHand_AnimBP_C__pf201490619::bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf)
{
	b0l__K2Node_Event_DeltaTimeX__pf = bpp__DeltaTimeX__pf;
	bpf__ExecuteUbergraph_RightHand_AnimBP__pf_0(2);
}
void URightHand_AnimBP_C__pf201490619::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_AnimGraphNode_BlendSpacePlayer_576D30B241B2C62D0E9AB2A7EE11CFC5__pf()
{
	bpf__ExecuteUbergraph_RightHand_AnimBP__pf_1(3);
}
void URightHand_AnimBP_C__pf201490619::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__2 = TEXT("/Game/VirtualReality/Mannequin/Animations");
	const TCHAR* __Local__3 = TEXT("/Game/VirtualReality/Mannequin/Character/Mesh");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__2, TEXT("RightGrip_BS"), TEXT("RightGrip_BS"), TEXT("/Script/Engine"), TEXT("BlendSpace1D")),
		FBlueprintDependencyData(__Local__3, TEXT("MannequinHand_Right_Skeleton"), TEXT("MannequinHand_Right_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void URightHand_AnimBP_C__pf201490619::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void URightHand_AnimBP_C__pf201490619::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__4 = TEXT("/Game/VirtualRealityBP/Blueprints");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__4, TEXT("GripEnum"), TEXT("GripEnum"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__URightHand_AnimBP_C__pf201490619
{
	FRegisterHelper__URightHand_AnimBP_C__pf201490619()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/VirtualReality/Mannequin/Animations/RightHand_AnimBP"), &URightHand_AnimBP_C__pf201490619::__StaticDependenciesAssets);
	}
	static FRegisterHelper__URightHand_AnimBP_C__pf201490619 Instance;
};
FRegisterHelper__URightHand_AnimBP_C__pf201490619 FRegisterHelper__URightHand_AnimBP_C__pf201490619::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
