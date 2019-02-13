#pragma once
#include"customer.h"
#include <fstream>
#include <string>
#include <istream>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include "SetLocation_Search.h"


namespace otlob {

	using namespace std;
	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		//Form ^f;
		Register(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	/*public:
		Register(Form ^f1)
		{
			f = f1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}*/
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^  dateTimePickerBirthday;
	protected:
	private: System::Windows::Forms::TextBox^  textBoxPhoneNumber;
	private: System::Windows::Forms::TextBox^  textBoxcreditcard;
	private: System::Windows::Forms::TextBox^  textBoxAdress;
	private: System::Windows::Forms::TextBox^  textBoxMail;
	private: System::Windows::Forms::TextBox^  textBoxPassword;
	private: System::Windows::Forms::TextBox^  textBoxName;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  buttonRegister;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;

	protected:































	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->dateTimePickerBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBoxPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxcreditcard = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdress = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMail = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonRegister = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// dateTimePickerBirthday
			// 
			this->dateTimePickerBirthday->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePickerBirthday->Location = System::Drawing::Point(215, 225);
			this->dateTimePickerBirthday->Name = L"dateTimePickerBirthday";
			this->dateTimePickerBirthday->Size = System::Drawing::Size(205, 21);
			this->dateTimePickerBirthday->TabIndex = 81;
			// 
			// textBoxPhoneNumber
			// 
			this->textBoxPhoneNumber->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPhoneNumber->Location = System::Drawing::Point(215, 187);
			this->textBoxPhoneNumber->MaxLength = 11;
			this->textBoxPhoneNumber->Name = L"textBoxPhoneNumber";
			this->textBoxPhoneNumber->Size = System::Drawing::Size(205, 27);
			this->textBoxPhoneNumber->TabIndex = 80;
			// 
			// textBoxcreditcard
			// 
			this->textBoxcreditcard->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxcreditcard->Location = System::Drawing::Point(215, 302);
			this->textBoxcreditcard->MaxLength = 12;
			this->textBoxcreditcard->Name = L"textBoxcreditcard";
			this->textBoxcreditcard->Size = System::Drawing::Size(205, 27);
			this->textBoxcreditcard->TabIndex = 79;
			// 
			// textBoxAdress
			// 
			this->textBoxAdress->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAdress->Location = System::Drawing::Point(215, 257);
			this->textBoxAdress->Name = L"textBoxAdress";
			this->textBoxAdress->Size = System::Drawing::Size(205, 27);
			this->textBoxAdress->TabIndex = 78;
			// 
			// textBoxMail
			// 
			this->textBoxMail->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxMail->Location = System::Drawing::Point(215, 107);
			this->textBoxMail->MaxLength = 50;
			this->textBoxMail->Name = L"textBoxMail";
			this->textBoxMail->Size = System::Drawing::Size(205, 27);
			this->textBoxMail->TabIndex = 77;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassword->Location = System::Drawing::Point(215, 144);
			this->textBoxPassword->MaxLength = 6;
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(205, 27);
			this->textBoxPassword->TabIndex = 76;
			this->textBoxPassword->UseSystemPasswordChar = true;
			// 
			// textBoxName
			// 
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxName->Location = System::Drawing::Point(215, 66);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(205, 27);
			this->textBoxName->TabIndex = 75;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(23, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 29);
			this->label4->TabIndex = 74;
			this->label4->Text = L"*";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(23, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 29);
			this->label1->TabIndex = 73;
			this->label1->Text = L"*";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(23, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 29);
			this->label3->TabIndex = 72;
			this->label3->Text = L"*";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(23, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 29);
			this->label2->TabIndex = 71;
			this->label2->Text = L"*";
			// 
			// buttonRegister
			// 
			this->buttonRegister->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRegister->Location = System::Drawing::Point(395, 359);
			this->buttonRegister->Name = L"buttonRegister";
			this->buttonRegister->Size = System::Drawing::Size(107, 31);
			this->buttonRegister->TabIndex = 70;
			this->buttonRegister->Text = L"Sign Up";
			this->buttonRegister->UseVisualStyleBackColor = false;
			this->buttonRegister->Click += gcnew System::EventHandler(this, &Register::buttonRegister_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Cornsilk;
			this->label8->Location = System::Drawing::Point(42, 257);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 28);
			this->label8->TabIndex = 69;
			this->label8->Text = L"Adress:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Cornsilk;
			this->label9->Location = System::Drawing::Point(42, 295);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(137, 28);
			this->label9->TabIndex = 68;
			this->label9->Text = L"Credit Card:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Cornsilk;
			this->label10->Location = System::Drawing::Point(42, 107);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 28);
			this->label10->TabIndex = 67;
			this->label10->Text = L"Mail:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Cornsilk;
			this->label11->Location = System::Drawing::Point(42, 144);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(117, 28);
			this->label11->TabIndex = 66;
			this->label11->Text = L"Password:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Cornsilk;
			this->label12->Location = System::Drawing::Point(42, 218);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(110, 28);
			this->label12->TabIndex = 65;
			this->label12->Text = L"Birthday:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Cornsilk;
			this->label13->Location = System::Drawing::Point(42, 180);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(169, 28);
			this->label13->TabIndex = 64;
			this->label13->Text = L"Phone Number:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Cornsilk;
			this->label14->Location = System::Drawing::Point(42, 59);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(78, 28);
			this->label14->TabIndex = 63;
			this->label14->Text = L"Name:";
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(554, 411);
			this->Controls->Add(this->dateTimePickerBirthday);
			this->Controls->Add(this->textBoxPhoneNumber);
			this->Controls->Add(this->textBoxcreditcard);
			this->Controls->Add(this->textBoxAdress);
			this->Controls->Add(this->textBoxMail);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonRegister);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Name = L"Register";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Otlob-Register";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) //registerButton
	{
		
		
				

	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}


