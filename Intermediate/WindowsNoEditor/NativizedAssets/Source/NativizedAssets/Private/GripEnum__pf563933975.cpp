#include "NativizedAssets.h"
#include "GripEnum__pf563933975.h"
FText E__GripEnum__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__GripEnum__pf>(InValue);
	switch(EnumValue)
	{
		case E__GripEnum__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[F05DC43E411A2A6ADED175BE3A5CFA63]\", \"C1E814D74F375D472AF233A13AA87BA0\", \"Open\")"), Text); break;
		case E__GripEnum__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[F05DC43E411A2A6ADED175BE3A5CFA63]\", \"4BA5A23C4B23A57505C5FDA3894F1C2F\", \"CanGrab\")"), Text); break;
		case E__GripEnum__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[F05DC43E411A2A6ADED175BE3A5CFA63]\", \"989BECC74BDB9B8BB0FAD1A36345AA43\", \"Grab\")"), Text); break;
		case E__GripEnum__pf::E__GripEnum__pf_MAX: FTextStringHelper::ReadFromString(TEXT(""), Text); break;
		default: ensure(false);
	};
	return Text;
};
