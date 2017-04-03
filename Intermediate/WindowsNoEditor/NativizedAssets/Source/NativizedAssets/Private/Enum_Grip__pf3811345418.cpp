#include "NativizedAssets.h"
#include "Enum_Grip__pf3811345418.h"
FText E__Enum_Grip__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Enum_Grip__pf>(InValue);
	switch(EnumValue)
	{
		case E__Enum_Grip__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[B9D24EB144BBC168E2A7B499E1BD8868]\", \"7F9B70D141B78479732FBAAF16846A94\", \"Open\")"), Text); break;
		case E__Enum_Grip__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[B9D24EB144BBC168E2A7B499E1BD8868]\", \"6D2B55E34972FE145585A8B2382227CA\", \"CanGrab\")"), Text); break;
		case E__Enum_Grip__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[B9D24EB144BBC168E2A7B499E1BD8868]\", \"9BC942FB463B4E2AE27E728105BDF34C\", \"Grab\")"), Text); break;
		case E__Enum_Grip__pf::E__Enum_Grip__pf_MAX: FTextStringHelper::ReadFromString(TEXT(""), Text); break;
		default: ensure(false);
	};
	return Text;
};
