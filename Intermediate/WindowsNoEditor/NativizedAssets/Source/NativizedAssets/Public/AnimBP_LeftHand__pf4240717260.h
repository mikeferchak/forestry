#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Enum_Grip__pf2873424652.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Root.h"
#include "AnimBP_LeftHand__pf4240717260.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ProtoVRHand/Animations/AnimBP_LeftHand.AnimBP_LeftHand_C", OverrideNativeName="AnimBP_LeftHand_C"))
class UAnimBP_LeftHand_C__pf4240717260 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root_218767CF45498C4CF97EBFA976FC8C55"))
	FAnimNode_Root bpv__AnimGraphNode_Root_218767CF45498C4CF97EBFA976FC8C55__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendSpacePlayer_CDA4331D4104970B57422A81A8B386A7"))
	FAnimNode_BlendSpacePlayer bpv__AnimGraphNode_BlendSpacePlayer_CDA4331D4104970B57422A81A8B386A7__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grip", Category="Default", OverrideNativeName="Grip"))
	float bpv__Grip__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Interp Speed", Category="Default", OverrideNativeName="InterpSpeed"))
	float bpv__InterpSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grip Enum", Category="Default", OverrideNativeName="GripEnum"))
	E__Enum_Grip__pf bpv__GripEnum__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UAnimBP_LeftHand_C__pf4240717260(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_AnimBP_LeftHand__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AnimBP_LeftHand__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_LeftHand_AnimGraphNode_BlendSpacePlayer_CDA4331D4104970B57422A81A8B386A7"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_LeftHand_AnimGraphNode_BlendSpacePlayer_CDA4331D4104970B57422A81A8B386A7__pf();
	UFUNCTION(meta=(ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
public:
};
