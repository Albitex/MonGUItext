#include "fungen.h"
#include <string>


namespace inpoutFun{



	// Trasform int n. empty key in string.
	string tcics(int R)
	{
		string pdcs;
		switch(R){
		case 1:pdcs="1";break;
		case 2:pdcs="2";break;
		case 3:pdcs="3";break;
		case 4:pdcs="4";break;
		case 5:pdcs="5";break;
		case 6:pdcs="6";break;
		case 7:pdcs="7";break;
		case 8:pdcs="8";break;
		default:pdcs="0";break;
		}
		return pdcs;
	}



	// Encoder from BOARD , for chessboard decoding (LOAD BOARD).
	string encoderB()
	{
		int i,ncv=0,vuot=0,nce=0,nre=0;string fk=" ";string fenfB=" ";
		
		for(i=0;i<64;i++){
			nce++;
			// read first key
			if(vuot==0){
				switch(kboard[i]){
				case 'v':ncv++;vuot=0;break;
				case 'K':fk="K";vuot=1;break;
				case 'k':fk="k";vuot=1;break;
				case 'Q':fk="Q";vuot=1;break;
				case 'q':fk="q";vuot=1;break;
				case 'R':fk="R";vuot=1;break;
				case 'r':fk="r";vuot=1;break;
				case 'B':fk="B";vuot=1;break;
				case 'b':fk="b";vuot=1;break;
				case 'N':fk="N";vuot=1;break;
				case 'n':fk="n";vuot=1;break;
				case 'P':fk="P";vuot=1;break;
				case 'p':fk="p";vuot=1;break;
				default:vuot=0;break;
				}
			}
			// if no empty and no 8° row
			if(vuot==1&&nce!=8){
				if(ncv!=0){
					fenfB+=tcics(ncv);ncv=0;
					fenfB+=fk;
				}
				else{
					fenfB+=fk;
				}
				vuot=0;
			}
			// if is 8° row
			else if(nce==8){
				if(vuot==0){
					fenfB+=tcics(ncv);ncv=0;
				}
				else{
					if(ncv!=0){
					fenfB+=tcics(ncv);ncv=0;
					fenfB+=fk;
					}
					else{
						fenfB+=fk;
					}
					
				}
				nre++;
				if(nre<8)
					fenfB+="/";
				// new line
				vuot=0;nce=0;ncv=0;
			}
		}

		fenfB+=" ";
		return fenfB;


	}



	// Create 'castle general' from board.
	string castlegen()
	{
		string castlebrd=" ";
		if(W!=' ')
			castlebrd+="K";
		if(w!=' ')
			castlebrd+="Q";
		if(B!=' ')
			castlebrd+="k";
		if(b!=' ')
			castlebrd+="q";
		if(castlebrd==" ")
			return " -";
		else
			return castlebrd;
		
	}



	// Adds a space if there is not space.
	string addspa(string kvalue)
	{
		char cextr;
		cextr=legcar(kvalue,0);
		if(cextr!=' ')
			kvalue=" "+kvalue;
		return kvalue;
	}



	// Create the 'FEN general' from board.
	string fengen()
	{
		string fenBoard="?",err=" ? Error fen"; int lunfb;
		fenBoard=encoderB()+colorp+castlegen()+addspa(enpup)+addspa(mos50)+addspa(nmosp);
		lunfb=fenBoard.length();
		fenBoard=fenBoard.substr(1,lunfb);
		if(controlfen(fenBoard,lunfb-1)==1){
			Fen=fenBoard;
			return fenBoard;
		}
		else
			return err;

	}






}