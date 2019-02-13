#include "login.h"
using namespace System::Windows::Forms;
using System::String;
using namespace System;


void main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	otlob::login loginForm;
	Application::Run(%loginForm);
}