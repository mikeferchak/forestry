#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class UMaterialInstanceConstant;
class UStaticMesh;
class UTexture;
#include "TilingMesh__pf559396743.generated.h"
USTRUCT(BlueprintType, meta=(ReplaceConverted="/Engine/ArtTools/RenderToTexture/Blueprints/TilingMesh.TilingMesh", OverrideNativeName="TilingMesh"))
struct FTilingMesh__pf559396743
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="StaticMesh", Tooltip, OverrideNativeName="StaticMesh_2_3365F92E43463CA8B39E94A58409BB8F"))
	UStaticMesh* bpv__StaticMesh_2_3365F92E43463CA8B39E94A58409BB8F__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(MakeEditWidget="true", DisplayName="Transform", Tooltip, OverrideNativeName="Transform_5_EC8FA7FF4AB65DB53669249F2EE91ED0"))
	FTransform bpv__Transform_5_EC8FA7FF4AB65DB53669249F2EE91ED0__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Material", Tooltip, OverrideNativeName="Material_8_D7CA231C402F4C3E21216DBFF0C7B831"))
	UMaterialInstanceConstant* bpv__Material_8_D7CA231C402F4C3E21216DBFF0C7B831__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Visible", Tooltip, OverrideNativeName="Visible_10_3155D32A40830AA72468EBB353E0197E"))
	bool bpv__Visible_10_3155D32A40830AA72468EBB353E0197E__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DisplacementTexture", Tooltip, OverrideNativeName="DisplacementTexture_13_FF80FB2A4568E664C650799B803BBBCB"))
	UTexture* bpv__DisplacementTexture_13_FF80FB2A4568E664C650799B803BBBCB__pf;
	static FTilingMesh__pf559396743 GetDefaultValue()
	{
		FStructOnScope StructOnScope(FTilingMesh__pf559396743::StaticStruct());
		FTilingMesh__pf559396743& DefaultData__ = *((FTilingMesh__pf559396743*)StructOnScope.GetStructMemory());
		DefaultData__.bpv__Visible_10_3155D32A40830AA72468EBB353E0197E__pf = true;
		return DefaultData__;
	}
	bool operator== (const FTilingMesh__pf559396743& __Other) const
	{
		return FTilingMesh__pf559396743::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
