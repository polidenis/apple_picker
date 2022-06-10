// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "SortableListView.generated.h"

/**
 * 
 */
UCLASS()
class APPLEPICKER_API USortableListView : public UListView
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Sort")
	void Sort() 
	{
		int32 size = this->ListItems.Num();
		std::cout << size;
		if (size > 0)
		{
			// ULogData* tmp = Cast<ULogData>(this->ListItems[0].Get());
			// std::cout << tmp;
		}
	}
};
