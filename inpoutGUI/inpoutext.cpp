 
#include "inpoutdll.h"
#include "fungen.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <time.h>


// definitions of CHAR TYPE:
//
// the 'char types' are the characters used in the code of transmission data
// from GUI to analysis engine.
//
// char type= f>fen, d>depth, e>depthLOW, m>multipv, n>multipvLOW, a>delta, b>deltaLOW,
//            g>n.LOWmoves, h>hash, t>threads, l>n.limit moves(mod.limited analysis), i>limited analysis,
//            c>create log 
//

namespace inpoutFun
{
	using namespace std;

	extern string Fen,Depth,Depthl,Multipv,Multipvl,Delta,Deltal;
	extern string Movesl,Hash,Thread,Limitm,Anal,Crlog,mvalue,mvalue1,mvalue2;
	extern string bestm,perc,ntotg,nwint,ndrawt,nloset;
	extern string bestm1,perc1,ntotg1,nwint1,ndrawt1,nloset1;
	extern string bestm2,perc2,ntotg2,nwint2,ndrawt2,nloset2;
	extern string timet,htime,mtime,stime,mstime,ntgames;
	extern int pwint,pdrawt,ploset,pwint1,pdrawt1,ploset1,pwint2,pdrawt2,ploset2;

	int nmp=0; // n. possible moves, equivalent to nms of engine.
	// movrat= type container, nmGt= Move number(of a possible move,ex.:1.d4 nmGt='1').
	string movrat=" ",nmGt=" ";

	// Possible moves vector declaration nmsG[], read from move.txt file.
	const int dim=70;
	string nmsG[dim];
	

	

	// Function: transform char decimal in int decimal. 
	int tdcid(char dec){
		int decm=0;
		switch (dec)
		{
		case '0':decm=0;break;
		case '1':decm=1;break;
		case '2':decm=2;break;
		case '3':decm=3;break;
		case '4':decm=4;break;
		case '5':decm=5;break;
		case '6':decm=6;break;
		case '7':decm=7;break;
		case '8':decm=8;break;
		case '9':decm=9;break;
		default :decm=0;break;
		}

		return decm;
	
	}



	// Function: transform number string in int.
	int Sinterod(string nintero)
	{
		int esp=1,lun=0,i=0,out=0,outx;char carati; 
		// string length in input
		lun=nintero.length();
		int cont=lun-1;
		// read character from right
		do{
			basic_string <char>::reference refnintero =nintero[cont];
			carati=refnintero;
			//if character is not valid
			if(lnd(carati)==0)
				return out;
			// if character is valid
			else{
				outx=tdcid(carati);
				// if n.character=1
				if(lun==1){
					return out=outx;
					}
				// if n.character>1
				else{
					if(cont==lun-1){
						out=outx;
						}
					else{
						 esp*=10;out+=outx*esp;
						}
					
				}
      
       		}
			cont--;
		}
		while(cont>=0);

		return out;

	}



	// Function: eliminates the comma (delete ',').
	string elimv(string ndoublv)
	{
		int lung=0,i=0;string out=" "; char caratv;
		// string length in input
		lung=ndoublv.length();
		for(i=0;i<lung;i++){
			basic_string <char>::reference refndoublv=ndoublv[i];
			caratv=refndoublv;
			if(caratv!='.'){
				out+=caratv;
			}
			else{
				break;
			}
		}

		return out;
	}



	// Trasform a number string in percentage(%) int.
	int percwdl(string numsg,string numst)
	{
		int ngame,ngamet,per;
		
		if (numsg==" "||numsg=="0"||numst=="0"){
			return per=0;
		}
		ngame=Sinterod(numsg);
		ngamet=Sinterod(numst);
		per=(int)(ngame*100)/ngamet;
		return per;
	}

	
	
	// Function for linpout(), used to verify if the bestmove is a normal move
	// or of capture, then add or no two string.
	int numolet(string inmovl)
	{
		char car; int a=0;// if a=0 does not add the string (the 2° string is a number)
		basic_string <char>::reference refinmovl =inmovl[0];
		car=refinmovl;
		switch(car){
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':a=1;break;
		default:a=0;break;
		}

		return a;

	}
	


