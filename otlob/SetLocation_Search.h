#pragma once
#include <fstream>
#include <string>
#include <istream>
#include <iostream>
#include<list>
#include<set>
#include<map>
#include "customer.h"
#include "bill.h"
#include "ItemClass.h"
#include "MoneyValueVoucher.h"
#include "PercentageVoucher.h" 
#include"unManagedItemClass.h"
#include"unManagedRestaurant.h"
#include"governorate.h"
#include "creditCard.h"
#include<msclr\marshal_cppstd.h>

namespace otlob {
	using namespace std;
	using namespace msclr::interop;
	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	System::Collections::Generic::KeyValuePair< String^, List<String^>^>;
	/// <summary>
	/// Summary for SetLocation_Search
	/// </summary>
	public ref class SetLocation_Search : public System::Windows::Forms::Form
	{
	public:
		//Form^ obj;
		SetLocation_Search(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		/*SetLocation_Search(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}*/
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SetLocation_Search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonSignOut;
	private: System::Windows::Forms::TabControl^  tabControl;
	private: System::Windows::Forms::TabPage^  tabPage1Location;






	private: System::Windows::Forms::TabPage^  tabPage2Resturant;
	private: System::Windows::Forms::ComboBox^  SearchByCategoryComboBox;
	private: System::Windows::Forms::DataGridView^  resrurantDataGridView1;


	private: System::Windows::Forms::TabPage^  tabPage3Category;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  CategoryName;
	private: System::Windows::Forms::TabPage^  tabPage4Meals;
	private: System::Windows::Forms::Button^  BackToGategoryFormButton;
	private: System::Windows::Forms::Button^  AddToCartButton;
	private: System::Windows::Forms::DataGridView^  MealsDataGridView;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  MealName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  MealPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  MealQuatity;
	private: System::Windows::Forms::TabPage^  tabPage1ViewItems;
	private: System::Windows::Forms::TextBox^  textBoxVoucherCode;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  cancelButton;
	private: System::Windows::Forms::Button^  confirmButton;
	private: System::Windows::Forms::Button^  backToMealsFormButton;
	private: System::Windows::Forms::DataGridView^  dataGridViewViewItems;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Items;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Quantity;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Delete;
	private: System::Windows::Forms::TabPage^  tabPage1Comments;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  resturantName;
	private: System::Windows::Forms::Button^  DoneButtonForComments;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::RadioButton^  Rate5radioButton;
	private: System::Windows::Forms::RadioButton^  Rate4radioButton;


	private: System::Windows::Forms::RadioButton^  Rate1radioButton;
	private: System::Windows::Forms::TextBox^  CommenttextBox;
	private: System::Windows::Forms::Button^  SearchButton;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  AreaComboBox;

	private: System::Windows::Forms::ComboBox^  CityComboBox;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::RadioButton^  Rate3radioButton;
	private: System::Windows::Forms::RadioButton^  Rate2radioButton;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  RestName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DeliveryTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  offers;
	private: System::Windows::Forms::Button^  button1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SetLocation_Search::typeid));
			this->buttonSignOut = (gcnew System::Windows::Forms::Button());
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1Location = (gcnew System::Windows::Forms::TabPage());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->AreaComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->CityComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2Resturant = (gcnew System::Windows::Forms::TabPage());
			this->SearchByCategoryComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->resrurantDataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->RestName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DeliveryTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->offers = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage3Category = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->CategoryName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage4Meals = (gcnew System::Windows::Forms::TabPage());
			this->BackToGategoryFormButton = (gcnew System::Windows::Forms::Button());
			this->AddToCartButton = (gcnew System::Windows::Forms::Button());
			this->MealsDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->MealName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MealPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MealQuatity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage1ViewItems = (gcnew System::Windows::Forms::TabPage());
			this->textBoxVoucherCode = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->confirmButton = (gcnew System::Windows::Forms::Button());
			this->backToMealsFormButton = (gcnew System::Windows::Forms::Button());
			this->dataGridViewViewItems = (gcnew System::Windows::Forms::DataGridView());
			this->Items = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Delete = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->tabPage1Comments = (gcnew System::Windows::Forms::TabPage());
			this->Rate3radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->Rate2radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->resturantName = (gcnew System::Windows::Forms::TextBox());
			this->DoneButtonForComments = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Rate5radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->Rate4radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->Rate1radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->CommenttextBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl->SuspendLayout();
			this->tabPage1Location->SuspendLayout();
			this->tabPage2Resturant->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resrurantDataGridView1))->BeginInit();
			this->tabPage3Category->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage4Meals->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MealsDataGridView))->BeginInit();
			this->tabPage1ViewItems->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewViewItems))->BeginInit();
			this->tabPage1Comments->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonSignOut
			// 
			this->buttonSignOut->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonSignOut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSignOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSignOut->Location = System::Drawing::Point(478, 2);
			this->buttonSignOut->Name = L"buttonSignOut";
			this->buttonSignOut->Size = System::Drawing::Size(74, 33);
			this->buttonSignOut->TabIndex = 11;
			this->buttonSignOut->Text = L"Log out";
			this->buttonSignOut->UseVisualStyleBackColor = false;
			this->buttonSignOut->Click += gcnew System::EventHandler(this, &SetLocation_Search::buttonSignOut_Click);
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add(this->tabPage1Location);
			this->tabControl->Controls->Add(this->tabPage2Resturant);
			this->tabControl->Controls->Add(this->tabPage3Category);
			this->tabControl->Controls->Add(this->tabPage4Meals);
			this->tabControl->Controls->Add(this->tabPage1ViewItems);
			this->tabControl->Controls->Add(this->tabPage1Comments);
			this->tabControl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl->Location = System::Drawing::Point(12, 41);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(529, 353);
			this->tabControl->TabIndex = 12;
			// 
			// tabPage1Location
			// 
			this->tabPage1Location->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1Location.BackgroundImage")));
			this->tabPage1Location->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1Location->Controls->Add(this->SearchButton);
			this->tabPage1Location->Controls->Add(this->label3);
			this->tabPage1Location->Controls->Add(this->AreaComboBox);
			this->tabPage1Location->Controls->Add(this->CityComboBox);
			this->tabPage1Location->Controls->Add(this->label2);
			this->tabPage1Location->Controls->Add(this->label1);
			this->tabPage1Location->Location = System::Drawing::Point(4, 25);
			this->tabPage1Location->Name = L"tabPage1Location";
			this->tabPage1Location->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1Location->Size = System::Drawing::Size(521, 324);
			this->tabPage1Location->TabIndex = 0;
			this->tabPage1Location->Text = L"Loaction";
			this->tabPage1Location->UseVisualStyleBackColor = true;
			this->tabPage1Location->Click += gcnew System::EventHandler(this, &SetLocation_Search::tabPage1Location_Click_1);
			// 
			// SearchButton
			// 
			this->SearchButton->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->SearchButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SearchButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchButton->Location = System::Drawing::Point(218, 246);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(90, 31);
			this->SearchButton->TabIndex = 19;
			this->SearchButton->Text = L"Search";
			this->SearchButton->UseVisualStyleBackColor = false;
			this->SearchButton->Click += gcnew System::EventHandler(this, &SetLocation_Search::SearchButton_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LightSalmon;
			this->label3->Location = System::Drawing::Point(6, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(350, 57);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Set Your Location";
			// 
			// AreaComboBox
			// 
			this->AreaComboBox->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AreaComboBox->FormattingEnabled = true;
			this->AreaComboBox->Location = System::Drawing::Point(195, 186);
			this->AreaComboBox->Name = L"AreaComboBox";
			this->AreaComboBox->Size = System::Drawing::Size(189, 23);
			this->AreaComboBox->TabIndex = 17;
			this->AreaComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &SetLocation_Search::AreaComboBox_SelectedIndexChanged_1);
			// 
			// CityComboBox
			// 
			this->CityComboBox->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CityComboBox->FormattingEnabled = true;
			this->CityComboBox->Location = System::Drawing::Point(195, 110);
			this->CityComboBox->Name = L"CityComboBox";
			this->CityComboBox->Size = System::Drawing::Size(189, 23);
			this->CityComboBox->TabIndex = 16;
			this->CityComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &SetLocation_Search::CityComboBox_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(107, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 28);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Area:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(107, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 28);
			this->label1->TabIndex = 14;
			this->label1->Text = L"City:";
			// 
			// tabPage2Resturant
			// 
			this->tabPage2Resturant->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2Resturant.BackgroundImage")));
			this->tabPage2Resturant->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage2Resturant->Controls->Add(this->SearchByCategoryComboBox);
			this->tabPage2Resturant->Controls->Add(this->resrurantDataGridView1);
			this->tabPage2Resturant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2Resturant->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tabPage2Resturant->Location = System::Drawing::Point(4, 25);
			this->tabPage2Resturant->Name = L"tabPage2Resturant";
			this->tabPage2Resturant->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2Resturant->Size = System::Drawing::Size(521, 324);
			this->tabPage2Resturant->TabIndex = 1;
			this->tabPage2Resturant->Text = L"Resturant";
			this->tabPage2Resturant->UseVisualStyleBackColor = true;
			// 
			// SearchByCategoryComboBox
			// 
			this->SearchByCategoryComboBox->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchByCategoryComboBox->FormattingEnabled = true;
			this->SearchByCategoryComboBox->Location = System::Drawing::Point(126, 66);
			this->SearchByCategoryComboBox->Name = L"SearchByCategoryComboBox";
			this->SearchByCategoryComboBox->Size = System::Drawing::Size(245, 26);
			this->SearchByCategoryComboBox->TabIndex = 1;
			this->SearchByCategoryComboBox->Text = L"Search in resturant by category";
			this->SearchByCategoryComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &SetLocation_Search::SearchByCategoryComboBox_SelectedIndexChanged);
			// 
			// resrurantDataGridView1
			// 
			this->resrurantDataGridView1->AllowUserToAddRows = false;
			this->resrurantDataGridView1->AllowUserToDeleteRows = false;
			this->resrurantDataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->resrurantDataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->RestName,
					this->DeliveryTime, this->offers
			});
			this->resrurantDataGridView1->Location = System::Drawing::Point(98, 123);
			this->resrurantDataGridView1->Name = L"resrurantDataGridView1";
			this->resrurantDataGridView1->ReadOnly = true;
			this->resrurantDataGridView1->Size = System::Drawing::Size(342, 148);
			this->resrurantDataGridView1->TabIndex = 0;
			this->resrurantDataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SetLocation_Search::resrurantDataGridView1_CellContentClick);
			// 
			// RestName
			// 
			this->RestName->HeaderText = L"Resturant Name";
			this->RestName->Name = L"RestName";
			this->RestName->ReadOnly = true;
			// 
			// DeliveryTime
			// 
			this->DeliveryTime->HeaderText = L"Delivery Time";
			this->DeliveryTime->Name = L"DeliveryTime";
			this->DeliveryTime->ReadOnly = true;
			// 
			// offers
			// 
			this->offers->HeaderText = L"offers";
			this->offers->Name = L"offers";
			this->offers->ReadOnly = true;
			// 
			// tabPage3Category
			// 
			this->tabPage3Category->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage3Category.BackgroundImage")));
			this->tabPage3Category->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage3Category->Controls->Add(this->dataGridView2);
			this->tabPage3Category->Location = System::Drawing::Point(4, 25);
			this->tabPage3Category->Name = L"tabPage3Category";
			this->tabPage3Category->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3Category->Size = System::Drawing::Size(521, 324);
			this->tabPage3Category->TabIndex = 2;
			this->tabPage3Category->Text = L"Category";
			this->tabPage3Category->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->CategoryName });
			this->dataGridView2->Location = System::Drawing::Point(177, 57);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(144, 197);
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SetLocation_Search::dataGridView2_CellContentClick);
			// 
			// CategoryName
			// 
			this->CategoryName->HeaderText = L"Category Name";
			this->CategoryName->Name = L"CategoryName";
			this->CategoryName->ReadOnly = true;
			// 
			// tabPage4Meals
			// 
			this->tabPage4Meals->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage4Meals.BackgroundImage")));
			this->tabPage4Meals->Controls->Add(this->BackToGategoryFormButton);
			this->tabPage4Meals->Controls->Add(this->AddToCartButton);
			this->tabPage4Meals->Controls->Add(this->MealsDataGridView);
			this->tabPage4Meals->Location = System::Drawing::Point(4, 25);
			this->tabPage4Meals->Name = L"tabPage4Meals";
			this->tabPage4Meals->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4Meals->Size = System::Drawing::Size(521, 324);
			this->tabPage4Meals->TabIndex = 3;
			this->tabPage4Meals->Text = L"Meals";
			this->tabPage4Meals->UseVisualStyleBackColor = true;
			// 
			// BackToGategoryFormButton
			// 
			this->BackToGategoryFormButton->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BackToGategoryFormButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BackToGategoryFormButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->BackToGategoryFormButton->Location = System::Drawing::Point(82, 281);
			this->BackToGategoryFormButton->Name = L"BackToGategoryFormButton";
			this->BackToGategoryFormButton->Size = System::Drawing::Size(118, 31);
			this->BackToGategoryFormButton->TabIndex = 2;
			this->BackToGategoryFormButton->Text = L"Back";
			this->BackToGategoryFormButton->UseVisualStyleBackColor = false;
			this->BackToGategoryFormButton->Click += gcnew System::EventHandler(this, &SetLocation_Search::BackToGategoryFormButton_Click);
			// 
			// AddToCartButton
			// 
			this->AddToCartButton->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->AddToCartButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddToCartButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddToCartButton->Location = System::Drawing::Point(335, 281);
			this->AddToCartButton->Name = L"AddToCartButton";
			this->AddToCartButton->Size = System::Drawing::Size(118, 31);
			this->AddToCartButton->TabIndex = 1;
			this->AddToCartButton->Text = L"Add to cart";
			this->AddToCartButton->UseVisualStyleBackColor = false;
			this->AddToCartButton->Click += gcnew System::EventHandler(this, &SetLocation_Search::AddToCartButton_Click);
			// 
			// MealsDataGridView
			// 
			this->MealsDataGridView->AllowUserToAddRows = false;
			this->MealsDataGridView->AllowUserToDeleteRows = false;
			this->MealsDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->MealsDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->MealName,
					this->MealPrice, this->MealQuatity
			});
			this->MealsDataGridView->Location = System::Drawing::Point(82, 89);
			this->MealsDataGridView->Name = L"MealsDataGridView";
			this->MealsDataGridView->Size = System::Drawing::Size(343, 172);
			this->MealsDataGridView->TabIndex = 0;
			this->MealsDataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SetLocation_Search::MealsDataGridView_CellContentClick);
			// 
			// MealName
			// 
			this->MealName->HeaderText = L"Name";
			this->MealName->Name = L"MealName";
			// 
			// MealPrice
			// 
			this->MealPrice->HeaderText = L"Price";
			this->MealPrice->Name = L"MealPrice";
			// 
			// MealQuatity
			// 
			this->MealQuatity->HeaderText = L"Quantity";
			this->MealQuatity->Name = L"MealQuatity";
			// 
			// tabPage1ViewItems
			// 
			this->tabPage1ViewItems->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1ViewItems.BackgroundImage")));
			this->tabPage1ViewItems->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1ViewItems->Controls->Add(this->textBoxVoucherCode);
			this->tabPage1ViewItems->Controls->Add(this->label5);
			this->tabPage1ViewItems->Controls->Add(this->label4);
			this->tabPage1ViewItems->Controls->Add(this->radioButton2);
			this->tabPage1ViewItems->Controls->Add(this->radioButton1);
			this->tabPage1ViewItems->Controls->Add(this->cancelButton);
			this->tabPage1ViewItems->Controls->Add(this->confirmButton);
			this->tabPage1ViewItems->Controls->Add(this->backToMealsFormButton);
			this->tabPage1ViewItems->Controls->Add(this->dataGridViewViewItems);
			this->tabPage1ViewItems->Location = System::Drawing::Point(4, 25);
			this->tabPage1ViewItems->Name = L"tabPage1ViewItems";
			this->tabPage1ViewItems->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1ViewItems->Size = System::Drawing::Size(521, 324);
			this->tabPage1ViewItems->TabIndex = 4;
			this->tabPage1ViewItems->Text = L"viewItems";
			this->tabPage1ViewItems->UseVisualStyleBackColor = true;
			this->tabPage1ViewItems->Click += gcnew System::EventHandler(this, &SetLocation_Search::tabPage1ViewItems_Click);
			// 
			// textBoxVoucherCode
			// 
			this->textBoxVoucherCode->Font = (gcnew System::Drawing::Font(L"Sitka Small", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxVoucherCode->Location = System::Drawing::Point(201, 276);
			this->textBoxVoucherCode->Name = L"textBoxVoucherCode";
			this->textBoxVoucherCode->Size = System::Drawing::Size(125, 26);
			this->textBoxVoucherCode->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(6, 276);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(179, 24);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Enter voucher code:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(-1, 237);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(200, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Select WayOfPayment:";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->radioButton2->Location = System::Drawing::Point(327, 239);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(69, 28);
			this->radioButton2->TabIndex = 5;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Cash";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->radioButton1->Location = System::Drawing::Point(201, 237);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(125, 28);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Credit Card";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &SetLocation_Search::radioButton1_CheckedChanged);
			// 
			// cancelButton
			// 
			this->cancelButton->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->cancelButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelButton->Location = System::Drawing::Point(402, 287);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(113, 32);
			this->cancelButton->TabIndex = 3;
			this->cancelButton->Text = L"Cancel Order";
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &SetLocation_Search::cancelButton_Click);
			// 
			// confirmButton
			// 
			this->confirmButton->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->confirmButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->confirmButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmButton->Location = System::Drawing::Point(402, 239);
			this->confirmButton->Name = L"confirmButton";
			this->confirmButton->Size = System::Drawing::Size(113, 31);
			this->confirmButton->TabIndex = 2;
			this->confirmButton->Text = L"Confirm";
			this->confirmButton->UseVisualStyleBackColor = false;
			this->confirmButton->Click += gcnew System::EventHandler(this, &SetLocation_Search::confirmButton_Click);
			// 
			// backToMealsFormButton
			// 
			this->backToMealsFormButton->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->backToMealsFormButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backToMealsFormButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backToMealsFormButton->Location = System::Drawing::Point(6, 6);
			this->backToMealsFormButton->Name = L"backToMealsFormButton";
			this->backToMealsFormButton->Size = System::Drawing::Size(74, 30);
			this->backToMealsFormButton->TabIndex = 1;
			this->backToMealsFormButton->Text = L"Back";
			this->backToMealsFormButton->UseVisualStyleBackColor = false;
			// 
			// dataGridViewViewItems
			// 
			this->dataGridViewViewItems->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewViewItems->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Items,
					this->Price, this->Quantity, this->Delete
			});
			this->dataGridViewViewItems->Location = System::Drawing::Point(41, 79);
			this->dataGridViewViewItems->Name = L"dataGridViewViewItems";
			this->dataGridViewViewItems->Size = System::Drawing::Size(444, 152);
			this->dataGridViewViewItems->TabIndex = 0;
			this->dataGridViewViewItems->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SetLocation_Search::dataGridViewViewItems_CellContentClick);
			// 
			// Items
			// 
			this->Items->HeaderText = L"Items";
			this->Items->Name = L"Items";
			// 
			// Price
			// 
			this->Price->HeaderText = L"Price";
			this->Price->Name = L"Price";
			// 
			// Quantity
			// 
			this->Quantity->HeaderText = L"Quantity";
			this->Quantity->Name = L"Quantity";
			// 
			// Delete
			// 
			this->Delete->HeaderText = L"Delete";
			this->Delete->Name = L"Delete";
			this->Delete->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Delete->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// tabPage1Comments
			// 
			this->tabPage1Comments->BackColor = System::Drawing::Color::Transparent;
			this->tabPage1Comments->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1Comments.BackgroundImage")));
			this->tabPage1Comments->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1Comments->Controls->Add(this->Rate3radioButton);
			this->tabPage1Comments->Controls->Add(this->Rate2radioButton);
			this->tabPage1Comments->Controls->Add(this->label14);
			this->tabPage1Comments->Controls->Add(this->label13);
			this->tabPage1Comments->Controls->Add(this->label12);
			this->tabPage1Comments->Controls->Add(this->label11);
			this->tabPage1Comments->Controls->Add(this->label10);
			this->tabPage1Comments->Controls->Add(this->label9);
			this->tabPage1Comments->Controls->Add(this->label8);
			this->tabPage1Comments->Controls->Add(this->resturantName);
			this->tabPage1Comments->Controls->Add(this->DoneButtonForComments);
			this->tabPage1Comments->Controls->Add(this->label7);
			this->tabPage1Comments->Controls->Add(this->label6);
			this->tabPage1Comments->Controls->Add(this->Rate5radioButton);
			this->tabPage1Comments->Controls->Add(this->Rate4radioButton);
			this->tabPage1Comments->Controls->Add(this->Rate1radioButton);
			this->tabPage1Comments->Controls->Add(this->CommenttextBox);
			this->tabPage1Comments->Location = System::Drawing::Point(4, 25);
			this->tabPage1Comments->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1Comments->Name = L"tabPage1Comments";
			this->tabPage1Comments->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1Comments->Size = System::Drawing::Size(521, 324);
			this->tabPage1Comments->TabIndex = 5;
			this->tabPage1Comments->Text = L"Comments";
			this->tabPage1Comments->Click += gcnew System::EventHandler(this, &SetLocation_Search::tabPage1Comments_Click);
			// 
			// Rate3radioButton
			// 
			this->Rate3radioButton->AutoSize = true;
			this->Rate3radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rate3radioButton->ForeColor = System::Drawing::Color::White;
			this->Rate3radioButton->Location = System::Drawing::Point(412, 149);
			this->Rate3radioButton->Margin = System::Windows::Forms::Padding(2);
			this->Rate3radioButton->Name = L"Rate3radioButton";
			this->Rate3radioButton->Size = System::Drawing::Size(14, 13);
			this->Rate3radioButton->TabIndex = 21;
			this->Rate3radioButton->TabStop = true;
			this->Rate3radioButton->UseVisualStyleBackColor = true;
			// 
			// Rate2radioButton
			// 
			this->Rate2radioButton->AutoSize = true;
			this->Rate2radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rate2radioButton->ForeColor = System::Drawing::Color::White;
			this->Rate2radioButton->Location = System::Drawing::Point(368, 149);
			this->Rate2radioButton->Margin = System::Windows::Forms::Padding(2);
			this->Rate2radioButton->Name = L"Rate2radioButton";
			this->Rate2radioButton->Size = System::Drawing::Size(14, 13);
			this->Rate2radioButton->TabIndex = 20;
			this->Rate2radioButton->TabStop = true;
			this->Rate2radioButton->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::LightSalmon;
			this->label14->Location = System::Drawing::Point(67, 18);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(380, 39);
			this->label14->TabIndex = 19;
			this->label14->Text = L"We Care About Your Opinion";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label13->Location = System::Drawing::Point(481, 131);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(16, 16);
			this->label13->TabIndex = 15;
			this->label13->Text = L"5";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label12->Location = System::Drawing::Point(366, 131);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(16, 16);
			this->label12->TabIndex = 14;
			this->label12->Text = L"2";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label11->Location = System::Drawing::Point(409, 131);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(16, 16);
			this->label11->TabIndex = 13;
			this->label11->Text = L"3";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label10->Location = System::Drawing::Point(447, 131);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(16, 16);
			this->label10->TabIndex = 12;
			this->label10->Text = L"4";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label9->Location = System::Drawing::Point(326, 131);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 16);
			this->label9->TabIndex = 11;
			this->label9->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::IndianRed;
			this->label8->Location = System::Drawing::Point(24, 79);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(280, 28);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Enter the resturant name:";
			// 
			// resturantName
			// 
			this->resturantName->Location = System::Drawing::Point(316, 87);
			this->resturantName->Margin = System::Windows::Forms::Padding(2);
			this->resturantName->Name = L"resturantName";
			this->resturantName->Size = System::Drawing::Size(184, 22);
			this->resturantName->TabIndex = 9;
			// 
			// DoneButtonForComments
			// 
			this->DoneButtonForComments->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->DoneButtonForComments->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DoneButtonForComments->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DoneButtonForComments->Location = System::Drawing::Point(185, 270);
			this->DoneButtonForComments->Margin = System::Windows::Forms::Padding(2);
			this->DoneButtonForComments->Name = L"DoneButtonForComments";
			this->DoneButtonForComments->Size = System::Drawing::Size(136, 31);
			this->DoneButtonForComments->TabIndex = 8;
			this->DoneButtonForComments->Text = L"Send FeedBack";
			this->DoneButtonForComments->UseVisualStyleBackColor = false;
			this->DoneButtonForComments->Click += gcnew System::EventHandler(this, &SetLocation_Search::DoneButtonForComments_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::IndianRed;
			this->label7->Location = System::Drawing::Point(23, 181);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(196, 28);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Write a Comment:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::IndianRed;
			this->label6->Location = System::Drawing::Point(24, 131);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(179, 28);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Rate it from 1-5:";
			// 
			// Rate5radioButton
			// 
			this->Rate5radioButton->AutoSize = true;
			this->Rate5radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rate5radioButton->ForeColor = System::Drawing::Color::White;
			this->Rate5radioButton->Location = System::Drawing::Point(480, 146);
			this->Rate5radioButton->Margin = System::Windows::Forms::Padding(2);
			this->Rate5radioButton->Name = L"Rate5radioButton";
			this->Rate5radioButton->Size = System::Drawing::Size(14, 13);
			this->Rate5radioButton->TabIndex = 5;
			this->Rate5radioButton->TabStop = true;
			this->Rate5radioButton->UseVisualStyleBackColor = true;
			// 
			// Rate4radioButton
			// 
			this->Rate4radioButton->AutoSize = true;
			this->Rate4radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rate4radioButton->ForeColor = System::Drawing::Color::White;
			this->Rate4radioButton->Location = System::Drawing::Point(446, 146);
			this->Rate4radioButton->Margin = System::Windows::Forms::Padding(2);
			this->Rate4radioButton->Name = L"Rate4radioButton";
			this->Rate4radioButton->Size = System::Drawing::Size(14, 13);
			this->Rate4radioButton->TabIndex = 4;
			this->Rate4radioButton->TabStop = true;
			this->Rate4radioButton->UseVisualStyleBackColor = true;
			// 
			// Rate1radioButton
			// 
			this->Rate1radioButton->AutoSize = true;
			this->Rate1radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rate1radioButton->ForeColor = System::Drawing::Color::White;
			this->Rate1radioButton->Location = System::Drawing::Point(325, 146);
			this->Rate1radioButton->Margin = System::Windows::Forms::Padding(2);
			this->Rate1radioButton->Name = L"Rate1radioButton";
			this->Rate1radioButton->Size = System::Drawing::Size(14, 13);
			this->Rate1radioButton->TabIndex = 1;
			this->Rate1radioButton->TabStop = true;
			this->Rate1radioButton->UseVisualStyleBackColor = true;
			// 
			// CommenttextBox
			// 
			this->CommenttextBox->Location = System::Drawing::Point(316, 189);
			this->CommenttextBox->Margin = System::Windows::Forms::Padding(2);
			this->CommenttextBox->Name = L"CommenttextBox";
			this->CommenttextBox->Size = System::Drawing::Size(184, 22);
			this->CommenttextBox->TabIndex = 0;
			this->CommenttextBox->TextChanged += gcnew System::EventHandler(this, &SetLocation_Search::CommenttextBox_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 33);
			this->button1->TabIndex = 13;
			this->button1->Text = L"unregister";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SetLocation_Search::button1_Click);
			// 
			// SetLocation_Search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(554, 411);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl);
			this->Controls->Add(this->buttonSignOut);
			this->Name = L"SetLocation_Search";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Otlob-Search";
			this->Load += gcnew System::EventHandler(this, &SetLocation_Search::SetLocation_Search_Load);
			this->tabControl->ResumeLayout(false);
			this->tabPage1Location->ResumeLayout(false);
			this->tabPage1Location->PerformLayout();
			this->tabPage2Resturant->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resrurantDataGridView1))->EndInit();
			this->tabPage3Category->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage4Meals->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MealsDataGridView))->EndInit();
			this->tabPage1ViewItems->ResumeLayout(false);
			this->tabPage1ViewItems->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewViewItems))->EndInit();
			this->tabPage1Comments->ResumeLayout(false);
			this->tabPage1Comments->PerformLayout();
			this->ResumeLayout(false);

		}

		String^ sel;
		void fillingCityCombo(governorate &bigG) {
			map<string, list<string>>::iterator it;
			for (it = bigG.mm.begin(); it != bigG.mm.end(); it++) {
				string keyyy = it->first;
				String^ KEY = gcnew String(keyyy.c_str());
				CityComboBox->Items->Add(KEY);
			}
		}
		void fillingAreaCombo(governorate &bigG) {
			map<string, list<string>>::iterator it;
			for (it = bigG.mm.begin(); it != bigG.mm.end(); it++) {
				string keyyy = it->first;
				String^ KEY = gcnew String(keyyy.c_str());
				if (sel == KEY) {
					list<string>listofvalue = it->second;
					list<string>::iterator listit = listofvalue.begin();
					for (; listit != listofvalue.end(); listit++) {
						String^ X = gcnew String((*listit).c_str());
						AreaComboBox->Items->Add(X);
					}
				}
			}
		}
		void LoadCityAreaData(governorate &bigG) {

			int count = 0;
			string filesource = "Gov.txt";
			ifstream myfile(filesource);
			string city;
			//String ^CITY;
			string area;
			string temp;


			if (myfile.is_open())
			{

				while (true) {
					list<string>arealist;
					count++;
					bool found = false;
					if (myfile.eof())break;
					if (count % 2 != 0) {
						getline(myfile, city);
						//CITY = gcnew String(city.c_str());

					}
					else if (count % 2 == 0) {
						getline(myfile, area);
						found = false;
						for (int i = 0; i < area.length(); i++) {
							if (area[i] == ' ') {
								//String ^x = gcnew String(temp.c_str());
								arealist.push_back(temp);
								temp = "";
							}
							else if (area[i] != ' ') {
								temp += area[i];
							}
							found = true;
						}
					}
					if (found) {
						bigG.setgovernorate(city, arealist);
					}
				}
			}
			myfile.close();
		}

