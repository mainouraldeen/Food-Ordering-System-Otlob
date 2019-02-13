
#pragma once
#include "person.h"
#include "bill.h"


ref class customer : public person
{


public:

	static List<bill^>listOfBills;
	static String ^CreditCardCode;
	static String^ BirthDay;
	customer()
	{ 						 
	}

	void setData(int id,String^ name, String^ mail, String ^pass, String^ birthdate, String^ credit)
	{
		this->ID = id;
		this->Name = name;
		this->Email = mail;
		this->Password = pass;

		this->BirthDay = birthdate;
		this->CreditCardCode = credit;

	}

	void showProfile()override {};
	bill^ makeOrder() {
		bill^ b = gcnew bill();
		return b;

	}; 
	//nshuf de tany
	void sendFeedBack() {};
	//viewSpecialOffer();


private:

};