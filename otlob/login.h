#pragma once
#include "login.h"
#include "ManagerForm.h"
//#include "Essential.h" //el 2 dool homa ele by3mlo el moshkla
#include "Register.h"
#include "SetLocation_Search.h"
#include <fstream>
#include <string>
#include <istream>
#include <iostream>
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
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		//Form^ ff;
		login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	/*public:
		login(Form ^f)
		{
			ff = f;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}*/

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::Button^  buttonRegister;
	private: System::Windows::Forms::Button^  buttonLogin;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBoxPass;
	private: System::Windows::Forms::TextBox^  textBoxMail;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonRegister = (gcnew System::Windows::Forms::Button());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxPass = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMail = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(2, 252);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(290, 28);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Don\'t have an account yet \?";
			// 
			// buttonRegister
			// 
			this->buttonRegister->BackColor = System::Drawing::SystemColors::GrayText;
			this->buttonRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRegister->Location = System::Drawing::Point(237, 303);
			this->buttonRegister->Name = L"buttonRegister";
			this->buttonRegister->Size = System::Drawing::Size(103, 33);
			this->buttonRegister->TabIndex = 26;
			this->buttonRegister->Text = L"Register";
			this->buttonRegister->UseVisualStyleBackColor = false;
			this->buttonRegister->Click += gcnew System::EventHandler(this, &login::buttonRegister_Click_1);
			// 
			// buttonLogin
			// 
			this->buttonLogin->BackColor = System::Drawing::SystemColors::GrayText;
			this->buttonLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLogin->Location = System::Drawing::Point(237, 216);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(103, 33);
			this->buttonLogin->TabIndex = 25;
			this->buttonLogin->Text = L"Login";
			this->buttonLogin->UseVisualStyleBackColor = false;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &login::buttonLogin_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(78, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 28);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Password:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(78, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 28);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Mail:";
			// 
			// textBoxPass
			// 
			this->textBoxPass->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPass->Location = System::Drawing::Point(212, 159);
			this->textBoxPass->MaxLength = 6;
			this->textBoxPass->Name = L"textBoxPass";
			this->textBoxPass->Size = System::Drawing::Size(189, 24);
			this->textBoxPass->TabIndex = 22;
			this->textBoxPass->UseSystemPasswordChar = true;
			// 
			// textBoxMail
			// 
			this->textBoxMail->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxMail->Location = System::Drawing::Point(212, 101);
			this->textBoxMail->MaxLength = 50;
			this->textBoxMail->Name = L"textBoxMail";
			this->textBoxMail->Size = System::Drawing::Size(189, 24);
			this->textBoxMail->TabIndex = 21;
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(554, 411);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->buttonRegister);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxPass);
			this->Controls->Add(this->textBoxMail);
			this->Name = L"login";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Otlob-login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:
 String ^AdminMail = gcnew String("admin");
 String ^AdminPass = gcnew String("admin");


private: System::Void buttonLogin_Click_1(System::Object^  sender, System::EventArgs^  e) {

	String ^Mail = gcnew String(textBoxMail->Text);
	String ^password = gcnew String(textBoxPass->Text);

	//check if admin
	if (Mail == password && Mail=="admin") {

		//go to manager form Nada's Form
		this->Hide();
		ManagerForm^ searchForm = gcnew ManagerForm();
		searchForm->ShowDialog();
		
		
	}
	else {
		string filesource = "Email_Pass.txt";
		ifstream myfile(filesource);//,std::ios::binary|ios::ate);
		string Line;
		bool isfound = false;
		String ^x;
		if (myfile.is_open())
		{
			int count = 0;
			while (getline(myfile, Line)) {

				//myfile.tellg(); btrag3 size el file w m7taga el str ele foo2
				x = gcnew String(Line.c_str());
				if (x == Mail && count % 2 == 0)
				{
					isfound = true;
				}
				else
				{
					if (x == password && isfound == true)
					{
						MessageBox::Show("Welcome!");
						//go to customer file and take all of his data and set in class
						ReadcustomerDataFromFile(Mail);
						//MessageBox::Show(customer::ID+" "+ customer::BirthDay + " " + customer::CreditCardCode + " " + customer::Name + " " + customer::Email + " " +customer::Password );
						this->Hide();
						SetLocation_Search^ searchForm = gcnew SetLocation_Search();
						searchForm->ShowDialog();
						return;

					}

				}
				count++;
			}
			if (!isfound || x != password)
				MessageBox::Show("Please Check your mail and password and try again.");
		}
	}
}

		 void ReadcustomerDataFromFile(String^ mail) {

			 string filesource = "Cust.txt";
			 ifstream myfile(filesource);
			 string Line;

			 customer ^CurrentCustmer = gcnew customer();
			 List<String^>^ l = gcnew List<String^>();

			 int count;
			 if (myfile.is_open())
			 {
				 bool IsFound = false;
				 while (getline(myfile, Line)) {
					 String ^x = gcnew String(Line.c_str());
					 if (x == mail)
					 {
						 IsFound = true;
						 count = 0;
					 }
					 if (IsFound)
					 {
						 if (count == 8) 
							 break;
						 else
						 {
							 l->Insert(count, x);
							 count++;
						 }
					 }
				 }
				 CurrentCustmer->setData(System::Convert::ToInt32(l[1]), l[2], l[0], l[3], l[5], l[7]);
			 }

		 }

private: System::Void buttonRegister_Click_1(System::Object^  sender, System::EventArgs^  e) {

	Register ^R = gcnew Register();//this);
	this->Hide();
	R->ShowDialog();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//SetLocation_Search ^s = gcnew SetLocation_Search();
	//this->Hide();
	//s->ShowDialog();
}
};
}
