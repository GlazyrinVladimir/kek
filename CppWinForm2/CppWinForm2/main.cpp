#include "MainWindow.h"
#include "AddRegForm.h"
#include "Help.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	srand(time(time_t(0)));

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CppWinForm2::MainWindow form;

	CppWinForm2::AddRegForm form1;

	CppWinForm2::HelpForm form2;

	Application::Run(%form);
}


