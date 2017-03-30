#include "NativizedAssets.h"
#include "EIntTypes__pf4184272282.h"
FText E__EIntTypes__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EIntTypes__pf>(InValue);
	switch(EnumValue)
	{
		case E__EIntTypes__pf::NewEnumerator4: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[5B02F1ED4A0FAA09F05CA482C5841CDC]\", \"93064837490AF38E8F5FCEB26EF4D1E3\", \"int\")"), Text); break;
		case E__EIntTypes__pf::NewEnumerator5: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[5B02F1ED4A0FAA09F05CA482C5841CDC]\", \"D3837D3F402817C60823AFAEC330176D\", \"int2\")"), Text); break;
		case E__EIntTypes__pf::NewEnumerator6: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[5B02F1ED4A0FAA09F05CA482C5841CDC]\", \"6B77B8A64134C68673B200B5CF4D0730\", \"int3\")"), Text); break;
		case E__EIntTypes__pf::NewEnumerator7: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[5B02F1ED4A0FAA09F05CA482C5841CDC]\", \"C572BED7494005D0651D748E02D6120E\", \"int4\")"), Text); break;
		case E__EIntTypes__pf::E__EIntTypes__pf_MAX: FTextStringHelper::ReadFromString(TEXT(""), Text); break;
		default: ensure(false);
	};
	return Text;
};
