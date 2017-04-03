#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "choppable__pf1172009058.h"
class USceneComponent;
class USaveGame;
class UAudioComponent;
#include "CH_radio__pf1172009058.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/choppableItems/CH_radio.CH_radio_C", OverrideNativeName="CH_radio_C"))
class ACH_radio_C__pf1172009058 : public Achoppable_C__pf1172009058
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="radioAudio"))
	UAudioComponent* bpv__radioAudio__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Radio Time", Category="Default", OverrideNativeName="currentRadioTime"))
	float bpv__currentRadioTime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Audio Tick Amount", Category="Default", OverrideNativeName="audioTickAmount"))
	float bpv__audioTickAmount__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Playing on Start", Category="Default", OverrideNativeName="playingOnStart"))
	bool bpv__playingOnStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_getSavedRadioStartTime_saveGame"))
	USaveGame* b1l__CallFunc_getSavedRadioStartTime_saveGame__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_getSavedRadioStartTime_radioStartTime"))
	float b1l__CallFunc_getSavedRadioStartTime_radioStartTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_getSavedRadioStartTime_saveGame2"))
	USaveGame* b1l__CallFunc_getSavedRadioStartTime_saveGame2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_getSavedRadioStartTime_radioStartTime2"))
	float b1l__CallFunc_getSavedRadioStartTime_radioStartTime2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo"))
	USceneComponent* b1l__K2Node_Event_AttachTo__pf;
	ACH_radio_C__pf1172009058(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_CH_radio__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CH_radio__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Pickup"))
	void bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="saveRadioStartTime"))
	virtual void bpf__saveRadioStartTime__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="tickRadioTime"))
	virtual void bpf__tickRadioTime__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="getSavedRadioStartTime"))
	virtual void bpf__getSavedRadioStartTime__pf(/*out*/ USaveGame*& bpp__saveGame__pf, /*out*/ float& bpp__radioStartTime__pf);
public:
};
