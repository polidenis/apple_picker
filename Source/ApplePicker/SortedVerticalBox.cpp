// Fill out your copyright notice in the Description page of Project Settings.


#include "SortedVerticalBox.h"
#include "ComparableInterface.h"

void USortedVerticalBox::Sort()
{
	TArray<UWidget*> list = this->GetAllChildren();
	list.Sort([](UObject& Ptr1, UObject& Ptr2)
		{
			return IComparableInterface::Execute_Compare(&Ptr1, &Ptr2);
			//return tmp->Compare(&Ptr2);
		});

	this->ClearChildren();

	for (UWidget* item : list) 
	{
		this->AddChild(item);
	}
}