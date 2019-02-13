#pragma once
#pragma once
#include<string>
#include"deliveryBoy.h"
#include"governorate.h"
#include<iostream>
#include<map>
#include"unManagedItemClass.h"
#include<string>
#include<string>
#include<list>
using System::String;
using System::Collections::Generic::List;
using System::Collections::Generic::Dictionary;
using namespace std;

class unManagedRestaurant
{
public:
	string name;//rest name
	string timee;
	governorate resturantarea;
	map<string, list<unManagedItemClass>> foodCategory; //?????????
	void setFoodCategory(string s, list<unManagedItemClass> itemm) {
		foodCategory[s] = itemm;
	}

	map<string, list<string>> getCites()
	{
		return resturantarea.getGovernorate();
	}
	int rating;
	int offers;
	string feedBack, governourate;
		
	void clear() {
		foodCategory.clear();
	}
	unManagedRestaurant() {
		offers = 0;
	};
	~unManagedRestaurant() {};
};

