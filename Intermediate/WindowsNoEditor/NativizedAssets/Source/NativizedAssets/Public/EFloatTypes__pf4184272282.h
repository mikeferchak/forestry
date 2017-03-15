#pragma once
#include "EFloatTypes__pf4184272282.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Engine/ArtTools/RenderToTexture/Enums/EFloatTypes.EFloatTypes", OverrideNativeName="EFloatTypes", EnumDisplayNameFn="E__EFloatTypes__pf__GetUserFriendlyName") )
enum class E__EFloatTypes__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(DisplayName = "Float",OverrideName = "EFloatTypes::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(DisplayName = "Float2",OverrideName = "EFloatTypes::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(DisplayName = "Float3",OverrideName = "EFloatTypes::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(DisplayName = "Float4",OverrideName = "EFloatTypes::NewEnumerator3"),
	E__EFloatTypes__pf_MAX = 4 UMETA(OverrideName = "EFloatTypes::EFloatTypes_MAX"),
};
FText E__EFloatTypes__pf__GetUserFriendlyName(int32 InValue);
