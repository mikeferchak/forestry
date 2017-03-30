#pragma once
#include "RenderToTexture_Enum__pf4184272282.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Engine/ArtTools/RenderToTexture/Enums/RenderToTexture_Enum.RenderToTexture_Enum", OverrideNativeName="RenderToTexture_Enum", EnumDisplayNameFn="E__RenderToTexture_Enum__pf__GetUserFriendlyName") )
enum class E__RenderToTexture_Enum__pf  : uint8
{
	NewEnumerator10 = 0 UMETA(DisplayName = "Material",OverrideName = "RenderToTexture_Enum::NewEnumerator10"),
	NewEnumerator0 = 1 UMETA(DisplayName = "3D Imposter Sprites",OverrideName = "RenderToTexture_Enum::NewEnumerator0"),
	NewEnumerator5 = 2 UMETA(DisplayName = "Unwrapped Mesh",OverrideName = "RenderToTexture_Enum::NewEnumerator5"),
	NewEnumerator2 = 3 UMETA(DisplayName = "Depth Map",OverrideName = "RenderToTexture_Enum::NewEnumerator2"),
	NewEnumerator3 = 4 UMETA(DisplayName = "Lightmaps",OverrideName = "RenderToTexture_Enum::NewEnumerator3"),
	NewEnumerator4 = 5 UMETA(DisplayName = "Lightmaps 2-sided",OverrideName = "RenderToTexture_Enum::NewEnumerator4"),
	NewEnumerator6 = 6 UMETA(DisplayName = "Flipbook Mesh Animation",OverrideName = "RenderToTexture_Enum::NewEnumerator6"),
	NewEnumerator8 = 7 UMETA(DisplayName = "Physics Ground - Tiling Physics Drop of Meshes",OverrideName = "RenderToTexture_Enum::NewEnumerator8"),
	NewEnumerator9 = 8 UMETA(DisplayName = "Tiling Material from Hand Placed Meshes",OverrideName = "RenderToTexture_Enum::NewEnumerator9"),
	E__RenderToTexture_Enum__pf_MAX = 9 UMETA(OverrideName = "RenderToTexture_Enum::RenderToTexture_MAX"),
};
FText E__RenderToTexture_Enum__pf__GetUserFriendlyName(int32 InValue);
