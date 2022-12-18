

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
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0, FColor::Purple, "Fire trace");
	}
 	GEngine->AddOnScreenDebugMessage(-1, 2.0, FColor::Purple, FString::Printf(TEXT("Ammo: %d"), Ammo));
	bReadyToFire = false;
	GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, FireRate, false);
	Ammo--;
}

void ACannon::FireSpecial()
{
	if (!bReadyToFire)
	{
		return;
	}

	if (CannonType == ECannonType::FireProjectile)
	{
		for (int i = 0; i < 3; i++) {
		GEngine->AddOnScreenDebugMessage(-1, 1.0, FColor::Yellow, "Fire projectile");
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0, FColor::Purple, "Fire trace");
	}
	GEngine->AddOnScreenDebugMessage(-1, 2.0, FColor::Purple, FString::Printf(TEXT("Ammo: %d"), Ammo));
	bReadyToFire = false;
	GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, FireRate, false);
	Ammo--;
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



