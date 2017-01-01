#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class UBillboardComponent;
class UMaterialInstanceConstant;
class UMaterialInstanceDynamic;
class UParticleSystemComponent;
#include "BP_FogSheet__pf4021266378.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Environment/Blueprints/FogSheet/BP_FogSheet.BP_FogSheet_C", OverrideNativeName="BP_FogSheet_C"))
class ABP_FogSheet_C__pf4021266378 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FogSheet"))
	UBillboardComponent* bpv__FogSheet__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fog Sheet Master Material", Category="BP_FogSheet", OverrideNativeName="FogSheetMasterMaterial"))
	UMaterialInstanceConstant* bpv__FogSheetMasterMaterial__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fog Sheet MID", Category="BP_FogSheet", OverrideNativeName="FogSheetMID"))
	UMaterialInstanceDynamic* bpv__FogSheetMID__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Color", Category="BP_FogSheet", OverrideNativeName="Color"))
	FLinearColor bpv__Color__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Brightness", Category="BP_FogSheet", OverrideNativeName="Brightness"))
	float bpv__Brightness__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Particle System", Category="BP_FogSheet", OverrideNativeName="ParticleSystem"))
	UParticleSystemComponent* bpv__ParticleSystem__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Size", Category="BP_FogSheet", MakeEditWidget="true", OverrideNativeName="Size"))
	FVector bpv__Size__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Opacity", Category="BP_FogSheet", OverrideNativeName="Opacity"))
	float bpv__Opacity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Depth Fade Distance", Category="BP_FogSheet", OverrideNativeName="DepthFadeDistance"))
	float bpv__DepthFadeDistance__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Noise Projection Distance", Category="BP_FogSheet", OverrideNativeName="NoiseProjectionDistance"))
	float bpv__NoiseProjectionDistance__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Noise Size", Category="BP_FogSheet", OverrideNativeName="NoiseSize"))
	float bpv__NoiseSize__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Panning Speed", Category="BP_FogSheet", OverrideNativeName="PanningSpeed"))
	float bpv__PanningSpeed__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Fade Distance", Category="Default", OverrideNativeName="FadeDistance"))
	float bpv__FadeDistance__pf;
	ABP_FogSheet_C__pf4021266378(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
