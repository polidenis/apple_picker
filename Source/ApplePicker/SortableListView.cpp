// Fill out your copyright notice in the Description page of Project Settings.


#include "SortableListView.h"
#include "ComparableInterface.h"


void USortableListView::Sort()
{
	int32 size = this->ListItems.Num();
	std::cout << size;
	if (size > 0)
	{
		//IComparableInterface* tmp = Cast<IComparableInterface>(this->ListItems[0].Get());
		
		this->ListItems.Sort([](UObject& Ptr1,  UObject& Ptr2)
			{
				//IComparableInterface* tmp = Cast<IComparableInterface>(&Ptr1);
				return IComparableInterface::Execute_Compare(&Ptr1, &Ptr2);
				//return tmp->Compare(&Ptr2);
			});
		// std::cout << tmp;
		// if (HoveredObject->GetClass()->ImplementsInterface(UBTWorldInteractionInterface::StaticClass()))

	}
}