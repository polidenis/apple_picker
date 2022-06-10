// Fill out your copyright notice in the Description page of Project Settings.


#include "SortableListView.h"
#include "ComparableInterface.h"


void USortableListView::Sort()
{
	this->ListItems.Sort([](UObject& Ptr1,  UObject& Ptr2)
		{
			return IComparableInterface::Execute_Compare(&Ptr1, &Ptr2);
			//return tmp->Compare(&Ptr2);
		});
}