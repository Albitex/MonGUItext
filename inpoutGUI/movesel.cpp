#include"fungen.h"
#include<string>

namespace inpoutFun
{
	using namespace std;
	
    const int dim1=70;

	// The select moves, send to the analysis engine.( if loadm=1.
	// Vector to display user select moves. 
    string nmsout[dim1]; 
	
	int nmE=0; //n. select moves -quantity- (will be send to analysis engine )
	int outnms=0, lunm=0;
	int movko=0; // if=1 erred move (error for audio signal)
	string movein; // loading from the user
	

	// Function:  extract the first character.
	string esik(string movexx)
	{
		char carat;
		basic_string <char>::reference refmovexx =movexx[0];
		carat=refmovexx;
		if(carat==' '){
			lunm=(movexx.length()-1);
		    movexx=movexx.substr(1,lunm);
		}

		return movexx;
	}
	


	// Create the vector nmsout[nmE].
	// nmE = user select moves quantity,
	// nmsout[] = vector to display user select moves. 
	int cnmsout(string movinx)
	{
		// =1 select move ok, =0 no correct,=2 already select.
		int i;string nouta;
		movinx+=" "; outnms=0;
		//  check if the move load from user is a possible move.
		for(i=0;i<nmp;i++){
			nouta=" "+nmsG[i];
			if(movinx==nmsG[i]||movinx==nouta){
				outnms=1;break;
			}

		}
		if(outnms==0)
			return 0;
		
		// check if the move load from user is a already select move.
		for(i=0;i<nmE;i++){
			nouta=" "+nmsout[i];
			if(movinx==nmsout[i]||movinx==nouta){
				outnms=2;break;
			}

		}

		if(outnms==1){
			movinx=esik(movinx);
			nmsout[nmE]=movinx;
			nmE++;
		}
		else
			outnms=2;

		return outnms;

	}


	
	// Display the text in richTextBox2. 
	string msdys(int stout)
	{
		string outr2=" ";
		if(stout==0){
			
				
				if(loadm==0){
					outr2="\n  You have chosen to consider all moves.\n";
					outr2+="\n  Close this window ('moves' Windows form)\n";
					outr2+="  to start the analysis.\n";
					outr2+="  Otherwise, to redefine the moves, press the\n";
					outr2+="  Restart button.";

				}
				else{
					int i;
					outr2+="\n\n  You have chosen to consider the moves:\n\n";
					for(i=0;i<nmE;i++){
						outr2+="  "+nmGt+nmsout[i]+" \n";
					}
					outr2+="\n  Close this window ('moves' Windows form)\n";
					outr2+="  to start the analysis.\n";
					outr2+="  Otherwise, to redefine the moves, press the\n";
					outr2+="  Restart button.";


		        }

		}
		else if(stout==1){
			int caso,i;
			caso=cnmsout(movein);

			// display if the load move is already been selected
			if(caso==2){
				outr2="\n  The moves: "+nmGt+movein+" \n";
				outr2+="  has already been select \n";
				movko=1;
			}

			// display if the load move is not possible
			else if (caso==0){
				outr2="\n  The moves: "+nmGt+movein+" \n";
				outr2+="  not possible move \n";
				movko=1;
            }

			// display the select moves
			outr2+="\n  You have chosen to consider the moves:\n\n";
			for(i=0;i<nmE;i++){
					outr2+="  "+nmGt+nmsout[i]+" \n";
			}

		}
		// user instructions
		else if(stout==2){
			        outr2="\n  To select all the possible moves:\n";
					outr2+="   Click on 'Start' button.\n";
					outr2+="\n  To choose only some moves:\n";
					outr2+="   Drag or write the moves in text box\n";
					outr2+="   above 'load move' button, and then\n";
					outr2+="   click on 'load move' (This for every move).";
		}
		else if(stout==-1){
			// text if start position in stalemate in stallo
			outr2="\n  Start Position in stalemate.\n";
			outr2+="  To close this window and past a new\n";
			outr2+="  string FEN in 'fen' textbox.";

		}
		else{
			// text if string FEN erred
			outr2="\n  Incoherent FEN.\n";
			outr2+="  To close this window and past a\n";
			outr2+="  correct fen string in 'fen' textbox.";
			movko=1;
		}

		return outr2;

		
	}



	// On behalf FEN control, for FEN <26or>92 retun=0 ko, 1 FEN ok.
    int fencor(){
		int lgfen=Fen.length();
		if(lgfen>25&&lgfen<93)
			return 1;
		else
			return 0;
	}


	

}


