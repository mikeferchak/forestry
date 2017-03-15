#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Enum_Grip__pf3811345418.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/SplineComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "SteamVRChaperoneComponent.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/SplineMeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
struct FUnconvertedWrapper__ABP_MotionController_C__pf563933975 : public FUnconvertedWrapper<AActor>
{
	FUnconvertedWrapper__ABP_MotionController_C__pf563933975(const AActor* __InObject) : FUnconvertedWrapper<AActor>(__InObject){}
	FORCENOINLINE USplineComponent* & GetRef__TelekinesisSpline__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("TelekinesisSpline")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USplineComponent* >(__Object));
	}
	FORCENOINLINE UParticleSystemComponent* & GetRef__telekinesisObjectParticleSystem__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("telekinesisObjectParticleSystem")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UParticleSystemComponent* >(__Object));
	}
	FORCENOINLINE UParticleSystemComponent* & GetRef__TelekinesisParticleSystem__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("TelekinesisParticleSystem")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UParticleSystemComponent* >(__Object));
	}
	FORCENOINLINE UArrowComponent* & GetRef__axeGrabDirection__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("axeGrabDirection")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UArrowComponent* >(__Object));
	}
	FORCENOINLINE UTextRenderComponent* & GetRef__TextRender__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("TextRender")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UTextRenderComponent* >(__Object));
	}
	FORCENOINLINE UStaticMeshComponent* & GetRef__RoomScaleMesh__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("RoomScaleMesh")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UStaticMeshComponent* >(__Object));
	}
	FORCENOINLINE UStaticMeshComponent* & GetRef__Arrow__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("Arrow")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UStaticMeshComponent* >(__Object));
	}
	FORCENOINLINE USphereComponent* & GetRef__GrabSphere__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("GrabSphere")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USphereComponent* >(__Object));
	}
	FORCENOINLINE USplineComponent* & GetRef__ArcSpline__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("ArcSpline")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USplineComponent* >(__Object));
	}
	FORCENOINLINE UArrowComponent* & GetRef__ArcDirection__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("ArcDirection")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UArrowComponent* >(__Object));
	}
	FORCENOINLINE USkeletalMeshComponent* & GetRef__HandMesh__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("HandMesh")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USkeletalMeshComponent* >(__Object));
	}
	FORCENOINLINE UStaticMeshComponent* & GetRef__Ring__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("Ring")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UStaticMeshComponent* >(__Object));
	}
	FORCENOINLINE USteamVRChaperoneComponent* & GetRef__SteamVRChaperone__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("SteamVRChaperone")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USteamVRChaperoneComponent* >(__Object));
	}
	FORCENOINLINE UStaticMeshComponent* & GetRef__TeleportCylinder__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("TeleportCylinder")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UStaticMeshComponent* >(__Object));
	}
	FORCENOINLINE UStaticMeshComponent* & GetRef__ArcEndPoint__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("ArcEndPoint")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UStaticMeshComponent* >(__Object));
	}
	FORCENOINLINE UMotionControllerComponent* & GetRef__MotionController__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("MotionController")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UMotionControllerComponent* >(__Object));
	}
	FORCENOINLINE USceneComponent* & GetRef__Scene__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("Scene")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USceneComponent* >(__Object));
	}
	FORCENOINLINE EControllerHand & GetRef__Hand__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("Hand")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<EControllerHand >(__Object));
	}
	FORCENOINLINE AActor* & GetRef__AttachedActor__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("AttachedActor")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<AActor* >(__Object));
	}
	FORCENOINLINE bool & GetRef__IsTeleporterActive__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("IsTeleporterActive")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE const TArray<USplineMeshComponent*> & GetRef__SplineMeshes__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("SplineMeshes")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<const TArray<USplineMeshComponent*> >(__Object));
	}
	FORCENOINLINE bool & GetRef__bLastFrameValidDestination__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("bLastFrameValidDestination")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE bool & GetRef__IsRoomScale__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("IsRoomScale")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE FVector & GetRef__TeleportDestination__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("TeleportDestination")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<FVector >(__Object));
	}
	FORCENOINLINE bool & GetRef__IsValidTeleportDestination__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("IsValidTeleportDestination")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE E__Enum_Grip__pf & GetRef__GripState__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("GripState")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<E__Enum_Grip__pf >(__Object));
	}
	FORCENOINLINE bool & GetRef__bWantsToGrip__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("bWantsToGrip")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE FRotator & GetRef__TeleportRotation__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("TeleportRotation")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<FRotator >(__Object));
	}
	FORCENOINLINE float & GetRef__TeleportLaunchVelocity__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("TeleportLaunchVelocity")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE FRotator & GetRef__InitialControllerRotation__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("InitialControllerRotation")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<FRotator >(__Object));
	}
	FORCENOINLINE UPrimitiveComponent* & GetRef__AttachedComponent__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("AttachedComponent")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UPrimitiveComponent* >(__Object));
	}
	FORCENOINLINE bool & GetRef__usingTelekinesis__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("usingTelekinesis")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE UPrimitiveComponent* & GetRef__telekinesisComponent__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("telekinesisComponent")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UPrimitiveComponent* >(__Object));
	}
	FORCENOINLINE FVector & GetRef__telekinesisStartLocation__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("telekinesisStartLocation")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<FVector >(__Object));
	}
	FORCENOINLINE UPrimitiveComponent* & GetRef__highlightComponent__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("highlightComponent")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UPrimitiveComponent* >(__Object));
	}
	FORCENOINLINE void bpf__getAttachedChoppable__pf(/*out*/ AActor*& bpp__AsChoppable__pf)
	{
		static const FName __FunctionName(TEXT("getAttachedChoppable"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__getAttachedChoppable__pf_Parameters
		{
			AActor* bpp__AsChoppable__pf_;
		};
		bpf__getAttachedChoppable__pf_Parameters __Parameters { bpp__AsChoppable__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__ReleaseComponent__pf()
	{
		static const FName __FunctionName(TEXT("ReleaseComponent"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__GetComponentNearHand__pf(/*out*/ UPrimitiveComponent*& bpp__NearestComponent__pf)
	{
		static const FName __FunctionName(TEXT("GetComponentNearHand"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__GetComponentNearHand__pf_Parameters
		{
			UPrimitiveComponent* bpp__NearestComponent__pf_;
		};
		bpf__GetComponentNearHand__pf_Parameters __Parameters { bpp__NearestComponent__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__GrabComponent__pf(/*out*/ bool& bpp__didGrab__pf)
	{
		static const FName __FunctionName(TEXT("GrabComponent"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__GrabComponent__pf_Parameters
		{
			bool bpp__didGrab__pf_;
		};
		bpf__GrabComponent__pf_Parameters __Parameters { bpp__didGrab__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__GetTeleportDestination__pf(/*out*/ FVector& bpp__Location__pf, /*out*/ FRotator& bpp__Rotation__pf)
	{
		static const FName __FunctionName(TEXT("GetTeleportDestination"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__GetTeleportDestination__pf_Parameters
		{
			FVector bpp__Location__pf_;
			FRotator bpp__Rotation__pf_;
		};
		bpf__GetTeleportDestination__pf_Parameters __Parameters { bpp__Location__pf, bpp__Rotation__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__UpdateRoomScaleOutline__pf()
	{
		static const FName __FunctionName(TEXT("UpdateRoomScaleOutline"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__SetupRoomScaleOutline__pf()
	{
		static const FName __FunctionName(TEXT("SetupRoomScaleOutline"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__UpdateArcEndpoint__pf(FVector bpp__NewLocation__pf, bool bpp__ValidLocationFound__pf)
	{
		static const FName __FunctionName(TEXT("UpdateArcEndpoint"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__UpdateArcEndpoint__pf_Parameters
		{
			FVector bpp__NewLocation__pf_;
			bool bpp__ValidLocationFound__pf_;
		};
		bpf__UpdateArcEndpoint__pf_Parameters __Parameters { bpp__NewLocation__pf, bpp__ValidLocationFound__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__UpdateArcSpline__pf(bool bpp__FoundValidLocation__pf, /*out*/ TArray<FVector>& bpp__SplinePoints__pf)
	{
		static const FName __FunctionName(TEXT("UpdateArcSpline"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__UpdateArcSpline__pf_Parameters
		{
			bool bpp__FoundValidLocation__pf_;
			TArray<FVector> bpp__SplinePoints__pf_;
		};
		bpf__UpdateArcSpline__pf_Parameters __Parameters { bpp__FoundValidLocation__pf, bpp__SplinePoints__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__ClearArc__pf()
	{
		static const FName __FunctionName(TEXT("ClearArc"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__TraceTeleportDestination__pf(/*out*/ bool& bpp__Success__pf, /*out*/ TArray<FVector>& bpp__TracePoints__pf, /*out*/ FVector& bpp__NavMeshLocation__pf, /*out*/ FVector& bpp__TraceLocation__pf)
	{
		static const FName __FunctionName(TEXT("TraceTeleportDestination"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__TraceTeleportDestination__pf_Parameters
		{
			bool bpp__Success__pf_;
			TArray<FVector> bpp__TracePoints__pf_;
			FVector bpp__NavMeshLocation__pf_;
			FVector bpp__TraceLocation__pf_;
		};
		bpf__TraceTeleportDestination__pf_Parameters __Parameters { bpp__Success__pf, bpp__TracePoints__pf, bpp__NavMeshLocation__pf, bpp__TraceLocation__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__DisableTeleporter__pf()
	{
		static const FName __FunctionName(TEXT("DisableTeleporter"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__ActivateTeleporter__pf()
	{
		static const FName __FunctionName(TEXT("ActivateTeleporter"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__GrabActor__pf()
	{
		static const FName __FunctionName(TEXT("GrabActor"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__ReleaseActor__pf()
	{
		static const FName __FunctionName(TEXT("ReleaseActor"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__GetActorNearHand__pf(/*out*/ AActor*& bpp__NearestMesh__pf)
	{
		static const FName __FunctionName(TEXT("GetActorNearHand"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__GetActorNearHand__pf_Parameters
		{
			AActor* bpp__NearestMesh__pf_;
		};
		bpf__GetActorNearHand__pf_Parameters __Parameters { bpp__NearestMesh__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__RumbleController__pf(float bpp__Intensity__pf)
	{
		static const FName __FunctionName(TEXT("RumbleController"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__RumbleController__pf_Parameters
		{
			float bpp__Intensity__pf_;
		};
		bpf__RumbleController__pf_Parameters __Parameters { bpp__Intensity__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__freezeComponentInController__pf(AActor* bpp__choppableComponent__pf)
	{
		static const FName __FunctionName(TEXT("freezeComponentInController"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__freezeComponentInController__pf_Parameters
		{
			AActor* bpp__choppableComponent__pf_;
		};
		bpf__freezeComponentInController__pf_Parameters __Parameters { bpp__choppableComponent__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__playTelekinesisHaptic__pf()
	{
		static const FName __FunctionName(TEXT("playTelekinesisHaptic"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__stopTelekinesisHaptic__pf()
	{
		static const FName __FunctionName(TEXT("stopTelekinesisHaptic"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
};