	// Function: write a string data in the inpout.txt file,
	// preceded by "z" character.
	int inotext::writetext(char m)
	{
		fstream log; string tempm;
		log.open("inpout.txt", ios::out|ios::app);
		if(!log)
			return 0;
		
		// write the acquired FEN
		if(m=='z'){
			tempm="zf"+Fen+" ";
			log<<tempm;
		}
		else{
			tempm="f "+Fen+" ";
			log<<tempm;
		}
		// WRITE PARAMETERS
		// Verification if it have been varied a parameter from default values. 
		// If the value has been varied it is written in inpout.txt file.
		if(Depth!="7"){
			tempm="zd"+Depth+" ";
			log<<tempm;
		}
		if(Depthl!="7"){
			tempm="ze"+Depthl+" ";
			log<<tempm;
			}
		if(Multipv!="3"){
			tempm="zm"+Multipv+" ";
			log<<tempm;
			}
		if(Multipvl!="3"){
			tempm="zn"+Multipvl+" ";
			log<<tempm;
			}
		if(Delta!="100"){
			tempm="za"+Delta+" ";
			log<<tempm;
			}
		if(Deltal!="150"){
			tempm="zb"+Deltal+" ";
			log<<tempm;
			}
		if(Movesl!="7"){
			tempm="zg"+Movesl+" ";
			log<<tempm;
			}
		if(Hash!="256"){
			tempm="zh"+Hash+" ";;
			log<<tempm;
			}
		if(Thread!="2"){
			tempm="zt"+Thread+" ";
			log<<tempm;
			}
		if(Limitm!="17"){
			tempm="zl"+Limitm+" ";
			log<<tempm;
			}
		if(Crlog!="0"){
			tempm="zc"+Crlog+" ";
			log<<tempm;
			}
		if(Anal!="0"){
			tempm="zi"+Anal+" ";
			log<<tempm;
			}
		if(autost==1){
			tempm="zu"+gamest+" ";
			log<<tempm;
		}
		if(saveG==1){
			tempm="zs1 ";
			log<<tempm;
		}

		log.close();
	
	
		return 1;


	}



	// Function: write a data moves string in the inpout.txt file,
	// 	preceded by "m" character.
	int inotext::writeMtext()
	{
		int i;string movout;
		fstream mve;
		mve.open("inpout.txt", ios::out|ios::app);
		if(!mve)
			return 0;
		// write  "read moves" state for analysis engine
		mve<<"S "; 
		// write moves if select all moves 
		if(loadm==0){
			for(i=0;i<nmp;i++){
				movout=nmsG[i]+"m ";
				mve<<movout;
				}
		}
		// write moves if select only some single moves
		else{
			for(i=0;i<nmE;i++){
				movout=nmsout[i]+"m ";
				mve<<movout;
				}
		
		}

		mve.close();

		return 1;

	}



	// Function: write stop in move.txt file.
	void writestop()
	{
		int v;
		ofstream stopp("move.txt");
		if(!stopp)
			v=0;
		else{
			stopp<<"a";
			stopp.close();
		}

	
	}




