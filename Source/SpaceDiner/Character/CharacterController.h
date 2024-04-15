// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CharacterController.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class SPACEDINER_API ACharacterController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	UFUNCTION(BlueprintCallable)
	FVector MoveToMouseClick();
	
public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	FVector CachedDestination;
	
private:
	UFUNCTION(BlueprintPure)
	FVector GetLocationUnderCursor(bool& Hit) const;
};