#pragma endregion
	private: System::Void buttonSignOut_Click(System::Object^  sender, System::EventArgs^  e) {
		
		Application::Exit();
	}
	private: System::Void SearchButton_Click(System::Object^  sender, System::EventArgs^  e) {

	}
		void LoadCityAreaData(ifstream& myfile ,governorate &bigG) {

			int count = 0;
		/*	string filesource = "Gov.txt";
			ifstream myfile(filesource);*/
			 string city;
			 string area;
			 string temp;
			 if (myfile.is_open())
			 {

				 while (true) {
					 list<string>arealist;
					 count++;
					 bool found = false;
					 if (myfile.eof())break;
					 if (count % 2 != 0) {
						 getline(myfile, city);
					 }
					 else if (count % 2 == 0) {
						 getline(myfile, area);
						 found = false;
						 for (int i = 0; i < area.length(); i++) {
							 if (area[i] == ' ') {
								 arealist.push_back(temp);
								 temp = "";
							 }
							 else if (area[i] != ' ') {
								 temp += area[i];
							 }
							 found = true;
						 }
					 }
					 if (found) {
						 bigG.setgovernorate(city, arealist);
					 }
					 if (city == "")break;
				 }
			 }
		}
	public:	System::DateTime ^d;
	public: bool cancel = false;
	private: System::Void SetLocation_Search_Load(System::Object^  sender, System::EventArgs^  e) {
        string filesource = "Gov.txt";
		ifstream myfile(filesource);
		map<string, list<string>>::iterator it;
		governorate bigG;
		LoadCityAreaData(myfile,bigG);
		fillingCityCombo(bigG);
	
		//Birthday voucher

		String^ date=DateTime::Now.ToLongDateString();
		bool cont = false;
		String ^isbirthdaydate= gcnew String("");
		//to take the day & month only
		for (int i = 0; i < date->Length - 7; i++)
		{
			if (date[i] == ' ')
			{
				cont = true;
			}
			if (cont)
			{
				isbirthdaydate += date[i + 1];
			}

		}
		if (isbirthdaydate == customer::BirthDay) {
			ifstream file1("voucher.txt");
			string str;
			String ^x;
			if (file1.is_open()) {

				getline(file1, str);
				getline(file1, str);
				x = gcnew String(str.c_str());

				MessageBox::Show("Happy BirthDay " + customer::Name + " you Got A Free voucher Here Is the code: " + x+".");
			}
			
	}
		//Birthday = Birthday->Trim();//to remove the extra space fl awal
		//if (customer::BirthDay == birth) {

		//}


	}
	private: System::Void tabPage1Location_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void AreaComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		governorate bigG;
		map<string, list<string>>::iterator it;
		LoadCityAreaData(bigG);
	}



				public: void fillTheBillFile()
				{

					
					bill ^b = gcnew bill();
					//ItemClass^ itemlist = gcnew ItemClass;
					//List<ItemClass^>^ lis;
					float price = 0;
					String^ restName = resrurantDataGridView1->SelectedCells[0]->Value->ToString();
					b->setDate(d);
					b->setRestName(restName);
					ofstream billFile;
					string sa;
					ifstream billFileRead("Bill.txt");
					int count = 1; //count 3shan a3d el stor w ashuf 3ndy kam bill 3shan a3ml el ID
					
					

					Voucher^ v;
					string codeVoucher;
					list<string> allVoucherCodes;
					codeVoucher = marshal_as<string>(textBoxVoucherCode->Text);
					string lineVoucher;
					ifstream voucherFile("voucher.txt");
					//voucherFile.open;
					bool pV = false;
					bool mV = false;
					if (voucherFile.is_open())
					{
						while (voucherFile >> lineVoucher)
						{
							if (codeVoucher == lineVoucher)
							{
								if (codeVoucher[0] == 'p')
								{
									v = gcnew PercentageVoucher();
									v->set(textBoxVoucherCode->Text);
									pV = true;
								}
								else if (codeVoucher[0] == 'm')
								{
									v = gcnew MoneyValueVoucher();
									v->set(textBoxVoucherCode->Text);
									mV = true;
								}
							}
							else
							{
								allVoucherCodes.push_back(lineVoucher);
							}
						}
						if (!pV && !mV&&codeVoucher.size() != 0)
						{
							wrongVoucher = true;
							MessageBox::Show("Wrong code");
							return;
						}
						else if (pV)
						{
							b->setPrice(v->CalculateDiscount(b->GetTotaPrice()));
						}
						else if (mV)
						{
							b->setPrice(v->CalculateDiscount(b->GetTotaPrice()));
						}
						else if (codeVoucher.size() == 0)
						{
							wrongVoucher = false;
						}
					}
					voucherFile.clear();
					voucherFile.close();
					ofstream vFile("voucher.txt");
					if (vFile.is_open())
					{
						list<string>::iterator it = allVoucherCodes.begin();
						for (; it != allVoucherCodes.end(); it++)
						{
							vFile << *it << "\n";
						}
					}
					
					if (billFileRead.is_open())
					{
						while (getline(billFileRead, sa))
						{
							int x = (sa.find('/'));
							if (x>0 && x<9)
							{
								count++;
							}
						}
					}
					billFileRead.close();
					b->SetID(count);

					billFile.open("Bill.txt", std::ios_base::app);
					if (billFile.is_open())
					{
						sa = marshal_as<string>(b->GetDate()->ToString());
						billFile << sa << "\n";
						billFile << b->GetID() << "\n";
						billFile << "Resturant name is: ";
						billFile << marshal_as<string>(b->GetRestName());
						billFile << "\n";///////////////////////////
						sa = marshal_as<string>((customer::Name)->ToString());
						billFile << "Customer name is: " << sa << "\n";
						billFile << "Delivery Fee is: " << b->GetDeliveryFee() << "\n";

						for (int i = 0; i < dataGridViewViewItems->Rows->Count - 1; i++)
						{
							sa = marshal_as<string>(dataGridViewViewItems->Rows[i]->Cells[0]->Value->ToString());
							billFile << "Item name is: ";
							billFile << sa << "\n";
							float prc = (Convert::ToInt32(dataGridViewViewItems->Rows[i]->Cells[1]->Value->ToString()));
							price += prc * Convert::ToInt32(dataGridViewViewItems->Rows[i]->Cells[2]->Value->ToString());
							billFile << "Item price is: ";//3ayzeen nfhm xD
							billFile << prc << "\n";
							sa = marshal_as<string>(dataGridViewViewItems->Rows[i]->Cells[2]->Value->ToString());
							billFile << "Item quantity is: ";
							billFile << sa << "\n";

						}
						b->setPrice(price);


						billFile << "Total price is: ";
						billFile << b->GetTotaPrice() + b->GetDeliveryFee();
						billFile << "\n";
						billFile << "Delivery boy name is: ";///////////////////

						ifstream delBoyFile("DeliveryBoy.txt");
						string lineBoy;
						String^ lineBoySys, ^lineBoyID;
						int countBoy = 1;
						int numOfOrders;
						vector<string> listDelBoy;
						bool indexofdelID = false;
						int countForList = 0; //b3ml cont ymshy 3al delBoyFile 3shan lma yla2eeh ygebly index 3shan a3'yaro fel list
						if (delBoyFile.is_open())
						{
							while (getline(delBoyFile, lineBoy))
							{
								if (countBoy % 3 == 1)
								{
									lineBoyID = gcnew String(lineBoy.c_str());
								}
								else if (countBoy % 3 == 0)
								{
									lineBoySys = gcnew String(lineBoy.c_str());
									if (Convert::ToInt32(lineBoySys) < 2)
									{
										numOfOrders = Convert::ToInt32(lineBoySys);
										indexofdelID = true;
									}
								}
								if (!indexofdelID)
									countForList++;
								countBoy++;
								listDelBoy.push_back(lineBoy);
							}
						}
						numOfOrders++;
						String ^ numOrders = gcnew String(numOfOrders.ToString());
						listDelBoy[countForList] = marshal_as<string>(numOrders);

						string deliverBoyID = listDelBoy[countForList - 1];////////////////////////

						delBoyFile.clear();
						delBoyFile.close();


						ofstream delBoyFiletoWrite("DeliveryBoy.txt");
						if (delBoyFiletoWrite.is_open())
						{
							for (int i = 0; i < listDelBoy.size(); i++)
							{
								delBoyFiletoWrite << listDelBoy[i];
								delBoyFiletoWrite << "\n";
							}
						}
						delBoyFiletoWrite.close();

						//billFile << b->GetDelBoy()->GetDelBoyID();
						billFile << deliverBoyID;
						billFile << "\n";
					}

					billFile.close();

					ofstream CustomerBillIDs;
					CustomerBillIDs.open("CustomerBillIDs.txt", std::ios_base::app);
					if (CustomerBillIDs.is_open())
					{
						CustomerBillIDs << customer::ID << "\n" << b->GetID() << "\n";
					}
					CustomerBillIDs.close();
					vFile.close();
				}
				bool wrongVoucher = false;
