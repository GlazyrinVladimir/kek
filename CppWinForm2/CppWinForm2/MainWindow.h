#pragma once
#include "stdafx.h"
#include "AddRegForm.h"
#include "OnlineGenerator.h"
#include "FieldsToShow.h"

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
	/// Summary for MyForm
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow()
		{
			numberOfTests = 10;
			InitializeComponent();
			saveFileDialog1->DefaultExt = "txt";
			testNumberLabel->Text = labelStart + Convert::ToString(numberOfTests);
			LoadListBox();
		}
	private: bool isSurname = true;
	private: bool isName = true;
	private: bool isPatronymic = true;
	public: String ^ getFileExtension(String ^ fileName)
		{
			
			return fileName->Substring(fileName->LastIndexOf(".") + 1);
		}
	private: size_t numberOfTests;
	private: String ^ labelStart = "Количество тестов :";
	//private: std::vector<String ^> *telefonTypes;
	private: System::Windows::Forms::Button^  closeBtn;
	private: System::Windows::Forms::Button^  writeInFileBtn;

	private: System::Windows::Forms::Button^  viewBtn;

	private: System::Windows::Forms::Button^  chooseAllBtn;

	private: System::Windows::Forms::Button^  clearBtn;

	private: System::Windows::Forms::Button^  deleteBtn;


	private: System::Windows::Forms::Button^  saveBtn;
	private: System::Windows::Forms::Button^  loadBtn;


	private: System::Windows::Forms::Button^  addBtn;
	private: System::Windows::Forms::CheckedListBox^  regularList;
	private: System::Windows::Forms::DataGridView^  testsDataGrid;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Button^  changeTestNumberBtn;
	private: System::Windows::Forms::TextBox^  testNumberTextBox;
	private: System::Windows::Forms::Label^  testNumberLabel;
	private: System::Windows::Forms::Button^  bdButton;

	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Windows::Forms::DataGridView^  fioDataGridView;
	private: System::Windows::Forms::Button^  telefonButton;
	private: System::Windows::Forms::CheckedListBox^  telefonCheckBox;

	public:

	public:

	public:
	private:
		String^ line;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->closeBtn = (gcnew System::Windows::Forms::Button());
			this->writeInFileBtn = (gcnew System::Windows::Forms::Button());
			this->viewBtn = (gcnew System::Windows::Forms::Button());
			this->chooseAllBtn = (gcnew System::Windows::Forms::Button());
			this->clearBtn = (gcnew System::Windows::Forms::Button());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->loadBtn = (gcnew System::Windows::Forms::Button());
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->regularList = (gcnew System::Windows::Forms::CheckedListBox());
			this->testsDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->changeTestNumberBtn = (gcnew System::Windows::Forms::Button());
			this->testNumberLabel = (gcnew System::Windows::Forms::Label());
			this->testNumberTextBox = (gcnew System::Windows::Forms::TextBox());
			this->bdButton = (gcnew System::Windows::Forms::Button());
			this->fioDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->telefonButton = (gcnew System::Windows::Forms::Button());
			this->telefonCheckBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->testsDataGrid))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fioDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(133, 141);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 4;
			// 
			// closeBtn
			// 
			this->closeBtn->Location = System::Drawing::Point(3, 329);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(108, 23);
			this->closeBtn->TabIndex = 11;
			this->closeBtn->Text = L"Закрыть окно";
			this->closeBtn->UseVisualStyleBackColor = true;
			this->closeBtn->Click += gcnew System::EventHandler(this, &MainWindow::closeBtn_Click);
			// 
			// writeInFileBtn
			// 
			this->writeInFileBtn->Location = System::Drawing::Point(220, 329);
			this->writeInFileBtn->Name = L"writeInFileBtn";
			this->writeInFileBtn->Size = System::Drawing::Size(124, 23);
			this->writeInFileBtn->TabIndex = 14;
			this->writeInFileBtn->Text = L"Записать тесты";
			this->writeInFileBtn->UseVisualStyleBackColor = true;
			this->writeInFileBtn->Click += gcnew System::EventHandler(this, &MainWindow::writeInFileBtn_Click);
			// 
			// viewBtn
			// 
			this->viewBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->viewBtn->Location = System::Drawing::Point(117, 329);
			this->viewBtn->Name = L"viewBtn";
			this->viewBtn->Size = System::Drawing::Size(97, 23);
			this->viewBtn->TabIndex = 15;
			this->viewBtn->Text = L"Отобразить тесты";
			this->viewBtn->UseVisualStyleBackColor = true;
			this->viewBtn->Click += gcnew System::EventHandler(this, &MainWindow::viewBtn_Click);
			// 
			// chooseAllBtn
			// 
			this->chooseAllBtn->Location = System::Drawing::Point(220, 165);
			this->chooseAllBtn->Name = L"chooseAllBtn";
			this->chooseAllBtn->Size = System::Drawing::Size(124, 24);
			this->chooseAllBtn->TabIndex = 9;
			this->chooseAllBtn->Text = L"Выделить все";
			this->chooseAllBtn->UseVisualStyleBackColor = true;
			this->chooseAllBtn->Click += gcnew System::EventHandler(this, &MainWindow::chooseAllBtn_Click);
			// 
			// clearBtn
			// 
			this->clearBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->clearBtn->Location = System::Drawing::Point(117, 165);
			this->clearBtn->Name = L"clearBtn";
			this->clearBtn->Size = System::Drawing::Size(97, 24);
			this->clearBtn->TabIndex = 10;
			this->clearBtn->Text = L"Снять все";
			this->clearBtn->UseVisualStyleBackColor = true;
			this->clearBtn->Click += gcnew System::EventHandler(this, &MainWindow::clearBtn_Click);
			// 
			// deleteBtn
			// 
			this->deleteBtn->Location = System::Drawing::Point(3, 165);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(108, 24);
			this->deleteBtn->TabIndex = 6;
			this->deleteBtn->Text = L"Удалить выделенные строки";
			this->deleteBtn->UseVisualStyleBackColor = true;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &MainWindow::deleteBtn_Click);
			// 
			// saveBtn
			// 
			this->saveBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->saveBtn->Location = System::Drawing::Point(3, 3);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(108, 22);
			this->saveBtn->TabIndex = 12;
			this->saveBtn->Text = L"Сохранить в файл";
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &MainWindow::saveBtn_Click);
			// 
			// loadBtn
			// 
			this->loadBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->loadBtn->Location = System::Drawing::Point(220, 3);
			this->loadBtn->Name = L"loadBtn";
			this->loadBtn->Size = System::Drawing::Size(124, 22);
			this->loadBtn->TabIndex = 13;
			this->loadBtn->Text = L"Загрузить из файла";
			this->loadBtn->UseVisualStyleBackColor = true;
			this->loadBtn->Click += gcnew System::EventHandler(this, &MainWindow::loadBtn_Click);
			// 
			// addBtn
			// 
			this->addBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->addBtn->Location = System::Drawing::Point(117, 3);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(97, 22);
			this->addBtn->TabIndex = 0;
			this->addBtn->Text = L"Добавить тест";
			this->addBtn->UseVisualStyleBackColor = true;
			this->addBtn->Click += gcnew System::EventHandler(this, &MainWindow::addBtn_Click);
			// 
			// regularList
			// 
			this->tableLayoutPanel2->SetColumnSpan(this->regularList, 3);
			this->regularList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->regularList->FormattingEnabled = true;
			this->regularList->Location = System::Drawing::Point(3, 31);
			this->regularList->Name = L"regularList";
			this->regularList->Size = System::Drawing::Size(388, 128);
			this->regularList->TabIndex = 16;
			this->regularList->Click += gcnew System::EventHandler(this, &MainWindow::regularList_MouseClick);
			this->regularList->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::regularList_SelectedIndexChanged);
			this->regularList->DoubleClick += gcnew System::EventHandler(this, &MainWindow::regularList_MouseDoubleClick);
			// 
			// testsDataGrid
			// 
			this->testsDataGrid->AllowUserToAddRows = false;
			this->testsDataGrid->AllowUserToDeleteRows = false;
			this->testsDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tableLayoutPanel2->SetColumnSpan(this->testsDataGrid, 3);
			this->testsDataGrid->Location = System::Drawing::Point(3, 195);
			this->testsDataGrid->Name = L"testsDataGrid";
			this->testsDataGrid->Size = System::Drawing::Size(388, 128);
			this->testsDataGrid->TabIndex = 16;
			this->testsDataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::testsDataGrid_CellContentClick);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel2->ColumnCount = 5;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				114)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				103)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				177)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				149)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				218)));
			this->tableLayoutPanel2->Controls->Add(this->viewBtn, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->closeBtn, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->deleteBtn, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->clearBtn, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->addBtn, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->regularList, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->testsDataGrid, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->saveBtn, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->loadBtn, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->chooseAllBtn, 2, 2);
			this->tableLayoutPanel2->Controls->Add(this->writeInFileBtn, 2, 4);
			this->tableLayoutPanel2->Controls->Add(this->changeTestNumberBtn, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->testNumberLabel, 3, 4);
			this->tableLayoutPanel2->Controls->Add(this->testNumberTextBox, 4, 0);
			this->tableLayoutPanel2->Controls->Add(this->bdButton, 3, 2);
			this->tableLayoutPanel2->Controls->Add(this->fioDataGridView, 3, 3);
			this->tableLayoutPanel2->Controls->Add(this->telefonButton, 4, 2);
			this->tableLayoutPanel2->Controls->Add(this->telefonCheckBox, 3, 1);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 5;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 28)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(761, 358);
			this->tableLayoutPanel2->TabIndex = 12;
			this->tableLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainWindow::tableLayoutPanel2_Paint);
			// 
			// changeTestNumberBtn
			// 
			this->changeTestNumberBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->changeTestNumberBtn->Location = System::Drawing::Point(397, 3);
			this->changeTestNumberBtn->Name = L"changeTestNumberBtn";
			this->changeTestNumberBtn->Size = System::Drawing::Size(139, 22);
			this->changeTestNumberBtn->TabIndex = 17;
			this->changeTestNumberBtn->Text = L"Изменить кол-во тестов";
			this->changeTestNumberBtn->UseVisualStyleBackColor = true;
			this->changeTestNumberBtn->Click += gcnew System::EventHandler(this, &MainWindow::changeTestNumberBtn_Click_2);
			// 
			// testNumberLabel
			// 
			this->testNumberLabel->AutoSize = true;
			this->tableLayoutPanel2->SetColumnSpan(this->testNumberLabel, 2);
			this->testNumberLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->testNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->testNumberLabel->Location = System::Drawing::Point(397, 326);
			this->testNumberLabel->Name = L"testNumberLabel";
			this->testNumberLabel->Size = System::Drawing::Size(361, 18);
			this->testNumberLabel->TabIndex = 19;
			this->testNumberLabel->Text = L"Количество тестов :";
			this->testNumberLabel->Click += gcnew System::EventHandler(this, &MainWindow::testNumberLabel_Click);
			// 
			// testNumberTextBox
			// 
			this->testNumberTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->testNumberTextBox->Location = System::Drawing::Point(546, 5);
			this->testNumberTextBox->Name = L"testNumberTextBox";
			this->testNumberTextBox->Size = System::Drawing::Size(66, 20);
			this->testNumberTextBox->TabIndex = 18;
			this->testNumberTextBox->TextChanged += gcnew System::EventHandler(this, &MainWindow::testNumberTextBox_TextChanged);
			// 
			// bdButton
			// 
			this->bdButton->Location = System::Drawing::Point(397, 165);
			this->bdButton->Name = L"bdButton";
			this->bdButton->Size = System::Drawing::Size(139, 23);
			this->bdButton->TabIndex = 20;
			this->bdButton->Text = L"База данных";
			this->bdButton->UseVisualStyleBackColor = true;
			this->bdButton->Click += gcnew System::EventHandler(this, &MainWindow::bdButton_Click);
			// 
			// fioDataGridView
			// 
			this->fioDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tableLayoutPanel2->SetColumnSpan(this->fioDataGridView, 2);
			this->fioDataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->fioDataGridView->Location = System::Drawing::Point(397, 195);
			this->fioDataGridView->Name = L"fioDataGridView";
			this->fioDataGridView->Size = System::Drawing::Size(361, 128);
			this->fioDataGridView->TabIndex = 21;
			// 
			// telefonButton
			// 
			this->telefonButton->Location = System::Drawing::Point(546, 165);
			this->telefonButton->Name = L"telefonButton";
			this->telefonButton->Size = System::Drawing::Size(123, 23);
			this->telefonButton->TabIndex = 22;
			this->telefonButton->Text = L"Поля БД";
			this->telefonButton->UseVisualStyleBackColor = true;
			this->telefonButton->Click += gcnew System::EventHandler(this, &MainWindow::telefonButton_Click);
			// 
			// telefonCheckBox
			// 
			this->tableLayoutPanel2->SetColumnSpan(this->telefonCheckBox, 2);
			this->telefonCheckBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->telefonCheckBox->FormattingEnabled = true;
			this->telefonCheckBox->Location = System::Drawing::Point(397, 31);
			this->telefonCheckBox->Name = L"telefonCheckBox";
			this->telefonCheckBox->Size = System::Drawing::Size(361, 128);
			this->telefonCheckBox->TabIndex = 23;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT        FIO.*\r\nFROM            FIO";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=\"C:\\androidProgectGcv\\CppWinForm2\\Н"
				L"овая папка\\FIObd.accdb\"";
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = L"INSERT INTO `FIO` (`Фамилия`, `Имя`, `Отчество`) VALUES (\?, \?, \?)";
			this->oleDbInsertCommand1->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Фамилия",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"Фамилия")), (gcnew System::Data::OleDb::OleDbParameter(L"Имя", System::Data::OleDb::OleDbType::VarWChar,
						0, L"Имя")), (gcnew System::Data::OleDb::OleDbParameter(L"Отчество", System::Data::OleDb::OleDbType::VarWChar, 0, L"Отчество"))
			});
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
			this->oleDbUpdateCommand1->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(10) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Фамилия",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"Фамилия")), (gcnew System::Data::OleDb::OleDbParameter(L"Имя", System::Data::OleDb::OleDbType::VarWChar,
						0, L"Имя")), (gcnew System::Data::OleDb::OleDbParameter(L"Отчество", System::Data::OleDb::OleDbType::VarWChar, 0, L"Отчество")),
						(gcnew System::Data::OleDb::OleDbParameter(L"Original_ID", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
							false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID", System::Data::DataRowVersion::Original, nullptr)),
							(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Фамилия", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
								static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Фамилия", System::Data::DataRowVersion::Original, true, nullptr)),
								(gcnew System::Data::OleDb::OleDbParameter(L"Original_Фамилия", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input,
									false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Фамилия", System::Data::DataRowVersion::Original, nullptr)),
									(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Имя", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
										static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Имя", System::Data::DataRowVersion::Original, true, nullptr)),
										(gcnew System::Data::OleDb::OleDbParameter(L"Original_Имя", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input,
											false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Имя", System::Data::DataRowVersion::Original, nullptr)),
											(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Отчество", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
												static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Отчество", System::Data::DataRowVersion::Original, true, nullptr)),
												(gcnew System::Data::OleDb::OleDbParameter(L"Original_Отчество", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input,
													false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Отчество", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->CommandText = L"DELETE FROM `FIO` WHERE ((`ID` = \?) AND ((\? = 1 AND `Фамилия` IS NULL) OR (`Фамил"
				L"ия` = \?)) AND ((\? = 1 AND `Имя` IS NULL) OR (`Имя` = \?)) AND ((\? = 1 AND `Отчест"
				L"во` IS NULL) OR (`Отчество` = \?)))";
			this->oleDbDeleteCommand1->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_ID",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"ID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Фамилия",
						System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
						L"Фамилия", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Фамилия",
							System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
							static_cast<System::Byte>(0), L"Фамилия", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Имя",
								System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
								L"Имя", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Имя",
									System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
									static_cast<System::Byte>(0), L"Имя", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Отчество",
										System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
										L"Отчество", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Отчество",
											System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
											static_cast<System::Byte>(0), L"Отчество", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(4) {
				(gcnew System::Data::Common::DataColumnMapping(L"ID",
					L"ID")), (gcnew System::Data::Common::DataColumnMapping(L"Фамилия", L"Фамилия")), (gcnew System::Data::Common::DataColumnMapping(L"Имя",
						L"Имя")), (gcnew System::Data::Common::DataColumnMapping(L"Отчество", L"Отчество"))
			};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"FIO", __mcTemp__1))
			});
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(761, 358);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel2);
			this->MinimumSize = System::Drawing::Size(485, 397);
			this->Name = L"MainWindow";
			this->Text = L"Генератор тестовых данных";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->testsDataGrid))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fioDataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: Void addBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		AddRegForm^ gform1 = gcnew AddRegForm;
		gform1->ShowDialog();
		line = gform1->GetLine();
		if (gform1->isAddRegLine)
		{
			line = gform1->GetLine();
			regularList->Items->Insert(0, line);
		}
		else 
		{
			gform1->isAddRegLine = true;
		}
	}
	private: System::Void deleteBtn_Click(System::Object^  sender, System::EventArgs^  e)
	{
		for (int i = 0; i < regularList->Items->Count; i++)
		{
			if (regularList->GetItemChecked(i))
			{
				regularList->Items->RemoveAt(i);
				i--;
			}
		}
	}
private: System::Void testNumberLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void num3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void chooseAllBtn_Click(System::Object^  sender, System::EventArgs^  e)
	{
		for (int i = 0; i < regularList->Items->Count; i++)
		{
			regularList->SetItemChecked(i, true);
		}
	}
	private: System::Void clearBtn_Click(System::Object^  sender, System::EventArgs^  e)
	{
		for (int i = 0; i < regularList->Items->Count; i++)
		{
			regularList->SetItemChecked(i, false);
		}
	}
	private: System::Void closeBtn_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
	}

	private: System::Void saveBtn_Click(System::Object^  sender, System::EventArgs^  e)
	{
		saveFileDialog1->ShowDialog();
		String ^ fname = saveFileDialog1->FileName;
		if (fname != "")
		{
			if (fname[fname->Length - 1] == 't' && fname[fname->Length - 2] == 'x' && fname[fname->Length - 3] == 't' && fname[fname->Length - 4] == '.')
			{
			}
			else
			{
				fname += ".txt";
			}

			std::ofstream outputFile(msclr::interop::marshal_as<std::string>(fname));
			for (int i = 0; i < regularList->Items->Count; i++)
			{
				std::string line = msclr::interop::marshal_as<std::string>(Convert::ToString(regularList->Items[i]));
				outputFile << line << std::endl;
			}
		}
	}

	private: System::Void loadBtn_Click(System::Object^  sender, System::EventArgs^  e)
	{
		openFileDialog1->ShowDialog();
		String ^ fname = openFileDialog1->FileName;
		if (fname != "")
		{
			if (getFileExtension(fname) == "txt")
			{
				std::ifstream inputFile(msclr::interop::marshal_as<std::string>(fname));
				std::string line;
				while ((std::getline(inputFile, line)))
				{
					size_t i = 0;
					regularList->Items->Insert(0, gcnew String(line.c_str()));
				}
			}
		}
	}

	private: System::Void writeInFileBtn_Click(System::Object^  sender, System::EventArgs^  e)
	{
		COnlineTestsGenerate tests;
		tests.SetSize(numberOfTests);
		for (int i = 0; i < regularList->Items->Count; i++)
		{
			std::string line = msclr::interop::marshal_as<std::string>(Convert::ToString(regularList->Items[i]));
			tests.MakeRegLine(line);
		}

		saveFileDialog1->ShowDialog();
		saveFileDialog1->AddExtension = true;
		String ^ fname = saveFileDialog1->FileName;
		if (fname != "")
		{	
			fname = saveFileDialog1->FileName;
			std::string fileName = msclr::interop::marshal_as<std::string>(fname);
			tests.WriteTests(fileName);
		}
	}
	
	private: System::Void makeTests(COnlineTestsGenerate & tests)
	{
		testsDataGrid->Rows->Clear();
		testsDataGrid->Columns->Clear();
		testsDataGrid->Refresh();
		tests.SetSize(numberOfTests);
		for (int i = 0; i < regularList->Items->Count; i++)
		{
			std::string line = msclr::interop::marshal_as<std::string>(Convert::ToString(regularList->Items[i]));
			tests.MakeRegLine(line);
		}
	}
	
	private: System::Void FillGrid(COnlineTestsGenerate & tests, 
								   std::vector<std::vector<std::string>> test, 
								   std::vector<size_t> testnum)
	{
		for (size_t i = 0; i < numberOfTests; i++)
		{
			size_t numCount = 0;
			for (size_t j = 0; j < tests.GetCount(); j++)
			{
				testsDataGrid->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
				testsDataGrid->TopLeftHeaderCell->Value = "Тесты";
				if (test[i][j].c_str() != '\0')
				{
					if (testnum[numCount] == j)
					{
						testsDataGrid->Columns[j - numCount]->HeaderCell->Value = gcnew String(test[i][j].c_str());
						numCount++;
					}
					else
					{
						testsDataGrid->Rows[i]->Cells[j - numCount]->Value = gcnew String(test[i][j].c_str());
					}
				}
			}
		}
	}
	private: System::Void viewBtn_Click(System::Object^  sender, System::EventArgs^  e)
	{
		COnlineTestsGenerate testsGen;
		makeTests(testsGen);
		std::vector<std::vector<std::string>> test = testsGen.GetTests();
		std::vector<size_t> testnum = testsGen.GetNamePlace();
		testsDataGrid->ColumnCount = testsGen.GetCount() - testnum.size();
		testsDataGrid->RowCount = numberOfTests;
		testnum.push_back(0);
		FillGrid(testsGen, test, testnum);
		testsDataGrid->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		testsDataGrid->AutoResizeColumns();
	}

private: System::Void testsDataGrid_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}

	private: Void regularList_MouseDoubleClick(Object^ sender, EventArgs^ e)
	{
		if (regularList->SelectedIndex >= 0)
		{
			AddRegForm^ gform1 = gcnew AddRegForm;
			gform1->MyProperty(regularList->SelectedItem->ToString());
			gform1->ShowDialog();
			line = gform1->GetLine();
			int index = regularList->SelectedIndex;
			if (gform1->isAddRegLine)
			{
				regularList->Items->RemoveAt(index);
				if (line != "")
				{
					line = gform1->GetLine();
					regularList->Items->Insert(index, line);
				}
			}
			else
			{
				gform1->isAddRegLine = true;
			}
		}
	}

	private: Void regularList_MouseClick(Object^ sender, EventArgs^ e)
	{
	/*	if (regularList->SelectedIndex)
		{
			if (regularList->GetItemChecked(regularList->SelectedIndex))
			{
				regularList->SetItemChecked(regularList->SelectedIndex, false);
			}
			else
			{
				regularList->SetItemChecked(regularList->SelectedIndex, true);
			}
		}*/
	}

private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void tableLayoutPanel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void changeTestNumberBtn_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void changeTestNumberBtn_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void changeTestNumberBtn_Click_2(System::Object^  sender, System::EventArgs^  e)
	{
		size_t oldNumber = numberOfTests;
		try
		{
			if (Convert::ToInt32(testNumberTextBox->Text) >= 0)
			{
				numberOfTests = Convert::ToInt32(testNumberTextBox->Text);
			}
		}
		catch (...)
		{
			numberOfTests = oldNumber;
		}
		testNumberTextBox->Text = "";
		testNumberLabel->Text = labelStart + Convert::ToString(numberOfTests);
	}
private: System::Void testNumberTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void bdButton_Click(System::Object^  sender, System::EventArgs^  e) 
{
	testsDataGrid->Rows->Clear();
	testsDataGrid->Columns->Clear();
	oleDbConnection1->Open();
	String ^ myQuery = "SELECT "; //*FROM[FIO];";
	bool isFirst = true;
	if (isSurname)
	{
		myQuery += "Фамилия";
		isFirst = false;
	}
	if (isName)
	{
		if (!isFirst)
		{
			myQuery += ", ";
		}
		myQuery += "Имя";
		isFirst = false;
	}
	if (isPatronymic)
	{
		if (!isFirst)
		{
			myQuery += ", ";
		}
		myQuery += "Отчество";
	}

	if (isFirst)
	{
		fioDataGridView->Columns->Clear();
	}
	else
	{
		myQuery += " FROM FIO;";
		OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(myQuery, oleDbConnection1);
		OleDb::OleDbDataReader ^ myReader;
		myReader = command->ExecuteReader();
		myReader->Close();
		oleDbDataAdapter1->SelectCommand = command;

		DataSet ^ ds = gcnew DataSet();
		oleDbDataAdapter1->Fill(ds);
		ds->Tables[0]->Columns->Add();
		fioDataGridView->DataSource = ds->Tables[0];
		oleDbConnection1->Close();
		ArrayList ^ telefonFormats = gcnew ArrayList();
		telefonFormats->Add("1 +[0-9{1}]([0-9{3}])[0-9{3}]-[0-9{3}]-[0-9{2}]");
		telefonFormats->Add("1 [0-9{2}]-[0-9{2}]-[0-9{2}]");
		telefonFormats->Add("1 [0-9{1}]([0-9{3}])[0-9{3}]-[0-9{3}]-[0-9{2}]");
		telefonFormats->Add("1 [0-9{6}]");
		ArrayList ^ telefonsFormantsForRandom = gcnew ArrayList();
		fioDataGridView->Columns[fioDataGridView->Columns->Count - 1]->HeaderCell->Value = "Телефон";

		for (int i = 0; i < telefonCheckBox->Items->Count; i++)
		{
			if (telefonCheckBox->GetItemChecked(i))
			{
				telefonsFormantsForRandom->Add(telefonFormats[i]);
			}
		}
		if (telefonsFormantsForRandom->Count > 0)
		{
			for (int i = 0; i < fioDataGridView->Rows->Count - 1; i++)
			{
				COnlineTestsGenerate tests;
				String ^ type = telefonsFormantsForRandom[rand() % telefonsFormantsForRandom->Count]->ToString();
				std::string line = msclr::interop::marshal_as<std::string>(type);
				tests.SetSize(1);
				tests.MakeRegLine(line);
				std::vector<std::vector<std::string>> test = tests.GetTests();
				line.clear();
				int size = tests.GetCount();
				for (int i = 1; i < size; i++)
				{
					line += test[0][i];
				}
				fioDataGridView->Rows[i]->Cells[fioDataGridView->Columns->Count - 1]->Value = gcnew String(line.c_str());
			}
		}
	}
}

private: System::Void LoadListBox()
{
	telefonCheckBox->Items->Insert(0, "123456");
	telefonCheckBox->Items->Insert(0, "8(123)234-567-89");
	telefonCheckBox->Items->Insert(0, "12-34-56");
	telefonCheckBox->Items->Insert(0, "+8(123)234-567-89");
}

private: System::Void telefonButton_Click(System::Object^  sender, System::EventArgs^  e) 
{
	MyForm ^ form = gcnew MyForm();
	form->ShowDialog();
	CheckedListBox ^ boxForm = form->GetListBox();
	if (boxForm->GetItemChecked(0))
	{
		isSurname = true;
	}
	else
	{
		isSurname = false;
	}
	if (boxForm->GetItemChecked(1))
	{
		isName = true;
	}
	else
	{
		isName = false;
	}
	if (boxForm->GetItemChecked(2))
	{
		isPatronymic = true;
	}
	else
	{
		isPatronymic = false;
	}
}

private: System::Void regularList_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}