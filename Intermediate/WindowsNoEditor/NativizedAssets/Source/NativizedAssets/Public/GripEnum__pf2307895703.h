#pragma once
#include "GripEnum__pf2307895703.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/VirtualRealityBP/Blueprints/GripEnum.GripEnum", OverrideNativeName="GripEnum") )
enum class E__GripEnum__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(DisplayName = "Open",OverrideName = "GripEnum::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(DisplayName = "CanGrab",OverrideName = "GripEnum::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(DisplayName = "Grab",OverrideName = "GripEnum::NewEnumerator2"),
	E__GripEnum__pf_MAX = 3 UMETA(OverrideName = "GripEnum::GripEnum_MAX"),
};
inline FString E__GripEnum__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__GripEnum__pf>(InValue);
	switch(EnumValue)
	{
		case E__GripEnum__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"5242D50348FE5CA43CB8078A41B91509\", \"Open\")"), Text); break;
		case E__GripEnum__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"7B369FBC4A02635311C5C88F206B4A70\", \"CanGrab\")"), Text); break;
		case E__GripEnum__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"27F04D4449C03C8A47D321A1F08A7C11\", \"Grab\")"), Text); break;
		case E__GripEnum__pf::E__GripEnum__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Grip Enum MAX"), Text); break;
		default: ensure(false);
	};
	return Text.ToString();
};
