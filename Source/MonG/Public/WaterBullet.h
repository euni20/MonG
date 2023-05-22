// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaterBullet.generated.h"

UCLASS()
class MONG_API AWaterBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWaterBullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="WaterBulletSettings")
	class USphereComponent* bulletComp;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="WaterBulletSettings")
	class UStaticMeshComponent* bulletMesh;
	UPROPERTY()
	class ADustStrollSpawner* dustStrollSpawner;

	float currentTime = 0; 
	float moveSpeed = 500;
	float destroyTime = 7;
	
	UFUNCTION()
	void WaterShoot(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


};