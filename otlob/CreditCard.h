#pragma once
#include<fstream>
#include <iostream>
#include <string>
#include <iostream>
#include<msclr\marshal_cppstd.h>

namespace otlob {
	using namespace std;
	using namespace System::IO;
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreditCard
	/// </summary>
	public ref class CreditCard : public System::Windows::Forms::Form
	{
	public:
		CreditCard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreditCard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(68, 103);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(52, 22);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Done";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreditCard::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 46);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Enter your creditcard code";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(62, 74);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(68, 20);
			this->textBox1->TabIndex = 6;
			// 
			// CreditCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(196, 177);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"CreditCard";
			this->Text = L"CreditCard";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void checkCreditCard()
		{
			string creditCardCode;
			creditCardCode = marshal_as<string>(textBox1->Text);
			//a-check 3al code fel register law sa7 ykml law 3'alat atl3lo messagebox a2olo 3'alat
			ifstream custFile("Cust.txt");
			string line;
			bool a = false;
			int count = 1;

			if (custFile.is_open())
			{
				while (getline(custFile, line))
				{
					if (count % 8 == 0)
					{
						if (creditCardCode == line)
						{
							a = true;
						}
					}
					count++;
				}
			}
			custFile.close();
			if (!a)
			{
				MessageBox::Show("Wrong code");
			}
			else
			{
				this->Hide();
				this->Close();
			}

		}
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		checkCreditCard();
	}
	};
}