private: System::Void buttonRegister_Click(System::Object^  sender, System::EventArgs^  e) {

	customer ^CurrentCustmer = gcnew customer();
	int ID = 0;
	String ^name = gcnew String(textBoxName->Text);
	String ^Mail = gcnew String(textBoxMail->Text);
	String ^password = gcnew String(textBoxPassword->Text);
	String ^creditCard = gcnew String(textBoxcreditcard->Text);
	String ^phone = gcnew String(textBoxPhoneNumber->Text);
	String ^address = gcnew String(textBoxAdress->Text);

	String ^s = gcnew String(dateTimePickerBirthday->Text);
	bool cont = false;

	String ^Birthday = gcnew String("");
	//to take the day & month only
	for (int i = 0; i < s->Length - 7; i++)
	{
		if (s[i] == ',')
		{
			cont = true;
		}
		if (cont)
		{
			Birthday += s[i + 1];
		}

	}
	Birthday = Birthday->Trim();//to remove the extra space fl awal

	//String^ date;
	//date = DateTime::Now.ToLongDateString();
	//assure that all necessary textboxs are filled
	if (name == "" || Mail == "" || password == "" || phone == "") {
		MessageBox::Show("Please fill the missing data!");
		return;
	}


	//check if the mail exist or not(As We Use it as Username)
	ifstream file("Email_Pass.txt");
	string Line;
	bool isfound = false;

	if (file.is_open()) {
		int count = 0;

		while (getline(file, Line)) {
			String ^x = gcnew String(Line.c_str());

			if (count % 2 == 0 && x == Mail)
			{
				MessageBox::Show("Sorry This Mail Already Exists Write Another One.");
				isfound = true;
				return;
			}
			count++;

		}
	}
	//write in the file of(Mail_Password)
	if (!isfound) {
		ofstream myfile;
		myfile.open("Email_Pass.txt", std::ios_base::app);
		std::string q = msclr::interop::marshal_as<std::string>(Mail);

		myfile << q << '\n';
		std::string z = msclr::interop::marshal_as<std::string>(password);
		myfile << z << '\n';

		myfile.close();
	}

	//Setting The Id Number To be written in customer file
	if (!isfound) {

		ifstream file("Email_Pass.txt");

		while (getline(file, Line)) {
			ID++;
		}
	}

	CurrentCustmer->setData(ID,name, Mail, password, Birthday, creditCard);

	String^ id = (ID / 2).ToString();


	//write in the file of (Customer)
	if (!isfound) {
		ofstream myfile;
		myfile.open("Cust.txt", std::ios_base::app);

		std::string m = msclr::interop::marshal_as<std::string>(Mail);
		std::string idd = msclr::interop::marshal_as<std::string>(id);
		std::string n = msclr::interop::marshal_as<std::string>(name);
		std::string p = msclr::interop::marshal_as<std::string>(password);
		std::string ph = msclr::interop::marshal_as<std::string>(phone);
		std::string birth = msclr::interop::marshal_as<std::string>(Birthday);
		std::string add = msclr::interop::marshal_as<std::string>(address);
		std::string cc = msclr::interop::marshal_as<std::string>(creditCard);

		myfile << m << '\n';
		myfile << idd << '\n';
		myfile << n << '\n';
		myfile << p << '\n';
		myfile << ph << '\n';
		myfile << birth << '\n';
		myfile << add << '\n';
		myfile << cc << '\n';

		myfile.close();
	}
	//a Free Voucher
	ifstream file1("voucher.txt");
	string str;
	String ^x;
	if (file1.is_open()) {
	
		    getline(file1, str);
		    x = gcnew String(str.c_str());

		}
	



	MessageBox::Show("CONGRATS " + name + " you got a free voucher as you are a new customer ^_^ "+"Voucher Code is: "+x, "Successfully Added!");
	SetLocation_Search ^searchForm=gcnew SetLocation_Search();
	this->Hide();
	searchForm->ShowDialog();


}
};





}
