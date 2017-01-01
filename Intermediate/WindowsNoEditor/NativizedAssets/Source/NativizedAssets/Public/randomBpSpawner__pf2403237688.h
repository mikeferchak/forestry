#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class USceneComponent;
class UClass;
#include "randomBpSpawner__pf2403237688.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/randomBpSpawner.randomBpSpawner_C", OverrideNativeName="randomBpSpawner_C"))
class ArandomBpSpawner_C__pf2403237688 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Z Size", Category="Default", OverrideNativeName="zSize"))
	float bpv__zSize__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Number", Category="Default", OverrideNativeName="number"))
	int32 bpv__number__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="X Size", Category="Default", OverrideNativeName="xSize"))
	float bpv__xSize__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Y Size", Category="Default", OverrideNativeName="ySize"))
	float bpv__ySize__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Bp Class", Category="Default", OverrideNativeName="bpClass"))
	UClass* bpv__bpClass__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Localbp Class", Category="Default", OverrideNativeName="localbpClass"))
	UClass* bpv__localbpClass__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Z Floor", Category="Default", OverrideNativeName="zFloor"))
	float bpv__zFloor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Z Ceil", Category="Default", OverrideNativeName="zCeil"))
	float bpv__zCeil__pf;
	ArandomBpSpawner_C__pf2403237688(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="addBP"))
	virtual void bpf__addBP__pf(FVector bpp__position__pf, FVector bpp__worldPosition__pf, UClass* bpp__bpClass__pf);
public:
};
