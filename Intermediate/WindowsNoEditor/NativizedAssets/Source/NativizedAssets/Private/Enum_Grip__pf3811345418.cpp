#include "NativizedAssets.h"
#include "Enum_Grip__pf3811345418.h"
FText E__Enum_Grip__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Enum_Grip__pf>(InValue);
	switch(EnumValue)
	{
		case E__Enum_Grip__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[83AFEAD44AEBFBA05EE6D3871C320CAE]\", \"2CE6A35E445EDC6FFEDA9A9AB8989104\", \"Open\")"), Text); break;
		case E__Enum_Grip__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[83AFEAD44AEBFBA05EE6D3871C320CAE]\", \"B83DC2BC4950CDA1A25F75B1465BB5EC\", \"CanGrab\")"), Text); break;
		case E__Enum_Grip__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[83AFEAD44AEBFBA05EE6D3871C320CAE]\", \"C2472B984866A7ED40906FBAE3E256C8\", \"Grab\")"), Text); break;
		case E__Enum_Grip__pf::E__Enum_Grip__pf_MAX: FTextStringHelper::ReadFromString(TEXT(""), Text); break;
		default: ensure(false);
	};
	return Text;
};
