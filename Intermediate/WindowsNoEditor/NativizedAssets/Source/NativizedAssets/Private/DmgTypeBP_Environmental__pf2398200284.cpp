#include "NativizedAssets.h"
#include "DmgTypeBP_Environmental__pf2398200284.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "DmgTypeBP_Environmental__pf2398200284.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
UDmgTypeBP_Environmental_C__pf2398200284::UDmgTypeBP_Environmental_C__pf2398200284(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UDmgTypeBP_Environmental_C__pf2398200284::StaticClass() == GetClass()))
	{
		UDmgTypeBP_Environmental_C__pf2398200284::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bCausedByWorld = true;
}
void UDmgTypeBP_Environmental_C__pf2398200284::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UDmgTypeBP_Environmental_C__pf2398200284::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
void UDmgTypeBP_Environmental_C__pf2398200284::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
void UDmgTypeBP_Environmental_C__pf2398200284::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void UDmgTypeBP_Environmental_C__pf2398200284::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
struct FRegisterHelper__UDmgTypeBP_Environmental_C__pf2398200284
{
	FRegisterHelper__UDmgTypeBP_Environmental_C__pf2398200284()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Engine/EngineDamageTypes/DmgTypeBP_Environmental"), &UDmgTypeBP_Environmental_C__pf2398200284::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UDmgTypeBP_Environmental_C__pf2398200284 Instance;
};
FRegisterHelper__UDmgTypeBP_Environmental_C__pf2398200284 FRegisterHelper__UDmgTypeBP_Environmental_C__pf2398200284::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