private: System::Void confirmButton_Click(System::Object^  sender, System::EventArgs^  e) {

	d = DateTime::Now;
	if (!radioButton1->Checked && !radioButton2->Checked)
	{
		MessageBox::Show("You must choose how to pay!");
	}

	else if (cancel == false)
	{
		fillTheBillFile();
		if (wrongVoucher == false) {
			MessageBox::Show("Done");
		}
	}
			
	
}
private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
	System::DateTime ^Dat = DateTime::Now;
	if (Dat->Minute - d->Minute >1 && Dat->Hour == d->Hour)
	{

		MessageBox::Show("You can't cancel the order");
	}
	else
	{
		cancel = true;
	}
}

		 public: void getFeedBack()
		 {

			 int rate = 0;
			 string comment = marshal_as<string>(CommenttextBox->Text);
			 string restName = marshal_as<string>(resturantName->Text);
			 if (Rate1radioButton->Checked)
			 {
				 rate = 1;
			 }
			 else if (Rate2radioButton->Checked)
			 {
				 rate = 2;
			 }
			 else if (Rate3radioButton->Checked)
			 {
				 rate = 3;
			 }
			 else if (Rate4radioButton->Checked)
			 {
				 rate = 4;
			 }
			 else if (Rate5radioButton->Checked)
			 {
				 rate = 5;
			 }

			 ofstream commentsFile;
			 commentsFile.open("feedback.txt", std::ios_base::app);
			 if (commentsFile.is_open())
			 {
				 commentsFile << restName << "\n";
				 commentsFile << rate << "\n";
				 commentsFile << comment << "\n";
			 }
			 /////////////////
			 commentsFile.close();
		 }
