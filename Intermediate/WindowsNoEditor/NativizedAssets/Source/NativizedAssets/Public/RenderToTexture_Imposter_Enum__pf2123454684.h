#pragma once
#include "RenderToTexture_Imposter_Enum__pf2123454684.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Engine/ArtTools/RenderToTexture/Enums/RenderToTexture_Imposter_Enum.RenderToTexture_Imposter_Enum", OverrideNativeName="RenderToTexture_Imposter_Enum") )
enum class E__RenderToTexture_Imposter_Enum__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(DisplayName = "Full 3D Imposter",OverrideName = "RenderToTexture_Imposter_Enum::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(DisplayName = "Single Rotation Axis",OverrideName = "RenderToTexture_Imposter_Enum::NewEnumerator1"),
	E__RenderToTexture_Imposter_Enum__pf_MAX = 2 UMETA(OverrideName = "RenderToTexture_Imposter_Enum::RenderToTexture_Imposter_MAX"),
};
inline FString E__RenderToTexture_Imposter_Enum__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__RenderToTexture_Imposter_Enum__pf>(InValue);
	switch(EnumValue)
	{
		case E__RenderToTexture_Imposter_Enum__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"36831868441DEA4602B7679C39EB654B\", \"Full 3D Imposter\")"), Text); break;
		case E__RenderToTexture_Imposter_Enum__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"123D501C42399E98474FCBA173077395\", \"Single Rotation Axis\")"), Text); break;
		case E__RenderToTexture_Imposter_Enum__pf::E__RenderToTexture_Imposter_Enum__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Render to Texture Imposter MAX"), Text); break;
		default: ensure(false);
	};
	return Text.ToString();
};
