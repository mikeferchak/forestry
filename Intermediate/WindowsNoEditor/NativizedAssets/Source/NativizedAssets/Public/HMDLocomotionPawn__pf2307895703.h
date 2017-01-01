#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
class UArrowComponent;
class UStaticMeshComponent;
class UCameraComponent;
class USceneComponent;
class UMaterialInstanceDynamic;
#include "HMDLocomotionPawn__pf2307895703.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/VirtualRealityBP/Blueprints/HMDLocomotionPawn.HMDLocomotionPawn_C", OverrideNativeName="HMDLocomotionPawn_C"))
class AHMDLocomotionPawn_C__pf2307895703 : public APawn
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TraceDirection"))
	UArrowComponent* bpv__TraceDirection__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arrow"))
	UStaticMeshComponent* bpv__Arrow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Ring"))
	UStaticMeshComponent* bpv__Ring__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TeleportPin"))
	UStaticMeshComponent* bpv__TeleportPin__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Camera"))
	UCameraComponent* bpv__Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="VROrigin"))
	USceneComponent* bpv__VROrigin__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pinned Location", Category="Default", OverrideNativeName="PinnedLocation"))
	FVector bpv__PinnedLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="B Location Found", Category="Default", OverrideNativeName="bLocationFound"))
	bool bpv__bLocationFound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location Pinned", Category="Default", OverrideNativeName="bLocationPinned"))
	bool bpv__bLocationPinned__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pinned Rotation", Category="Default", OverrideNativeName="PinnedRotation"))
	FRotator bpv__PinnedRotation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotation Length Threshold", Category="Default", OverrideNativeName="RotationLengthThreshold"))
	float bpv__RotationLengthThreshold__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Look at Location", Category="Default", OverrideNativeName="CurrentLookAtLocation"))
	FVector bpv__CurrentLookAtLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Location Valid", Category="Default", OverrideNativeName="bCurrentLocationValid"))
	bool bpv__bCurrentLocationValid__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fade Out Duration", Category="Default", OverrideNativeName="FadeOutDuration"))
	float bpv__FadeOutDuration__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fade in Duration", Category="Default", OverrideNativeName="FadeInDuration"))
	float bpv__FadeInDuration__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Teleport Fade Color", Category="Default", OverrideNativeName="TeleportFadeColor"))
	FLinearColor bpv__TeleportFadeColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Default Player Height", Category="Default", OverrideNativeName="DefaultPlayerHeight"))
	float bpv__DefaultPlayerHeight__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ring Glow Mat Inst", Category="Default", OverrideNativeName="RingGlowMatInst"))
	UMaterialInstanceDynamic* bpv__RingGlowMatInst__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Use Gamepad", Category="Default", tooltip="Use Gamepad for rotation or use HMD look-at direction to adjust pawn orientation during teleportation.", OverrideNativeName="UseGamepad"))
	bool bpv__UseGamepad__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchName_CmpSuccess"))
	bool b0l__K2Node_SwitchName_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetTeleportDestination_FoundValidLocation"))
	bool b0l__CallFunc_GetTeleportDestination_FoundValidLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetTeleportDestination_Location"))
	FVector b0l__CallFunc_GetTeleportDestination_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetTeleportDestination_HitNormal"))
	FVector b0l__CallFunc_GetTeleportDestination_HitNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ShouldUpdateFacingDirection_ShouldAdjust"))
	bool b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ShouldUpdateFacingDirection_ShouldAdjust2"))
	bool b0l__CallFunc_ShouldUpdateFacingDirection_ShouldAdjust2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key2"))
	FKey b0l__K2Node_InputActionEvent_Key2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddLocalOffset_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetOrientationAndPosition_DeviceRotation"))
	FRotator b0l__CallFunc_GetOrientationAndPosition_DeviceRotation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetOrientationAndPosition_DevicePosition"))
	FVector b0l__CallFunc_GetOrientationAndPosition_DevicePosition__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetOrientationAndPosition_DeviceRotation2"))
	FRotator b0l__CallFunc_GetOrientationAndPosition_DeviceRotation2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetOrientationAndPosition_DevicePosition2"))
	FVector b0l__CallFunc_GetOrientationAndPosition_DevicePosition2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf;
	AHMDLocomotionPawn_C__pf2307895703(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_HMDLocomotionPawn_4"))
	void bpf__ExecuteUbergraph_HMDLocomotionPawn__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_R_K2Node_InputKeyEvent_1"))
	virtual void bpf__InpActEvt_R_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_HMDTeleport_K2Node_InputActionEvent_2"))
	virtual void bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_HMDTeleport_K2Node_InputActionEvent_3"))
	virtual void bpf__InpActEvt_HMDTeleport_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetTeleportDestination"))
	virtual void bpf__GetTeleportDestination__pf(/*out*/ bool& bpp__FoundValidLocation__pf, /*out*/ FVector& bpp__Location__pf, /*out*/ FVector& bpp__HitNormal__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="ShouldUpdateFacingDirection"))
	virtual void bpf__ShouldUpdateFacingDirection__pf(/*out*/ bool& bpp__ShouldAdjust__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetThumbstickFacingDirection"))
	virtual FVector  bpf__GetThumbstickFacingDirection__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateTeleportDirection"))
	virtual void bpf__UpdateTeleportDirection__pf();
public:
};
