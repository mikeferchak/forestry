#include "NativizedAssets.h"
#include "GripEnum__pf563933975.h"
FText E__GripEnum__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__GripEnum__pf>(InValue);
	switch(EnumValue)
	{
		case E__GripEnum__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[988EE5FA4BC66285ADACF58231B4BDFD]\", \"FB43F9F949C4867DB9B9ABB10380AA24\", \"Open\")"), Text); break;
		case E__GripEnum__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[988EE5FA4BC66285ADACF58231B4BDFD]\", \"225F95A64F54DD2AA42E1F87D9503F54\", \"CanGrab\")"), Text); break;
		case E__GripEnum__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[988EE5FA4BC66285ADACF58231B4BDFD]\", \"4630A008449564220499DDA80503F7DF\", \"Grab\")"), Text); break;
		case E__GripEnum__pf::E__GripEnum__pf_MAX: FTextStringHelper::ReadFromString(TEXT(""), Text); break;
		default: ensure(false);
	};
	return Text;
};
