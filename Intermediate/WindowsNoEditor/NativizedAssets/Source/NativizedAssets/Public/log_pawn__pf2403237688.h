#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class UPrimitiveComponent;
class AActor;
class ABP_MotionController_C__pf2307895703;
class UChildActorComponent;
class UArrowComponent;
class UCameraComponent;
class USceneComponent;
class USoundBase;
class UPhysicalMaterial;
class UAudioComponent;
#include "log_pawn__pf2403237688.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/log_pawn.log_pawn_C", OverrideNativeName="log_pawn_C"))
class Alog_pawn_C__pf2403237688 : public APawn
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="reinitChoppableObject__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FreinitChoppableObject__pf__log_pawn_C__pf__MulticastDelegate );
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="holster"))
	UChildActorComponent* bpv__holster__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arrow"))
	UArrowComponent* bpv__Arrow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Camera"))
	UCameraComponent* bpv__Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="VROrigin"))
	USceneComponent* bpv__VROrigin__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Show Chaperone", Category="Chaperone", OverrideNativeName="bShowChaperone"))
	bool bpv__bShowChaperone__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Left Controller", Category="Default", OverrideNativeName="LeftController"))
	ABP_MotionController_C__pf2307895703* bpv__LeftController__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Right Controller", Category="Default", OverrideNativeName="RightController"))
	ABP_MotionController_C__pf2307895703* bpv__RightController__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fade Out Duration", Category="Default", OverrideNativeName="FadeOutDuration"))
	float bpv__FadeOutDuration__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fade in Duration", Category="Default", OverrideNativeName="FadeInDuration"))
	float bpv__FadeInDuration__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Teleporting", Category="Default", OverrideNativeName="IsTeleporting"))
	bool bpv__IsTeleporting__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Teleport Fade Color", Category="Default", OverrideNativeName="TeleportFadeColor"))
	FLinearColor bpv__TeleportFadeColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Thumb Deadzone", Category="Default", tooltip="Deadzone for adjusting rotation using the thumbs during teleportation", OverrideNativeName="ThumbDeadzone"))
	float bpv__ThumbDeadzone__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Right Stick Down", Category="Default", OverrideNativeName="RightStickDown"))
	bool bpv__RightStickDown__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Left Stick Down", Category="Default", OverrideNativeName="LeftStickDown"))
	bool bpv__LeftStickDown__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Default Player Height", Category="Default", tooltip="Player height used on the PS4.", OverrideNativeName="DefaultPlayerHeight"))
	float bpv__DefaultPlayerHeight__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Use Controller Roll to Rotate", Category="Default", tooltip="Forced to True for PSVR Platform. PS Move controller has no thumbstick axis input so we must force enable this option.", OverrideNativeName="UseControllerRollToRotate"))
	bool bpv__UseControllerRollToRotate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", OverrideNativeName="NewVar_0"))
	float bpv__NewVar_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Bird Sounds", Category="Default", OverrideNativeName="birdSounds"))
	TArray<USoundBase*> bpv__birdSounds__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="Reinit Choppable Object", Category="Default", OverrideNativeName="reinitChoppableObject"))
	FreinitChoppableObject__pf__log_pawn_C__pf__MulticastDelegate bpv__reinitChoppableObject__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Snap Rotation Amount", Category="Default", OverrideNativeName="snapRotationAmount"))
	float bpv__snapRotationAmount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Axis Threshold", Category="Default", OverrideNativeName="axisThreshold"))
	float bpv__axisThreshold__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Rotate", Category="Default", OverrideNativeName="canRotate"))
	bool bpv__canRotate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<TEnumAsByte<EObjectTypeQuery> > b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	TArray<AActor*> b0l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddWorldRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddWorldRotation_SweepHitResult2"))
	FHitResult b0l__CallFunc_K2_AddWorldRotation_SweepHitResult2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MotionController"))
	ABP_MotionController_C__pf2307895703* b0l__K2Node_CustomEvent_MotionController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetTeleportDestination_Location"))
	FVector b0l__CallFunc_GetTeleportDestination_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetTeleportDestination_Rotation"))
	FRotator b0l__CallFunc_GetTeleportDestination_Rotation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key2"))
	FKey b0l__K2Node_InputActionEvent_Key2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key3"))
	FKey b0l__K2Node_InputActionEvent_Key3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor2"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex2"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key4"))
	FKey b0l__K2Node_InputActionEvent_Key4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key5"))
	FKey b0l__K2Node_InputActionEvent_Key5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable2"))
	FKey b0l__Temp_struct_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue4"))
	float b0l__K2Node_InputAxisEvent_AxisValue4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue3"))
	float b0l__K2Node_InputAxisEvent_AxisValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key6"))
	FKey b0l__K2Node_InputActionEvent_Key6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue2"))
	float b0l__K2Node_InputAxisEvent_AxisValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b0l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key7"))
	FKey b0l__K2Node_InputActionEvent_Key7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X2"))
	float b0l__CallFunc_BreakVector_X2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y2"))
	float b0l__CallFunc_BreakVector_Y2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z2"))
	float b0l__CallFunc_BreakVector_Z2__pf;
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
	Alog_pawn_C__pf2403237688(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_log_pawn__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_log_pawn__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_log_pawn__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_log_pawn__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_log_pawn__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_log_pawn__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_log_pawn__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_log_pawn_7"))
	void bpf__ExecuteUbergraph_log_pawn__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_log_pawn_8"))
	void bpf__ExecuteUbergraph_log_pawn__pf_8(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_log_pawn_9"))
	void bpf__ExecuteUbergraph_log_pawn__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_log_pawn__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_log_pawn__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_log_pawn__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_log_pawn__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_log_pawn__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_log_pawn__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_log_pawn__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_log_pawn__pf_17(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_183"))
	virtual void bpf__InpAxisEvt_MotionControllerThumbRight_Y_K2Node_InputAxisEvent_183__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_155"))
	virtual void bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_155__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2"))
	virtual void bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_0"))
	virtual void bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="rotateRight"))
	virtual void bpf__rotateRight__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="rotateLeft"))
	virtual void bpf__rotateLeft__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Cube_K2Node_ComponentBoundEvent_18_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Cube_K2Node_ComponentBoundEvent_18_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Cube_K2Node_ComponentBoundEvent_17_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Cube_K2Node_ComponentBoundEvent_17_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ExecuteTeleportation"))
	virtual void bpf__ExecuteTeleportation__pf(ABP_MotionController_C__pf2307895703* bpp__MotionController__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_openMenu_K2Node_InputActionEvent_7"))
	virtual void bpf__InpActEvt_openMenu_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_freezeRight_K2Node_InputActionEvent_8"))
	virtual void bpf__InpActEvt_freezeRight_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_freezeLeft_K2Node_InputActionEvent_9"))
	virtual void bpf__InpActEvt_freezeLeft_K2Node_InputActionEvent_9__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_GrabRight_K2Node_InputActionEvent_10"))
	virtual void bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_10__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_GrabRight_K2Node_InputActionEvent_11"))
	virtual void bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_11__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_GrabLeft_K2Node_InputActionEvent_12"))
	virtual void bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_12__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_GrabLeft_K2Node_InputActionEvent_13"))
	virtual void bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_13__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetRotationFromInput"))
	virtual FRotator  bpf__GetRotationFromInput__pf(float bpp__UpAxis__pf, float bpp__RightAxis__pf, ABP_MotionController_C__pf2307895703* bpp__Controller__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="randomChopSound"))
	virtual void bpf__randomChopSound__pf(FVector bpp__location__pf, /*out*/ UAudioComponent*& bpp__audioOutput__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="spawnAmbisonicAudio"))
	virtual void bpf__spawnAmbisonicAudio__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="randomBirdChirps"))
	virtual void bpf__randomBirdChirps__pf(float bpp__time__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="setupPlayerHeightForPlatforms"))
	virtual void bpf__setupPlayerHeightForPlatforms__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="spawnAndAttachMotionControllers"))
	virtual void bpf__spawnAndAttachMotionControllers__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="leftHandTeleportRotation"))
	virtual void bpf__leftHandTeleportRotation__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="rightHandTeleportRotation"))
	virtual void bpf__rightHandTeleportRotation__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="logSpawner"))
	virtual void bpf__logSpawner__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="positionHolster"))
	virtual void bpf__positionHolster__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="tryToRotate"))
	virtual void bpf__tryToRotate__pf(float bpp__axisValue__pf, float bpp__axisValue2__pf);
public:
};