private: System::Void DoneButtonForComments_Click(System::Object^  sender, System::EventArgs^  e) {

	getFeedBack();

}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (radioButton1->Checked)
	{
		CreditCard c;
		c.ShowDialog();
	}
}
private: System::Void dataGridViewViewItems_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

	if (dataGridViewViewItems->Rows[e->RowIndex]->Cells[3]->Selected)
	{
		dataGridViewViewItems->Rows->RemoveAt(e->RowIndex);
	}
}
private: System::Void tabPage1Location_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void AreaComboBox_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {

	governorate bigG;
	string filesource = "Gov.txt";
	ifstream myfile(filesource);
	map<string, list<string>>::iterator it;
	LoadCityAreaData(myfile, bigG);
	myfile.close();
}
		 double offerRest;
		 String^ resturantselected;
private: System::Void resrurantDataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	//gridViewSelected = 1;
	//lama y5tar mat3am y7ot al categories bta3to fe 
	offerRest =Convert::ToDouble (resrurantDataGridView1->Rows[e->RowIndex]->Cells[2]->Value->ToString());
	//String^ resttName = resrurantDataGridView1->SelectedCells[0]->Value->ToString();
	resturantselected = resrurantDataGridView1->SelectedCells[0]->Value->ToString();
	string chosenRest = marshal_as<string>(resturantselected->ToString());
	list<unManagedRestaurant>rere = fillResturantGridView();
	list<unManagedRestaurant>::iterator listIT = rere.begin();
	
		dataGridView2->Rows->Clear();

		for (; listIT != rere.end(); listIT++) {
			if (listIT->name == chosenRest) {
				map<string, list<unManagedItemClass>>::iterator mapIT = listIT->foodCategory.begin();
				for (; mapIT != listIT->foodCategory.end(); mapIT++)
				{
					String^catName = gcnew String(mapIT->first.c_str());
					dataGridView2->Rows->Add(catName);
				}
			}
		}tabControl->SelectTab("tabPage3Category");

}
private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	String^ resstName = resrurantDataGridView1->SelectedCells[0]->Value->ToString();
	string r = marshal_as<string>(resturantselected->ToString());
	String^selectedcatt = dataGridView2->SelectedCells[0]->Value->ToString();
	list<unManagedRestaurant>rere = fillResturantGridView();
	list<unManagedRestaurant>::iterator listIT = rere.begin();
	string s = marshal_as<string>(selectedcatt);
	MealsDataGridView->Rows->Clear();
	

	for (; listIT != rere.end(); listIT++) {
		if (listIT->name == r) {
			map<string, list<unManagedItemClass>>::iterator mapIT = listIT->foodCategory.begin();
			for (; mapIT != listIT->foodCategory.end(); mapIT++)
			{
				if (mapIT->first == s)
				{//bamla al items according to chosen category
					list<unManagedItemClass>::iterator listitemIT = mapIT->second.begin();
					for (; listitemIT != mapIT->second.end(); listitemIT++) {
						String^itemName = gcnew String(listitemIT->name.c_str());
						String^itemPrice = gcnew String(listitemIT->price.ToString());
						String^itemQuantity = gcnew String("0");
						MealsDataGridView->Rows->Add(itemName, itemPrice,itemQuantity);
					}
				}
			}
		}
	}
	
	tabControl->SelectTab("tabPage4Meals");
}

