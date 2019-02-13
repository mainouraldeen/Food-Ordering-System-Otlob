#pragma once
#include"manager.h"
//#include "Essential.h"
#include<istream>
#include <sstream>
#include<string>
#include<ostream>
#include<fstream>
#include<msclr\marshal_cppstd.h>
#include<map>
#include<list>
#include<vector>
#include<cstring>
namespace otlob {
	using namespace std;
	//using namespace Functions;
	using System::Windows::Forms::DateTimePicker;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace::msclr::interop;

	/// <summary>
	/// Summary for ManagerForm
	/// </summary>
	public ref class ManagerForm : public System::Windows::Forms::Form
	{
	public:
		ManagerForm(void)
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
		~ManagerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  quantityLlabel;
	protected:
	private: System::Windows::Forms::Button^  viewButton;
	private: System::Windows::Forms::ComboBox^  itemComboBox;
	private: System::Windows::Forms::ComboBox^  categoryComboBox;
	private: System::Windows::Forms::ComboBox^  restaurantComboBox;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  buttonView;


	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Button^  buttonShowByCustomer;

	private: System::Windows::Forms::Button^  buttonShowByDate;

	private: System::Windows::Forms::Button^  deleteButton;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Delivery_Boy;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridView^  removeDataGridView;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  nameTextBox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ComboBox^  restaurantCommentsComboBox;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ManagerForm::typeid));
			this->quantityLlabel = (gcnew System::Windows::Forms::Label());
			this->viewButton = (gcnew System::Windows::Forms::Button());
			this->itemComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->categoryComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->restaurantComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->buttonView = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->buttonShowByCustomer = (gcnew System::Windows::Forms::Button());
			this->buttonShowByDate = (gcnew System::Windows::Forms::Button());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->Delivery_Boy = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->removeDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->restaurantCommentsComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage4->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->removeDataGridView))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->SuspendLayout();
			// 
			// quantityLlabel
			// 
			this->quantityLlabel->AutoSize = true;
			this->quantityLlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quantityLlabel->Location = System::Drawing::Point(141, 170);
			this->quantityLlabel->Name = L"quantityLlabel";
			this->quantityLlabel->Size = System::Drawing::Size(0, 18);
			this->quantityLlabel->TabIndex = 7;
			this->quantityLlabel->Visible = false;
			// 
			// viewButton
			// 
			this->viewButton->BackColor = System::Drawing::SystemColors::ControlDark;
			this->viewButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewButton->Location = System::Drawing::Point(404, 87);
			this->viewButton->Name = L"viewButton";
			this->viewButton->Size = System::Drawing::Size(88, 30);
			this->viewButton->TabIndex = 6;
			this->viewButton->Text = L"Check";
			this->viewButton->UseVisualStyleBackColor = false;
			this->viewButton->Click += gcnew System::EventHandler(this, &ManagerForm::viewButton_Click);
			// 
			// itemComboBox
			// 
			this->itemComboBox->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemComboBox->FormattingEnabled = true;
			this->itemComboBox->Location = System::Drawing::Point(199, 96);
			this->itemComboBox->Name = L"itemComboBox";
			this->itemComboBox->Size = System::Drawing::Size(177, 25);
			this->itemComboBox->TabIndex = 5;
			// 
			// categoryComboBox
			// 
			this->categoryComboBox->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->categoryComboBox->FormattingEnabled = true;
			this->categoryComboBox->Location = System::Drawing::Point(199, 58);
			this->categoryComboBox->Name = L"categoryComboBox";
			this->categoryComboBox->Size = System::Drawing::Size(177, 25);
			this->categoryComboBox->TabIndex = 4;
			this->categoryComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &ManagerForm::categoryComboBox_SelectedIndexChanged);
			// 
			// restaurantComboBox
			// 
			this->restaurantComboBox->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->restaurantComboBox->FormattingEnabled = true;
			this->restaurantComboBox->Location = System::Drawing::Point(199, 25);
			this->restaurantComboBox->Name = L"restaurantComboBox";
			this->restaurantComboBox->Size = System::Drawing::Size(177, 25);
			this->restaurantComboBox->TabIndex = 3;
			this->restaurantComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &ManagerForm::restaurantComboBox_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(27, 93);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 24);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Choose Item:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(27, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(176, 24);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Choose Restaurant:";
			// 
			// tabPage4
			// 
			this->tabPage4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage4.BackgroundImage")));
			this->tabPage4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage4->Controls->Add(this->quantityLlabel);
			this->tabPage4->Controls->Add(this->viewButton);
			this->tabPage4->Controls->Add(this->itemComboBox);
			this->tabPage4->Controls->Add(this->categoryComboBox);
			this->tabPage4->Controls->Add(this->restaurantComboBox);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Location = System::Drawing::Point(4, 24);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(522, 338);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"View Quantity";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(27, 55);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(157, 24);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Choose Category:";
			// 
			// buttonView
			// 
			this->buttonView->BackColor = System::Drawing::SystemColors::ControlDark;
			this->buttonView->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonView->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonView->Location = System::Drawing::Point(420, 127);
			this->buttonView->Name = L"buttonView";
			this->buttonView->Size = System::Drawing::Size(75, 30);
			this->buttonView->TabIndex = 5;
			this->buttonView->Text = L"View";
			this->buttonView->UseVisualStyleBackColor = false;
			this->buttonView->Click += gcnew System::EventHandler(this, &ManagerForm::buttonView_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage3->Controls->Add(this->buttonView);
			this->tabPage3->Controls->Add(this->listBox1);
			this->tabPage3->Controls->Add(this->comboBox1);
			this->tabPage3->Controls->Add(this->dateTimePicker1);
			this->tabPage3->Controls->Add(this->buttonShowByCustomer);
			this->tabPage3->Controls->Add(this->buttonShowByDate);
			this->tabPage3->Location = System::Drawing::Point(4, 24);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(522, 338);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"View Bills";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(115, 173);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(295, 139);
			this->listBox1->TabIndex = 4;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(198, 79);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(223, 25);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->Visible = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(198, 27);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(223, 21);
			this->dateTimePicker1->TabIndex = 2;
			this->dateTimePicker1->Visible = false;
			// 
			// buttonShowByCustomer
			// 
			this->buttonShowByCustomer->BackColor = System::Drawing::SystemColors::ControlDark;
			this->buttonShowByCustomer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonShowByCustomer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonShowByCustomer->Location = System::Drawing::Point(6, 74);
			this->buttonShowByCustomer->Name = L"buttonShowByCustomer";
			this->buttonShowByCustomer->Size = System::Drawing::Size(171, 30);
			this->buttonShowByCustomer->TabIndex = 1;
			this->buttonShowByCustomer->Text = L"Show by Customer";
			this->buttonShowByCustomer->UseVisualStyleBackColor = false;
			this->buttonShowByCustomer->Click += gcnew System::EventHandler(this, &ManagerForm::buttonShowByCustomer_Click);
			// 
			// buttonShowByDate
			// 
			this->buttonShowByDate->BackColor = System::Drawing::SystemColors::ControlDark;
			this->buttonShowByDate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonShowByDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonShowByDate->Location = System::Drawing::Point(6, 21);
			this->buttonShowByDate->Name = L"buttonShowByDate";
			this->buttonShowByDate->Size = System::Drawing::Size(171, 30);
			this->buttonShowByDate->TabIndex = 0;
			this->buttonShowByDate->Text = L"Show by Date";
			this->buttonShowByDate->UseVisualStyleBackColor = false;
			this->buttonShowByDate->Click += gcnew System::EventHandler(this, &ManagerForm::buttonShowByDate_Click);
			// 
			// deleteButton
			// 
			this->deleteButton->BackColor = System::Drawing::SystemColors::ControlDark;
			this->deleteButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteButton->Location = System::Drawing::Point(360, 185);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(97, 43);
			this->deleteButton->TabIndex = 2;
			this->deleteButton->Text = L"Delete";
			this->deleteButton->UseVisualStyleBackColor = false;
			this->deleteButton->Click += gcnew System::EventHandler(this, &ManagerForm::deleteButton_Click);
			// 
			// Delivery_Boy
			// 
			this->Delivery_Boy->HeaderText = L"Delivery_Boy";
			this->Delivery_Boy->Name = L"Delivery_Boy";
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			// 
			// removeDataGridView
			// 
			this->removeDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->removeDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->ID,
					this->Delivery_Boy
			});
			this->removeDataGridView->Location = System::Drawing::Point(29, 78);
			this->removeDataGridView->Name = L"removeDataGridView";
			this->removeDataGridView->Size = System::Drawing::Size(244, 150);
			this->removeDataGridView->TabIndex = 3;
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage2->Controls->Add(this->removeDataGridView);
			this->tabPage2->Controls->Add(this->deleteButton);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Location = System::Drawing::Point(4, 24);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(522, 338);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Remove Employee";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(46, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(202, 23);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Select ID to be removed";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(376, 60);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 34);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ManagerForm::button1_Click);
			// 
			// nameTextBox
			// 
			this->nameTextBox->Location = System::Drawing::Point(159, 66);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(178, 21);
			this->nameTextBox->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Text", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter name:";
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->nameTextBox);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 24);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(522, 338);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Add Employee";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(12, 33);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(530, 366);
			this->tabControl1->TabIndex = 2;
			this->tabControl1->Click += gcnew System::EventHandler(this, &ManagerForm::tabControl1_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label2);
			this->tabPage5->Controls->Add(this->button2);
			this->tabPage5->Controls->Add(this->listBox2);
			this->tabPage5->Controls->Add(this->restaurantCommentsComboBox);
			this->tabPage5->Location = System::Drawing::Point(4, 24);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(522, 338);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"view comments";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(139, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(215, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Choose a Restaurant";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(344, 112);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 44);
			this->button2->TabIndex = 2;
			this->button2->Text = L"View Comment";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ManagerForm::button2_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Location = System::Drawing::Point(157, 183);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(188, 94);
			this->listBox2->TabIndex = 1;
			// 
			// restaurantCommentsComboBox
			// 
			this->restaurantCommentsComboBox->FormattingEnabled = true;
			this->restaurantCommentsComboBox->Location = System::Drawing::Point(157, 85);
			this->restaurantCommentsComboBox->Name = L"restaurantCommentsComboBox";
			this->restaurantCommentsComboBox->Size = System::Drawing::Size(171, 23);
			this->restaurantCommentsComboBox->TabIndex = 0;
			// 
			// ManagerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(554, 411);
			this->Controls->Add(this->tabControl1);
			this->Name = L"ManagerForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ManagerForm";
			this->Load += gcnew System::EventHandler(this, &ManagerForm::ManagerForm_Load);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->removeDataGridView))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {//Add Button



		ManagerClass ^mng = gcnew ManagerClass();

		String^s = nameTextBox->Text;

		mng->addEmployee(s);
		MessageBox::Show("Successfully added :)");
	}


			 void fillremoveDataGridView()
			 {
				 List<String^>^arr = gcnew List<String^>();
				 int index = 0, counter = 0;
				 string line;

				 ifstream stream("DeliveryBoy.txt");

				 //h2ra el id w el name bs
				 if (stream.is_open())
				 {
					 while (stream >> line)
					 {
						 if (counter % 3 == 0 || counter % 3 == 1)//id, name
						 {
							 String^s = gcnew String(line.c_str());
							 arr->Insert(index, s);
							 ++index;
						 }
						 ++counter;
					 }

					 stream.close();
				 }
				 else
				 {
					 MessageBox::Show("Can't open file in fill()");
				 }

				 for (int i = 0; i < index; i += 2)
				 {
					 removeDataGridView->Rows->Add(arr[i], arr[i + 1]);
				 }

	}


			 void fillCustomerIDComboBox()
			 {
				 ifstream stream("Cust.txt");
				 string line;
				 int counter = 0;

				 if (stream.is_open())
				 {
					 while (getline(stream, line))
					 {
						 ++counter;
						 String ^s = gcnew String(line.c_str());
						 if (counter % 8 == 2)//el customer id tany satr//25aliha ==2
						 {
							 comboBox1->Items->Add(s);
						 }
					 }
				 }
				 else
				 {
					 MessageBox::Show("Can't open customer file to load combobox!!!");
				 }

				 stream.close();
			 }

			 //howa kol rest fixed-sized of 17 line??????
			 void fillRestaurantComboBox()
			 {
				 ifstream stream("Restt.txt");
				 string line;
				 int counter = 0;

				 if (stream.is_open())
				 {
					 while (getline(stream, line))
					 {
						 String^s = gcnew String(line.c_str());
						 ++counter;
						 if (counter % 22 == 1)//esm el rest
						 {
							 restaurantCommentsComboBox->Items->Add(s);
							 restaurantComboBox->Items->Add(s);
						 }
					 }
				 }
				 else
				 {
					 MessageBox::Show("Can't open file to load Restaurants");
				 }

				 stream.close();
			 }
