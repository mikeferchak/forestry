#pragma once
#include "EIntTypes__pf4184272282.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Engine/ArtTools/RenderToTexture/Enums/EIntTypes.EIntTypes", OverrideNativeName="EIntTypes", EnumDisplayNameFn="E__EIntTypes__pf__GetUserFriendlyName") )
enum class E__EIntTypes__pf  : uint8
{
	NewEnumerator4 = 0 UMETA(DisplayName = "int",OverrideName = "EIntTypes::NewEnumerator4"),
	NewEnumerator5 = 1 UMETA(DisplayName = "int2",OverrideName = "EIntTypes::NewEnumerator5"),
	NewEnumerator6 = 2 UMETA(DisplayName = "int3",OverrideName = "EIntTypes::NewEnumerator6"),
	NewEnumerator7 = 3 UMETA(DisplayName = "int4",OverrideName = "EIntTypes::NewEnumerator7"),
	E__EIntTypes__pf_MAX = 4 UMETA(OverrideName = "EIntTypes::EIntTypes_MAX"),
};
FText E__EIntTypes__pf__GetUserFriendlyName(int32 InValue);
