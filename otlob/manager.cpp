#pragma once
#include "manager.h"
#include"DeliveryBoy.h"
#include"Person.h"
#include<fstream>
#include<istream>
#include<ostream>
#include<list>
#include<vector>
#include<string>
#include<msclr\marshal_cppstd.h>


using System::String;
using namespace msclr::interop;
using System::String;
using namespace System;
using namespace System::IO;
using namespace System::Collections;
using namespace std;
using namespace System::Windows::Forms;



ManagerClass::ManagerClass()
{
}
void ManagerClass::addEmployee(String^ name)
{


	ifstream stream("DeliveryBoy.txt");
	string line;
	vector<string>delBoys;
	int lastID;
	String^ID;

	while (getline(stream, line))
	{
		delBoys.push_back(line);
	}


	stream.close();


	ID = gcnew String(delBoys[delBoys.size() - 3].c_str());

	lastID = Convert::ToInt32(ID);

	deliveryBoy^ newBoy = gcnew deliveryBoy();
	newBoy->ID = ++lastID;
	newBoy->Name = name;
	newBoy->numOfOrder = 0;

	ofstream fileDelBoy("DeliveryBoy.txt", std::ios_base::app);

	fileDelBoy << newBoy->ID << '\n';

	String^N = newBoy->Name;
	string Name = marshal_as<std::string>(N);
	fileDelBoy << Name << '\n';

	fileDelBoy << newBoy->numOfOrder << '\n';


	fileDelBoy.close();

}

String^ ManagerClass::viewProductQuantity(vector<string>&v, string item)
{
	for (int i = 0; i < v.size(); i++)
	{
		if (item == v[i])
		{
			String ^s = gcnew String(v[i + 2].c_str());
			//quantityLlabel->Text = "Restaurant " + restaurantComboBox->SelectedItem->ToString() + " has " + s + " " + choosenItem;
			return s;
		}
	}
}

void ManagerClass::removeEmployee(String^ empID)
{
	//h2ra el boys ely 3ndy
	ifstream stream("DeliveryBoy.txt");
	List<String^>^arr = gcnew List<String^>();
	int index = 0;

	if (stream.is_open())
	{
		string line;
		int counter = 0;
		while (getline(stream, line))
		{
			String^x = gcnew String(line.c_str());
			if (empID == x)//lao  howa ely 3aiza 2msa7oh dh el id
			{
				counter = 1;
				continue;
			}
			if (counter == 1) {//lao  howa ely 3aiza 2msa7oh dh el name bta3oh
				counter = 2;
				continue;
			}
			else if (counter == 2)//lao  howa ely 3aiza 2msa7oh dh el #orders bta3oh
			{
				counter = 3;
				continue;
			}
			else if (empID != x)//msh 3aiza 2msa7oh
			{
				arr->Insert(index, x);
				++index;
			}
		}

		stream.close();
	}
	else {
		MessageBox::Show("Can't read file in fn removeEmp()");
	}
	//bms7 el file
	string fileToDelete = "DeliveryBoy.txt";
	if (remove(fileToDelete.c_str()) != 0)
	{
		MessageBox::Show("Deleted");
	}
	//hktb b2a el list tany
	//std::ios_base::app ios::app
	ofstream myfile("DeliveryBoy.txt", std::ios_base::app);

	for (int i = 0; i < index; i++)
	{
		String^x = arr[i];
		string s = marshal_as<std::string>(x);
		myfile << s << '\n';
	}
	myfile.close();
}

List<String^>^ ManagerClass::showBillInSpecificDate(String^wantedDate)
{
	ifstream stream("Bill.txt");
	string line;
	List<String^>^myList = gcnew List<String^>();//el bills ely liha nfs el tari5
	int counter = 0;
	bool foundBill = 0;



	while (getline(stream, line))
	{
		String ^s = gcnew String(line.c_str());
		String^billDate = "";
		int slashIndex = line.find('/');

		if (foundBill && (slashIndex < 0 || slashIndex > line.size()))//law la2et el tari5 w el satr dh msh el tari5
		{
			myList->Add(s);
			continue;
		}
		if (slashIndex >= 0 && slashIndex < line.size())//el satr bta3 el tari5
		{
			int stringIndex = 0;

			while (s[stringIndex] != ' ')
			{
				if (s[stringIndex] != '/')
				{
					billDate += s[stringIndex];
				}
				++stringIndex;
			}


			if (billDate == wantedDate)
			{
				foundBill = 1;
			}
			else
				foundBill = 0;
		}
	}


	stream.close();
	return myList;
}

//msh 3arfa
List<String^>^ ManagerClass::showBillBySpecificCustomer(List<String^>^billIDs)
{
	ifstream stream("Bill.txt");
	string line;
	int lineCounter = 0, billCounter = 0/*, index = 0*/;
	int addCounter;
	List<String^>^res = gcnew List<String^>();
	bool foundDate = 0;

	bool foundBillID = 0;

	if (stream.is_open())
	{
		while (getline(stream, line))
		{
			String ^s = gcnew String(line.c_str());

			if (foundDate)//el satr el tany el id bta3 el bill
			{
				foundBillID = 0;
				for (int i = 0; i < billIDs->Count; i++)
				{
					if (s == billIDs[i])
					{
						foundBillID = 1;
						break;
					}
				}
			
				foundDate = 0;
			}

			if (foundBillID)
			{
				res->Add(s);
				//MessageBox::Show(s);
			
			}

			if (line.find('/') >= 0 && line.find('/') < line.size())//el tari5
			{
				foundDate = 1;
				continue;
			}
			else
				foundDate = 0;


		}

	}
	else
	{
		MessageBox::Show("Can't open file!!!");
	}

	stream.close();

	return res;
}
List<String^>^ ManagerClass::viewComments(string restaurant)
{
	ifstream stream("feedback.txt");
	List<String^>^feedBack = gcnew List<String^>();
	string line;
	int counter = 0;
	bool found = 0;

	if (stream.is_open())
	{
		while (getline(stream, line))
		{
			if (counter % 3 != 0 && found == true)
			{
				String^s = gcnew String(line.c_str());
				feedBack->Add(s);
			}
			if (counter % 3 == 0)
			{
				if (line == restaurant)//esm el rest ely 3aiza el comments bta3toh
				{
					found = 1;
				}
				else
				{
					found = 0;
				}
			}
			++counter;
		}
	}
	else
	{
		MessageBox::Show("Can't open file to view comments");
	}


	stream.close();

	return feedBack;
}
