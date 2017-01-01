#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;
#include "BP_OceanWater__pf3032749947.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/WaterPlane/Ocean/Blueprint/BP_OceanWater.BP_OceanWater_C", OverrideNativeName="BP_OceanWater_C"))
class ABP_OceanWater_C__pf3032749947 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="WaterSurface"))
	UStaticMeshComponent* bpv__WaterSurface__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Ocean Material", Category="Default", tooltip="What material is applied to the ocean", OverrideNativeName="Ocean Material"))
	UMaterialInterface* bpv__OceanxMaterial__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Water Scale X", Category="Default", tooltip="Sets scale of water plane along local X Axis", OverrideNativeName="Water Scale X"))
	float bpv__WaterxScalexX__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Water Scale Y", Category="Default", tooltip="Sets scale of water plane along local Y Axis", OverrideNativeName="Water Scale Y"))
	float bpv__WaterxScalexY__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Water Material", Category="Default", OverrideNativeName="Water Material"))
	UMaterialInstanceDynamic* bpv__WaterxMaterial__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Overall Water Scale", Category="Default", tooltip="Scales the material on the water surface", OverrideNativeName="Overall Water Scale"))
	float bpv__OverallxWaterxScale__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Displacement", Category="Default", tooltip="How much the material\'s displacement value affects the surface", UIMin="-500", UIMax="500", OverrideNativeName="Displacement"))
	float bpv__Displacement__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Tesselation Factor", Category="Default", tooltip="Controls the amount of GPU tesselation applied to the water surface", OverrideNativeName="Tesselation Factor"))
	float bpv__TesselationxFactor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Overall Water Speed", Category="Default", tooltip="Overall adjustment for the wave speeds", OverrideNativeName="Overall Water Speed"))
	float bpv__OverallxWaterxSpeed__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Amplify Large Normals", Category="Default", UIMin="0", UIMax="1", ClampMin="0", ClampMax="1", tooltip="Adjust the strength of wave normals", OverrideNativeName="Amplify Large Normals"))
	float bpv__AmplifyxLargexNormals__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Amplify Small Normals", Category="Default", UIMin="0", UIMax="1", ClampMin="0", ClampMax="1", tooltip="Adjust the strength of wavelet normals", OverrideNativeName="Amplify Small Normals"))
	float bpv__AmplifyxSmallxNormals__pfTT;
	ABP_OceanWater_C__pf3032749947(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
