#include "NativizedAssets.h"
#include "graphicsPresets__pf2672032748.h"
FText E__graphicsPresets__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__graphicsPresets__pf>(InValue);
	switch(EnumValue)
	{
		case E__graphicsPresets__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[15BE1D07456F8EF4358EB4B6F0CAF4DD]\", \"9A5F59454CB44FC77211AD8D9E21CA0D\", \"low\")"), Text); break;
		case E__graphicsPresets__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[15BE1D07456F8EF4358EB4B6F0CAF4DD]\", \"4F4C1BA8475A1274772E29880DB5741A\", \"medium\")"), Text); break;
		case E__graphicsPresets__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[15BE1D07456F8EF4358EB4B6F0CAF4DD]\", \"8D2CD42A40A4A1A28304129F63E6DA4B\", \"high\")"), Text); break;
		case E__graphicsPresets__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[15BE1D07456F8EF4358EB4B6F0CAF4DD]\", \"D5E0F1BC4A5C966D829F77B5E87E2701\", \"glorious\")"), Text); break;
		case E__graphicsPresets__pf::E__graphicsPresets__pf_MAX: FTextStringHelper::ReadFromString(TEXT(""), Text); break;
		default: ensure(false);
	};
	return Text;
};
