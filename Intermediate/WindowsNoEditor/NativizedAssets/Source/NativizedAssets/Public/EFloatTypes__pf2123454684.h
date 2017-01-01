#pragma once
#include "EFloatTypes__pf2123454684.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Engine/ArtTools/RenderToTexture/Enums/EFloatTypes.EFloatTypes", OverrideNativeName="EFloatTypes") )
enum class E__EFloatTypes__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(DisplayName = "Float",OverrideName = "EFloatTypes::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(DisplayName = "Float2",OverrideName = "EFloatTypes::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(DisplayName = "Float3",OverrideName = "EFloatTypes::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(DisplayName = "Float4",OverrideName = "EFloatTypes::NewEnumerator3"),
	E__EFloatTypes__pf_MAX = 4 UMETA(OverrideName = "EFloatTypes::EFloatTypes_MAX"),
};
inline FString E__EFloatTypes__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EFloatTypes__pf>(InValue);
	switch(EnumValue)
	{
		case E__EFloatTypes__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"4563070E4C630404A5A64689C09AA2E1\", \"Float\")"), Text); break;
		case E__EFloatTypes__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"CA519EE041E1BBE4CDD60381A37B2438\", \"Float2\")"), Text); break;
		case E__EFloatTypes__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"F2037C0849290D72865551BFDF3316ED\", \"Float3\")"), Text); break;
		case E__EFloatTypes__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"17768EEE4BB260286E796F8152D3E04A\", \"Float4\")"), Text); break;
		case E__EFloatTypes__pf::E__EFloatTypes__pf_MAX: FTextStringHelper::ReadFromString(TEXT("EFloat Types MAX"), Text); break;
		default: ensure(false);
	};
	return Text.ToString();
};
