#include "NativizedAssets.h"
#include "Enum_Grip__pf3811345418.h"
FText E__Enum_Grip__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Enum_Grip__pf>(InValue);
	switch(EnumValue)
	{
		case E__Enum_Grip__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[7AEECD68442EB8595EA97DAB8C44901B]\", \"10D72B2A486BEB418C7B30ACA39B9F29\", \"Open\")"), Text); break;
		case E__Enum_Grip__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[7AEECD68442EB8595EA97DAB8C44901B]\", \"7FB557594D7DB342AB0A65B2AF3BD91B\", \"CanGrab\")"), Text); break;
		case E__Enum_Grip__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[7AEECD68442EB8595EA97DAB8C44901B]\", \"094725664CC460FF69221181A3663AC0\", \"Grab\")"), Text); break;
		case E__Enum_Grip__pf::E__Enum_Grip__pf_MAX: FTextStringHelper::ReadFromString(TEXT(""), Text); break;
		default: ensure(false);
	};
	return Text;
};
