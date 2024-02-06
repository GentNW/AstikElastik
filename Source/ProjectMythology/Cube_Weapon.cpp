// Fill out your copyright notice in the Description page of Project Settings.


#include "Cube_Weapon.h"
#include "Components/BoxComponent.h"

// Sets default values
ACube_Weapon::ACube_Weapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACube_Weapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACube_Weapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

