#include "NativizedAssets.h"
#include "choppableHitMass__pf1172009058.h"
FText E__choppableHitMass__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__choppableHitMass__pf>(InValue);
	switch(EnumValue)
	{
		case E__choppableHitMass__pf::NewEnumerator4: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[BC2FDE9A4C458EA8477AC9ADC15C4C68]\", \"215A40574E180868ABCACCBA107B0D87\", \"tiny\")"), Text); break;
		case E__choppableHitMass__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[BC2FDE9A4C458EA8477AC9ADC15C4C68]\", \"3D9F4FCD42D8F3FB4F3480AD908EF7BC\", \"small\")"), Text); break;
		case E__choppableHitMass__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[BC2FDE9A4C458EA8477AC9ADC15C4C68]\", \"CE32AD1C4B61731693B6CB8A99E63CBE\", \"medium\")"), Text); break;
		case E__choppableHitMass__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[BC2FDE9A4C458EA8477AC9ADC15C4C68]\", \"C1912CFB44AF5FA69FCEF49EFE8CB1B4\", \"large\")"), Text); break;
		case E__choppableHitMass__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[BC2FDE9A4C458EA8477AC9ADC15C4C68]\", \"8FCA8830433F8C8614854490AC4C13E0\", \"huge\")"), Text); break;
		case E__choppableHitMass__pf::E__choppableHitMass__pf_MAX: FTextStringHelper::ReadFromString(TEXT(""), Text); break;
		default: ensure(false);
	};
	return Text;
};
