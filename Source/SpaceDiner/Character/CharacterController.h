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
	FVector HandleMouseLeftClick();
	
	UFUNCTION(BlueprintCallable)
	FHitResult GetActorUnderCursor(bool& Hit);
	
public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	FVector CachedDestination;
	
private:
	FHitResult cachedMouseHit;
};
