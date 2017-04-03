#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "graphicsPresets__pf2672032748.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
struct FUnconvertedWrapper__UForestrySaveGame_C__pf3054079870 : public FUnconvertedWrapper<USaveGame>
{
	FUnconvertedWrapper__UForestrySaveGame_C__pf3054079870(const USaveGame* __InObject) : FUnconvertedWrapper<USaveGame>(__InObject){}
	FORCENOINLINE float & GetRef__PD__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("PD")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE const FString & GetRef__saveSlotName__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("saveSlotName")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<const FString >(__Object));
	}
	FORCENOINLINE int32 & GetRef__userIndex__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("userIndex")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<int32 >(__Object));
	}
	FORCENOINLINE float & GetRef__radioStartTime__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("radioStartTime")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE bool & GetRef__hasForcePush__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("hasForcePush")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE bool & GetRef__hasTelekinesis__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("hasTelekinesis")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE bool & GetRef__hasTeleportation__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("hasTeleportation")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE bool & GetRef__hasMenuSpawning__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("hasMenuSpawning")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE bool & GetRef__hasFreezing__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("hasFreezing")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE E__graphicsPresets__pf & GetRef__graphics__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("graphics")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<E__graphicsPresets__pf >(__Object));
	}
};
