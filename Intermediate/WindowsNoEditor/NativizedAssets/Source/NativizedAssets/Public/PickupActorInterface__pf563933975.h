#pragma once
#include "Blueprint/BlueprintSupport.h"
class USceneComponent;
class UPrimitiveComponent;
#include "PickupActorInterface__pf563933975.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/VirtualRealityBP/Blueprints/PickupActorInterface.PickupActorInterface_C", OverrideNativeName="PickupActorInterface_C"))
class UPickupActorInterface_C : public UInterface
{
	GENERATED_BODY()
};
class IPickupActorInterface_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="Pickup"))
	void bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="Drop"))
	void bpf__Drop__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="PickupComponent"))
	void bpf__PickupComponent__pf(USceneComponent* bpp__AttachTo__pf, UPrimitiveComponent* bpp__Component__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="DropComponent"))
	void bpf__DropComponent__pf(UPrimitiveComponent* bpp__component__pf);
public:
};
