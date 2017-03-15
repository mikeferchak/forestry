#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "PickupActorInterface__pf563933975.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class AActor;
class UPrimitiveComponent;
class UMotionControllerComponent;
class USceneComponent;
class USoundBase;
class UArrowComponent;
class UClass;
class UPhysicalMaterial;
class UFoliageInstancedStaticMeshComponent;
class UProceduralMeshComponent;
#include "weapon__pf1418999182.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/weapons/weapon.weapon_C,/Game/Blueprints/axe.axe_C", OverrideNativeName="weapon_C"))
class Aweapon_C__pf1418999182 : public AStaticMeshActor, public IPickupActorInterface_C
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="newPickupSlice__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FnewPickupSlice__pf__weapon_C__pf__MulticastDelegate , UProceduralMeshComponent* , bpp__procmesh__pf, FTransform , bpp__transform__pf);
	UDELEGATE(meta=(OverrideNativeName="cloneSlicable__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FcloneSlicable__pf__weapon_C__pf__MulticastDelegate , UProceduralMeshComponent* , bpp__procmesh__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="grabDirection"))
	UArrowComponent* bpv__grabDirection__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="collisionLineEnd"))
	USceneComponent* bpv__collisionLineEnd__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="collisionLineStart"))
	USceneComponent* bpv__collisionLineStart__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Canchop", Category="Default", OverrideNativeName="canchop"))
	bool bpv__canchop__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Init With Physics", Category="Default", OverrideNativeName="init_with_physics"))
	bool bpv__init_with_physics__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Init With Gravity", Category="Default", OverrideNativeName="init_with_gravity"))
	bool bpv__init_with_gravity__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Chop 1", Category="Default", OverrideNativeName="chop1"))
	USoundBase* bpv__chop1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Chop Sounds", Category="Default", OverrideNativeName="chopSounds"))
	TArray<USoundBase*> bpv__chopSounds__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Chop Threshold", Category="Default", ClampMin="0", ClampMax="50000", OverrideNativeName="chopThreshold"))
	float bpv__chopThreshold__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hit Sounds", Category="Default", OverrideNativeName="hitSounds"))
	TArray<USoundBase*> bpv__hitSounds__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="New Pickup Slice", Category="Default", OverrideNativeName="newPickupSlice"))
	FnewPickupSlice__pf__weapon_C__pf__MulticastDelegate bpv__newPickupSlice__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="Clone Slicable", Category="Default", OverrideNativeName="cloneSlicable"))
	FcloneSlicable__pf__weapon_C__pf__MulticastDelegate bpv__cloneSlicable__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Has Been Gripped", Category="Default", OverrideNativeName="hasBeenGripped"))
	bool bpv__hasBeenGripped__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Controller", Category="Default", OverrideNativeName="controller"))
	AActor* bpv__controller__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Despawn", Category="Default", OverrideNativeName="canDespawn"))
	bool bpv__canDespawn__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Axe Collision Line Length", Category="Default", OverrideNativeName="axeCollisionLineLength"))
	float bpv__axeCollisionLineLength__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Axe Collision Line Offset", Category="Default", OverrideNativeName="axeCollisionLineOffset"))
	float bpv__axeCollisionLineOffset__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Grabbing", Category="Default", OverrideNativeName="isGrabbing"))
	bool bpv__isGrabbing__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", OverrideNativeName="NewVar_0"))
	bool bpv__NewVar_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grabbing Hand Component", Category="Default", OverrideNativeName="grabbingHandComponent"))
	USceneComponent* bpv__grabbingHandComponent__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Throw Sounds", Category="Default", OverrideNativeName="throwSounds"))
	TArray<USoundBase*> bpv__throwSounds__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Holstered", Category="Default", OverrideNativeName="holstered"))
	bool bpv__holstered__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Extra Chop Force", Category="Default", OverrideNativeName="randomExtraChopForce"))
	FVector bpv__randomExtraChopForce__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Velocity", Category="Default", OverrideNativeName="currentVelocity"))
	FVector bpv__currentVelocity__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location", Category="Default", OverrideNativeName="location"))
	FVector bpv__location__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tick Delta", Category="Default", OverrideNativeName="tickDelta"))
	float bpv__tickDelta__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed", Category="Default", OverrideNativeName="speed"))
	float bpv__speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Play Chop Sound", Category="Default", OverrideNativeName="canPlayChopSound"))
	bool bpv__canPlayChopSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Stuck", Category="Default", OverrideNativeName="isStuck"))
	bool bpv__isStuck__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spawner Class", Category="Default", OverrideNativeName="spawnerClass"))
	UClass* bpv__spawnerClass__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<TEnumAsByte<EObjectTypeQuery> > b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo2"))
	USceneComponent* b0l__K2Node_Event_AttachTo2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_HitComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_NormalImpulse"))
	FVector b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Hit"))
	FHitResult b0l__K2Node_ComponentBoundEvent_Hit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_randomChopSound_sound"))
	USoundBase* b0l__CallFunc_randomChopSound_sound__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_tryToChopFoliage_sound"))
	USoundBase* b0l__CallFunc_tryToChopFoliage_sound__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_tryToChopFoliage_success"))
	bool b0l__CallFunc_tryToChopFoliage_success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo"))
	USceneComponent* b0l__K2Node_Event_AttachTo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Component2"))
	UPrimitiveComponent* b0l__K2Node_Event_Component2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMotion_Controller_Component"))
	UMotionControllerComponent* b0l__K2Node_DynamicCast_AsMotion_Controller_Component__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_component"))
	UPrimitiveComponent* b0l__K2Node_Event_component__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Motion_Controller"))
	AActor* b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeTransform_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldTransform_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldTransform_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	TArray<AActor*> b0l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingleForObjects_OutHit"))
	FHitResult b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsFoliage_Instanced_Static_Mesh_Component"))
	UFoliageInstancedStaticMeshComponent* b0l__K2Node_DynamicCast_AsFoliage_Instanced_Static_Mesh_Component__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_tryToChopFoliage_sound2"))
	USoundBase* b0l__CallFunc_tryToChopFoliage_sound2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_tryToChopFoliage_success2"))
	bool b0l__CallFunc_tryToChopFoliage_success2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsChoppable"))
	AActor* b0l__K2Node_DynamicCast_AsChoppable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b0l__K2Node_DynamicCast_bSuccess4__pf;
	Aweapon_C__pf1418999182(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_weapon_0"))
	void bpf__ExecuteUbergraph_weapon__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_weapon__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_weapon_2"))
	void bpf__ExecuteUbergraph_weapon__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_weapon__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_weapon__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_weapon__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_weapon__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="DropComponent"))
	void bpf__DropComponent__pf(UPrimitiveComponent* bpp__component__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="PickupComponent"))
	void bpf__PickupComponent__pf(USceneComponent* bpp__AttachTo__pf, UPrimitiveComponent* bpp__Component__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature"))
	virtual void bpf__BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Drop"))
	void bpf__Drop__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Pickup"))
	void bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="randomChopSound"))
	virtual void bpf__randomChopSound__pf(FVector bpp__impulse__pf, FHitResult bpp__hit__pf, /*out*/ USoundBase*& bpp__sound__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="randomHitSound"))
	virtual void bpf__randomHitSound__pf(FVector bpp__impulse__pf, FHitResult bpp__hit__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="shouldChop"))
	virtual void bpf__shouldChop__pf(FVector bpp__impulse__pf, bool bpp__blocksWeapon__pf, /*out*/ bool& bpp__shouldchop__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="tryToChopFoliage"))
	virtual void bpf__tryToChopFoliage__pf(FHitResult bpp__hit__pf, AActor* bpp__actor__pf, UPrimitiveComponent* bpp__component__pf, FVector bpp__impulse__pf, /*out*/ USoundBase*& bpp__sound__pf, /*out*/ bool& bpp__success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="tryToChopProcMesh"))
	virtual void bpf__tryToChopProcMesh__pf(AActor* bpp__actor__pf, UPrimitiveComponent* bpp__component__pf, FVector bpp__inpulse__pf, FHitResult bpp__hit__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="randomSwooshSound"))
	virtual void bpf__randomSwooshSound__pf(float bpp__velocity__pf);
public:
};
