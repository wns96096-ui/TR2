
#pragma once

#include "CoreMinimal.h"
#include "StatusInterface.h"
#include "GameFramework/Actor.h"
#include "Test_Jangemul.generated.h"

class UBoxComponent;

UCLASS()
class TR_API ATest_Jangemul : public AActor
{
	GENERATED_BODY()

public:
	ATest_Jangemul();

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