#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class UStaticMesh;
#include "PhysMesh__pf559396743.generated.h"
USTRUCT(BlueprintType, meta=(ReplaceConverted="/Engine/ArtTools/RenderToTexture/Blueprints/PhysMesh.PhysMesh", OverrideNativeName="PhysMesh"))
struct FPhysMesh__pf559396743
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SMesh", Tooltip, OverrideNativeName="SMesh_7_207311034DCBFD475CDEEB9428023561"))
	UStaticMesh* bpv__SMesh_7_207311034DCBFD475CDEEB9428023561__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Transform", Tooltip, OverrideNativeName="Transform_9_8EA1546242BACCE5DB84C7B34C56F044"))
	FTransform bpv__Transform_9_8EA1546242BACCE5DB84C7B34C56F044__pf;
	static FPhysMesh__pf559396743 GetDefaultValue()
	{
		FStructOnScope StructOnScope(FPhysMesh__pf559396743::StaticStruct());
		FPhysMesh__pf559396743& DefaultData__ = *((FPhysMesh__pf559396743*)StructOnScope.GetStructMemory());
		return DefaultData__;
	}
	bool operator== (const FPhysMesh__pf559396743& __Other) const
	{
		return FPhysMesh__pf559396743::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
