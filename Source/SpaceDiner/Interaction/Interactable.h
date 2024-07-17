#pragma once


#include "Interactable.generated.h"


class AMainCharacter;

UCLASS()
class AInteractable : public AActor {

	GENERATED_BODY()

public:
	AInteractable() = default;

	/// <summary>
	/// Pure virtual class that needs to be inherited from by any interactable component.
	/// </summary>
	/// <returns>true if interactable, false if not</returns>
	/// <param name="Character">Pointer to the AMainCharacter that performed the interaction,</param>
	virtual bool Interact(AMainCharacter* Character) PURE_VIRTUAL(&AInteractable::Interact, return false;);
};