private: System::Void AddToCartButton_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ itNmae = MealsDataGridView->SelectedCells[0]->Value->ToString();
	String^ itprice = MealsDataGridView->SelectedCells[1]->Value->ToString();
	String^ itQuantity = MealsDataGridView->SelectedCells[2]->Value->ToString();
	if (itQuantity == "0") {
		MessageBox::Show("yoou need to set the quantity of the chosen meal first");
	}
	else {
		subtractQuantity(itQuantity);
		dataGridViewViewItems->Rows->Add(itNmae, itprice, itQuantity);
		MessageBox::Show("Added");
	}
}
private: System::Void MealsDataGridView_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

}



		 void setOffers(list<unManagedRestaurant> &resturantList) {
			 list<unManagedRestaurant>::iterator restLstIt = resturantList.begin();
			 int randRest = rand() % resturantList.size();
			 int randOffer = (rand() % 50) + 10;
			 int counter = 0;
			 for (; restLstIt != resturantList.end(); restLstIt++)
			 {
				 if (counter == randRest)
				 {
					 restLstIt->offers = randOffer;
					 break;
				 }
				 ++counter;
			 }
			 int secRandRest = rand() % resturantList.size();
			 while (secRandRest == randRest)
			 {
				 secRandRest = rand() % resturantList.size();
			 }
			 restLstIt = resturantList.begin();
			 counter = 0;
			 randOffer = (rand() % 50) + 10;

			 for (; restLstIt != resturantList.end(); restLstIt++)
			 {
				 if (counter == randRest)
				 {
					 restLstIt->offers = randOffer;
					 break;
				 }
				 ++counter;
			 }
		 }
		 list<unManagedRestaurant> getResturantsList()
		 {
			 string filesource = "Rest.txt";
			 ifstream myfile(filesource);
			 string temp;
			 unManagedRestaurant restaurant;
			 list<unManagedRestaurant>listrest;
			 map<string, list<unManagedItemClass>> foodCategory;


			 string catname;
			 string meal;

			 int count = 0;
			 if (myfile.is_open())
			 {
				 while (true) {
					 bool addrest = false;
					 ++count;
					 if (myfile.eof())break;
					 if (count == 1) {
						 getline(myfile, temp);
						 restaurant.name = temp;
					 }
					 else if (count == 2) {
						 getline(myfile, temp);
						 restaurant.timee = temp;
					 }
					 else if (count == 3 || count == 7 || count == 11) {
						 list<unManagedItemClass>meals;
						 getline(myfile, catname);
						 for (int i = 1; i <= 4; i++) {

							 if (i == 1)continue;
							 else {
								 count++;
								 getline(myfile, meal);
								 int mealcount = 0;
								 string tempmeal = "";
								 unManagedItemClass ii;
								 for (int j = 0; j < meal.length(); j++) {
									 if (meal[j] != ' ') {
										 tempmeal += meal[j];
										 if (j == meal.length() - 1) {
											 String^y = gcnew String(tempmeal.c_str());
											 ii.SetQuantity(System::Convert::ToInt32(y));
										 }
									 }
									 else if (meal[j] == ' ') {
										 mealcount++;
										 if (mealcount == 1) {
											 ii.SetName(tempmeal);
										 }
										 else if (mealcount == 2) {
											 String^x = gcnew String(tempmeal.c_str());
											 ii.SetPrice(System::Convert::ToInt32(x));
										 }

										 tempmeal = "";
									 }
								 }
								 meals.push_back(ii);
							 }
						 }
						 restaurant.setFoodCategory(catname, meals);
					 }
					 else
					 {
						 addrest = true;
						 LoadCityAreaData(myfile, restaurant.resturantarea);
					 }
					 if (addrest) {
						 listrest.push_back(restaurant);
						 count = 0;
						 restaurant.clear();
					 }

				 }

			 }
			 myfile.close();
			 return listrest;
		 }
		 void fillCategoryComboBox(map<string, list<unManagedItemClass>>myMap, set<string>&categoryKeys)
		 {
			 map<string, list<unManagedItemClass>>::iterator mapIT = myMap.begin();
			 for (; mapIT != myMap.end(); mapIT++)
			 {
				 categoryKeys.insert(mapIT->first);
			 }
		 }
		 bool catcomboboxIsFull = false;
		 //show according to customer's area and city
		 list<unManagedRestaurant> fillResturantGridView()
		 {
			 resrurantDataGridView1->Rows->Clear();
			 list<unManagedRestaurant> resturantList = getResturantsList();
			 string cityFromComboBox = marshal_as<string>(CityComboBox->SelectedItem->ToString());
			 string areaFromComboBox = marshal_as<string>(AreaComboBox->SelectedItem->ToString());
			 list<unManagedRestaurant>returnedRestaurant;
			 list<unManagedRestaurant>::iterator restListIeratort = resturantList.begin();
			 map<string, list<string>> citiesAndAreas;
			 list<string> areasList;
			 set<string>categoryKeys;
			 bool foundrestaurant = false;

			 for (; restListIeratort != resturantList.end(); restListIeratort++)
			 {
				 citiesAndAreas = restListIeratort->getCites();
				 map<string, list<string>>::iterator cityAndAreaIterator = citiesAndAreas.begin();

				 for (; cityAndAreaIterator != citiesAndAreas.end(); cityAndAreaIterator++)
				 {
					 if (cityFromComboBox == cityAndAreaIterator->first)
					 {
						 areasList = cityAndAreaIterator->second;
						 list<string>::iterator areaListIterator = areasList.begin();
						 for (; areaListIterator != areasList.end(); areaListIterator++)
						 {
							 if (areaFromComboBox == *areaListIterator)
							 {
								 foundrestaurant = true;
								 String ^ restName = gcnew String(restListIeratort->name.c_str());
								 String ^ restDelTime = gcnew String(restListIeratort->timee.c_str());
								 String ^ restOffer = gcnew String(restListIeratort->offers.ToString());
								 returnedRestaurant.push_back(*restListIeratort);
								 fillCategoryComboBox(restListIeratort->foodCategory, categoryKeys);
							 }
						 }

					 }
				 }
			 }
			 if (!foundrestaurant)return returnedRestaurant;
			 setOffers(returnedRestaurant);
			 list<unManagedRestaurant>::iterator it = returnedRestaurant.begin();
			 for (; it != returnedRestaurant.end(); it++) {
				 String^name = gcnew String(it->name.c_str());
				 String^time = gcnew String(it->timee.c_str());
				 String^offer = gcnew String(it->offers.ToString());

				 resrurantDataGridView1->Rows->Add(name, time, offer);
			 }
			 set<string>::iterator setIT = categoryKeys.begin();
			 //bmla el combobox mn el set ely ana b3tha
			 if (!catcomboboxIsFull)
				 for (; setIT != categoryKeys.end(); setIT++)
				 {
					 catcomboboxIsFull = true;
					 String^s = gcnew String((*setIT).c_str());
					 SearchByCategoryComboBox->Items->Add(s);
					 //dataGridView2->Rows->Add(s);
				 }

			 return returnedRestaurant;
		 }

