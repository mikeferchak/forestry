#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "choppable__pf2403237688.h"
#include "choppableMenu__pf2403237688.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/choppableMenu.choppableMenu_C", OverrideNativeName="choppableMenu_C"))
class AchoppableMenu_C__pf2403237688 : public Achoppable_C__pf2403237688
{
public:
	GENERATED_BODY()
	AchoppableMenu_C__pf2403237688(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
