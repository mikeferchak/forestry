#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
class AActor;
class UPrimitiveComponent;
class UStaticMeshComponent;
class UArrowComponent;
class USceneComponent;
class Aaxe_C__pf2403237688;
#include "holster__pf2403237688.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/holster.holster_C", OverrideNativeName="holster_C"))
class Aholster_C__pf2403237688 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="rightShoulder"))
	UStaticMeshComponent* bpv__rightShoulder__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="leftShoulder"))
	UStaticMeshComponent* bpv__leftShoulder__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="leftPlaceholder"))
	UStaticMeshComponent* bpv__leftPlaceholder__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="rightPlaceholder"))
	UStaticMeshComponent* bpv__rightPlaceholder__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arrow"))
	UArrowComponent* bpv__Arrow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Left Axe", Category="Default", OverrideNativeName="left_axe"))
	Aaxe_C__pf2403237688* bpv__left_axe__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Right Axe", Category="Default", OverrideNativeName="rightAxe"))
	Aaxe_C__pf2403237688* bpv__rightAxe__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Wait", Category="Default", OverrideNativeName="wait"))
	bool bpv__wait__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent8"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor8"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp8"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex8"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep4"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult4"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent7"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor7"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp7"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex7"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent6"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor6"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp6"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex6"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep3"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult3"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_spawnandattach_ReturnValue"))
	Aaxe_C__pf2403237688* b0l__CallFunc_spawnandattach_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_spawnandattach_ReturnValue2"))
	Aaxe_C__pf2403237688* b0l__CallFunc_spawnandattach_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent5"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor5"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp5"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex5"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent4"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor4"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp4"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex4"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep2"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult2"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent3"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor3"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp3"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex3"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor2"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex2"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_spawnandattach_ReturnValue3"))
	Aaxe_C__pf2403237688* b0l__CallFunc_spawnandattach_ReturnValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_spawnandattach_ReturnValue4"))
	Aaxe_C__pf2403237688* b0l__CallFunc_spawnandattach_ReturnValue4__pf;
	Aholster_C__pf2403237688(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_holster__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_holster__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_holster__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_holster__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_holster__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_holster__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_holster__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_holster__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__rightShoulder_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__rightShoulder_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__rightShoulder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__rightShoulder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__leftShoulder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__leftShoulder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__leftShoulder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__leftShoulder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__leftPlaceholder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__leftPlaceholder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__leftPlaceholder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__leftPlaceholder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_14_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_14_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_13_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_13_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="spawnandattach"))
	virtual Aaxe_C__pf2403237688*  bpf__spawnandattach__pf(USceneComponent* bpp__Target__pf, AActor* bpp__overlappingActor__pf);
public:
};
