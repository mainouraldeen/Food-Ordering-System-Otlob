#pragma once

using System::String;
using System::Collections::Generic::List;



ref class person
{
protected:


public:
	static String^ Name, ^ Email, ^ Password;
	static int ID;
	person();
	virtual void showProfile() = 0;
};