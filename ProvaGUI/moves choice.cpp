#include "StdAfx.h"
#include "inpoutdll.h"
#include <string>

//
// FUNCTIONS TO COMMUNICATE BETWEEN GUI AND DLL
//

namespace ProvaGUI {
	
	using namespace std;

	// read moves
	int readmovtx(){
		int okt;
		// read moves from move.txt file
		okt=inpoutFun::inotext::readnmsG();
		return okt;
	}


	// Display moves
	string dipnmsG(){
		using namespace std;
		string stro;
		// display moves from DLL in GUI
		stro=inpoutFun::inpfGUI::outD('N');
		return stro;
		
	}


	// load a string in GUI
	string dipSGB(char vs){
		using namespace std;
		string strb;
		// load string from DLL in GUI
		strb=inpoutFun::inpfGUI::outD(vs);
		return strb;
	}


	// load a int variable in DLL
	// ni=value c=variable type
	void loadsn(int ni,char c){
		inpoutFun::inpfGUI::inpDi(ni,c);
	}


	// load 2 int variables in DLL
	void loadsn2(int indv, int indc)
	{
		inpoutFun::inpfGUI::inpD2i(indv, indc); 
	}


	// load a char data in DLL
	// datc=value valuec=variable type
	void loadsC(char datc, char valuec){
		inpoutFun::inpfGUI::inpDC(datc,valuec);
	}


	// load una char piece in DLL
	void loadsc(char pzm){
		inpoutFun::inpfGUI::inpDc(pzm);
	}

	
	// load a int variable in GUI
	int uploadsn(char k){
		int outin;
		outin=inpoutFun::inpfGUI::outDi(k);
		return outin;
	}


	// load a index board form 1 
	int uploadF(int invf)
	{
		int outf;
		outf=inpoutFun::inpfGUI::outDF(invf);
		return outf;
	}


	// load un char data in GUI
	char uploadsc(char C){
		char outC;
		outC=inpoutFun::inpfGUI::outDC(C);
		return outC;
	}


	// display select moves
	string dispnms(char d){
		string outm;
		switch (d){
		case 'a':inpoutFun::inpfGUI::inpDi(0,'m');break;
		case 'b':inpoutFun::inpfGUI::inpDi(1,'m');break;
		case 'c':inpoutFun::inpfGUI::inpDi(2,'m');break;
		default:outm="error";break;
		}
		outm=inpoutFun::inpfGUI::outD('M');
		return outm;
	}


	// display error FEN or in stalemate
	string disperrf(int okf){
		inpoutFun::inpfGUI::inpDi(okf,'m');
		return inpoutFun::inpfGUI::outD('M');
	}


	//  export a  system string in DLL (as std string)
	void expst(System::String ^ inl,char vc){
		        string inlod;
		        Albi1::MarshalString(inl,inlod);
	            inpoutFun::inpfGUI::inpD(inlod,vc);
	}

	
	// produce sound
	void plSound(String ^filewav)
			{
				using namespace System;
                using namespace System::IO;
                using namespace System::Diagnostics;
                using namespace System::Media;

                String ^installPath = AppDomain::CurrentDomain->BaseDirectory;
                String ^exePath = Path::Combine(installPath, filewav);
                SoundPlayer ^simpleSound = gcnew SoundPlayer(exePath);
                simpleSound->Play();
            }




			
}


