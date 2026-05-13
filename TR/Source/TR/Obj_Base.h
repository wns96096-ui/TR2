#pragma once

#include "CoreMinimal.h"
#include "StatusEffectInterface.h"
#include "GameFramework/Actor.h"
#include "Obj_Base.generated.h"

class UBoxComponent;

UCLASS()
class TR_API AObj_Base : public AActor
{
	GENERATED_BODY()

public:
	AObj_Base();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Status Effect")
	EStatusEffectType EffectType = EStatusEffectType::Slow;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
	UBoxComponent* CollisionBox;

	UFUNCTION()
	void OnObstacleBeginOverlap(
			UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult& SweepResult
	);
};
