// Fill out your copyright notice in the Description page of Project Settings.


#include "ServerRowx.h"
#include "Menu.h"
#include "Components/Button.h"

void UServerRowx::Setup(UMenu* InParent, uint32 InIndex)
{
	Index = InIndex;
	Parent = InParent;
	RowButton->OnClicked.AddDynamic(this,&UServerRowx::OnClicked);



}

void UServerRowx::OnClicked()
{
	if (Parent) {
		Parent->SelectIndex(Index);


	}

}
