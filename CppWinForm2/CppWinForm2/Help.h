#pragma once

namespace CppWinForm2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для HelpForm
	/// </summary>
	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		HelpForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		void BreakForm()
		{
			Application:Form::Hide();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~HelpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 0;
			// 
			// HelpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(444, 291);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(460, 330);
			this->MinimumSize = System::Drawing::Size(460, 330);
			this->Name = L"HelpForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Справка";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &HelpForm::HelpForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void HelpForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{

		label1->Text += Environment::NewLine;
		label1->Text += "Для добавления нового выражения вам следует ввести ";
		label1->Text += Environment::NewLine;
		label1->Text += "название для выражения и регулярное выражение в формате :";
		label1->Text += Environment::NewLine;
		label1->Text += " ";
		label1->Text += Environment::NewLine;
		label1->Text += "1. ввод случайного выбора осуществляется через квадратные";
		label1->Text += Environment::NewLine;
		label1->Text += "скобки.Внутри укажите диапозон из которого нужно составление";
		label1->Text += Environment::NewLine;
		label1->Text += "выражения, либо посимвольно.Также укажите размерность в";		
		label1->Text += Environment::NewLine;
		label1->Text += "скобочках{}";		
		label1->Text += Environment::NewLine;
		label1->Text += "   Пример: [a-b{5}]";
		label1->Text += Environment::NewLine;
		label1->Text += Environment::NewLine;
		label1->Text += "2. Все элементы выражения указанные за квадратными";
		label1->Text += Environment::NewLine;
		label1->Text += "скобочками будут считаться константными.";
		label1->Text += Environment::NewLine;
		label1->Text += "Возможен ввод случайного константного выражения через слэш";
		label1->Text += Environment::NewLine;
		label1->Text += "   Пример: .ru/.com";
		label1->Text += Environment::NewLine;
		label1->Text += "Пример полного регулярного выражения составления e-mail:";
		label1->Text += Environment::NewLine;
		label1->Text += "[a - e175{ 7 }]@[{5}abc].ru / .com";
	}
	};
}
