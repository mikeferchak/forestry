#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "choppable__pf1172009058.h"
class UTextRenderComponent;
class UMaterialInterface;
#include "menu__pf1174402038.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/menus/menu.menu_C,/Game/Blueprints/choppableItems/menu.menu_C,/Game/Blueprints/menu.menu_C", OverrideNativeName="menu_C"))
class Amenu_C__pf1174402038 : public Achoppable_C__pf1172009058
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Bsod Mat", Category="Default", OverrideNativeName="bsodMat"))
	UMaterialInterface* bpv__bsodMat__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Screen Mat", Category="Default", OverrideNativeName="screenMat"))
	UMaterialInterface* bpv__screenMat__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Destruction Counter", Category="Default", OverrideNativeName="destructionCounter"))
	int32 bpv__destructionCounter__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentsByTag_ReturnValue"))
	TArray<UTextRenderComponent*> b1l__CallFunc_GetComponentsByTag_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UTextRenderComponent* b1l__CallFunc_Array_Get_Item__pf;
	Amenu_C__pf1174402038(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_menu__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="bsod"))
	virtual void bpf__bsod__pf() override;
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
