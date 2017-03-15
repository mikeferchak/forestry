#include "NativizedAssets.h"
#include "Enum_Grip__pf3811345418.h"
FText E__Enum_Grip__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Enum_Grip__pf>(InValue);
	switch(EnumValue)
	{
		case E__Enum_Grip__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[20772A0F412FEA0948DCB199AAD3C9DA]\", \"49B58FED4B22520DB771AB9B3C21F055\", \"Open\")"), Text); break;
		case E__Enum_Grip__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[20772A0F412FEA0948DCB199AAD3C9DA]\", \"CEBC61FC43CF241BDE0DE190EF79390D\", \"CanGrab\")"), Text); break;
		case E__Enum_Grip__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[20772A0F412FEA0948DCB199AAD3C9DA]\", \"375FD3C345007996ADC991B33BCCF3CA\", \"Grab\")"), Text); break;
		case E__Enum_Grip__pf::E__Enum_Grip__pf_MAX: FTextStringHelper::ReadFromString(TEXT(""), Text); break;
		default: ensure(false);
	};
	return Text;
};
