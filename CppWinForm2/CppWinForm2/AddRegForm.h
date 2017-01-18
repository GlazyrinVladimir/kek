#pragma once
#include "stdafx.h"
#include "Help.h"

namespace CppWinForm2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Data;
	using namespace System::Text;
	using namespace System::Threading::Tasks;

	/// <summary>
	/// Сводка для AddRegForm
	/// </summary>
	public ref class AddRegForm : public System::Windows::Forms::Form
	{

	public:
		void loadForm()
		{
			//HelpForm^ gform = gcnew HelpForm;
		}
		void MyProperty(String ^ str)
		{ 
			regLine = str;
			if (regLine->Empty)
			{
				String ^ kek = regLine;
				std::string lineToForm = msclr::interop::marshal_as<std::string>(kek);
				std::istringstream streamReg(lineToForm);
				std::string name;
				std::string reg;
				streamReg >> name;
				while (!streamReg.eof())
				{
					std::string word;
					streamReg >> word;
					reg += word;
				}
				//streamReg >> reg;
				testNameTextBox->Text = gcnew String(name.c_str());
				regTextBox->Text = gcnew String(reg.c_str());
			}
		}
	public:
		//HelpForm^ gform;// = gcnew HelpForm;
		AddRegForm(void)
		{
			ControlBox = false;
			InitializeComponent();
			
		}

		String^ GetLine()
		{
			return line;
		}
	private: System::Windows::Forms::Button^  HelpBtn;
	public:

	public:

		bool isAddRegLine = true;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddRegForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  addBtn;
	private: System::Windows::Forms::TextBox^  testNameTextBox;

	private: System::Windows::Forms::TextBox^  regTextBox;
	private: System::Windows::Forms::Label^  nameLabel;
	private: System::Windows::Forms::Label^  regLabel;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  cancelBtn;

			 String^ line;
			 String^ regLine;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->testNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->regTextBox = (gcnew System::Windows::Forms::TextBox());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->regLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->HelpBtn = (gcnew System::Windows::Forms::Button());
			this->cancelBtn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// addBtn
			// 
			this->addBtn->Location = System::Drawing::Point(318, 123);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(75, 23);
			this->addBtn->TabIndex = 0;
			this->addBtn->Text = L"Добавить";
			this->addBtn->UseVisualStyleBackColor = true;
			this->addBtn->Click += gcnew System::EventHandler(this, &AddRegForm::addBtn_Click);
			// 
			// testNameTextBox
			// 
			this->testNameTextBox->Location = System::Drawing::Point(145, 23);
			this->testNameTextBox->Name = L"testNameTextBox";
			this->testNameTextBox->Size = System::Drawing::Size(154, 20);
			this->testNameTextBox->TabIndex = 1;
			this->testNameTextBox->TextChanged += gcnew System::EventHandler(this, &AddRegForm::textBox1_TextChanged);
			// 
			// regTextBox
			// 
			this->regTextBox->Location = System::Drawing::Point(145, 67);
			this->regTextBox->Name = L"regTextBox";
			this->regTextBox->Size = System::Drawing::Size(196, 20);
			this->regTextBox->TabIndex = 2;
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Location = System::Drawing::Point(11, 26);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(94, 13);
			this->nameLabel->TabIndex = 3;
			this->nameLabel->Text = L"Название теста :";
			this->nameLabel->Click += gcnew System::EventHandler(this, &AddRegForm::nameLabel_Click);
			// 
			// regLabel
			// 
			this->regLabel->AutoSize = true;
			this->regLabel->Location = System::Drawing::Point(11, 70);
			this->regLabel->Name = L"regLabel";
			this->regLabel->Size = System::Drawing::Size(133, 13);
			this->regLabel->TabIndex = 4;
			this->regLabel->Text = L"Регулярное выражение :";
			this->regLabel->Click += gcnew System::EventHandler(this, &AddRegForm::regLabel_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->Controls->Add(this->HelpBtn);
			this->panel1->Controls->Add(this->cancelBtn);
			this->panel1->Controls->Add(this->nameLabel);
			this->panel1->Controls->Add(this->addBtn);
			this->panel1->Controls->Add(this->regLabel);
			this->panel1->Controls->Add(this->testNameTextBox);
			this->panel1->Controls->Add(this->regTextBox);
			this->panel1->Location = System::Drawing::Point(1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(406, 158);
			this->panel1->TabIndex = 5;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AddRegForm::panel1_Paint);
			// 
			// HelpBtn
			// 
			this->HelpBtn->Location = System::Drawing::Point(175, 123);
			this->HelpBtn->Name = L"HelpBtn";
			this->HelpBtn->Size = System::Drawing::Size(75, 23);
			this->HelpBtn->TabIndex = 6;
			this->HelpBtn->Text = L"Справка";
			this->HelpBtn->UseVisualStyleBackColor = true;
			this->HelpBtn->Click += gcnew System::EventHandler(this, &AddRegForm::HelpBtn_Click);
			// 
			// cancelBtn
			// 
			this->cancelBtn->Location = System::Drawing::Point(31, 123);
			this->cancelBtn->Name = L"cancelBtn";
			this->cancelBtn->Size = System::Drawing::Size(74, 23);
			this->cancelBtn->TabIndex = 5;
			this->cancelBtn->Text = L"Отмена";
			this->cancelBtn->UseVisualStyleBackColor = true;
			this->cancelBtn->Click += gcnew System::EventHandler(this, &AddRegForm::cancelBtn_Click);
			// 
			// AddRegForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(406, 158);
			this->Controls->Add(this->panel1);
			this->MinimumSize = System::Drawing::Size(422, 197);
			this->Name = L"AddRegForm";
			this->Text = L"Добавление теста";
			this->Load += gcnew System::EventHandler(this, &AddRegForm::AddRegForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

	private: System::Void addBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		
		if (testNameTextBox->Text != "" && regTextBox->Text != "")
		{
			line = testNameTextBox->Text + " " + regTextBox->Text;
		}
		else
		{
			isAddRegLine = false;
		}
		Application:Form::Close();

	}
private: System::Void AddRegForm_Load(System::Object^  sender, System::EventArgs^  e) 
{}
private: System::Void nameLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void regLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
	{
		addBtn->Left = int(panel1->Width / 1.35);
		addBtn->Top = int(panel1->Height / 1.2);

		HelpBtn->Left = int(panel1->Width / 2.45);
		HelpBtn->Top = int(panel1->Height / 1.2);

		cancelBtn->Left = int(panel1->Width / 13);
		cancelBtn->Top = int(panel1->Height / 1.2);

		testNameTextBox->Left = int(panel1->Width / 2.2);
		testNameTextBox->Top = int(panel1->Height / 3.1);
		nameLabel->Top = int(panel1->Height / 3);
		nameLabel->Left = int(panel1->Width / 10);

		regTextBox->Left = int(panel1->Width / 2.2);
		regTextBox->Top = int(panel1->Height / 1.9);
		regLabel->Top = int(panel1->Height / 1.9);
		regLabel->Left = int(panel1->Width / 10);
	}

	private: System::Void cancelBtn_Click(System::Object^  sender, System::EventArgs^  e)
	{
		isAddRegLine = false;
	Application:AddRegForm::Close();
	}

	private: System::Void HelpBtn_Click(System::Object^  sender, System::EventArgs^  e)
	{

		HelpForm^ gform = gcnew HelpForm;
		gform->Show();
	}
};
}
