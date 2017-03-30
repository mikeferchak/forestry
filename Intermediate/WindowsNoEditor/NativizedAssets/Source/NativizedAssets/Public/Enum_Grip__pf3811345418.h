#pragma once
#include "Enum_Grip__pf3811345418.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/ProtoVRHand/Blueprints/Example/Enum_Grip.Enum_Grip", OverrideNativeName="Enum_Grip", EnumDisplayNameFn="E__Enum_Grip__pf__GetUserFriendlyName") )
enum class E__Enum_Grip__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(DisplayName = "Open",OverrideName = "Enum_Grip::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(DisplayName = "CanGrab",OverrideName = "Enum_Grip::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(DisplayName = "Grab",OverrideName = "Enum_Grip::NewEnumerator2"),
	E__Enum_Grip__pf_MAX = 3 UMETA(OverrideName = "Enum_Grip::Enum_MAX"),
};
FText E__Enum_Grip__pf__GetUserFriendlyName(int32 InValue);