private: System::Void deleteButton_Click(System::Object^  sender, System::EventArgs^  e) {


	ManagerClass ^mng = gcnew ManagerClass();


	String^s = removeDataGridView->SelectedCells[0]->Value->ToString();
	mng->removeEmployee(s);
	removeDataGridView->Rows->Clear();
	fillremoveDataGridView();


}

private: System::Void tabControl1_Click(System::Object^  sender, System::EventArgs^  e) {
	removeDataGridView->Rows->Clear();
	fillremoveDataGridView();
	restaurantComboBox->Items->Clear();
	comboBox1->Items->Clear();
	fillCustomerIDComboBox();
	fillRestaurantComboBox();


}
bool byDate = false, byCustomer = false;
private: System::Void buttonView_Click(System::Object^  sender, System::EventArgs^  e) {


	ManagerClass ^mngr = gcnew ManagerClass();
	listBox1->Items->Clear();


	if (byDate)
	{

		dateTimePicker1->Format = DateTimePickerFormat::Custom;
		dateTimePicker1->CustomFormat = "Mdyyyy";

		String ^wantedDate = dateTimePicker1->Text;
		List<String^>^result = mngr->showBillInSpecificDate(wantedDate);
		if (result->Count == 0)
		{
			MessageBox::Show("No Bills in this date!!!");
		}
		else
		{
			for (int i = 0; i < result->Count; i++)
				listBox1->Items->Add(result[i]);
		}

	}
	else if (byCustomer)//by customer
	{
		String^wantedID = comboBox1->Text;
		/*
		List<String^>^l = Functions::customerBillsIDs(wantedID);
		for (int i = 0; i < l->Count; i++)
		MessageBox::Show(l[i]);
		*/
		List<String^>^myList = customerBillsIDs(wantedID);
		List<String^>^ result = mngr->showBillBySpecificCustomer(myList);
		if (result->Count == 0)
		{
			MessageBox::Show("No Bills for this customer!!!");
		}
		else
		{
			for (int i = 0; i < result->Count; i++)
				listBox1->Items->Add(result[i]);
		}
	}
}
private: System::Void buttonShowByDate_Click(System::Object^  sender, System::EventArgs^  e) {
	dateTimePicker1->Visible = true;
	byDate = 1;
	byCustomer = 0;
}
private: System::Void buttonShowByCustomer_Click(System::Object^  sender, System::EventArgs^  e) {
	comboBox1->Visible = true;
	byCustomer = 1;
	byDate = 0;
}

		 //hmla el itemCombobox 3la 7sb category mo3aina
		 //byrg3 el data beta3et el items
		 vector<string> fillItemsComboBox(String^category, String^restaurant)
		 {
			 ifstream stream("Restt.txt");
			 string line;
			 bool foundCategory = 0;
			 int itemCounter = 0;
			 vector<string>myVector;
			 String^ rest;


			 if (stream.is_open())
			 {
				 while (getline(stream, line))
				 {
					 String^s = gcnew String(line.c_str());

					 if (s == restaurant)
					 {
						 rest = s;
					 }

					 if (foundCategory&&itemCounter < 3)
					 {
						 string itemName = "";
						 string itemPrice = "";
						 string itemQuantity = "";

						 //3shan agib el esm bs
						 for (int i = 0; i <= line.size(); i++)
						 {
							 if (line[i] != ' ')
							 {
								 itemName += line[i];
								 line.erase(0, 1);
								 i = -1;
							 }
							 else
								 break;
						 }
						 line.erase(0, 1);

						 //3shan agib el price bs
						 for (int i = 0; i <= line.size(); i++)
						 {
							 if (line[i] != ' ')
							 {
								 itemPrice += line[i];
								 line.erase(0, 1);
								 i = -1;
							 }
							 else
								 break;
						 }
						 line.erase(0, 1);

						 //3shan agib el quantity bs
						 for (int i = 0; i < line.size(); i++)
						 {
							 itemQuantity += line[i];
						 }
						 myVector.push_back(itemName);
						 myVector.push_back(itemPrice);
						 myVector.push_back(itemQuantity);

						 s = gcnew String(itemName.c_str());
						 itemComboBox->Items->Add(s);
						 ++itemCounter;
						 continue;
					 }
					 if (itemCounter == 3)
						 break;

					 if (s == category && rest == restaurant) {
						 foundCategory = 1;
						 itemCounter = 0;
					 }
					 else
						 foundCategory = 0;
				 }
			 }
			 else
			 {
				 MessageBox::Show("Can't open file to load categories");
			 }


			 stream.close();
			 return myVector;
		 }

		 //hmla el categoryCombobox 3la 7sb restaurant mo3ain
		 void fillCategoryComboBox(String^restaurant)
		 {
			 ifstream stream("Restt.txt");
			 string line;
			 bool foundRestaurant = 0;
			 int categoryCounter = 0;

			 if (stream.is_open())
			 {
				 while (getline(stream, line))
				 {
					 String^s = gcnew String(line.c_str());

					 if (foundRestaurant && categoryCounter < 12)
					 {
						 if (categoryCounter % 4 == 0)//esm el category
						 {
							 categoryComboBox->Items->Add(s);
						 }
						 ++categoryCounter;
					 }

					 if (s == restaurant) {
						 foundRestaurant = 1;

					 }
				 }
			 }
			 else
			 {
				 MessageBox::Show("Can't open file to load categories");
			 }


			 stream.close();
		 }


		 List<String^>^customerBillsIDs(String^customerID)
		 {


			 ifstream stream("CustomerBillIDs.txt");

			 string line, ID;
			 bool found = 0;
			 int counter = 0, index = 0;
			 List<String^>^billIDs = gcnew List<String^>();

			 if (stream.is_open())
			 {
				 while (getline(stream, line))
				 {

					 String^s = gcnew String(line.c_str());

					 if (counter % 2 == 0)//customer id
					 {
						 if (s == customerID)//law customer ely 3aizoh = ely f-el file
						 {
							 found = 1;
						 }
						 else
							 found = 0;
					 }
					 else //bill id
					 {
						 if (found)
						 {
							 billIDs->Add(s);
						 }
					 }
					 ++counter;
				 }
			 }
			 else
			 {
				 MessageBox::Show("Can't open CustomerBillIDs.txt to get customer's bills");
			 }


			 stream.close();


			 return billIDs;

		 }
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void restaurantComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {


	//el restaurant ely e5taroh
	String^selectedRestaurant = restaurantComboBox->SelectedItem->ToString();
	categoryComboBox->Items->Clear();
	fillCategoryComboBox(selectedRestaurant);
}
private: System::Void categoryComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	String^ category = categoryComboBox->SelectedItem->ToString();
	String^restaurant = restaurantComboBox->SelectedItem->ToString();
	itemComboBox->Items->Clear();

	fillItemsComboBox(category, restaurant);
}
private: System::Void viewButton_Click(System::Object^  sender, System::EventArgs^  e) {


/*
	String^choosenItem = itemComboBox->SelectedItem->ToString();
	String^choosenRestaurant = restaurantComboBox->SelectedItem->ToString();
	string item = marshal_as<string>(choosenItem);
	String^choosenCategory = categoryComboBox->SelectedItem->ToString();

	vector<string>v = fillItemsComboBox(choosenCategory, choosenRestaurant);
	quantityLlabel->Visible = true;

	//for (int i = 0; i < v.size(); i++)
	//{
	//	if (item == v[i])
	//	{
	//		String ^s = gcnew String(v[i + 2].c_str());
	//		quantityLlabel->Text = "Restaurant " + restaurantComboBox->SelectedItem->ToString() + " has " + s + " " + choosenItem;
	//		break;
	//	}
	//}

	ManagerClass^ mmgr = gcnew ManagerClass();
	String^quantity = mmgr->viewProductQuantity(v,item);
	quantityLlabel->Text = "Restaurant " + restaurantComboBox->SelectedItem->ToString() + " has " + quantity + " " + choosenItem;*/

	String^choosenItem = itemComboBox->SelectedItem->ToString();
	String^choosenRestaurant = restaurantComboBox->SelectedItem->ToString();
	string item = marshal_as<string>(choosenItem);
	String^choosenCategory = categoryComboBox->SelectedItem->ToString();

	vector<string>v = fillItemsComboBox(choosenCategory, choosenRestaurant);
	quantityLlabel->Visible = true;

	ManagerClass ^mngr = gcnew ManagerClass();

	String^ quantity = mngr->viewProductQuantity(v, item);


	quantityLlabel->Text = "Restaurant " + restaurantComboBox->SelectedItem->ToString() + " has " + quantity + " " + choosenItem;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^restaurant = restaurantCommentsComboBox->SelectedItem->ToString();
	string rest = marshal_as<string>(restaurant);
	ManagerClass^mngr = gcnew ManagerClass();

	listBox2->Items->Clear();

	List<String^>^commentList = mngr->viewComments(rest);

	if (commentList->Count == 0)
	{
		MessageBox::Show("No comments for this restaurant");
	}

	else
	{
		for (int i = 0; i < commentList->Count; i++)
		{
			if (i % 2 == 0)
				listBox2->Items->Add("Rating:");
			else
				listBox2->Items->Add("Comment");

			listBox2->Items->Add(commentList[i]);

		}
	}
}
private: System::Void ManagerForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
