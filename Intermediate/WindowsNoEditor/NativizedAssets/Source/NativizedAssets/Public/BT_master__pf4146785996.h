#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
class AActor;
class UPrimitiveComponent;
class UTextRenderComponent;
class UStaticMeshComponent;
class USceneComponent;
class UAudioComponent;
class UMaterialInstance;
class USoundWave;
#include "BT_master__pf4146785996.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/buttons/BT_master.BT_master_C", OverrideNativeName="BT_master_C"))
class ABT_master_C__pf4146785996 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="buttonTextRender"))
	UTextRenderComponent* bpv__buttonTextRender__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="buttonTriggerVolume"))
	UStaticMeshComponent* bpv__buttonTriggerVolume__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="buttonStaticMesh"))
	UStaticMeshComponent* bpv__buttonStaticMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Scene"))
	USceneComponent* bpv__Scene__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="buttonAudio"))
	UAudioComponent* bpv__buttonAudio__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Button Released Material", Category="Default", OverrideNativeName="buttonReleasedMaterial"))
	UMaterialInstance* bpv__buttonReleasedMaterial__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Button Pressed Material", Category="Default", OverrideNativeName="buttonPressedMaterial"))
	UMaterialInstance* bpv__buttonPressedMaterial__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Button Pressed Sound", Category="Default", OverrideNativeName="buttonPressedSound"))
	USoundWave* bpv__buttonPressedSound__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Button Released Sound", Category="Default", OverrideNativeName="buttonReleasedSound"))
	USoundWave* bpv__buttonReleasedSound__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Button Press Distance", Category="Default", OverrideNativeName="buttonPressDistance"))
	float bpv__buttonPressDistance__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Button Release Distance", Category="Default", OverrideNativeName="buttonReleaseDistance"))
	float bpv__buttonReleaseDistance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Motion_Controller"))
	AActor* b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_controller2"))
	AActor* b0l__K2Node_CustomEvent_controller2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_controller"))
	AActor* b0l__K2Node_CustomEvent_controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Motion_Controller2"))
	AActor* b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult2"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult2__pf;
	ABT_master_C__pf4146785996(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BT_master__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BT_master__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BT_master__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BT_master__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__buttonTriggerVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__buttonTriggerVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__buttonTriggerVolume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__buttonTriggerVolume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="buttonReleased"))
	virtual void bpf__buttonReleased__pf(AActor* bpp__controller__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="buttonPressed"))
	virtual void bpf__buttonPressed__pf(AActor* bpp__controller__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
