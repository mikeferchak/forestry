#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "menu__pf1174402038.h"
class AActor;
class APawn;
class UTextRenderComponent;
#include "debugmenu__pf1174402038.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/menus/debugmenu.debugMenu_C", OverrideNativeName="debugMenu_C"))
class AdebugMenu_C__pf1174402038 : public Amenu_C__pf1174402038
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="pdValue"))
	UTextRenderComponent* bpv__pdValue__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="miscValue"))
	UTextRenderComponent* bpv__miscValue__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="pdLabel"))
	UTextRenderComponent* bpv__pdLabel__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="title"))
	UTextRenderComponent* bpv__title__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="fpsLabel"))
	UTextRenderComponent* bpv__fpsLabel__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="fpsValue"))
	UTextRenderComponent* bpv__fpsValue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Blue Screened", Category="Default", OverrideNativeName="blueScreened"))
	bool bpv__blueScreened__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b2l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_textComponent"))
	UTextRenderComponent* b2l__K2Node_CustomEvent_textComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_text"))
	FText b2l__K2Node_CustomEvent_text__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLog_Pawn"))
	APawn* b2l__K2Node_DynamicCast_AsLog_Pawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b2l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllChildActors_ChildActors"))
	TArray<AActor*> b2l__CallFunc_GetAllChildActors_ChildActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AActor* b2l__CallFunc_Array_Get_Item__pf;
	AdebugMenu_C__pf1174402038(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_debugMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_debugMenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_debugMenu__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_debugMenu__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="bsod"))
	virtual void bpf__bsod__pf() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="updateDebugMenuItem"))
	virtual void bpf__updateDebugMenuItem__pf(UTextRenderComponent* bpp__textComponent__pf, const FText& bpp__text__pf__const);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
