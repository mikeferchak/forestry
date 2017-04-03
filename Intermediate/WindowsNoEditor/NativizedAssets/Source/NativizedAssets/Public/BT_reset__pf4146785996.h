#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BT_master__pf4146785996.h"
class AActor;
#include "BT_reset__pf4146785996.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/buttons/BT_reset.BT_reset_C", OverrideNativeName="BT_reset_C"))
class ABT_reset_C__pf4146785996 : public ABT_master_C__pf4146785996
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Fadeout Delay", Category="Default", OverrideNativeName="fadeoutDelay"))
	float bpv__fadeoutDelay__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_controller"))
	AActor* b1l__K2Node_Event_controller__pf;
	ABT_reset_C__pf4146785996(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BT_reset_0"))
	void bpf__ExecuteUbergraph_BT_reset__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="buttonPressed"))
	virtual void bpf__buttonPressed__pf(AActor* bpp__controller__pf) override;
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
