#pragma once
#include "Blueprint/BlueprintSupport.h"
class USceneComponent;
#include "BPI_PickupActor__pf2873424652.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/ProtoVRHand/Blueprints/Example/BPI_PickupActor.BPI_PickupActor_C", OverrideNativeName="BPI_PickupActor_C"))
class UBPI_PickupActor_C : public UInterface
{
	GENERATED_BODY()
};
class IBPI_PickupActor_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="Pickup"))
	void bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="Drop"))
	void bpf__Drop__pf();
public:
};
