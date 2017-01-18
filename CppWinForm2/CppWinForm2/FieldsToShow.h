#pragma once

namespace CppWinForm2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			LoadListBox();
			//
			//TODO: добавьте код конструктора
			//
		}
		CheckedListBox ^ GetListBox()
		{
			return ListBox1;
		}
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckedListBox^  ListBox1;
	protected:

	protected:


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->SuspendLayout();
			// 
			// ListBox1
			// 
			this->ListBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ListBox1->FormattingEnabled = true;
			this->ListBox1->Location = System::Drawing::Point(0, 0);
			this->ListBox1->Name = L"ListBox1";
			this->ListBox1->Size = System::Drawing::Size(284, 261);
			this->ListBox1->TabIndex = 0;
			this->ListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->ListBox1);
			this->Name = L"MyForm";
			this->Text =L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void LoadListBox()
	{
		ListBox1->Items->Insert(0, "ќтчество");
		ListBox1->Items->Insert(0, "»м€");
		ListBox1->Items->Insert(0, "‘амили€");
		
		for (int i = 0; i < ListBox1->Items->Count; i++)
		{
			ListBox1->SetItemChecked(i, true);
		}
	}

	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
