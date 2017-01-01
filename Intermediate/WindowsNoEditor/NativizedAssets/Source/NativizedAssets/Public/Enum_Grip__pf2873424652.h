#pragma once
#include "Enum_Grip__pf2873424652.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/ProtoVRHand/Blueprints/Example/Enum_Grip.Enum_Grip", OverrideNativeName="Enum_Grip") )
enum class E__Enum_Grip__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(DisplayName = "Open",OverrideName = "Enum_Grip::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(DisplayName = "CanGrab",OverrideName = "Enum_Grip::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(DisplayName = "Grab",OverrideName = "Enum_Grip::NewEnumerator2"),
	E__Enum_Grip__pf_MAX = 3 UMETA(OverrideName = "Enum_Grip::Enum_MAX"),
};
inline FString E__Enum_Grip__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Enum_Grip__pf>(InValue);
	switch(EnumValue)
	{
		case E__Enum_Grip__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"E140ED484F735182957B7ABA3B7C5084\", \"Open\")"), Text); break;
		case E__Enum_Grip__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"B8C8DE8341424ACFAB7FBE81092E04C8\", \"CanGrab\")"), Text); break;
		case E__Enum_Grip__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"FCBD99DC437BA2F28C9D3F88CF348E47\", \"Grab\")"), Text); break;
		case E__Enum_Grip__pf::E__Enum_Grip__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Enum MAX"), Text); break;
		default: ensure(false);
	};
	return Text.ToString();
};
