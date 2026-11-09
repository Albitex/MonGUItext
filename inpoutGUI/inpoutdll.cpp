
// compile with: /EHsc /LD

#include "inpoutdll.h"
#include "fungen.h"
#include <fstream>
#include <stdexcept>
#include<string>


// string Movesl=n.LOW moves
// string Limitm=n.limit moves(mod.limited analysis)
// string Crlog=Create log

namespace inpoutFun
{
	using namespace std;
	
	string Fen="?",Depth="7",Depthl="7",Multipv="3",Multipvl="3",Delta="100",Deltal="150";
	string Movesl="7",Hash="256",Thread="2",Limitm="17",Anal="0",Crlog="0";
	string mvalue=" ",mvalue1=" ",mvalue2=" ";
	string bestm=" ",perc="0",ntotg="0",nwint="0",ndrawt="0",nloset="0";
	string bestm1=" ",perc1="0",ntotg1="0",nwint1="0",ndrawt1="0",nloset1="0";
	string bestm2=" ",perc2="0",ntotg2="0",nwint2="0",ndrawt2="0",nloset2="0";
	string timet=" ",htime=" ",mtime=" ",stime=" ",mstime=" ",ntgames=" ";
	string outric2; // The string to display in richtextbox2

	
	
	int pwint=0,pdrawt=0,ploset=0,pwint1=0,pdrawt1=0,ploset1=0,pwint2=0,pdrawt2=0,ploset2=0;
	int loadm=0;// if=1 selected some moves, =0 selected all moves
	int starton=0; // if=1 start on
	int indexd=0;
	int startpos=0; // start if position set ok 
	char pzman='v'; // piece value on key
	int indp=0;/// piece vector index; to using when we manually load a piece in board 
	int invf=0; // 'vector index' index- index board form1
	int anncast=0; // if=1   annul the castle if selected (for Rook control)
	int indkin=0; // key index for King presence control
	int autost=0; // if=1 auto stop enable
	int saveG=0; // if=1 save game
	int stopgen=0; //  if=1 stop enable
	int conutst=0;//  if=1 it imposes stop
	int delpgn=0; // if=1 the save1 file is delete
	string gamest="10"; // n. tot. games for autostop
	

	// Vector index for board form1
	const int dim2=64;
	int inout[dim2];



	// Select label.
	string selzlab(char selz)
	{
		string outsl;
		if(selz=='a'){
			if(Anal=="f"||Anal=="0"){
				outsl="n.win "+nwint;
			}
			else{
				if(ntotg!="0"){
				outsl="m.value "+mvalue+" cp";
				}
				else{
					outsl="m.value ";
				}
 			}
		}
		else if(selz=='b'){
			if(Anal=="f"||Anal=="0"){
				outsl="n.win "+nwint1;
			}
			else{
				if(ntotg1!="0"){
					outsl="m.value "+mvalue1+" cp";
				}
				else{
					outsl="m.value ";
				}
			}
		}
		else if(selz=='c'){
			if(Anal=="f"||Anal=="0"){
				outsl="n.win "+nwint2;
			}
			else{
				if(ntotg2!="0"){
				outsl="m.value "+mvalue2+" cp";
				}
				else{
					outsl="m.value ";
				}
			}
		}
		else if(selz=='d'){
			if(Anal=="f"||Anal=="0"){
				outsl="n.draw "+ndrawt;
			}
			else{
				outsl=" ";
			}
		}
		else if(selz=='e'){
			if(Anal=="f"||Anal=="0"){
				outsl="n.lose "+nloset;
			}
			else{
				outsl=" ";
			}
		}
		
		else if(selz=='f'){
			if(Anal=="f"||Anal=="0"){
				outsl="n.draw "+ndrawt1;
			}
			else{
				outsl=" ";
			}
		}
		else if(selz=='g'){
			if(Anal=="f"||Anal=="0"){
				outsl="n.lose "+nloset1;
			}
			else{
				outsl=" ";
			}
		}
		
		else if(selz=='h'){
			if(Anal=="f"||Anal=="0"){
				outsl="n.draw "+ndrawt2;
			}
			else{
				outsl=" ";
			}
		}
		else if(selz=='i'){
			if(Anal=="f"||Anal=="0"){
				outsl="n.lose "+nloset2;
			}
			else{
				outsl=" ";
			}
		}

		return outsl;
		
	}