	 // Function: READ TEXT FROM inpout.txt FILE.
	 int readtb()      
	 {
		 int e; string bestma=" ",bestmb=" ",bestmc=" ",bestmd=" ";
		 e=0;// retun variable, =1 error.
	 
		 ifstream input("inpout.txt");
		 if(!input){
			 return 1;
		 }
		 // read type text identification symbol
		  input>>movrat;
		 if(movrat!="g"){
			 input.close();
			 return 1;
		 }
		 else{
			 // read n.total games
			 input>>ntgames;
			 // read hours, minutes, seconds, milliseconds
			 input>>htime;
			 input>>mtime;
			 input>>stime;
			 input>>mstime;
		 }
		 // read first move, BEST MOVE
		 input>>movrat;
		 if(movrat!="a"){
			 input.close();
			 return 1;
		 }
		 else{
			 input>>bestmc;
			 input>>bestmd;
			 // move the White 
			 if(bestmd!=".."){
				 bestma=bestmd;
				 input>>bestmb;
				 e=numolet(bestmb);
				 if(e==1){
					 bestm=bestmc+" "+bestma+" "+bestmb;
					 input>>perc;
				 }
				 else{
					 bestm=bestmc+" "+bestma;
					 perc=bestmb;
				 }

			 }
				  // move the Black
			 else{
				 input>>bestma;
				 input>>bestmb;
				 e=numolet(bestmb);
				 if(e==1){
					 bestm=bestmc+" "+bestmd+bestma+" "+bestmb;
					 input>>perc;
				 }
				 else{
					 bestm=bestmc+" "+bestmd+bestma;
					 perc=bestmb;
				 }
			
			
			 }
			 input>>ntotg;input>>nwint;
			 if(Anal=="0"||Anal=="f"){
				 input>>ndrawt;input>>nloset;
			 }
			 // delete comma (delete ',')
			 else{
				 input>>mvalue;
				 input>>movrat;
				 mvalue=elimv(mvalue);
				 perc=elimv(perc);
			 
			}
		 

		 }
		 // 2° move
		 input>>movrat;
		 if(movrat!="b"){
			 input.close();
			 return 0;
		 }
		 else{
			 input>>bestmc;
			 input>>bestmd;
			 // move the White
			 if(bestmd!=".."){
				 bestma=bestmd;
				 input>>bestmb;
				 e=numolet(bestmb);
				 if(e==1){
					 bestm1=bestmc+" "+bestma+" "+bestmb;
					 input>>perc1;
				 }
				 else{
					 bestm1=bestmc+" "+bestma;
					 perc1=bestmb;
				 }

			 }
				  // move the black
			 else{
				 input>>bestma;
				 input>>bestmb;
				 e=numolet(bestmb);
				 if(e==1){
					 bestm1=bestmc+" "+bestmd+bestma+" "+bestmb;
					 input>>perc1;
				 }
				 else{
					 bestm1=bestmc+" "+bestmd+bestma;
					 perc1=bestmb;
				 }
			
			
			 }
			 input>>ntotg1;input>>nwint1;
			 if(Anal=="0"||Anal=="f"){
				 input>>ndrawt1;input>>nloset1;
			 }
			 else{
				  // delete comma (delete ',')
				 input>>mvalue1;
				 input>>movrat;
				 mvalue1=elimv(mvalue1);
				 perc1=elimv(perc1);
			}

		 }
		 // 3° move
		 input>>movrat;
		 if(movrat!="c"){
			 input.close();
			 return 0;
		 }
		 else{
			 input>>bestmc;
			 input>>bestmd;
			 // move the White
			 if(bestmd!=".."){
				 bestma=bestmd;
				 input>>bestmb;
				 e=numolet(bestmb);
				 if(e==1){
					 bestm2=bestmc+" "+bestma+" "+bestmb;
					 input>>perc2;
				 }
				 else{
					 bestm2=bestmc+" "+bestma;
					 perc2=bestmb;
				 }

			 }
				  // move the Black
			 else{
				 input>>bestma;
				 input>>bestmb;
				 e=numolet(bestmb);
				 if(e==1){
					 bestm2=bestmc+" "+bestmd+bestma+" "+bestmb;
					 input>>perc2;
				 }
				 else{
					 bestm2=bestmc+" "+bestmd+bestma;
					 perc2=bestmb;
				 }
			
			
			 }
		 
			 input>>ntotg2;input>>nwint2;
			 if(Anal=="0"||Anal=="f"){
				 input>>ndrawt2;input>>nloset2;
			 }
			 else{
				  // delete comma (delete ',')
				 input>>mvalue2;
				 input>>movrat;
				 mvalue2=elimv(mvalue2);
				 perc2=elimv(perc2);
			}
		 

		 }
	
		 input.close();

		 return 0;
	}



	// Function: to display the percentage (%) in progressbar.
	int logper(int pper)
	{
		int outp,copy;
		if(pper>0&&pper<25){
			return outp=2;
		}
		else if(pper>24){
			copy=pper-(50-pper);
			if(copy>100)
				return outp=100;
			else if(copy>=0&&copy<5)
				return outp=4;
			else if(copy>4&&copy<=100)
				return copy;
		}
		else
			return 0;

	}



	// Function: trasform the nwin,ndraw,nlose string in percentage (%) string.
	void trperc()
	{

		 if(Anal=="0"||Anal=="f"){
			 pwint=percwdl(nwint,ntotg);
			 pdrawt=percwdl(ndrawt,ntotg);
			 ploset=percwdl(nloset,ntotg);
			 pwint1=percwdl(nwint1,ntotg1);
			 pdrawt1=percwdl(ndrawt1,ntotg1);
			 ploset1=percwdl(nloset1,ntotg1);
			 pwint2=percwdl(nwint2,ntotg2);
			 pdrawt2=percwdl(ndrawt2,ntotg2);
			 ploset2=percwdl(nloset2,ntotg2);
		 }
		 else{
				 pwint=logper(Sinterod(perc));
				 pdrawt=0;
				 ploset=0;
				 pwint1=logper(Sinterod(perc1));
				 pdrawt1=0;
				 ploset1=0;
				 pwint2=logper(Sinterod(perc2));
				 pdrawt2=0;
				 ploset2=0;
			 

			 }

		 // create the variable 'timet' (used to display total time
		 // and real time of the analysis session).
		 char cartm; 
		 basic_string <char>::reference refmstime =mstime[0];
		 cartm=refmstime;
		 timet=htime+" h "+mtime+"' "+stime+","+cartm+"''";
	 	 	
	 }



