// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ServerRowx.generated.h"


class UTextBlock;
class UMenu;
class UButton;




/**
 * 
 */
UCLASS()
class MULTIPLAYERSESSIONS_API UServerRowx : public UUserWidget
{
	GENERATED_BODY()
	

public:
	UPROPERTY(meta = (BindWidget))
		UTextBlock* ServerName;

	void Setup(UMenu* InParent, uint32 InIndex);

	UPROPERTY(meta = (BindWidget))
		UButton* RowButton;

	UFUNCTION()
		void OnClicked();

	UPROPERTY()
		UMenu* Parent;

	uint32 Index;




};
