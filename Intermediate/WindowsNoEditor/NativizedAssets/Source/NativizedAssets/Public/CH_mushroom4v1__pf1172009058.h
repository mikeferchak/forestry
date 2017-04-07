﻿#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "choppable__pf1172009058.h"
#include "CH_mushroom4v1__pf1172009058.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/choppableItems/CH_mushroom4v1.CH_mushroom4v1_C", OverrideNativeName="CH_mushroom4v1_C"))
class ACH_mushroom4v1_C__pf1172009058 : public Achoppable_C__pf1172009058
{
public:
	GENERATED_BODY()
	ACH_mushroom4v1_C__pf1172009058(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};