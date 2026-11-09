#include <string>
// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently

#pragma once

// TODO: reference additional headers your program requires here


namespace Albi1{
	 
	using namespace std;using namespace System;
	//transform a system string^ in std string
	void MarshalString ( String ^ s, string& os ); 
}



namespace ProvaGUI {
	using namespace std;
	int uploadF(int invf);
	int uploadsn(char k);
	int readmovtx();
	char uploadsc(char C);
	string dipnmsG();
	string disperrf(int okf);
	string dispnms(char d);
	string dipSGB(char vs);
	void loadsc(char pzm);
	void loadsC(char datc, char valuec);
	void loadsn(int ni,char c);
	void loadsn2(int indv, int indc);
	void expst(System::String ^ inl,char vc);

	using namespace System;
	using namespace System::IO;
	void plSound(String ^filewav);
}
	

