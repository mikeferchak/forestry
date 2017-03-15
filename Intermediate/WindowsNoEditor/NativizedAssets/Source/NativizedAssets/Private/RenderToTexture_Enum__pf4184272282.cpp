#include "NativizedAssets.h"
#include "RenderToTexture_Enum__pf4184272282.h"
FText E__RenderToTexture_Enum__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__RenderToTexture_Enum__pf>(InValue);
	switch(EnumValue)
	{
		case E__RenderToTexture_Enum__pf::NewEnumerator10: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[9FCBA53449E7E5B7221CC38471C3FC3A]\", \"A1AADEE2403BB249292D9690FD14A40E\", \"Material\")"), Text); break;
		case E__RenderToTexture_Enum__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[9FCBA53449E7E5B7221CC38471C3FC3A]\", \"7126FEDF42DBCB91FA8535B1531894E9\", \"3D Imposter Sprites\")"), Text); break;
		case E__RenderToTexture_Enum__pf::NewEnumerator5: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[9FCBA53449E7E5B7221CC38471C3FC3A]\", \"02E62D034F381DAF61EC7BABB172B784\", \"Unwrapped Mesh\")"), Text); break;
		case E__RenderToTexture_Enum__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[9FCBA53449E7E5B7221CC38471C3FC3A]\", \"E0E433E74779358D0588EFAF4CA95E4B\", \"Depth Map\")"), Text); break;
		case E__RenderToTexture_Enum__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[9FCBA53449E7E5B7221CC38471C3FC3A]\", \"0C43EBBC47943D3DE6852B9CE2277068\", \"Lightmaps\")"), Text); break;
		case E__RenderToTexture_Enum__pf::NewEnumerator4: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[9FCBA53449E7E5B7221CC38471C3FC3A]\", \"C984BBE846CD9680BAEB85BD22DD61AA\", \"Lightmaps 2-sided\")"), Text); break;
		case E__RenderToTexture_Enum__pf::NewEnumerator6: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[9FCBA53449E7E5B7221CC38471C3FC3A]\", \"F784B96A4710148A9BA17B96DDF6E6FB\", \"Flipbook Mesh Animation\")"), Text); break;
		case E__RenderToTexture_Enum__pf::NewEnumerator8: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[9FCBA53449E7E5B7221CC38471C3FC3A]\", \"95E8C6404CB61F3B9EA309A13D215B92\", \"Physics Ground - Tiling Physics Drop of Meshes\")"), Text); break;
		case E__RenderToTexture_Enum__pf::NewEnumerator9: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[9FCBA53449E7E5B7221CC38471C3FC3A]\", \"4CE0A31B41543A4EFC38F88D48CD7E9B\", \"Tiling Material from Hand Placed Meshes\")"), Text); break;
		case E__RenderToTexture_Enum__pf::E__RenderToTexture_Enum__pf_MAX: FTextStringHelper::ReadFromString(TEXT(""), Text); break;
		default: ensure(false);
	};
	return Text;
};