	// Delete save1 pgn file.
	void delgame()
	{
		int r=0;
		while(r<4){
			ofstream sf("save1.txt");
			if(!sf)
				r++;
			else{
				sf<<"";sf.close();
				r=5;
			}
		}
		
	}



    // Load a piece char vector in DLL.
	void loadsVc(int indice,char value){
		if(value=='v'){
			if(indkin==17||indkin==18)
				Kingnw=0;
			else if(indkin==4||indkin==5)
				Kingnb=0;
    	}
		if((value=='K'&&Kingnw==1)||(value=='k'&&Kingnb==1))
			kboard[indice]='v';
		else{
			kboard[indice]=value;
			// castle control
			if(value=='K'&&indice!=60){
				W=' ';w=' ';
			}
			else if(value=='k'&&indice!=4){
				B=' ';b=' ';
			}
		}
	}



	// Reset time and total n.games.
	void restimeng()
	{
		ntgames=" ";
		timet=" ";
	}



	// Control for castle, Rook key.
	// If return=1 eliminate possible castle.
	int ccasar(int indr, char casa)
	{
		if(casa=='A'){
			if(indr!=13)
				return 1;
		}
		else if(casa=='B'){
			if(indr!=12)
				return 1;
		}
		else if(casa=='C'){
			if(indr!=25)
				return 1;
		}
		else if(casa=='D'){
			if(indr!=0)
				return 1;
		}

		return 0;

	}



	// Function: to return=1 if total number games is reached.
	// Used for autostop.
	int readaust()
	{
		if(autost==1){
			if(gamest==ntgames)
				return 1;
		}
		return 0;
	}


   	
	// Function: to load in DLL a string data from GUI.
	void inpfGUI::inpD(string in,char tip)
	{
		switch(tip){
		case'f':Fen=in;break;
		case'd':Depth=in;break;
		case'e':Depthl=in;break;
		case'm':Multipv=in;break;
		case'n':Multipvl=in;break;
		case'a':Delta=in;break;
		case'b':Deltal=in;break;
		case'g':Movesl=in;break;
		case'h':Hash=in;break;
		case't':Thread=in;break;
		case'l':Limitm=in;break;
		case'c':Crlog=in;break;
		case'i':Anal=in;break;
		case'E':enpup=in;break;
		case'M':movein=in;break;
		case'N':nmosp=in;break;
		case 'A':enpp=in;break;
		case 'C':mos50=in;break;
		case 'u':gamest=in;break;
		default:Fen="error";break;
		}
		
	}



	// Function: to load in DLL a int data from GUI.
    void inpfGUI::inpDi(int ini,char tipi)
    {
		switch(tipi){
		case 'L':loadm=ini;break;
		case 'm':outric2=msdys(ini);break;
		case 'r':nmE=ini;break;
		case 'R':nmE=ini;nmGt=" ";break;
		case 's':starton=ini;break;
		case 'a':writestop();stopgen=ini;break;
		case 't':restimeng();break;
		case 'b':startboard();lboardb();lboardw();break;
		case 'd':indexd=indesb(ini);break;
		case 'p':startpos=ini;break;
		case 'i':indp=ini;break;
		case 'S':Kingnw=ini;Kingnb=ini;break;
		case 'F':invf=ini;break;
		case 'A':
		case 'B':
		case 'C':
		case 'D':anncast=ccasar(ini,tipi);break;
		case 'G':anncast=ini;break;
		case 'I' :indkin=ini;break;
		case 'u':autost=ini;break;
		case 'U':stopgen=ini;break;
		case 'Z':conutst=ini;break;
		case 'P':saveG=ini;break;
		case 'k':movko=ini;break;
		default:loadm=0;break;
		}

	}



