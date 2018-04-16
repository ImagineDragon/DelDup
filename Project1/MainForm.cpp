#include "MainForm.h"
#include "clocale"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main()
{
	//setlocale(LC_ALL, NULL);
	setlocale(0, "");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MainForm form;
	Application::Run(%form);
}