	 // Function: export in GUI of readtb() function.
	 int inotext::linpout() {
		 int outltx;
		 outltx=readtb();
		 if(outltx==0)
			 trperc();
		 return outltx;

	 }


	 
	 // Delete-reset, 'communication' txt file.
	 void inotext::resettxt(char t)
	 {
	
		if(t=='a'){
			ofstream afile("inpout.txt");
			afile << "";afile.close();
		}

		else if(t=='b'){
			ofstream bfile("move.txt");
			bfile << "";bfile.close();
		}
		else{
			ofstream cfile("log.txt");
			cfile << "";cfile.close();
		}
	
	 }

 

	 // Reset and init variables.
	 void inotext::resetvar()
	 {
		 perc=" ";ntotg=" ";nwint=" ";ndrawt=" ";nloset=" ",mvalue=" ";
		 perc1=" ";ntotg1=" ";nwint1=" ";ndrawt1=" ";nloset1=" ",mvalue1=" ";
		 perc2=" ";ntotg2=" ";nwint2=" ";ndrawt2=" ";nloset2=" ",mvalue2=" ";
		 bestm=" ";bestm1=" ";bestm2=" ";
		 pwint=0;pdrawt=0;ploset=0;pwint1=0;pdrawt1=0;ploset1=0;pwint2=0;pdrawt2=0;ploset2=0;
	 }



	 // Read moves from file move.txt.
	 //  if return=0 no open the file.
	 //  if return -1 is open file but  no moves (stalemate).
	 //  if return -2 is open file but incorrect FEN. 
	 //  if return >0 is open file and the value of return
	 //  is = to the possible moves number. 
	 int inotext::readnmsG()
	 {
		 char kar;int state=0,states=0, stnow=0;
		 // state=1 read move, stnow=1 memorize the read string.
		 // (is a number)

		 string movens=" ";
		 ifstream readmv("move.txt");
		 if(!readmv){
			 return 0;
		 }

		 int j=0;
		 readmv>>movens;
		 // read if stalemate in leading position.
		 if(movens=="t")
			 return -1;
		 // read if incoherent FEN 
		 if(movens=="i")
			 return -2;
		 while(!readmv.eof())
		 {
			 // reset the "now" state, what reveals if
			 // the last acquired string is a number.
			 stnow=0;

			 // stand out if the first two characters (of the text string)
			 // are = 'n.'(then we have a move, 'n.' to will follow a number
			 // and a 'move')
			 basic_string <char>::reference refmovens =movens[0];
			 kar=refmovens;
			 if (kar=='n'){
				 basic_string <char>::reference refmovens =movens[1];
				 kar=refmovens;
				 if(kar=='.'){
					 state++;stnow=1;j=0;states=1;
				 }

			 }

			 // Memorization of a possible move:
			 // If a text string has been read but is not = 'n.',
			 // or = to a number or = '..', memorizing the
			 // text string in the 'start moves vector' nmsG[].
			 

			 if(state>0&&stnow==0){
				 if(j==1&&movens!=".."){
					 if(states==1){
						 nmsG[state-1]=movens+" ";states=0;
					 }
					 else{
						 nmsG[state-1]+=movens+" ";
					 }
				 }
				 if(movens!=" ")
					 j=1;
			 }

			 // read text string
			 readmv>>movens;

         

		 
		 }
		 readmv.close();

		 // Read from inpout.txt file the n. move.
		 string nmtem;
		 ifstream nmGl("inpout.txt");
		 if(!nmGl){
			 return 0;
		 }

	 
		 do{
			 nmGl>>nmtem;
			 nmGt+=nmtem+" ";
		 }
		 while(!nmGl.eof());
		 nmGl.close();

		 if(state==0)
			 state=-1;
		 nmp=state;
	 
		 return state;



	 }



 // Read the stop from move.txt file deriving by engine.
 // Used to verify if the analysis engine has stopped,
 //	for management stop.
 int readstope()
 {
	 int stoeng=0; string stop=" ";
	 ifstream stope("move.txt");
	 if(!stope)
		 stoeng=0;

	 else{
		 stope>>stop;
		 stope.close();
		 if(stop=="p")
			 stoeng=1;
		 else
			 stoeng=0;
	 }
		 
	 return stoeng;
 }
 
  
 }