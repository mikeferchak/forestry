#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class UCameraComponent;
class UStaticMeshComponent;
class AStaticMeshActor;
class UMaterialInstanceDynamic;
class ARenderToTexture_LevelBP_C__pf559396743;
class UTexture;
#include "RenderToTexture_Pawn__pf559396743.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Engine/ArtTools/RenderToTexture/Blueprints/RenderToTexture_Pawn.RenderToTexture_Pawn_C", OverrideNativeName="RenderToTexture_Pawn_C"))
class ARenderToTexture_Pawn_C__pf559396743 : public APawn
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pawncam"))
	UCameraComponent* bpv__Pawncam__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Root"))
	UStaticMeshComponent* bpv__Root__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Base Color", Category="Capture", OverrideNativeName="BaseColor"))
	bool bpv__BaseColor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Specular", Category="Capture", OverrideNativeName="Specular"))
	bool bpv__Specular__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Normal", Category="Capture", OverrideNativeName="Normal"))
	bool bpv__Normal__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Opacity", Category="Capture", OverrideNativeName="Opacity"))
	bool bpv__Opacity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Roughness", Category="Capture", OverrideNativeName="Roughness"))
	bool bpv__Roughness__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Ambient Occlusion", Category="Capture", OverrideNativeName="AmbientOcclusion"))
	bool bpv__AmbientOcclusion__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Material Ambient Occlusion", Category="Capture", OverrideNativeName="MaterialAmbientOcclusion"))
	bool bpv__MaterialAmbientOcclusion__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Resolution Multiplier", Category="Capture", OverrideNativeName="ResolutionMultiplier"))
	int32 bpv__ResolutionMultiplier__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Buffer Commands", Category="Default", OverrideNativeName="BufferCommands"))
	FString bpv__BufferCommands__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Shot Command", Category="Default", OverrideNativeName="ShotCommand"))
	FString bpv__ShotCommand__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Backface SSS Meshes", Category="Default", OverrideNativeName="Backface SSS Meshes"))
	TArray<AStaticMeshActor*> bpv__BackfacexSSSxMeshes__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="MIDArray", Category="Default", OverrideNativeName="MIDArray"))
	TArray<UMaterialInstanceDynamic*> bpv__MIDArray__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Generator", Category="Default", OverrideNativeName="Generator"))
	ARenderToTexture_LevelBP_C__pf559396743* bpv__Generator__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable2"))
	int32 b0l__Temp_int_Loop_Counter_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable3"))
	int32 b0l__Temp_int_Loop_Counter_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable4"))
	int32 b0l__Temp_int_Loop_Counter_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable2"))
	int32 b0l__Temp_int_Array_Index_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable3"))
	int32 b0l__Temp_int_Array_Index_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable5"))
	int32 b0l__Temp_int_Loop_Counter_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable4"))
	int32 b0l__Temp_int_Array_Index_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable5"))
	int32 b0l__Temp_int_Array_Index_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable6"))
	int32 b0l__Temp_int_Array_Index_Variable6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable6"))
	int32 b0l__Temp_int_Loop_Counter_Variable6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable7"))
	int32 b0l__Temp_int_Array_Index_Variable7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	UTexture* b0l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable2"))
	int32 b0l__Temp_int_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ARenderToTexture_LevelBP_C__pf559396743*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ARenderToTexture_LevelBP_C__pf559396743* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable7"))
	int32 b0l__Temp_int_Loop_Counter_Variable7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	UMaterialInstanceDynamic* b0l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item3"))
	UMaterialInstanceDynamic* b0l__CallFunc_Array_Get_Item3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item4"))
	UMaterialInstanceDynamic* b0l__CallFunc_Array_Get_Item4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item5"))
	UStaticMeshComponent* b0l__CallFunc_Array_Get_Item5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors2"))
	TArray<AStaticMeshActor*> b0l__CallFunc_GetAllActorsOfClass_OutActors2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item6"))
	AStaticMeshActor* b0l__CallFunc_Array_Get_Item6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable8"))
	int32 b0l__Temp_int_Loop_Counter_Variable8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item7"))
	UStaticMeshComponent* b0l__CallFunc_Array_Get_Item7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable8"))
	int32 b0l__Temp_int_Array_Index_Variable8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item8"))
	UMaterialInstanceDynamic* b0l__CallFunc_Array_Get_Item8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item9"))
	FLinearColor b0l__CallFunc_Array_Get_Item9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item10"))
	UStaticMeshComponent* b0l__CallFunc_Array_Get_Item10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item11"))
	UStaticMeshComponent* b0l__CallFunc_Array_Get_Item11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item12"))
	UTexture* b0l__CallFunc_Array_Get_Item12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	UTexture* b0l__K2Node_Select_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateDynamicMaterialInstance_ReturnValue3"))
	UMaterialInstanceDynamic* b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item13"))
	UMaterialInstanceDynamic* b0l__CallFunc_Array_Get_Item13__pf;
	ARenderToTexture_Pawn_C__pf559396743(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_RenderToTexture_Pawn_0"))
	void bpf__ExecuteUbergraph_RenderToTexture_Pawn__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_RenderToTexture_Pawn_1"))
	void bpf__ExecuteUbergraph_RenderToTexture_Pawn__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_RenderToTexture_Pawn_2"))
	void bpf__ExecuteUbergraph_RenderToTexture_Pawn__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="debugdepth"))
	virtual void bpf__debugdepth__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="rendertextures"))
	virtual void bpf__rendertextures__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="renderdepth"))
	virtual void bpf__renderdepth__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="renderlightmaps"))
	virtual void bpf__renderlightmaps__pf();
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="renderimposter"))
	virtual void bpf__renderimposter__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
