#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "DmgTypeBP_Environmental__pf2398200284.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Engine/EngineDamageTypes/DmgTypeBP_Environmental.DmgTypeBP_Environmental_C", OverrideNativeName="DmgTypeBP_Environmental_C"))
class UDmgTypeBP_Environmental_C__pf2398200284 : public UDamageType
{
public:
	GENERATED_BODY()
	UDmgTypeBP_Environmental_C__pf2398200284(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
