#include "NativizedAssets.h"
#include "GripEnum__pf563933975.h"
FText E__GripEnum__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__GripEnum__pf>(InValue);
	switch(EnumValue)
	{
		case E__GripEnum__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[5D4E4C854FE341FCE92A7DB241D52CAD]\", \"27266C9F4056B8A7C912C1B79E1B90DE\", \"Open\")"), Text); break;
		case E__GripEnum__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[5D4E4C854FE341FCE92A7DB241D52CAD]\", \"7881B3054D466D0D77336894A02B0BB1\", \"CanGrab\")"), Text); break;
		case E__GripEnum__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[5D4E4C854FE341FCE92A7DB241D52CAD]\", \"CE95DCC44FBC91E65833C8B34BDD7C51\", \"Grab\")"), Text); break;
		case E__GripEnum__pf::E__GripEnum__pf_MAX: FTextStringHelper::ReadFromString(TEXT(""), Text); break;
		default: ensure(false);
	};
	return Text;
};
