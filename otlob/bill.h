#pragma once
#include "DeliveryBoy.h"
#include "ItemClass.h"

using System::String;
using System::Collections::Generic::List;
using System::DateTime;


ref class bill
{

private:
	int ID;
	float deliveryFee;
	String ^ResturantName;
	float totalPrice;
	DateTime^ date;//3ayzeen data type lel date wl timer
	deliveryBoy^ deliverBoy;

public: List<ItemClass^>item;
public:
	bill() { /*date = new int[3];*/
		deliveryFee = 10;
	};
	void setDeliveryFee(float delFee)
	{
		deliveryFee = delFee;
	}
	void setRestName(String^ restName)
	{
		ResturantName = restName;
	}
	void setPrice(float totalPrc)
	{
		totalPrice = totalPrc;
	}

	void setDate(DateTime^ time)
	{
		date = time;
	}

	void SetListItem(ItemClass^ itemslist)
	{

		item.Add(itemslist);
	}

	void SetID(int id)
	{
		ID = id;
	}

	void SetDelBoy(deliveryBoy^ delBoy)
	{
		this->deliverBoy = delBoy;
	}

	deliveryBoy^ GetDelBoy()
	{
		return deliverBoy;
	}

	int GetID()
	{
		return ID;
	}


	int GetDeliveryFee()
	{
		return deliveryFee;
	}

	String^ GetRestName()
	{
		return ResturantName;
	}

	float GetTotaPrice()
	{
		return totalPrice;
	}

	DateTime^ GetDate()
	{
		return date;
	}



	/*void show();
	~Bill();*/
};