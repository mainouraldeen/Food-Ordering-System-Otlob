#pragma once
#include"Person.h"
#include"bill.h"
#include<vector>

using System::Collections::Generic::List;
using System::String;
using namespace std;

ref class ManagerClass:public person
{
public:
	ManagerClass();
	void showProfile()override{};
	void addEmployee(String^ name);
	void removeEmployee(String^ empID);
	List<String^>^ showBillInSpecificDate(String^wantedDate);
	List<String^>^showBillBySpecificCustomer(List<String^>^billIDs);
	String^ viewProductQuantity(vector<string>&v,string item);
	List<String^>^ viewComments(string restaurant);
};