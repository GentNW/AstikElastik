// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cube_Weapon.generated.h"


UCLASS()
class PROJECTMYTHOLOGY_API ACube_Weapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACube_Weapon();

private: 
	UPROPERTY()
	class UBoxComponent* BoxComponent;

	UPROPERTY()
	class UStaticMeshComponent* StaticMesh;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