private: System::Void SearchButton_Click_1(System::Object^  sender, System::EventArgs^  e) {
	list<unManagedRestaurant>Rlist = fillResturantGridView();
	if (Rlist.empty()) {
		MessageBox::Show("sorry , there is no restaurant in the area selected");
	}
	else
	tabControl->SelectTab("tabPage2Resturant");
}
private: System::Void CityComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	AreaComboBox->Items->Clear();
	sel = CityComboBox->SelectedItem->ToString();
	int index = 0;
	map<string, list<string>>::iterator it;
	governorate bigG;
	LoadCityAreaData(bigG);
	fillingAreaCombo(bigG);

}
		 bool comboBoxSelected = 0, gridViewSelected = 0;
private: System::Void SearchByCategoryComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	comboBoxSelected = 1;
	String^sselectedcat = SearchByCategoryComboBox->SelectedItem->ToString();
	list<unManagedRestaurant>rere = fillResturantGridView();
	list<unManagedRestaurant>::iterator listIT = rere.begin();
	string s = marshal_as<string>(sselectedcat);
	resrurantDataGridView1->Rows->Clear();

	for (; listIT != rere.end(); listIT++) {
		map<string, list<unManagedItemClass>>::iterator mapIT = listIT->foodCategory.begin();

		for (; mapIT != listIT->foodCategory.end(); mapIT++)
		{
			if (mapIT->first == s)
			{
				String^name = gcnew String(listIT->name.c_str());
				String^time = gcnew String(listIT->timee.c_str());
				String^offer = gcnew String(listIT->offers.ToString());

				resrurantDataGridView1->Rows->Add(name, time, offer);
				break;
			}
		}
	}
}
		 
