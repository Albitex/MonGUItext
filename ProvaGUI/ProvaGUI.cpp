// ProvaGUI.cpp : file di progetto principale.

#include "stdafx.h"
#include "Form1.h"

using namespace ProvaGUI;

[STAThreadAttribute]
int main(cli::array<System::String ^> ^args)
{
	//Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
    Application::Run(gcnew Form1());
	
	return 0;
}
