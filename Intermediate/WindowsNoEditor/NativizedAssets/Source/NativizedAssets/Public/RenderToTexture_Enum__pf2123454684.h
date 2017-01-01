#pragma once
#include "RenderToTexture_Enum__pf2123454684.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Engine/ArtTools/RenderToTexture/Enums/RenderToTexture_Enum.RenderToTexture_Enum", OverrideNativeName="RenderToTexture_Enum") )
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
inline FString E__RenderToTexture_Enum__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__RenderToTexture_Enum__pf>(InValue);
	switch(EnumValue)
	{
		case E__RenderToTexture_Enum__pf::NewEnumerator10: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"1D8834EB4613547E629D4291ECDF639F\", \"Material\")"), Text); break;
		case E__RenderToTexture_Enum__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"DED46A5848B0488FBCCC4E9F8FBEE43D\", \"3D Imposter Sprites\")"), Text); break;
		case E__RenderToTexture_Enum__pf::NewEnumerator5: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"38C84BF24A97DDE0A8BB5C875E46CD1E\", \"Unwrapped Mesh\")"), Text); break;
		case E__RenderToTexture_Enum__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"D2A2126243DD2E4AF409FF8B4A9CF88C\", \"Depth Map\")"), Text); break;
		case E__RenderToTexture_Enum__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"596FB11144E20682A90427BB2F5D1E85\", \"Lightmaps\")"), Text); break;
		case E__RenderToTexture_Enum__pf::NewEnumerator4: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"17A008714CBA9D40116E3D813EC0299F\", \"Lightmaps 2-sided\")"), Text); break;
		case E__RenderToTexture_Enum__pf::NewEnumerator6: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"E2C214F04AD4D2EE6B1AF6ACC50D9CE6\", \"Flipbook Mesh Animation\")"), Text); break;
		case E__RenderToTexture_Enum__pf::NewEnumerator8: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"3DDBB86945DDCC9AF190C4AF35C02729\", \"Physics Ground - Tiling Physics Drop of Meshes\")"), Text); break;
		case E__RenderToTexture_Enum__pf::NewEnumerator9: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"\", \"4AF3B77F467C8958ADF8C9BEFA7736D5\", \"Tiling Material from Hand Placed Meshes\")"), Text); break;
		case E__RenderToTexture_Enum__pf::E__RenderToTexture_Enum__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Render to Texture MAX"), Text); break;
		default: ensure(false);
	};
	return Text.ToString();
};
