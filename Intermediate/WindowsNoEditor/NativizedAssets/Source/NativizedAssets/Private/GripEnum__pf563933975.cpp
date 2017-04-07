#include "NativizedAssets.h"
#include "GripEnum__pf563933975.h"
FText E__GripEnum__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__GripEnum__pf>(InValue);
	switch(EnumValue)
	{
		case E__GripEnum__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[6C202131425AA5793AACC3963A9E1B99]\", \"319753804FC0C88221E9A49A43281955\", \"Open\")"), Text); break;
		case E__GripEnum__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[6C202131425AA5793AACC3963A9E1B99]\", \"A3142B944D4FE728BC9C4C9A12731176\", \"CanGrab\")"), Text); break;
		case E__GripEnum__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[6C202131425AA5793AACC3963A9E1B99]\", \"F8D83739428D637DD27E19B697323AA7\", \"Grab\")"), Text); break;
		case E__GripEnum__pf::E__GripEnum__pf_MAX: FTextStringHelper::ReadFromString(TEXT(""), Text); break;
		default: ensure(false);
	};
	return Text;
};
