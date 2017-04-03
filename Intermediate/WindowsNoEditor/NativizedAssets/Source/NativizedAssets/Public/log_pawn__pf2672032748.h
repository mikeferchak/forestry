#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "graphicsPresets__pf2672032748.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/RadialForceComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "log_pawn__pf2672032748.generated.h"
UCLASS()
class U__Delegates__Alog_pawn_C__pf2672032748 : public UObject
{
public:
	GENERATED_BODY()
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(F__MulticastDelegate__bpv__reinitChoppableObject__pf);
};
struct FUnconvertedWrapper__Alog_pawn_C__pf2672032748 : public FUnconvertedWrapper<APawn>
{
	FUnconvertedWrapper__Alog_pawn_C__pf2672032748(const APawn* __InObject) : FUnconvertedWrapper<APawn>(__InObject){}
	FORCENOINLINE UChildActorComponent* & GetRef__randomBirdSounds__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("randomBirdSounds")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UChildActorComponent* >(__Object));
	}
	FORCENOINLINE UAudioComponent* & GetRef__tutorialAudio__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("tutorialAudio")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UAudioComponent* >(__Object));
	}
	FORCENOINLINE UChildActorComponent* & GetRef__orbitAudio__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("orbitAudio")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UChildActorComponent* >(__Object));
	}
	FORCENOINLINE UStaticMeshComponent* & GetRef__hat__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("hat")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UStaticMeshComponent* >(__Object));
	}
	FORCENOINLINE URadialForceComponent* & GetRef__RadialForce__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("RadialForce")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<URadialForceComponent* >(__Object));
	}
	FORCENOINLINE UArrowComponent* & GetRef__Arrow__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("Arrow")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UArrowComponent* >(__Object));
	}
	FORCENOINLINE UChildActorComponent* & GetRef__holster__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("holster")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UChildActorComponent* >(__Object));
	}
	FORCENOINLINE UCameraComponent* & GetRef__Camera__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("Camera")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<UCameraComponent* >(__Object));
	}
	FORCENOINLINE USceneComponent* & GetRef__VROrigin__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("VROrigin")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USceneComponent* >(__Object));
	}
	FORCENOINLINE USceneComponent* & GetRef__DefaultSceneRoot__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("DefaultSceneRoot")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USceneComponent* >(__Object));
	}
	FORCENOINLINE bool & GetRef__bShowChaperone__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("bShowChaperone")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE AActor* & GetRef__LeftController__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("LeftController")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<AActor* >(__Object));
	}
	FORCENOINLINE AActor* & GetRef__RightController__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("RightController")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<AActor* >(__Object));
	}
	FORCENOINLINE float & GetRef__FadeOutDuration__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("FadeOutDuration")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE float & GetRef__FadeInDuration__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("FadeInDuration")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE bool & GetRef__IsTeleporting__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("IsTeleporting")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE FLinearColor & GetRef__TeleportFadeColor__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("TeleportFadeColor")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<FLinearColor >(__Object));
	}
	FORCENOINLINE float & GetRef__ThumbDeadzone__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("ThumbDeadzone")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE bool & GetRef__RightStickDown__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("RightStickDown")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE bool & GetRef__LeftStickDown__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("LeftStickDown")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE float & GetRef__DefaultPlayerHeight__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("DefaultPlayerHeight")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE bool & GetRef__UseControllerRollToRotate__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("UseControllerRollToRotate")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE const TArray<USoundBase*> & GetRef__birdSounds__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("birdSounds")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<const TArray<USoundBase*> >(__Object));
	}
	FORCENOINLINE U__Delegates__Alog_pawn_C__pf2672032748::F__MulticastDelegate__bpv__reinitChoppableObject__pf& GetRef__reinitChoppableObject__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("reinitChoppableObject")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<U__Delegates__Alog_pawn_C__pf2672032748::F__MulticastDelegate__bpv__reinitChoppableObject__pf>(__Object));
	}
	FORCENOINLINE float & GetRef__snapRotationAmount__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("snapRotationAmount")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE float & GetRef__axisThreshold__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("axisThreshold")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE bool & GetRef__canRotate__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("canRotate")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE float & GetRef__gravityCompensation__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("gravityCompensation")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE const TArray<AActor*> & GetRef__noTelekinesisObjects__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("noTelekinesisObjects")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<const TArray<AActor*> >(__Object));
	}
	FORCENOINLINE AActor* & GetRef__teleControllerSecondary__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("teleControllerSecondary")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<AActor* >(__Object));
	}
	FORCENOINLINE FVector & GetRef__worldRelativeCameraPos__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("worldRelativeCameraPos")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<FVector >(__Object));
	}
	FORCENOINLINE float & GetRef__newRotation__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("newRotation")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE float & GetRef__forcePushStrength__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("forcePushStrength")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE FVector & GetRef__forcePushOrigin__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("forcePushOrigin")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<FVector >(__Object));
	}
	FORCENOINLINE float & GetRef__forcePushRadius__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("forcePushRadius")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE float & GetRef__currentPD__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("currentPD")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE float & GetRef__pdStepSize__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("pdStepSize")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE float & GetRef__maxPD__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("maxPD")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE float & GetRef__minPD__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("minPD")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE int32 & GetRef__currentFPS__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("currentFPS")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<int32 >(__Object));
	}
	FORCENOINLINE float & GetRef__maxTeleportDistance__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("maxTeleportDistance")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<float >(__Object));
	}
	FORCENOINLINE bool & GetRef__canForcePush__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("canForcePush")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE USaveGame* & GetRef__saveGame__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("saveGame")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USaveGame* >(__Object));
	}
	FORCENOINLINE const FString & GetRef__NewVar_0__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("NewVar_0")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<const FString >(__Object));
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
	FORCENOINLINE USoundBase* & GetRef__tutorialWelcome__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("tutorialWelcome")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USoundBase* >(__Object));
	}
	FORCENOINLINE USoundBase* & GetRef__tutorialWelcome_0__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("tutorialWelcome_0")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USoundBase* >(__Object));
	}
	FORCENOINLINE USoundBase* & GetRef__tutorialMenu__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("tutorialMenu")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USoundBase* >(__Object));
	}
	FORCENOINLINE USoundBase* & GetRef__tutorialConstruction__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("tutorialConstruction")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USoundBase* >(__Object));
	}
	FORCENOINLINE bool & GetRef__keepPlayingTutorial__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("keepPlayingTutorial")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
	FORCENOINLINE USoundBase* & GetRef__tutorialTelekinesis__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("tutorialTelekinesis")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USoundBase* >(__Object));
	}
	FORCENOINLINE USoundBase* & GetRef__tutorialTeleportation__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("tutorialTeleportation")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USoundBase* >(__Object));
	}
	FORCENOINLINE USoundBase* & GetRef__findToolsTutorial__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("findToolsTutorial")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USoundBase* >(__Object));
	}
	FORCENOINLINE USoundBase* & GetRef__grabbingTutorial__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("grabbingTutorial")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USoundBase* >(__Object));
	}
	FORCENOINLINE USoundBase* & GetRef__holsterTutorial__pf()
	{
		static TWeakObjectPtr<UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("holsterTutorial")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<USoundBase* >(__Object));
	}
	FORCENOINLINE void bpf__setSupersampling__pf()
	{
		static const FName __FunctionName(TEXT("setSupersampling"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__gripTelekinesis__pf(AActor* bpp__primaryController__pf, AActor* bpp__secondaryController__pf)
	{
		static const FName __FunctionName(TEXT("gripTelekinesis"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__gripTelekinesis__pf_Parameters
		{
			AActor* bpp__primaryController__pf_;
			AActor* bpp__secondaryController__pf_;
		};
		bpf__gripTelekinesis__pf_Parameters __Parameters { bpp__primaryController__pf, bpp__secondaryController__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__thumbstickTeleportation__pf(float bpp__axisValue__pf, AActor* bpp__primaryController__pf, AActor* bpp__secondaryController__pf)
	{
		static const FName __FunctionName(TEXT("thumbstickTeleportation"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__thumbstickTeleportation__pf_Parameters
		{
			float bpp__axisValue__pf_;
			AActor* bpp__primaryController__pf_;
			AActor* bpp__secondaryController__pf_;
		};
		bpf__thumbstickTeleportation__pf_Parameters __Parameters { bpp__axisValue__pf, bpp__primaryController__pf, bpp__secondaryController__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__tryToRotate__pf(float bpp__axisValue__pf, float bpp__axisValue2__pf)
	{
		static const FName __FunctionName(TEXT("tryToRotate"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__tryToRotate__pf_Parameters
		{
			float bpp__axisValue__pf_;
			float bpp__axisValue2__pf_;
		};
		bpf__tryToRotate__pf_Parameters __Parameters { bpp__axisValue__pf, bpp__axisValue2__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__positionHolster__pf()
	{
		static const FName __FunctionName(TEXT("positionHolster"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__logSpawner__pf()
	{
		static const FName __FunctionName(TEXT("logSpawner"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__rightHandTeleportRotation__pf()
	{
		static const FName __FunctionName(TEXT("rightHandTeleportRotation"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__leftHandTeleportRotation__pf()
	{
		static const FName __FunctionName(TEXT("leftHandTeleportRotation"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__spawnAndAttachMotionControllers__pf()
	{
		static const FName __FunctionName(TEXT("spawnAndAttachMotionControllers"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__setupPlayerHeightForPlatforms__pf()
	{
		static const FName __FunctionName(TEXT("setupPlayerHeightForPlatforms"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__randomBirdChirps__pf(float bpp__time__pf)
	{
		static const FName __FunctionName(TEXT("randomBirdChirps"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__randomBirdChirps__pf_Parameters
		{
			float bpp__time__pf_;
		};
		bpf__randomBirdChirps__pf_Parameters __Parameters { bpp__time__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__spawnAmbisonicAudio__pf()
	{
		static const FName __FunctionName(TEXT("spawnAmbisonicAudio"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__randomChopSound__pf(FVector bpp__location__pf, /*out*/ UAudioComponent*& bpp__audioOutput__pf)
	{
		static const FName __FunctionName(TEXT("randomChopSound"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__randomChopSound__pf_Parameters
		{
			FVector bpp__location__pf_;
			UAudioComponent* bpp__audioOutput__pf_;
		};
		bpf__randomChopSound__pf_Parameters __Parameters { bpp__location__pf, bpp__audioOutput__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__GetRotationFromInput__pf(float bpp__UpAxis__pf, float bpp__RightAxis__pf, AActor* bpp__Controller__pf, /*out*/ FRotator& bpp__ReturnValue__pf)
	{
		static const FName __FunctionName(TEXT("GetRotationFromInput"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__GetRotationFromInput__pf_Parameters
		{
			float bpp__UpAxis__pf_;
			float bpp__RightAxis__pf_;
			AActor* bpp__Controller__pf_;
			FRotator bpp__ReturnValue__pf_;
		};
		bpf__GetRotationFromInput__pf_Parameters __Parameters { bpp__UpAxis__pf, bpp__RightAxis__pf, bpp__Controller__pf, bpp__ReturnValue__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__telekinesisLeftPressed__pf()
	{
		static const FName __FunctionName(TEXT("telekinesisLeftPressed"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__telekinesisLeftReleased__pf()
	{
		static const FName __FunctionName(TEXT("telekinesisLeftReleased"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__telekinesisRightPressed__pf()
	{
		static const FName __FunctionName(TEXT("telekinesisRightPressed"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__telekinesisRightReleased__pf()
	{
		static const FName __FunctionName(TEXT("telekinesisRightReleased"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__grabLeftPressed__pf()
	{
		static const FName __FunctionName(TEXT("grabLeftPressed"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__grabLeftReleased__pf()
	{
		static const FName __FunctionName(TEXT("grabLeftReleased"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__grabRightPressed__pf()
	{
		static const FName __FunctionName(TEXT("grabRightPressed"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__grabRightReleased__pf()
	{
		static const FName __FunctionName(TEXT("grabRightReleased"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__rotateLeft__pf()
	{
		static const FName __FunctionName(TEXT("rotateLeft"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__rotateRight__pf()
	{
		static const FName __FunctionName(TEXT("rotateRight"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__ExecuteTeleportation__pf(AActor* bpp__MotionController__pf)
	{
		static const FName __FunctionName(TEXT("ExecuteTeleportation"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		struct bpf__ExecuteTeleportation__pf_Parameters
		{
			AActor* bpp__MotionController__pf_;
		};
		bpf__ExecuteTeleportation__pf_Parameters __Parameters { bpp__MotionController__pf };
		__Object->ProcessEvent(__Function, &__Parameters);
	}
	FORCENOINLINE void bpf__buttonDecreasePD__pf()
	{
		static const FName __FunctionName(TEXT("buttonDecreasePD"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__buttonIncreasePD__pf()
	{
		static const FName __FunctionName(TEXT("buttonIncreasePD"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__buttonStartTutorial__pf()
	{
		static const FName __FunctionName(TEXT("buttonStartTutorial"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__buttonSkipTutorial__pf()
	{
		static const FName __FunctionName(TEXT("buttonSkipTutorial"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__applyCurrentGraphics__pf()
	{
		static const FName __FunctionName(TEXT("applyCurrentGraphics"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
	FORCENOINLINE void bpf__reinitChoppableObject__DelegateSignature__pf()
	{
		static const FName __FunctionName(TEXT("reinitChoppableObject__DelegateSignature"));
		UFunction* __Function = __Object->FindFunctionChecked(__FunctionName);
		__Object->ProcessEvent(__Function, nullptr);
	}
};
