#include "NativizedAssets.h"
#include "RenderToTexture_Imposter_Enum__pf4184272282.h"
FText E__RenderToTexture_Imposter_Enum__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__RenderToTexture_Imposter_Enum__pf>(InValue);
	switch(EnumValue)
	{
		case E__RenderToTexture_Imposter_Enum__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[936FD34849349EF851EB0BB6BFA7E249]\", \"B36DABC94CC3A54012C30795D00DFA0A\", \"Full 3D Imposter\")"), Text); break;
		case E__RenderToTexture_Imposter_Enum__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[936FD34849349EF851EB0BB6BFA7E249]\", \"FE1A81CB403487D5E8D421A7DA164D6B\", \"Single Rotation Axis\")"), Text); break;
		case E__RenderToTexture_Imposter_Enum__pf::E__RenderToTexture_Imposter_Enum__pf_MAX: FTextStringHelper::ReadFromString(TEXT(""), Text); break;
		default: ensure(false);
	};
	return Text;
};
