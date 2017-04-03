#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "choppable__pf1172009058.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
class UProceduralMeshComponent;
class UStaticMeshComponent;
class UPrimitiveComponent;
class USceneComponent;
class UAudioComponent;
class USoundBase;
#include "WT_master__pf4242708525.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/walkieTalkies/WT_master.WT_master_C", OverrideNativeName="WT_master_C"))
class AWT_master_C__pf4242708525 : public Achoppable_C__pf1172009058
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="walkieTalkieAudio"))
	UAudioComponent* bpv__walkieTalkieAudio__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sound", Category="Default", OverrideNativeName="sound"))
	USoundBase* bpv__sound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Damaged", Category="Default", OverrideNativeName="damaged"))
	bool bpv__damaged__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Damaged Sound", Category="Default", OverrideNativeName="damagedSound"))
	USoundBase* bpv__damagedSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Start", Category="Default", OverrideNativeName="canStart"))
	bool bpv__canStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_component3"))
	UPrimitiveComponent* b1l__K2Node_Event_component3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo"))
	USceneComponent* b1l__K2Node_Event_AttachTo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Component2"))
	UPrimitiveComponent* b1l__K2Node_Event_Component2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_hit"))
	FHitResult b1l__K2Node_Event_hit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_axe"))
	UStaticMeshComponent* b1l__K2Node_Event_axe__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_component"))
	UProceduralMeshComponent* b1l__K2Node_Event_component__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_impulse"))
	FVector b1l__K2Node_Event_impulse__pf;
	AWT_master_C__pf4242708525(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_WT_master__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WT_master__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WT_master__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WT_master__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WT_master__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__walkieTalkieAudio_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature"))
	virtual void bpf__BndEvt__walkieTalkieAudio_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature__pf();
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="chopEvent"))
	virtual void bpf__chopEvent__pf(FHitResult bpp__hit__pf, UStaticMeshComponent* bpp__axe__pf, UProceduralMeshComponent* bpp__component__pf, FVector bpp__impulse__pf) override;
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="PickupComponent"))
	void bpf__PickupComponent__pf(USceneComponent* bpp__AttachTo__pf, UPrimitiveComponent* bpp__Component__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="DropComponent"))
	void bpf__DropComponent__pf(UPrimitiveComponent* bpp__component__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
