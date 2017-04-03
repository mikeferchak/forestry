#include "NativizedAssets.h"
#include "Enum_Grip__pf3811345418.h"
FText E__Enum_Grip__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Enum_Grip__pf>(InValue);
	switch(EnumValue)
	{
		case E__Enum_Grip__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[D934AEB24DCBDD511927BF9642E4EA00]\", \"1365EB8D4592168DE9298AAD6797A3E6\", \"Open\")"), Text); break;
		case E__Enum_Grip__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[D934AEB24DCBDD511927BF9642E4EA00]\", \"6ED26BD5488CB532131705AB7BF0A11D\", \"CanGrab\")"), Text); break;
		case E__Enum_Grip__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[D934AEB24DCBDD511927BF9642E4EA00]\", \"0E2CBD0C4C59A5536DFA2781144BFEDD\", \"Grab\")"), Text); break;
		case E__Enum_Grip__pf::E__Enum_Grip__pf_MAX: FTextStringHelper::ReadFromString(TEXT(""), Text); break;
		default: ensure(false);
	};
	return Text;
};
