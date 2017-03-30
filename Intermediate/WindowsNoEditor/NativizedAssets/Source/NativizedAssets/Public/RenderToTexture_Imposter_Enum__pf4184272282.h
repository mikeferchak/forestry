#pragma once
#include "RenderToTexture_Imposter_Enum__pf4184272282.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Engine/ArtTools/RenderToTexture/Enums/RenderToTexture_Imposter_Enum.RenderToTexture_Imposter_Enum", OverrideNativeName="RenderToTexture_Imposter_Enum", EnumDisplayNameFn="E__RenderToTexture_Imposter_Enum__pf__GetUserFriendlyName") )
enum class E__RenderToTexture_Imposter_Enum__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(DisplayName = "Full 3D Imposter",OverrideName = "RenderToTexture_Imposter_Enum::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(DisplayName = "Single Rotation Axis",OverrideName = "RenderToTexture_Imposter_Enum::NewEnumerator1"),
	E__RenderToTexture_Imposter_Enum__pf_MAX = 2 UMETA(OverrideName = "RenderToTexture_Imposter_Enum::RenderToTexture_Imposter_MAX"),
};
FText E__RenderToTexture_Imposter_Enum__pf__GetUserFriendlyName(int32 InValue);
