#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "choppable__pf2403237688.h"
class UTextRenderComponent;
#include "menu__pf2403237688.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/menu.menu_C", OverrideNativeName="menu_C"))
class Amenu_C__pf2403237688 : public Achoppable_C__pf2403237688
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PixelDensityLabelExtra"))
	UTextRenderComponent* bpv__PixelDensityLabelExtra__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PixelDensityLabel"))
	UTextRenderComponent* bpv__PixelDensityLabel__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="headerText"))
	UTextRenderComponent* bpv__headerText__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FPSLabel"))
	UTextRenderComponent* bpv__FPSLabel__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FPSValue"))
	UTextRenderComponent* bpv__FPSValue__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PixelDensityValue"))
	UTextRenderComponent* bpv__PixelDensityValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b1l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_PD"))
	float b1l__K2Node_CustomEvent_PD__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_FPS"))
	float b1l__K2Node_CustomEvent_FPS__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b1l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentsByTag_ReturnValue"))
	TArray<UTextRenderComponent*> b1l__CallFunc_GetComponentsByTag_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UTextRenderComponent* b1l__CallFunc_Array_Get_Item__pf;
	Amenu_C__pf2403237688(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_menu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_menu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_menu__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="bsod"))
	virtual void bpf__bsod__pf() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="updateFPSValue"))
	virtual void bpf__updateFPSValue__pf(float bpp__FPS__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="updatePixelDensityValue"))
	virtual void bpf__updatePixelDensityValue__pf(float bpp__PD__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