private: System::Void BackToGategoryFormButton_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl->SelectTab("tabPage3Category");
}
private: System::Void tabPage1Comments_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void CommenttextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
		 void writeInRestFile(list<unManagedRestaurant>&wholeResturant) {
			 // writefile.clear();
			 string filesource = "Rest.txt";
			 ofstream writefile(filesource);
			 list<unManagedRestaurant>::iterator listIT = wholeResturant.begin();
			 for (; listIT != wholeResturant.end(); listIT++) {
				 writefile << listIT->name << "\n";
				 writefile << listIT->timee << "\n";
				 map<string, list<unManagedItemClass>>::iterator mapIT = listIT->foodCategory.begin();
				 for (; mapIT != listIT->foodCategory.end(); mapIT++)
				 {
					 writefile << mapIT->first << "\n";
					 list<unManagedItemClass>::iterator listitemIT = mapIT->second.begin();
					 for (; listitemIT != mapIT->second.end(); listitemIT++) {
						 writefile << listitemIT->name << " " << listitemIT->price << " " << listitemIT->quantity << "\n";
					 }

				 }

				 //listIT = wholeResturant.begin();
				 map<string, list<string>>::iterator cityIT = listIT->resturantarea.mm.begin();
				 for (; cityIT != listIT->resturantarea.mm.end(); cityIT++) {
					 writefile << cityIT->first << "\n";
					 list<string>::iterator areaIT = cityIT->second.begin();
					 for (; areaIT != cityIT->second.end(); areaIT++) {
						 writefile << *areaIT << " ";
					 }
					 writefile << "\n";

				 }
				 writefile << "\n";
			 }
			 writefile.close();

		 }
		 void subtractQuantity(String^ itQuantity) {
			 int save = 0;
			 string filesource = "Rest.txt";
			 list<unManagedRestaurant>wholeResturant = getResturantsList();
			 list<unManagedRestaurant>::iterator listIT = wholeResturant.begin();
			 String^ selsectedrest = resrurantDataGridView1->SelectedCells[0]->Value->ToString();
			 String^selecteddcat = dataGridView2->SelectedCells[0]->Value->ToString();
			 String^ selecteditem = MealsDataGridView->SelectedCells[0]->Value->ToString();
			 string restName = marshal_as<string>(selsectedrest);
			 string catName = marshal_as<string>(selecteddcat);
			 string itNmae = marshal_as<string>(selecteditem);
			 bool found = false;
			 //ofstream myfile(filesource);
			 for (; listIT != wholeResturant.end(); listIT++) {
				 if (listIT->name == restName) {
					 map<string, list<unManagedItemClass>>::iterator mapIT = listIT->foodCategory.begin();
					 for (; mapIT != listIT->foodCategory.end(); mapIT++)
					 {
						 if (mapIT->first == catName)
						 {
							 list<unManagedItemClass>::iterator listitemIT = mapIT->second.begin();
							 for (; listitemIT != mapIT->second.end(); listitemIT++) {
								 if (listitemIT->name == itNmae) {
									 int wantedQuantity = Convert::ToInt32(itQuantity);
									 save = (listitemIT->quantity) - wantedQuantity;
									 if (save < 0) {
										 MessageBox::Show("you can't order with this quantity");
									 }
									 else {
										 listitemIT->quantity = save;
										 writeInRestFile(wholeResturant);
										 found = true;
										 break;
									 }
								 }
							 }
						 }

						 if (found)break;
					 }
				 }

				 if (found)break;
			 }
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	// hashelo mn file el password w el mail
		ifstream myfiles("Email_Pass.txt");//,std::ios::binary|ios::ate);
	string Line, reqmail;
	List<String^>^mailfiledata = gcnew List<String^>();
	String ^x;
	if (myfiles.is_open())
	{
		int count = 0;
		while (getline(myfiles, Line)) {

			//myfile.tellg(); btrag3 size el file w m7taga el str ele foo2
			x = gcnew String(Line.c_str());
			mailfiledata->Add(x);

			if (x == customer::Email && count % 2 == 0)
			{
				reqmail = Line;
			}
			count++;
		}

	}
	myfiles.clear();
	myfiles.close();

	//write the file again
	ofstream mailfile;
	String ^str = gcnew String(reqmail.c_str());
	mailfile.open("Email_Pass.txt");

	for (int i = 0; i <mailfiledata->Count; i++) {
		if (mailfiledata[i] == str) {
			i++;
			mailfile << " " << '\n';
			mailfile << " " << '\n';
		}
		else {
			std::string q = msclr::interop::marshal_as<std::string>(mailfiledata[i]);
			mailfile << q << '\n';
		}

	}
	mailfile.close();


	MessageBox::Show(" We hope you come back soon.", "successfully removed!");
	Application::Exit();
}
private: System::Void tabPage1ViewItems_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
