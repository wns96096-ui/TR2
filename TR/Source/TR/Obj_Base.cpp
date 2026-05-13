
#include "Obj_base.h"
#include "Components/BoxComponent.h"
#include "StatusEffectInterface.h"

ATest_Jangemul::ATest_Jangemul()
{
	PrimaryActorTick.bCanEverTick = false;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	RootComponent = CollisionBox;

	CollisionBox->SetGenerateOverlapEvents(true);
	CollisionBox->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

	CollisionBox->OnComponentBeginOverlap.AddDynamic(
			this,
			&ATest_Jangemul::OnObstacleBeginOverlap
	);
}
void ATest_Jangemul::OnObstacleBeginOverlap(
	  UPrimitiveComponent* OverlappedComponent,
	  AActor* OtherActor,
	  UPrimitiveComponent* OtherComp,
	  int32 OtherBodyIndex,
	  bool bFromSweep,
	  const FHitResult& SweepResult
)
{
	if (!OtherActor || OtherActor == this)
	{
		return;
	}

	GEngine->AddOnScreenDebugMessage(
			-1,
			2.0f,
			FColor::Yellow,
			FString::Printf(TEXT("Overlap: %s"), *OtherActor->GetName())
	);

	if
(OtherActor->GetClass()->ImplementsInterface(UStatusEffectReceiver::StaticClass()))
{
	GEngine->AddOnScreenDebugMessage(
			-1,
			2.0f,
			FColor::Green,
			TEXT("Interface Found")
	);

	IStatusEffectReceiver::Execute_ApplyStatusEffect(
			OtherActor,
			EffectType
	);
}
}
