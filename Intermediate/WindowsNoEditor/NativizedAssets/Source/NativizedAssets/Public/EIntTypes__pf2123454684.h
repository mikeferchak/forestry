#pragma once
#include "EIntTypes__pf2123454684.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Engine/ArtTools/RenderToTexture/Enums/EIntTypes.EIntTypes", OverrideNativeName="EIntTypes") )
enum class E__EIntTypes__pf  : uint8
{
	NewEnumerator4 = 0 UMETA(DisplayName = "int",OverrideName = "EIntTypes::NewEnumerator4"),
	NewEnumerator5 = 1 UMETA(DisplayName = "int2",OverrideName = "EIntTypes::NewEnumerator5"),
	NewEnumerator6 = 2 UMETA(DisplayName = "int3",OverrideName = "EIntTypes::NewEnumerator6"),
	NewEnumerator7 = 3 UMETA(DisplayName = "int4",OverrideName = "EIntTypes::NewEnumerator7"),
	E__EIntTypes__pf_MAX = 4 UMETA(OverrideName = "EIntTypes::EIntTypes_MAX"),
};
inline FString E__EIntTypes__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EIntTypes__pf>(InValue);
	switch(EnumValue)
	{
		case E__EIntTypes__pf::NewEnumerator4: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"0D2ED77346EDE2BB3341D389222FCAE9\", \"int\")"), Text); break;
		case E__EIntTypes__pf::NewEnumerator5: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"18457B574AC25BE0D686608C2A3BB30A\", \"int2\")"), Text); break;
		case E__EIntTypes__pf::NewEnumerator6: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"F5FEED52451DC4249C146F86471772B0\", \"int3\")"), Text); break;
		case E__EIntTypes__pf::NewEnumerator7: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"0CBE02D34D2BAFB86D5AD8BD73E8AAC3\", \"int4\")"), Text); break;
		case E__EIntTypes__pf::E__EIntTypes__pf_MAX: FTextStringHelper::ReadFromString(TEXT("EInt Types MAX"), Text); break;
		default: ensure(false);
	};
	return Text.ToString();
};
