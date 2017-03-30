#pragma once
#include "graphicsPresets__pf2672032748.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/pawn/graphicsPresets.graphicsPresets", OverrideNativeName="graphicsPresets", EnumDisplayNameFn="E__graphicsPresets__pf__GetUserFriendlyName") )
enum class E__graphicsPresets__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "graphicsPresets::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "graphicsPresets::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "graphicsPresets::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "graphicsPresets::NewEnumerator3"),
	E__graphicsPresets__pf_MAX = 4 UMETA(OverrideName = "graphicsPresets::graphicsPresets_MAX"),
};
FText E__graphicsPresets__pf__GetUserFriendlyName(int32 InValue);
