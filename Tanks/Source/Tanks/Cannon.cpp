

#include "Cannon.h"
#include "Components/ArrowComponent.h"

ACannon::ACannon()
{
	PrimaryActorTick.bCanEverTick = false;

	USceneComponent* SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = SceneComp;

	CannonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CannonMesh"));
	CannonMesh->SetupAttachment(SceneComp);

	ProjectileSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
	ProjectileSpawnPoint->SetupAttachment(CannonMesh);
}

void ACannon::Fire()
{
	if (!bReadyToFire)
	{
		return;
	}

	if (CannonType == ECannonType::FireProjectile)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0, FColor::Purple, "Fire projectile");
// 		GEngine->AddOnScreenDebugMessage(-1, 2.0, FColor::Purple, FString::Printf(TEXT("Ammo: %d"), Ammo));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0, FColor::Purple, "Fire trace");
	}
	bReadyToFire = false;
	GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, FireRate, false);
}

bool ACannon::IsReadyToFire()
{
	return bReadyToFire;
}

void ACannon::Reload()
{
	bReadyToFire = true;
}

void ACannon::BeginPlay()
{
	Super::BeginPlay();
	bReadyToFire = true;

	
}



