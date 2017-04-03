#include "NativizedAssets.h"
#include "GripEnum__pf563933975.h"
FText E__GripEnum__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__GripEnum__pf>(InValue);
	switch(EnumValue)
	{
		case E__GripEnum__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[3D6BF0444CB698780C8902823EDEF48D]\", \"51F80C854E8294E760122C8941E7C50D\", \"Open\")"), Text); break;
		case E__GripEnum__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[3D6BF0444CB698780C8902823EDEF48D]\", \"AFF9A10B443D8AC7C6B36380F70D0775\", \"CanGrab\")"), Text); break;
		case E__GripEnum__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[3D6BF0444CB698780C8902823EDEF48D]\", \"C9DC01B44E110600CA4FB18E31B8ABBA\", \"Grab\")"), Text); break;
		case E__GripEnum__pf::E__GripEnum__pf_MAX: FTextStringHelper::ReadFromString(TEXT(""), Text); break;
		default: ensure(false);
	};
	return Text;
};
