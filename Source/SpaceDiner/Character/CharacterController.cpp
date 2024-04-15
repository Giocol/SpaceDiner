// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

FVector ACharacterController::MoveToMouseClick()
{
	bool Hit;
	const FVector Destination = GetLocationUnderCursor(Hit);
	if(Hit)
	{
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, Destination);
	}
	return Destination;
}

FVector ACharacterController::GetLocationUnderCursor(bool& Hit) const
{
	FHitResult HitResult;
	Hit = GetHitResultUnderCursorByChannel(TraceTypeQuery1, true, HitResult);
	return HitResult.Location;
}
