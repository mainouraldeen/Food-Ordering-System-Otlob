#pragma once
#include<iostream>
#include<map>
#include<string>
#include<string>
#include<list>
using System::String;
using System::Collections::Generic::List;
using System::Collections::Generic::Dictionary;
using namespace std;

class governorate
{
public:
	map<string, list<string>>mm;
	void setgovernorate(string s, list<string> l) {
		mm[s] = l;
	}
	map<string, list<string>> getGovernorate() {
		return mm;
	}
	governorate();
	~governorate();
};

