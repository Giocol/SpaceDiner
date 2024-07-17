#include "CharacterController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

FVector ACharacterController::HandleMouseLeftClick()
{
	//TODO: move all of this logic to AMainCharacter
	bool Hit;
	const FVector Destination = GetActorUnderCursor(Hit).Location;
	if(Hit)
	{
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, Destination);
	}
	return Destination;
}

FHitResult ACharacterController::GetActorUnderCursor(bool& Hit)
{
	Hit = GetHitResultUnderCursorByChannel(TraceTypeQuery1, true, cachedMouseHit);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *cachedMouseHit.GetActor()->GetActorLabel());
	return cachedMouseHit;
}
