#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "KismetProceduralMeshLibrary.h"
#include "choppableHitMass__pf1172009058.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "PickupActorInterface__pf563933975.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
class UProceduralMeshComponent;
class USoundBase;
class AActor;
class UMotionControllerComponent;
class UStaticMeshComponent;
class UStaticMesh;
class UPrimitiveComponent;
class USceneComponent;
class UMaterialInterface;
class USoundAttenuation;
class UPhysicalMaterial;
class UObject;
#include "choppable__pf1172009058.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/choppableItems/choppable.choppable_C,/Game/Blueprints/choppable.choppable_C", OverrideNativeName="choppable_C"))
class Achoppable_C__pf1172009058 : public AActor, public IPickupActorInterface_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="staticmeshref"))
	UStaticMeshComponent* bpv__staticmeshref__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ProceduralMesh"))
	UProceduralMeshComponent* bpv__ProceduralMesh__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mesh", Category="Default", OverrideNativeName="mesh"))
	UStaticMesh* bpv__mesh__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Gravity", Category="Default", OverrideNativeName="gravity"))
	bool bpv__gravity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Physics", Category="Default", OverrideNativeName="physics"))
	bool bpv__physics__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Create Collision", Category="Default", OverrideNativeName="createCollision"))
	bool bpv__createCollision__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Out Proc Mesh", Category="Default", OverrideNativeName="outProcMesh"))
	UProceduralMeshComponent* bpv__outProcMesh__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Plane Normal Muliplier", Category="Default", tooltip, OverrideNativeName="planeNormalMuliplier"))
	FVector bpv__planeNormalMuliplier__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Can Chop", Category="Default", OverrideNativeName="canChop"))
	bool bpv__canChop__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grabbed Component", Category="Default", OverrideNativeName="grabbedComponent"))
	UPrimitiveComponent* bpv__grabbedComponent__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Frozen", Category="Default", OverrideNativeName="isFrozen"))
	bool bpv__isFrozen__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Can Step On", Category="Default", OverrideNativeName="canStepOn"))
	TEnumAsByte<ECanBeCharacterBase> bpv__canStepOn__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grabbing Hand Component", Category="Default", OverrideNativeName="grabbingHandComponent"))
	USceneComponent* bpv__grabbingHandComponent__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Thump Sound", Category="Default", OverrideNativeName="thumpSound"))
	USoundBase* bpv__thumpSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Play Thump", Category="Default", OverrideNativeName="canPlayThump"))
	bool bpv__canPlayThump__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Max View Distance", Category="Default", OverrideNativeName="maxViewDistance"))
	float bpv__maxViewDistance__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Min View Distance", Category="Default", OverrideNativeName="minViewDistance"))
	float bpv__minViewDistance__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mass to Visibility Exponent", Category="Default", OverrideNativeName="massToVisibilityExponent"))
	float bpv__massToVisibilityExponent__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Start Frozen", Category="Default", OverrideNativeName="startFrozen"))
	bool bpv__startFrozen__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", OverrideNativeName="NewVar_0"))
	bool bpv__NewVar_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Chop Axe", Category="Default", OverrideNativeName="chopAxe"))
	USceneComponent* bpv__chopAxe__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Chop Component", Category="Default", OverrideNativeName="chopComponent"))
	UProceduralMeshComponent* bpv__chopComponent__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grabbing Hand", Category="Default", OverrideNativeName="grabbingHand"))
	USceneComponent* bpv__grabbingHand__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Chop Impulse", Category="Default", OverrideNativeName="chopImpulse"))
	FVector bpv__chopImpulse__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Chop Impact Point", Category="Default", OverrideNativeName="chopImpactPoint"))
	FVector bpv__chopImpactPoint__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Chop Impact Normal", Category="Default", OverrideNativeName="chopImpactNormal"))
	FVector bpv__chopImpactNormal__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Chop Material", Category="Default", OverrideNativeName="chopMaterial"))
	UMaterialInterface* bpv__chopMaterial__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Has Been Chopped", Category="Default", OverrideNativeName="hasBeenChopped"))
	bool bpv__hasBeenChopped__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Velocity Position", Category="Default", OverrideNativeName="velocityPosition"))
	FVector bpv__velocityPosition__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tick Delta", Category="Default", OverrideNativeName="tickDelta"))
	float bpv__tickDelta__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Velocity Squared", Category="Default", OverrideNativeName="velocitySquared"))
	float bpv__velocitySquared__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Random Rotation Force", Category="Default", OverrideNativeName="randomRotationForce"))
	FVector bpv__randomRotationForce__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cap Option", Category="Default", OverrideNativeName="capOption"))
	EProcMeshSliceCapOption bpv__capOption__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Proc Meshes", Category="Default", OverrideNativeName="newProcMeshes"))
	TArray<UProceduralMeshComponent*> bpv__newProcMeshes__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Sticky", Category="Default", OverrideNativeName="isSticky"))
	bool bpv__isSticky__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Chop Sounds", Category="Default", OverrideNativeName="chopSounds"))
	TArray<USoundBase*> bpv__chopSounds__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Min Choppable Mass", Category="Default", OverrideNativeName="minChoppableMass"))
	float bpv__minChoppableMass__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hit Mass", Category="Default", OverrideNativeName="hitMass"))
	E__choppableHitMass__pf bpv__hitMass__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Branch Hit Sounds", Category="Default", OverrideNativeName="branchHitSounds"))
	TArray<USoundBase*> bpv__branchHitSounds__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hit Sound", Category="Default", OverrideNativeName="hitSound"))
	USoundBase* bpv__hitSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Log Hit Sounds", Category="Default", OverrideNativeName="logHitSounds"))
	TArray<USoundBase*> bpv__logHitSounds__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hit Attenuation", Category="Default", OverrideNativeName="hitAttenuation"))
	USoundAttenuation* bpv__hitAttenuation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Initial Max Velocity", Category="Default", OverrideNativeName="initialMaxVelocity"))
	float bpv__initialMaxVelocity__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Final Max Velocity", Category="Default", OverrideNativeName="finalMaxVelocity"))
	float bpv__finalMaxVelocity__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FVector b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable2"))
	FVector b0l__Temp_struct_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMotion_Controller_Component"))
	UMotionControllerComponent* b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Motion_Controller"))
	AActor* b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GrabComponent_didGrab"))
	bool b0l__CallFunc_GrabComponent_didGrab__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Motion_Controller2"))
	AActor* b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable3"))
	FVector b0l__Temp_struct_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable4"))
	FVector b0l__Temp_struct_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable5"))
	FVector b0l__Temp_struct_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	USoundBase* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable6"))
	FVector b0l__Temp_struct_Variable6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable7"))
	FVector b0l__Temp_struct_Variable7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SliceProceduralMesh_OutOtherHalfProcMesh"))
	UProceduralMeshComponent* b0l__CallFunc_SliceProceduralMesh_OutOtherHalfProcMesh__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable8"))
	FVector b0l__Temp_struct_Variable8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable9"))
	FVector b0l__Temp_struct_Variable9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable10"))
	FVector b0l__Temp_struct_Variable10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable11"))
	FVector b0l__Temp_struct_Variable11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable2"))
	int32 b0l__Temp_int_Loop_Counter_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable2"))
	int32 b0l__Temp_int_Array_Index_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable12"))
	FVector b0l__Temp_struct_Variable12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	USoundBase* b0l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item3"))
	USoundBase* b0l__CallFunc_Array_Get_Item3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo2"))
	USceneComponent* b0l__K2Node_Event_AttachTo2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_hit"))
	FHitResult b0l__K2Node_CustomEvent_hit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_axe"))
	UStaticMeshComponent* b0l__K2Node_CustomEvent_axe__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_component"))
	UProceduralMeshComponent* b0l__K2Node_CustomEvent_component__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_impulse"))
	FVector b0l__K2Node_CustomEvent_impulse__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo"))
	USceneComponent* b0l__K2Node_Event_AttachTo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Component2"))
	UPrimitiveComponent* b0l__K2Node_Event_Component2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time"))
	float b0l__CallFunc_BreakHitResult_Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location"))
	FVector b0l__CallFunc_BreakHitResult_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal"))
	FVector b0l__CallFunc_BreakHitResult_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem"))
	int32 b0l__CallFunc_BreakHitResult_HitItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_component"))
	UPrimitiveComponent* b0l__K2Node_Event_component__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_playFreezeSound"))
	bool b0l__K2Node_CustomEvent_playFreezeSound__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_currentComponent"))
	UPrimitiveComponent* b0l__K2Node_CustomEvent_currentComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyComp"))
	UPrimitiveComponent* b0l__K2Node_Event_MyComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Other"))
	AActor* b0l__K2Node_Event_Other__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_Event_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_bSelfMoved"))
	bool b0l__K2Node_Event_bSelfMoved__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_HitLocation"))
	FVector b0l__K2Node_Event_HitLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_HitNormal"))
	FVector b0l__K2Node_Event_HitNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NormalImpulse"))
	FVector b0l__K2Node_Event_NormalImpulse__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Hit"))
	FHitResult b0l__K2Node_Event_Hit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit2"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap2"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time2"))
	float b0l__CallFunc_BreakHitResult_Time2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location2"))
	FVector b0l__CallFunc_BreakHitResult_Location2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint2"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal2"))
	FVector b0l__CallFunc_BreakHitResult_Normal2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal2"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat2"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor2"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent2"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName2"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem2"))
	int32 b0l__CallFunc_BreakHitResult_HitItem2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex2"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart2"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd2"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SoundAttenuationSettings"))
	FSoundAttenuationSettings b0l__K2Node_MakeStruct_SoundAttenuationSettings__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item4"))
	UProceduralMeshComponent* b0l__CallFunc_Array_Get_Item4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item5"))
	UProceduralMeshComponent* b0l__CallFunc_Array_Get_Item5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	EControllerHand b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	FVector b0l__K2Node_Select_Default__pf;
	Achoppable_C__pf1172009058(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_choppable_0"))
	void bpf__ExecuteUbergraph_choppable__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_choppable_1"))
	void bpf__ExecuteUbergraph_choppable__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_choppable__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_choppable__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_choppable__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_choppable__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_choppable__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_choppable__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_choppable__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_choppable__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_choppable__pf_10(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="highlight"))
	virtual void bpf__highlight__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="stickToWeapon"))
	virtual void bpf__stickToWeapon__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="bsod"))
	virtual void bpf__bsod__pf();
	UFUNCTION(meta=(Category="Collision", DisplayName="Hit", ToolTip="Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.This could happen due to things like Character movement, using Set Location with \'sweep\' enabled, or physics simulation.For events when objects overlap (e.g. walking into a trigger) see the \'Overlap\' event.@note For collisions during physics simulation to generate hit events, \'Simulation Generates Hit Events\' must be enabled.@note When receiving a hit from another object\'s movement (bSelfMoved is false), the directions of \'Hit.Normal\' and \'Hit.ImpactNormal\'will be adjusted to indicate force from the other object against this object.@note NormalImpulse will be filled in for physics-simulating bodies, but will be zero for swept-component blocking collisions.", CppFromBpEvent, OverrideNativeName="ReceiveHit"))
	void bpf__ReceiveHit__pf(UPrimitiveComponent* bpp__MyComp__pf, AActor* bpp__Other__pf, UPrimitiveComponent* bpp__OtherComp__pf, bool bpp__bSelfMoved__pf, FVector bpp__HitLocation__pf, FVector bpp__HitNormal__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="freezeChoppable"))
	virtual void bpf__freezeChoppable__pf(bool bpp__playFreezeSound__pf, UPrimitiveComponent* bpp__currentComponent__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="DropComponent"))
	void bpf__DropComponent__pf(UPrimitiveComponent* bpp__component__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="PickupComponent"))
	void bpf__PickupComponent__pf(USceneComponent* bpp__AttachTo__pf, UPrimitiveComponent* bpp__Component__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="chopEvent"))
	virtual void bpf__chopEvent__pf(FHitResult bpp__hit__pf, UStaticMeshComponent* bpp__axe__pf, UProceduralMeshComponent* bpp__component__pf, FVector bpp__impulse__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="reinitChoppableObjectEvent"))
	virtual void bpf__reinitChoppableObjectEvent__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Drop"))
	void bpf__Drop__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Pickup"))
	void bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="initialize"))
	virtual void bpf__initialize__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="pickupFunction"))
	virtual void bpf__pickupFunction__pf(UPrimitiveComponent* bpp__self2__pf, USceneComponent* bpp__self3__pf, USceneComponent* bpp__InputPin__pf, UPrimitiveComponent* bpp__grabbedComponent__pf, USceneComponent* bpp__grabbingHandComponent__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="dropFunction"))
	virtual void bpf__dropFunction__pf(UPrimitiveComponent* bpp__self2__pf, USceneComponent* bpp__self3__pf, UObject* bpp__InputObject__pf);
public:
};
