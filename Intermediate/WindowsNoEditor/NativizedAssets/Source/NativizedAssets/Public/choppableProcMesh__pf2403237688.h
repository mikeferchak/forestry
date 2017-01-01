#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "PickupActorInterface__pf2307895703.h"
class UPrimitiveComponent;
class USceneComponent;
class UProceduralMeshComponent;
#include "choppableProcMesh__pf2403237688.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/choppableProcMesh.choppableProcMesh_C", OverrideNativeName="choppableProcMesh_C"))
class AchoppableProcMesh_C__pf2403237688 : public AActor, public IPickupActorInterface_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Canhit", Category="Default", OverrideNativeName="canhit"))
	bool bpv__canhit__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Gravity", Category="Default", OverrideNativeName="gravity"))
	bool bpv__gravity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Physics", Category="Default", OverrideNativeName="physics"))
	bool bpv__physics__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Create Collision", Category="Default", OverrideNativeName="createCollision"))
	bool bpv__createCollision__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo2"))
	USceneComponent* b0l__K2Node_Event_AttachTo2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_procmesh"))
	UProceduralMeshComponent* b0l__K2Node_CustomEvent_procmesh__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_component2"))
	UPrimitiveComponent* b0l__K2Node_Event_component2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo"))
	USceneComponent* b0l__K2Node_Event_AttachTo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Component"))
	UPrimitiveComponent* b0l__K2Node_Event_Component__pf;
	AchoppableProcMesh_C__pf2403237688(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_choppableProcMesh__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_choppableProcMesh__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_choppableProcMesh__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_choppableProcMesh__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_choppableProcMesh__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_choppableProcMesh__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="PickupComponent"))
	void bpf__PickupComponent__pf(USceneComponent* bpp__AttachTo__pf, UPrimitiveComponent* bpp__Component__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="DropComponent"))
	void bpf__DropComponent__pf(UPrimitiveComponent* bpp__component__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="attach"))
	virtual void bpf__attach__pf(UProceduralMeshComponent* bpp__procmesh__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Drop"))
	void bpf__Drop__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Pickup"))
	void bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="init"))
	virtual void bpf__init__pf();
public:
};
