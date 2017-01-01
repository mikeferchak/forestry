#include "NativizedAssets.h"
#include "randomBpSpawner__pf2403237688.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "randomBpSpawner__pf2403237688.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "bird_particle__pf2403237688.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
ArandomBpSpawner_C__pf2403237688::ArandomBpSpawner_C__pf2403237688(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ArandomBpSpawner_C__pf2403237688::StaticClass() == GetClass()))
	{
		ArandomBpSpawner_C__pf2403237688::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__zSize__pf = 2000.000000f;
	bpv__number__pf = 50;
	bpv__xSize__pf = 70000.000000f;
	bpv__ySize__pf = 70000.000000f;
	bpv__bpClass__pf = Abird_particle_C__pf2403237688::StaticClass();
	bpv__localbpClass__pf = nullptr;
	bpv__zFloor__pf = 500.000000f;
	bpv__zCeil__pf = 2000.000000f;
}
void ArandomBpSpawner_C__pf2403237688::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ArandomBpSpawner_C__pf2403237688::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_Abird_particle_C__pf2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_Abird_particle_C__pf2403237688());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UChildActorComponent>(InDynamicClass, UChildActorComponent::StaticClass(), TEXT("NODE_AddChildActorComponent-2"));
	InDynamicClass->ComponentTemplates.Add(__Local__0);
	auto __Local__1 = NewObject<UChildActorComponent>(InDynamicClass, UChildActorComponent::StaticClass(), TEXT("NODE_AddChildActorComponent-3"));
	InDynamicClass->ComponentTemplates.Add(__Local__1);
}
void ArandomBpSpawner_C__pf2403237688::bpf__UserConstructionScript__pf()
{
	FVector bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpv__Temp_int_Variable__pf{};
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	int32 bpv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FVector bpv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_RandomPointInBoundingBox_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__Temp_int_Variable__pf = 1;
			}
		case 2:
			{
				bpv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpv__Temp_int_Variable__pf, bpv__number__pf);
				if (!bpv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				StateStack.Push(5);
			}
		case 4:
			{
				if(IsValid(bpv__DefaultSceneRoot__pf))
				{
					bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__DefaultSceneRoot__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpv__xSize__pf, bpv__ySize__pf, bpv__zSize__pf);
				bpv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, 0.000000);
				bpv__CallFunc_RandomPointInBoundingBox_ReturnValue__pf = UKismetMathLibrary::RandomPointInBoundingBox(bpv__CallFunc_MakeVector_ReturnValue2__pf, bpv__CallFunc_MakeVector_ReturnValue__pf);
				bpv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__CallFunc_RandomPointInBoundingBox_ReturnValue__pf, bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
				bpf__addBP__pf(bpv__CallFunc_Add_VectorVector_ReturnValue__pf, bpv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpv__bpClass__pf);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				bpv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__Temp_int_Variable__pf, 1);
				bpv__Temp_int_Variable__pf = bpv__CallFunc_Add_IntInt_ReturnValue__pf;
				CurrentState = 2;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void ArandomBpSpawner_C__pf2403237688::bpf__addBP__pf(FVector bpp__position__pf, FVector bpp__worldPosition__pf, UClass* bpp__bpClass__pf)
{
	TArray<AActor*> bpv__Temp_object_Variable__pf{};
	float bpv__CallFunc_BreakVector_X__pf{};
	float bpv__CallFunc_BreakVector_Y__pf{};
	float bpv__CallFunc_BreakVector_Z__pf{};
	FVector bpv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	float bpv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	float bpv__CallFunc_RandomFloatInRange_ReturnValue2__pf{};
	TArray<TEnumAsByte<EObjectTypeQuery> > bpv__K2Node_MakeArray_Array__pf{};
	FRotator bpv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpv__CallFunc_LineTraceSingleForObjects_OutHit__pf{};
	bool bpv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf{};
	bool bpv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpv__CallFunc_BreakHitResult_Time__pf{};
	FVector bpv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	float bpv__CallFunc_BreakVector_X2__pf{};
	float bpv__CallFunc_BreakVector_Y2__pf{};
	float bpv__CallFunc_BreakVector_Z2__pf{};
	float bpv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FVector bpv__CallFunc_MakeVector_ReturnValue3__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf{};
	UChildActorComponent* bpv__CallFunc_AddComponent_ReturnValue__pf{};
	FHitResult bpv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf{};
	FVector bpv__wp__pf(EForceInit::ForceInit);
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bpv__localbpClass__pf = bpp__bpClass__pf;
			}
		case 2:
			{
				bpv__wp__pf = bpp__worldPosition__pf;
			}
		case 3:
			{
				UKismetMathLibrary::BreakVector(bpp__position__pf, /*out*/ bpv__CallFunc_BreakVector_X__pf, /*out*/ bpv__CallFunc_BreakVector_Y__pf, /*out*/ bpv__CallFunc_BreakVector_Z__pf);
				bpv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpv__CallFunc_BreakVector_X__pf, bpv__CallFunc_BreakVector_Y__pf, -5000.000000);
				bpv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(bpv__CallFunc_BreakVector_X__pf, bpv__CallFunc_BreakVector_Y__pf, 20000.000000);
				bpv__K2Node_MakeArray_Array__pf.SetNum(1, true);
				bpv__K2Node_MakeArray_Array__pf[0] = EObjectTypeQuery::ObjectTypeQuery1;
				bpv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingleForObjects(this, bpv__CallFunc_MakeVector_ReturnValue2__pf, bpv__CallFunc_MakeVector_ReturnValue__pf, bpv__K2Node_MakeArray_Array__pf, false, bpv__Temp_object_Variable__pf, EDrawDebugTrace::None, /*out*/ bpv__CallFunc_LineTraceSingleForObjects_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 4:
			{
				if (!bpv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				bpv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(bpv__zFloor__pf, bpv__zCeil__pf);
				UGameplayStatics::BreakHitResult(bpv__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ bpv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpv__CallFunc_BreakHitResult_TraceEnd__pf);
				UKismetMathLibrary::BreakVector(bpv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpv__CallFunc_BreakVector_X2__pf, /*out*/ bpv__CallFunc_BreakVector_Y2__pf, /*out*/ bpv__CallFunc_BreakVector_Z2__pf);
				bpv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__CallFunc_BreakVector_Z2__pf, bpv__CallFunc_RandomFloatInRange_ReturnValue__pf);
				bpv__CallFunc_MakeVector_ReturnValue3__pf = UKismetMathLibrary::MakeVector(bpv__CallFunc_BreakVector_X2__pf, bpv__CallFunc_BreakVector_Y2__pf, bpv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__CallFunc_MakeVector_ReturnValue3__pf, bpv__wp__pf);
				bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(bpv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UChildActorComponent>(AActor::AddComponent(FName(TEXT("NODE_AddChildActorComponent-3")), false, bpv__CallFunc_Conv_VectorToTransform_ReturnValue__pf, this), ECastCheckedType::NullAllowed);
			}
		case 6:
			{
				bpv__CallFunc_RandomFloatInRange_ReturnValue2__pf = UKismetMathLibrary::RandomFloatInRange(0.000000, 360.000000);
				bpv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpv__CallFunc_RandomFloatInRange_ReturnValue2__pf);
				if(IsValid(bpv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpv__CallFunc_AddComponent_ReturnValue__pf->USceneComponent::K2_SetWorldRotation(bpv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ bpv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
				}
			}
		case 7:
			{
				if(IsValid(bpv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpv__CallFunc_AddComponent_ReturnValue__pf->UChildActorComponent::SetChildActorClass(bpv__localbpClass__pf);
				}
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void ArandomBpSpawner_C__pf2403237688::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
void ArandomBpSpawner_C__pf2403237688::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void ArandomBpSpawner_C__pf2403237688::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__2 = TEXT("/Game/particles");
	const TCHAR* __Local__3 = TEXT("/Game/Blueprints");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__2, TEXT("bird_particle_system"), TEXT("bird_particle_system"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__3, TEXT("bird_particle"), TEXT("bird_particle_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__ArandomBpSpawner_C__pf2403237688
{
	FRegisterHelper__ArandomBpSpawner_C__pf2403237688()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/Blueprints/randomBpSpawner"), &ArandomBpSpawner_C__pf2403237688::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ArandomBpSpawner_C__pf2403237688 Instance;
};
FRegisterHelper__ArandomBpSpawner_C__pf2403237688 FRegisterHelper__ArandomBpSpawner_C__pf2403237688::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
