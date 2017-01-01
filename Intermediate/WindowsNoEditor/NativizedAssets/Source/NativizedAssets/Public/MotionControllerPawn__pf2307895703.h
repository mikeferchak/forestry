#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
class ABP_MotionController_C__pf2307895703;
class UCameraComponent;
class USceneComponent;
#include "MotionControllerPawn__pf2307895703.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C", OverrideNativeName="MotionControllerPawn_C"))
class AMotionControllerPawn_C__pf2307895703 : public APawn
{
public:
	GENERATED_BODY()
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchName_CmpSuccess"))
	bool b0l__K2Node_SwitchName_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key3"))
	FKey b0l__K2Node_InputActionEvent_Key3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key2"))
	FKey b0l__K2Node_InputActionEvent_Key2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable2"))
	FKey b0l__Temp_struct_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key7"))
	FKey b0l__K2Node_InputActionEvent_Key7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key8"))
	FKey b0l__K2Node_InputActionEvent_Key8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key4"))
	FKey b0l__K2Node_InputActionEvent_Key4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable3"))
	FKey b0l__Temp_struct_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key5"))
	FKey b0l__K2Node_InputActionEvent_Key5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key6"))
	FKey b0l__K2Node_InputActionEvent_Key6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MotionController"))
	ABP_MotionController_C__pf2307895703* b0l__K2Node_CustomEvent_MotionController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetTeleportDestination_Location"))
	FVector b0l__CallFunc_GetTeleportDestination_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetTeleportDestination_Rotation"))
	FRotator b0l__CallFunc_GetTeleportDestination_Rotation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable4"))
	FKey b0l__Temp_struct_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddLocalOffset_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf;
	AMotionControllerPawn_C__pf2307895703(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_MotionControllerPawn_4"))
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_10(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ExecuteTeleportation"))
	virtual void bpf__ExecuteTeleportation__pf(ABP_MotionController_C__pf2307895703* bpp__MotionController__pf);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_TeleportRight_K2Node_InputActionEvent_8"))
	virtual void bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_TeleportRight_K2Node_InputActionEvent_9"))
	virtual void bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_9__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_TeleportLeft_K2Node_InputActionEvent_10"))
	virtual void bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_10__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_TeleportLeft_K2Node_InputActionEvent_11"))
	virtual void bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_11__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_GrabRight_K2Node_InputActionEvent_12"))
	virtual void bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_12__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_GrabRight_K2Node_InputActionEvent_13"))
	virtual void bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_13__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_GrabLeft_K2Node_InputActionEvent_14"))
	virtual void bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_14__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_GrabLeft_K2Node_InputActionEvent_15"))
	virtual void bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_15__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetRotationFromInput"))
	virtual FRotator  bpf__GetRotationFromInput__pf(float bpp__UpAxis__pf, float bpp__RightAxis__pf, ABP_MotionController_C__pf2307895703* bpp__Controller__pf);
public:
};
