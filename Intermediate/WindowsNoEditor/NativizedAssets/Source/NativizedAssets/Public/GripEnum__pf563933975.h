#pragma once
#include "GripEnum__pf563933975.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/VirtualRealityBP/Blueprints/GripEnum.GripEnum", OverrideNativeName="GripEnum", EnumDisplayNameFn="E__GripEnum__pf__GetUserFriendlyName") )
enum class E__GripEnum__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(DisplayName = "Open",OverrideName = "GripEnum::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(DisplayName = "CanGrab",OverrideName = "GripEnum::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(DisplayName = "Grab",OverrideName = "GripEnum::NewEnumerator2"),
	E__GripEnum__pf_MAX = 3 UMETA(OverrideName = "GripEnum::GripEnum_MAX"),
};
FText E__GripEnum__pf__GetUserFriendlyName(int32 InValue);
