#include "NativizedAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
namespace
{
	static const FBlueprintDependencyObjectRef NativizedCodeDependenties[] =
	{
	FBlueprintDependencyObjectRef(TEXT("/Game/props/axe"), TEXT("SM_axe"), TEXT("SM_axe"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/axe"), TEXT("M_axeHead"), TEXT("M_axeHead"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/chop"), TEXT("wc_1"), TEXT("wc_1"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/chop"), TEXT("wc_2"), TEXT("wc_2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/chop"), TEXT("wc_3"), TEXT("wc_3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/chop"), TEXT("wc_4"), TEXT("wc_4"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/chop"), TEXT("wc_5"), TEXT("wc_5"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/chop"), TEXT("wc_6"), TEXT("wc_6"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/chop"), TEXT("wc_7"), TEXT("wc_7"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/chop"), TEXT("wc_8"), TEXT("wc_8"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/texture"), TEXT("wtx_1"), TEXT("wtx_1"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/texture"), TEXT("wtx_2"), TEXT("wtx_2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/texture"), TEXT("wtx_3"), TEXT("wtx_3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/texture"), TEXT("wtx_4"), TEXT("wtx_4"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/texture"), TEXT("wtx_5"), TEXT("wtx_5"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/woosh"), TEXT("swoosh_01"), TEXT("swoosh_01"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/woosh"), TEXT("swoosh_02"), TEXT("swoosh_02"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/woosh"), TEXT("swoosh_03"), TEXT("swoosh_03"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/woosh"), TEXT("swoosh_04"), TEXT("swoosh_04"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/woosh"), TEXT("swoosh_05"), TEXT("swoosh_05"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/woosh"), TEXT("swoosh_06"), TEXT("swoosh_06"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints/spawners"), TEXT("axeSpawner"), TEXT("axeSpawner_C"), TEXT("/Script/Engine"), TEXT("BlueprintGeneratedClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints/choppableItems"), TEXT("choppable"), TEXT("choppable_C"), TEXT("/Script/Engine"), TEXT("BlueprintGeneratedClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualRealityBP/Blueprints"), TEXT("BP_MotionController"), TEXT("BP_MotionController_C"), TEXT("/Script/Engine"), TEXT("BlueprintGeneratedClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/holster"), TEXT("ui_wood_confirm"), TEXT("ui_wood_confirm"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio"), TEXT("chopEffectAttenuation"), TEXT("chopEffectAttenuation"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualRealityBP/Blueprints"), TEXT("PickupActorInterface"), TEXT("PickupActorInterface_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints/spawners"), TEXT("holsterSpawner"), TEXT("holsterSpawner_C"), TEXT("/Script/Engine"), TEXT("BlueprintGeneratedClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/ProtoVRHand/Blueprints/Example"), TEXT("Enum_Grip"), TEXT("Enum_Grip"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
	};
}
const FBlueprintDependencyObjectRef& F__NativeDependencies::Get(int16 Index)
{
static const FBlueprintDependencyObjectRef& NullObjectRef = FBlueprintDependencyObjectRef();
if (Index == -1) { return NullObjectRef; }
	check((Index >= 0) && (Index < 29));
	return ::NativizedCodeDependenties[Index];
};
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