	// Function: to load in DLL, 2 int data from GUI.
	void inpfGUI::inpD2i(int in, int inx)
	{
        pezincc(in,inx);
	}



	// Function: to load in DLL a char data from GUI.
	void inpfGUI::inpDC(char tipC, char value){
		switch(tipC){
		case 'c':colorp=value;break;
		case 'B':B=value;break;
		case 'b':b=value;break;
		case 'W':W=value;break;
		case 'w':w=value;break;
		case 'r':resetfpg();startboard();break;
		case 's':resetpa();break;
		case 'R':initpgame();break;
		case 'g':delgame();break;
		default:B=' ';break;
		}

	}



	// Function: to load in DLL a char piece from GUI.
	void inpfGUI::inpDc(char tipc)
	{
		pzman=tipc;
	}

	

	// Function: to exports a string in GUI.
	string inpfGUI::outD(char tipo)
	{
		string out;
		switch(tipo){
		case 'a':out=bestm;break;
		case 'b':out=perc;break;
		case 'c':out=ntotg;break;
		case 'd':out=selzlab('a');break;
		case 'e':out=selzlab('d');break;
		case 'f':out=out=selzlab('e');break;
        case 'g':out=bestm1;break;
		case 'h':out=perc1;break;
		case 'i':out=ntotg1;break;
		case 'l':out=selzlab('b');break;
		case 'm':out=selzlab('f');break;
		case 'n':out=selzlab('g');break;
        case 'o':out=bestm2;break;
		case 'p':out=perc2;break;
		case 'q':out=ntotg2;break;
		case 'r':out=selzlab('c');break;
		case 's':out=selzlab('h');break;
		case 't':out=selzlab('i');break;
		case 'F':out=fengen();break;
		case 'G':out="total n.games: "+ntgames;break;
		case 'T':out="total time: "+timet;break;
		case 'N':out=nmGt;break;
		case 'M':out=outric2;break;
		case 'E':out=elimspz(enpp);break;
		default:out=" ";break;
		}

		return out;
	}



	// Function: to exports a int in GUI.
	int inpfGUI::outDi(char tipoi)
	{
		int out1;
		switch(tipoi){
        case 'A':out1=pwint;break;
		case 'B':out1=pdrawt;break;
		case 'C':out1=ploset;break;
        case 'D':out1=pwint1;break;
		case 'E':out1=pdrawt1;break;
		case 'F':out1=ploset1;break;
        case 'G':out1=pwint2;break;
		case 'H':out1=pdrawt2;break;
		case 'I':out1=ploset2;break;
		case 'f':out1=fencor();break;
		case 's':out1=starton;break;
		case 'p':out1=readstope();break;
		case 'i':out1=lmoveG();break;
		case 'd':out1=indexd;inout[invf]=indexd;invf++;break;
		case 'z':out1=startpos;break;
		case 'w':out1=indexpw(pzman);loadsVc(indp,pzman); break;
		case 'n':out1=indexpb(pzman);loadsVc(indp,pzman);break;
		case 'e':out1=enpokp();break;
		case 'm':out1=Sinterod(nmosp);break; 
		case 'l':out1=enpmc(enpup);break;
		case 'a':out1=anncast;break;
		case 'u':out1=readaust();break;
		case 'v':out1=autost;break;
		case 'U':out1=stopgen;break;
		case 'Z':out1=conutst;break;
		case 'P':out1=saveG;break;
		case 'k':out1=movko;break;
		default:out1=0;break;
		}

		return out1;

	}



	// Function: to exports a index int for board form1 in GUI.
	int inpfGUI::outDF(int inf)
	{
		int outif=inout[inf];
		return outif;
	}



	// Function: to exports a char in GUI.
	char inpfGUI::outDC(char tipoC){
		char outc;
		switch(tipoC){
		case 'W':outc=W;break;
		case 'w':outc=w;break;
		case 'B':outc=B;break;
		case 'b':outc=b;break;
		case 'c':outc=colorp;break;
		default:outc=' ';break;
		}
		return outc;
	}


}
	

	

	
	
	

	



    

	
