#pragma once

using System::String;
ref class ItemClass
{
	String^ name;
	int quantity, price;
public:

	ItemClass();
	void SetName(String^ name)
	{
		this->name = name;

	}
	void SetQuantity(int quantity)
	{
		this->quantity = quantity;
	}
	void SetPrice(int price)
	{
		this->price = price;
	}

	String^ GetName()
	{
		return name;
	}

	int GetQuantity()
	{
		return quantity;
	}

	int GetPrice()
	{
		return price;
	}
};

