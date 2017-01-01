#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/GameMode.h"
class USceneComponent;
#include "RenderToTexture_Game__pf559396743.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Engine/ArtTools/RenderToTexture/Blueprints/RenderToTexture_Game.RenderToTexture_Game_C", OverrideNativeName="RenderToTexture_Game_C"))
class ARenderToTexture_Game_C__pf559396743 : public AGameMode
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	ARenderToTexture_Game_C__pf559396743(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
