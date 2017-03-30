#include "NativizedAssets.h"
#include "EFloatTypes__pf4184272282.h"
FText E__EFloatTypes__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EFloatTypes__pf>(InValue);
	switch(EnumValue)
	{
		case E__EFloatTypes__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[8FD4BB1A4608CD95407A93B7D469485C]\", \"9BE19DB84844CB89737DC8BD1F22AB6B\", \"Float\")"), Text); break;
		case E__EFloatTypes__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[8FD4BB1A4608CD95407A93B7D469485C]\", \"4959A80645CBB3FCAE167F94FA2D55BC\", \"Float2\")"), Text); break;
		case E__EFloatTypes__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[8FD4BB1A4608CD95407A93B7D469485C]\", \"8692ECA845CAB94AB146528BC9F6D28C\", \"Float3\")"), Text); break;
		case E__EFloatTypes__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[8FD4BB1A4608CD95407A93B7D469485C]\", \"B4AA56C049665E817ADE32BF0ABE9C83\", \"Float4\")"), Text); break;
		case E__EFloatTypes__pf::E__EFloatTypes__pf_MAX: FTextStringHelper::ReadFromString(TEXT(""), Text); break;
		default: ensure(false);
	};
	return Text;
};
