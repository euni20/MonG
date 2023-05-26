// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Marker.generated.h"

UCLASS()
class MONG_API AMarker : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMarker();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BluePrintReadWrite,Category="markerSettings")
	class UBoxComponent* markerComp;
	UPROPERTY(EditAnywhere, BluePrintReadWrite,Category="markerSettings")
	class UStaticMeshComponent* markerMesh;
	UPROPERTY(EditAnywhere, BluePrintReadWrite,Category="markerSettings")
	class UStaticMeshComponent* markerLead;

};