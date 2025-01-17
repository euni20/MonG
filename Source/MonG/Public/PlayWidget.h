// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayWidget.generated.h"

/**
 * 
 */
UCLASS()
class MONG_API UPlayWidget : public UUserWidget
{
	GENERATED_BODY()
	virtual void NativeConstruct() override;

public:


	virtual void Tick(float DeltaTime);

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* text_Minute;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* text_Second;

	UPROPERTY(EditAnywhere,Category="Timer Settings")
	int timer = 300;
	int minute = 0;
	int second = 0;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* text_Score;
	UPROPERTY()
	class AMonGPlayer* monGPlayer;

	UPROPERTY()
	class AMonGGameModeBase* monGgm;
	
	UPROPERTY()
	class UScoreWidget* scoreWidget;
	UPROPERTY()
	class UPointWidget* pointWidget;

	UPROPERTY()
	class AScoreWidgetActor* scoreWidgetActor;

	bool isEnd = false;

	FTimerHandle countScore;
	FTimerHandle countTime;

};
