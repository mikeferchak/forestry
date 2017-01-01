#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "PickupActorInterface__pf2307895703.h"
class USceneComponent;
class UPrimitiveComponent;
#include "bp_radio__pf2307895703.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/VirtualRealityBP/Blueprints/bp_radio.bp_radio_C", OverrideNativeName="bp_radio_C"))
class Abp_radio_C__pf2307895703 : public AStaticMeshActor, public IPickupActorInterface_C
{
public:
	GENERATED_BODY()
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo2"))
	USceneComponent* b0l__K2Node_Event_AttachTo2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Component2"))
	UPrimitiveComponent* b0l__K2Node_Event_Component2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_component"))
	UPrimitiveComponent* b0l__K2Node_Event_component__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo"))
	USceneComponent* b0l__K2Node_Event_AttachTo__pf;
	Abp_radio_C__pf2307895703(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_bp_radio__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_bp_radio__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_bp_radio__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_bp_radio__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Drop"))
	void bpf__Drop__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Pickup"))
	void bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="DropComponent"))
	void bpf__DropComponent__pf(UPrimitiveComponent* bpp__component__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="PickupComponent"))
	void bpf__PickupComponent__pf(USceneComponent* bpp__AttachTo__pf, UPrimitiveComponent* bpp__Component__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
