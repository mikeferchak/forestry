#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "KismetProceduralMeshLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "PickupActorInterface__pf563933975.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "ProceduralMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
struct FUnconvertedWrapper__Achoppable_C__pf1172009058 : public FUnconvertedWrapper<AActor>
{
	FUnconvertedWrapper__Achoppable_C__pf1172009058(const AActor* __InObject) : FUnconvertedWrapper<AActor>(__InObject){}
	FORCENOINLINE UAudioComponent* & GetRef__windCue__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("windCue")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UAudioComponent* >(__Object));
	}
	FORCENOINLINE UStaticMeshComponent* & GetRef__staticmeshref__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("staticmeshref")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UStaticMeshComponent* >(__Object));
	}
	FORCENOINLINE UProceduralMeshComponent* & GetRef__ProceduralMesh__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("ProceduralMesh")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UProceduralMeshComponent* >(__Object));
	}
	FORCENOINLINE UStaticMesh* & GetRef__mesh__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("mesh")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UStaticMesh* >(__Object));
	}
	FORCENOINLINE bool & GetRef__gravity__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("gravity")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE bool & GetRef__physics__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("physics")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE bool & GetRef__createCollision__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("createCollision")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE UProceduralMeshComponent* & GetRef__outProcMesh__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("outProcMesh")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UProceduralMeshComponent* >(__Object));
	}
	FORCENOINLINE FVector & GetRef__planeNormalMuliplier__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("planeNormalMuliplier")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<FVector >(__Object));
	}
	FORCENOINLINE bool & GetRef__canChop__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("canChop")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE UPrimitiveComponent* & GetRef__grabbedComponent__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("grabbedComponent")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UPrimitiveComponent* >(__Object));
	}
	FORCENOINLINE bool & GetRef__isFrozen__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("isFrozen")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE ECanBeCharacterBase & GetRef__canStepOn__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("canStepOn")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<ECanBeCharacterBase >(__Object));
	}
	FORCENOINLINE USceneComponent* & GetRef__grabbingHandComponent__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("grabbingHandComponent")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USceneComponent* >(__Object));
	}
	FORCENOINLINE USoundBase* & GetRef__thumpSound__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("thumpSound")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USoundBase* >(__Object));
	}
	FORCENOINLINE bool & GetRef__canPlayThump__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("canPlayThump")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE float & GetRef__maxViewDistance__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("maxViewDistance")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE float & GetRef__minViewDistance__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("minViewDistance")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE float & GetRef__massToVisibilityExponent__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("massToVisibilityExponent")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE bool & GetRef__startFrozen__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("startFrozen")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE bool & GetRef__NewVar_0__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("NewVar_0")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE USceneComponent* & GetRef__chopAxe__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("chopAxe")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USceneComponent* >(__Object));
	}
	FORCENOINLINE UProceduralMeshComponent* & GetRef__chopComponent__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("chopComponent")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UProceduralMeshComponent* >(__Object));
	}
	FORCENOINLINE USceneComponent* & GetRef__grabbingHand__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("grabbingHand")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USceneComponent* >(__Object));
	}
	FORCENOINLINE FVector & GetRef__chopImpulse__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("chopImpulse")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<FVector >(__Object));
	}
	FORCENOINLINE FVector & GetRef__chopImpactPoint__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("chopImpactPoint")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<FVector >(__Object));
	}
	FORCENOINLINE FVector & GetRef__chopImpactNormal__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("chopImpactNormal")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<FVector >(__Object));
	}
	FORCENOINLINE UMaterialInterface* & GetRef__chopMaterial__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("chopMaterial")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UMaterialInterface* >(__Object));
	}
	FORCENOINLINE bool & GetRef__hasBeenChopped__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("hasBeenChopped")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE FVector & GetRef__velocityPosition__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("velocityPosition")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<FVector >(__Object));
	}
	FORCENOINLINE float & GetRef__tickDelta__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("tickDelta")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE float & GetRef__velocitySquared__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("velocitySquared")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE FVector & GetRef__randomRotationForce__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("randomRotationForce")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<FVector >(__Object));
	}
	FORCENOINLINE EProcMeshSliceCapOption & GetRef__capOption__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("capOption")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<EProcMeshSliceCapOption >(__Object));
	}
	FORCENOINLINE const TArray<UProceduralMeshComponent*> & GetRef__newProcMeshes__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("newProcMeshes")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<const TArray<UProceduralMeshComponent*> >(__Object));
	}
	FORCENOINLINE bool & GetRef__isSticky__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("isSticky")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE const TArray<USoundBase*> & GetRef__chopSounds__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("chopSounds")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<const TArray<USoundBase*> >(__Object));
	}
	FORCENOINLINE void bpf__dropFunction__pf(UPrimitiveComponent* bpp__self2__pf, USceneComponent* bpp__self3__pf, UObject* bpp__InputObject__pf)
	{
		static const FName __FunctionName(TEXT("dropFunction"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__dropFunction__pf_Parameters
		{
			UPrimitiveComponent* bpp__self2__pf_;
			USceneComponent* bpp__self3__pf_;
			UObject* bpp__InputObject__pf_;
		};
		bpf__dropFunction__pf_Parameters __Parameters { bpp__self2__pf, bpp__self3__pf, bpp__InputObject__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__pickupFunction__pf(UPrimitiveComponent* bpp__self2__pf, USceneComponent* bpp__self3__pf, USceneComponent* bpp__InputPin__pf, UPrimitiveComponent* bpp__grabbedComponent__pf, USceneComponent* bpp__grabbingHandComponent__pf)
	{
		static const FName __FunctionName(TEXT("pickupFunction"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__pickupFunction__pf_Parameters
		{
			UPrimitiveComponent* bpp__self2__pf_;
			USceneComponent* bpp__self3__pf_;
			USceneComponent* bpp__InputPin__pf_;
			UPrimitiveComponent* bpp__grabbedComponent__pf_;
			USceneComponent* bpp__grabbingHandComponent__pf_;
		};
		bpf__pickupFunction__pf_Parameters __Parameters { bpp__self2__pf, bpp__self3__pf, bpp__InputPin__pf, bpp__grabbedComponent__pf, bpp__grabbingHandComponent__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__initialize__pf()
	{
		static const FName __FunctionName(TEXT("initialize"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
	{
		static const FName __FunctionName(TEXT("Pickup"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__Pickup__pf_Parameters
		{
			USceneComponent* bpp__AttachTo__pf_;
		};
		bpf__Pickup__pf_Parameters __Parameters { bpp__AttachTo__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__Drop__pf()
	{
		static const FName __FunctionName(TEXT("Drop"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__reinitChoppableObjectEvent__pf()
	{
		static const FName __FunctionName(TEXT("reinitChoppableObjectEvent"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__chopEvent__pf(FHitResult bpp__hit__pf, UStaticMeshComponent* bpp__axe__pf, UProceduralMeshComponent* bpp__component__pf, FVector bpp__impulse__pf)
	{
		static const FName __FunctionName(TEXT("chopEvent"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__chopEvent__pf_Parameters
		{
			FHitResult bpp__hit__pf_;
			UStaticMeshComponent* bpp__axe__pf_;
			UProceduralMeshComponent* bpp__component__pf_;
			FVector bpp__impulse__pf_;
		};
		bpf__chopEvent__pf_Parameters __Parameters { bpp__hit__pf, bpp__axe__pf, bpp__component__pf, bpp__impulse__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__PickupComponent__pf(USceneComponent* bpp__AttachTo__pf, UPrimitiveComponent* bpp__Component__pf)
	{
		static const FName __FunctionName(TEXT("PickupComponent"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__PickupComponent__pf_Parameters
		{
			USceneComponent* bpp__AttachTo__pf_;
			UPrimitiveComponent* bpp__Component__pf_;
		};
		bpf__PickupComponent__pf_Parameters __Parameters { bpp__AttachTo__pf, bpp__Component__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__DropComponent__pf(UPrimitiveComponent* bpp__component__pf)
	{
		static const FName __FunctionName(TEXT("DropComponent"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__DropComponent__pf_Parameters
		{
			UPrimitiveComponent* bpp__component__pf_;
		};
		bpf__DropComponent__pf_Parameters __Parameters { bpp__component__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__freezeChoppable__pf(bool bpp__playFreezeSound__pf, UPrimitiveComponent* bpp__currentComponent__pf)
	{
		static const FName __FunctionName(TEXT("freezeChoppable"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__freezeChoppable__pf_Parameters
		{
			bool bpp__playFreezeSound__pf_;
			UPrimitiveComponent* bpp__currentComponent__pf_;
		};
		bpf__freezeChoppable__pf_Parameters __Parameters { bpp__playFreezeSound__pf, bpp__currentComponent__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__bsod__pf()
	{
		static const FName __FunctionName(TEXT("bsod"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__stickToWeapon__pf()
	{
		static const FName __FunctionName(TEXT("stickToWeapon"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__highlight__pf()
	{
		static const FName __FunctionName(TEXT("highlight"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
};
