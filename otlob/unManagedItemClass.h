#pragma once
#pragma once
#include<string>
#include"deliveryBoy.h"
#include<iostream>
#include<map>
#include<string>
#include<string>
#include<list>
using System::String;
using System::Collections::Generic::List;
using System::Collections::Generic::Dictionary;
using namespace std;
using System::String;

class unManagedItemClass
{
public:
	string name;
	int quantity, price;
	void SetName(string name)
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
	string GetName()
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
	unManagedItemClass() {};
	~unManagedItemClass() {};
};

