#include "fungen.h"
#include <string>

namespace inpoutFun
{
	using namespace std;

	string enpup=" "; int Kingnw=0,Kingnb=0; // if=1 a King already in board.


	// Function: return key for King White keys.
	// (Check if there is already a King).
	int kcontrolw(char ik)
	{
		int indk;
		if(ik=='K'&&Kingnw==0){
           Kingnw=1;indk=18;
		}
		else if(ik=='k'&&Kingnb==0){
			Kingnb=1;indk=5;
		}
		else
			indk=14;

		return indk;

	}



	// Function: return key for King Black keys.
	// (check if there is already a King).
	int kcontrolb(char ikb)
	{
		int ink;
		if(ikb=='K'&&Kingnw==0){
           Kingnw=1;ink=17;
		}
		else if(ikb=='k'&&Kingnb==0){
			Kingnb=1;ink=4;
		}
		else
			ink=1;

		return ink;

	}



	// Function: return image index for White key.
	int indexpw(char pmw)
	{
		int indexw;
		switch(pmw){
				case 'v':indexw=14;break;
				case 'K':indexw=kcontrolw(pmw);break;
				case 'k':indexw=kcontrolw(pmw);break;
				case 'Q':indexw=24;break;
				case 'q':indexw=11;break;
				case 'R':indexw=0;break;
				case 'r':indexw=13;break;
				case 'B':indexw=16;break;
				case 'b':indexw=3;break;
				case 'N':indexw=20;break;
				case 'n':indexw=7;break;
				case 'P':indexw=22;break;
				case 'p':indexw=9;break;
				default:indexw=14;break;
				}
		return indexw;
	}



    // Function: return image index for Black key.
	int indexpb(char pmb)
	{
		int indexb;
		switch(pmb){
			case 'v':indexb=1;break;
			case 'K':indexb=kcontrolb(pmb);break;
			case 'k':indexb=kcontrolb(pmb);break;
			case 'Q':indexb=23;break;
			case 'q':indexb=10;break;
			case 'R':indexb=25;break;
			case 'r':indexb=12;break;
			case 'B':indexb=15;break;
			case 'b':indexb=2;break;
			case 'N':indexb=19;break;
			case 'n':indexb=6;break;
			case 'P':indexb=21;break;
			case 'p':indexb=8;break;
			default:indexb=1;break;
            }
		return indexb;
	}

	

	// Trasform index in key piece. 
	char indcas(int ind1)
	{
		char outp;
		switch(ind1){
			case 14:outp='v';break;
			case 18:outp='K';break;
			case 5:outp='k';break;
			case 24:outp='Q';break;
			case 11:outp='q';break;
			case 0:outp='R';break;
			case 13:outp='r';break;
			case 16:outp='B';break;
			case 3:outp='b';break;
			case 20:outp='N';break;
			case 7:outp='n';break;
			case 22:outp='P';break;
			case 9:outp='p';break;
			case 1:outp='v';break;
			case 17:outp='K';break;
			case 4:outp= 'k';break;
			case 23:outp='Q';break;
			case 10:outp='q';break;
			case 25:outp='R';break;
			case 12:outp='r';break;
			case 15:outp='B';break;
			case 2:outp='b';break;
			case 19:outp='N';break;
			case 6:outp='n';break;
			case 21:outp='P';break;
			case 8:outp='p';break;
			default:outp='v';break;
		}
		return outp;
	}



	// Function: return piece for key index.
	void pezincc(int nvet,int indxcasa)
	{
		kboard[nvet]=indcas(indxcasa);
		
	}



	// Delete space in enpp string.
	string elimspz(string enps)
	{
		int l=enps.length();string enouts;
		if(l>1){
			return enouts=enps.substr(1,l);
		}
		else
			return enps;
	}



	// Check for the display enpassant in user input.
	// Return=1 ok.
	int enpokp()
	{
		int work=0,lun=0;char enpu=' ';
		
		lun=enpup.length();
		if(lun>=2){
			// Read the first valid character, and establishes if is
			// a enpassant character. If no, delete.
			lun=enpup.length();
			// If there is only a valid character.
			if(lun==1){
				enpu=legcar(enpup,0);
				return lenp(enpu);

			}
			else if(lun==2){
				enpu=legcar(enpup,0);
				if(lenp(enpu)==0)
					return 0;
				else{
					enpu=legcar(enpup,1);
					if(colorp=='b'){
						if(enpu!='3')
							return 0;
					}
					if(colorp=='w'){
						if(enpu!='6')
							return 0;
						
					}
				}
				return 1;
			}
			
			
		}
		else
			return 1;
		

    }



	// Check enpassant, if changes colour manually.
	// Return=0 error, delete the enpassant string.
	int enpmc(string senp)
	{
		char rsenp;
		rsenp=legcar(senp,1);
		if(colorp=='w'){
			if(rsenp=='3')
				return 0;
		}
		else{
			if(rsenp=='6')
				return 0;
		}
		return 1;
	}



	}

 
	
	





