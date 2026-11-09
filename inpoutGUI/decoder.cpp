#include "fungen.h"
#include <string>

namespace inpoutFun
{
	//  DECLARATIONS Variables
    //  pieces, position start.
	char Kc,Qc,Q1c,Q2c,Q3c,Rc,R1c,R2c,R3c,Bc,B1c,B2c,B3c;
	char Nc,N1c,N2c,N3c,Pc,P1c,P2c,P3c,P4c,P5c,P6c,P7c;
	int Kr,Qr,Q1r,Q2r,Q3r,Rr,R1r,R2r,R3r,Br,B1r,B2r,B3r;
	int Nr,N1r,N2r,N3r,Pr,P1r,P2r,P3r,P4r,P5r,P6r,P7r;
	char kc,qc,q1c,q2c,q3c,rc,r1c,r2c,r3c,bc,b1c,b2c,b3c;
	char nc,n1c,n2c,n3c,pc,p1c,p2c,p3c,p4c,p5c,p6c,p7c;
	int kr,qr,q1r,q2r,q3r,rr,r1r,r2r,r3r,br,b1r,b2r,b3r;
	int nr,n1r,n2r,n3r,pr,p1r,p2r,p3r,p4r,p5r,p6r,p7r;

	// Declarations variables to set position.
	// color, castle, enpassant, n.moves.
	 char colorp='w',W=' ',w=' ',B=' ',b=' '; string enpp="-",nmosp=" ",mos50=" ";
	// Castle: W=short White, w=long White, B= short black, b= long black.

	

// Init pieces or reset. 
// Init chessboard, all pieces to zero. 
// Use at the start of every new game or FEN.
	void initpgame()
	{
	
		Kc='0',Qc='0',Q1c='0',Q2c='0',Q3c='0',Rc='0',R1c='0',R2c='0',R3c='0',Bc='0',B1c='0',B2c='0',B3c='0';
		Nc='0',N1c='0',N2c='0',N3c='0',Pc='0',P1c='0',P2c='0',P3c='0',P4c='0',P5c='0',P6c='0',P7c='0';
		Kr=0,Qr=0,Q1r=0,Q2r=0,Q3r=0,Rr=0,R1r=0,R2r=0,R3r=0,Br=0,B1r=0,B2r=0,B3r=0;
		Nr=0,N1r=0,N2r=0,N3r=0,Pr=0,P1r=0,P2r=0,P3r=0,P4r=0,P5r=0,P6r=0,P7r=0;
		kc='0',qc='0',q1c='0',q2c='0',q3c='0',rc='0',r1c='0',r2c='0',r3c='0',bc='0',b1c='0',b2c='0',b3c='0';
		nc='0',n1c='0',n2c='0',n3c='0',pc='0',p1c='0',p2c='0',p3c='0',p4c='0',p5c='0',p6c='0',p7c='0';
		kr=0,qr=0,q1r=0,q2r=0,q3r=0,rr=0,r1r=0,r2r=0,r3r=0,br=0,b1r=0,b2r=0,b3r=0;
		nr=0,n1r=0,n2r=0,n3r=0,pr=0,p1r=0,p2r=0,p3r=0,p4r=0,p5r=0,p6r=0,p7r=0;
	
	}



	// Reset parameters GUI FEN board (after the load of a string FEN).
	void resetfpg()
	{
       colorp='w',W=' ',w=' ',B=' ',b=' '; enpp="-",nmosp=" ";mos50=" ";
	}



	// Reset only nmosp e mos50 parameters.
	void resetpa()
	{
		nmosp=" ";mos50=" ";enpp="-";
	}


	// Variable if character is a number or a piece.
	int cnop;  
    // Variables.
    int pv,Pn,pn,Qn,qn,Rn,rn,Bn,bn,Nn,nn;
    char kex='0';


	// Vector 64 chessboard key (0=a8,63=h8).
	const int dimb=64;
	char kboard[dimb];


	// Start o reset vector 64 key.
	void startboard()
	{
		int i;
		for(i=0;i<64;i++){
			kboard[i]='v';
		}
	}



	// Function: read decimal number from 0 to 9, otherwise  error. 
	int lnd(char nd)
	{
		int okd=0;
		switch (nd)
		{
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':okd=1;break;
		default :okd=0;break;
		}
		return okd;
	}



	// Function: read enpassant key.
	int lenp(char casa)
	{
		int enon=0;
		switch (casa)
		{
	
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':enon=1;break;
		case '-':enon=2;break;
		default :enon=0;break;
		}
		return enon;
	}

	

	// Function: reads character: "legcar".
	// Read the character of the character counter. “character position number".
	char legcar (string fen, int nposz)
	{
		char carattere;
		basic_string <char>::reference reffen =fen[nposz];
		return carattere=reffen;
	}



	// Function: check if character is a number or a piece.
	// Return cnop=0 empty key, cnop=1 occupied key, 
    // or special character, or error.
	int nopz (char cy)
	{
		cnop=0;
		switch (cy)
		{
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':cnop=0;break;
		default :cnop=1;break;
		}
		return cnop;
	}



	// Function: transform char numbers extracted from
	// input FEN string, in int type.
	int tcti(char In)
	{
		int key;
		switch(In){
		case '0':key=0;break;
		case '1':key=1;break;
		case '2':key=2;break;
		case '3':key=3;break;
		case '4':key=4;break;
		case '5':key=5;break;
		case '6':key=6;break;
		case '7':key=7;break;
		case '8':key=8;break;
		default :key=10;break;
		}

		return key;
	}

    

    // Function: transform int row in char type.
	char tcic(int R)
	{
		char pdc;
		switch(R){
		case 1:pdc='a';break;
		case 2:pdc='b';break;
		case 3:pdc='c';break;
		case 4:pdc='d';break;
		case 5:pdc='e';break;
		case 6:pdc='f';break;
		case 7:pdc='g';break;
		case 8:pdc='h';break;
		default:pdc='0';break;
		}

		return pdc;
	}



    // Function: transforms character extracted in piece coordinates.
    // Return pv=0: piece, pv=1: error.
    int tkp (char pz,char c, int r)
	{ 
		int pnx=0,qnx=0,rnx=0,bnx=0,nnx=0;
		pv=0;//init return variable pv. 
		switch (pz)  
		{
		case 'K':Kc=c;Kr=r;break;
		case 'Q':qnx=1;break;
		case 'R':rnx=1;break;
		case 'B':bnx=1;break;
		case 'N':nnx=1;break;
		case 'P':pnx=1;break;
		case 'k':kc=c;kr=r;break;
		case 'q':qnx=2;break;
		case 'r':rnx=2;break;
		case 'b':bnx=2;break;
		case 'n':nnx=2;break;
		case 'p':pnx=2;break;
		default :pv=1;break;
		}
		if (pnx==1)
		{
			switch (Pn)
			{
			case 0:Pc=c;Pr=r;break;
			case 1:P1c=c;P1r=r;break;
			case 2:P2c=c;P2r=r;break;
			case 3:P3c=c;P3r=r;break;
			case 4:P4c=c;P4r=r;break;
			case 5:P5c=c;P5r=r;break;
			case 6:P6c=c;P6r=r;break;
			case 7:P7c=c;P7r=r;break;
			default:pv=1;break;
			}
		}
		if (pnx==2)
		{
			switch (pn)
			{
			case 0:pc=c;pr=r;break;
			case 1:p1c=c;p1r=r;break;
			case 2:p2c=c;p2r=r;break;
			case 3:p3c=c;p3r=r;break;
			case 4:p4c=c;p4r=r;break;
			case 5:p5c=c;p5r=r;break;
			case 6:p6c=c;p6r=r;break;
			case 7:p7c=c;p7r=r;break;
			default:pv=1;break;
			}
		   
		}
		if (nnx==1)
		{
			switch (Nn)
			{
			case 0:Nc=c;Nr=r;break;
			case 1:N1c=c;N1r=r;break;
			case 2:N2c=c;N2r=r;break;
			case 3:N3c=c;N3r=r;break;
			default:pv=1;break;
			}
		}
		if (nnx==2)
		{
			switch (nn)
			{
			case 0:nc=c;nr=r;break;
			case 1:n1c=c;n1r=r;break;
			case 2:n2c=c;n2r=r;break;
			case 3:n3c=c;n3r=r;break;

			default:pv=1;break;
			}
		   
		}
		if (bnx==1)
		{
			switch (Bn)
			{
			case 0:Bc=c;Br=r;break;
			case 1:B1c=c;B1r=r;break;
			case 2:B2c=c;B2r=r;break;
			case 3:B3c=c;B3r=r;break;
			default:pv=1;break;
			}
		}
		if (bnx==2)
		{
			switch (bn)
			{
			case 0:bc=c;br=r;break;
			case 1:b1c=c;b1r=r;break;
			case 2:b2c=c;b2r=r;break;
			case 3:b3c=c;b3r=r;break;
			default:pv=1;break;
			}
		   
		}
		if (rnx==1)
		{
			switch (Rn)
			{
			case 0:Rc=c;Rr=r;break;
			case 1:R1c=c;R1r=r;break;
			case 2:R2c=c;R2r=r;break;
			case 3:R3c=c;R3r=r;break;
			default:pv=1;break;
			}
		}
		if (rnx==2)
		{
			switch (rn)
			{
			case 0:rc=c;rr=r;break;
			case 1:r1c=c;r1r=r;break;
			case 2:r2c=c;r2r=r;break;
			case 3:r3c=c;r3r=r;break;
			default:pv=1;break;
			}
		   
		}
		if (qnx==1)
		{
			switch (Qn)
			{
			case 0:Qc=c;Qr=r;break;
			case 1:Q1c=c;Q1r=r;break;
			case 2:Q2c=c;Q2r=r;break;
			case 3:Q3c=c;Q3r=r;break;
			default:pv=1;break;
			}
		}
		if (qnx==2)
		{
			switch (qn)
			{
			case 0:qc=c;qr=r;break;
			case 1:q1c=c;q1r=r;break;
			case 2:q2c=c;q2r=r;break;
			case 3:q3c=c;q3r=r;break;
			default:pv=1;break;
			}
		   
		}
	   

		return pv;
	}



	// Function: DECODER
   int dec (string fenx)
   {
	   
	   int n=0; //init variable character position counter
	            //input FEN string

	   int lun;//FEN length
	   lun=fenx.length();

	   int ff=0;//init "return" end line
	     //ff=0 nul, ff=1 new line,ff=2 error,ff=3 end position.

	   Pn=0,pn=0;//init number pawns counters

	   // init other pieces counters
	   Qn=0;qn=0;Rn=0;rn=0;Bn=0;bn=0;Nn=0;nn=0;
       int i=0;int ix=0;
       int y=8;
	  
	   do
	   {
		   if (n>=lun)
	       {
		       ff=3;break;
	       }
	       basic_string <char>::reference reffenx = fenx [n];
	       n++;
		   kex=reffenx;
	       if (kex=='/')
		   {
			   y--;i=0;
			   continue;
		   }
		   if(i>=8)
		   {
			   ff=2;break;
		   }
	       nopz(kex);
		       if (cnop==1)
		       {
				   ix=i+1;
			       
			       tkp(kex,tcic(ix),y);
			       switch (pv)
			       {
					   case 0:ff=0;break;
			           case 1:ff=2;break;
					   default:ff=2;break;
						   	   
			       }
				   switch (kex)
				   {
				   case 'P':Pn++;break;
				   case 'p':pn++;break;
				   case 'Q':Qn++;break;
				   case 'q':qn++;break;
				   case 'R':Rn++;break;
				   case 'r':rn++;break;
				   case 'B':Bn++;break;
				   case 'b':bn++;break;
				   case 'N':Nn++;break;
				   case 'n':nn++;break;
				   default:ff=0;break;
				   }
					   

				   
				   
		       }
			    else if (cnop==0){
					i+=tcti(kex);
				    continue;
					}
				else ff=2;
				i++;
	   }
	   while(ff==0);
	   	   
	   return ff;//ff=3 position ok, =2 error;
	   
	  
   }



   // Check if there is a White pawn within key for Black move.
   // Return=1 if there is a pawn.
   int pawis(int rpw, char cpw)
   {
	   if(Pr==rpw&&Pc==cpw)
		   return 1;
	   else if(P1r==rpw&&P1c==cpw)
		   return 1;
	   else if(P2r==rpw&&P2c==cpw)
		   return 1;
	   else if(P3r==rpw&&P3c==cpw)
		   return 1;
	   else if(P4r==rpw&&P4c==cpw)
		   return 1;
	   else if(P5r==rpw&&P5c==cpw)
		   return 1;
	   else if(P6r==rpw&&P6c==cpw)
		   return 1;
	   else if(P7r==rpw&&P7c==cpw)
		   return 1;
	   else
		   return 0;
   }



   // Check if there is a Black pawn within key for White move.
   // Return=1 if there is a pawn.
   int pawbis(int rpb, char cpb)
   {
	   if(pr==rpb&&pc==cpb)
		   return 1;
	   else if(p1r==rpb&&p1c==cpb)
		   return 1;
	   else if(p2r==rpb&&p2c==cpb)
		   return 1;
	   else if(p3r==rpb&&p3c==cpb)
		   return 1;
	   else if(p4r==rpb&&p4c==cpb)
		   return 1;
	   else if(p5r==rpb&&p5c==cpb)
		   return 1;
	   else if(p6r==rpb&&p6c==cpb)
		   return 1;
	   else if(p7r==rpb&&p7c==cpb)
		   return 1;
	   else
		   return 0;
   }




   // Function: enpassant control. Is there pawns within line 2°?
   // Return=0 no pawn in line 2°.
   int enP2(char enpsp)
   {
	   if(enpsp=='-')
		   return 1;
	   // if color=White
	   if(colorp=='w'){
		   switch (enpsp){
		   case 'a':return pawbis(5,'a');break;
		   case 'b':return pawbis(5,'b');break;
		   case 'c':return pawbis(5,'c');break;
		   case 'd':return pawbis(5,'d');break;
		   case 'e':return pawbis(5,'e');break;
		   case 'f':return pawbis(5,'f');break;
		   case 'g':return pawbis(5,'g');break;
		   case 'h':return pawbis(5,'h');break;
		   }
		   
	   }
	   else{
		   // if color=Black
		   switch (enpsp){
		   case 'a':return pawis(4,'a');break;
		   case 'b':return pawis(4,'b');break;
		   case 'c':return pawis(4,'c');break;
		   case 'd':return pawis(4,'d');break;
		   case 'e':return pawis(4,'e');break;
		   case 'f':return pawis(4,'f');break;
		   case 'g':return pawis(4,'g');break;
		   case 'h':return pawis(4,'h');break;
		   }

	   }

	   return 1;
   


   }


   // Function: FEN string control.
   // Check the correctness of the string FEN.
   // return=1 FEN ok, =0 error.
	int controlfen (string fens, int lun)
	{
		// fen length>int lun parameter, character position number>int npos,
		// n. key row>int ncasr, number "/" line> int nsl, 
		// n. spaces> int nsp. Int ok> return value if=0 error(not correct FEN).
		// n. empty key read in single character> int ncv. 
		int npos=0,ncasr=0,nsl=0,nsp=0,ncv=0;

		// n. pieces
		int nK=0,nk=0,nQ=0,nq=0,nR=0,nr=0,nN=0,nn=0,nB=0,nb=0,nP=0,np=0,ok=0;
		int K=0,k=0,Q=0,q=0;

		// n.castle key, color, enpassant, 50 moves.
		int ncarr=0,ncol=0,nenp=0,n50m=0;
		// readed character>carat 
		char carat='@'; char color='@';

	    
		if(lun<26||lun>92)
			return ok=0;

		do{
 			carat=legcar(fens,npos);
			npos++;

			// read position
			if(nsp==0){
				if(carat==' '){
					// end position
					if(npos<16)
						return ok=0;
					else
						nsp++;
					// control end latest line
					if(ncasr!=8)
								return ok=0;
					if(nsl!=7)
						return ok=0;
					if(nK!=1||nk!=1)
						return ok=0;
					if(nQ>8||nq>8||nR>8||nr>8||nB>8||nb>8||nN>8||nn>8||nP>8||np>8)
						return ok=0;
				}
				else{
					// if is not end position
					int sl=0;
					ncv=tcti(carat);
					// if is empty key
					if(ncv!=10)
						ncasr+=ncv;
					else{
						//se piece or "/"
						switch (carat)
							{
								case 'K':nK++;break;
								case 'Q':nQ++;break;
								case 'R':nR++;break;
								case 'B':nB++;break;
								case 'N':nN++;break;
								case 'P':nP++;break;
								case 'k':nk++;break;
								case 'q':nq++;break;
								case 'r':nr++;break;
								case 'b':nb++;break;
								case 'n':nn++;break;
								case 'p':np++;break;
								default :sl=1;break;
							}
				
						//se piece
						if(sl==0)
							ncasr++;
						else{
							if(carat!='/')
								return ok=0;
							// if end line "/"
							if(ncasr!=8)
								return ok=0;
							else{
								nsl++;
							}
							if(nsl>7)
								return ok=0;
							else
								ncasr=0;

						}

					

				   }

						
			   }

			}
			// COLOR
			else if(nsp==1){
				int nspc=0;
				switch (carat)
				{
				case 'w':ncol++;color=colorp='w';break;
				case 'b':ncol++;color=colorp='b';break;
				case ' ':nspc=1;break;
				default :ncol=2;break;
				}
				// end color
				if(nspc==1){
					if(ncol==1)
						nsp++;
					else
						return ok=0;
				  
				}
							
			}
			// CASTLE
			else if(nsp==2){
				int nspar=0;
				switch (carat)
				{
				case '-':ncarr=4;break;
				case 'K':ncarr++;K++;W='K';break;
				case 'k':ncarr++;k++;B='k';break;
				case 'Q':ncarr++;Q++;w='Q';break;
				case 'q':ncarr++;q++;b='q';break;
				case ' ':nspar=2;break;
				default :nspar=1;break;
				}

				// end castle
			    if(nspar==2){
					if(ncarr<1||ncarr>4)
						return ok=0;
					else {
						if(K>1||k>1||Q>1||q>1)
							return ok=0;
						else
							nsp++; 
					}
					
				    
			    }
				else if(nspar==1)
					return 0;
							
			}
			// EN PASSANT
			else if(nsp==3){
			
				// read 1° enpassant character 
				if(nenp==0){
					int nspe=lenp(carat);
					if (nspe==0)
						return ok=0;
					else if(nspe==1)
						nenp=1;
					else
						nenp=2;
					enpp+=carat;
				}
				// read 2° enpassant character 
				else if(nenp==1)
				{
					if(color=='b'){
						if(carat!='3')
							return ok=0;
						else
							nenp=2;
					}
					if(color=='w'){
						if(carat!='6')
							return ok=0;
						else
							nenp=2;

					}

					enpp+=carat;

				}
				// end enpassant
				else if(nenp==2){
					if(carat!=' ')
						return ok=0;
					else
						nsp++;

				}

			}
			// 50 MOVES
			else if(nsp==4){
				//1° 50 moves character 
				if(n50m==0){
					if(lnd(carat)==0)
						return ok=0;
					else{
						n50m=1;mos50+=carat;
					}
				}
				//2° 50 moves character 
				else if(n50m==1){
					if(lnd(carat)==0){
						if(carat==' ')
							nsp++;
						else
							return ok=0;
					}
					else{
						n50m=2;mos50+=carat;
					}


				}
				//3° 50 moves character 
				else if(n50m==2){
					if(carat==' ')
						nsp++;
					else{
						return ok=0;mos50+=carat;
					}
				}
			}
			// Number GAME MOVE
			else if(nsp>=5){
				if(lnd(carat)==1){
					nsp++;nmosp+=carat;
				}
				else
					return ok=0;
				// max. n. 99999 mosse
				if(nsp>10)
					return ok=0;
					

			}



		
		}
		while (npos<lun);

		if(nsp>=5)
			ok=1;
		else
			ok=0;

		return ok;




	}



	// Load FEN if correct.
	int lmoveG ()
	{
		// f=0 no valid FEN, f=1 valid FEN;
		int i,f=1,lung=0,lun4=0;string Fenp;char kf=' '; 
		// it extracts the position from the FEN, cut to the first space
		for(i=0;i<93;i++){
			kf=legcar(Fen,i);
			if(kf==' ')
				break;
		}
		
		if(i<17||i>71)
			return 0;
		else{
			lung=Fen.length();
			if(controlfen(Fen,lung)==1){
				// init pieces
			    initpgame();Fenp=Fen.substr(0,i);

				// f variable is not used. 
				// I have imported the dec() function from engine without change it.
				// However the control of the FEN is performed over with controlfen().
			    f=dec(Fenp);

				// Rook and King position control  for castle
				if(W=='K'){
					if( castlever(W)==0){
						return 0;
					}
				}
				if(w=='Q'){
					if( castlever(w)==0){
						return 0;
					}
				}
				if(B=='k'){
					if( castlever(B)==0){
						return 0;
					}
				}
				if(b=='q'){
					if( castlever(b)==0){
						return 0;
					}
				}
				lun4=nmosp.length();nmosp=nmosp.substr(1,lun4); 
				
			}
			else{
				Fen="?";return 0;
			}

			if(enpp.length()==3){
				return enP2(legcar(enpp,1));
			}
			if(enpp.length()==2){
				return enP2(legcar(enpp,0));
			}
			
		}
	
		return 1;
	}



	// Transform the row in int for board.
	int colint(char cl)
	{
		int ocol=0;
		switch(cl){
		case 'a':ocol=0;break;
		case 'b':ocol=1;break;
		case 'c':ocol=2;break;
		case 'd':ocol=3;break;
		case 'e':ocol=4;break;
		case 'f':ocol=5;break;
		case 'g':ocol=6;break;
		case 'h':ocol=7;break;
		default:ocol=0;break;
		}

		return ocol;

	}



	// Transform the line in int for board.
	int rigint(int rg)
	{
		int orig=0;
		switch(rg){
		case 1:orig=56;break;
		case 2:orig=48;break;
		case 3:orig=40;break;
		case 4:orig=32;break;
		case 5:orig=24;break;
		case 6:orig=16;break;
		case 7:orig=8;break;
		case 8:orig=0;break;
		default:orig=0;break;
		}

		return orig;
	}


	// LOAD PIECE
	// We consider maxim 4 pieces for type (for possible pawn promotions).
	
	// Load the piece in board for Black.
	void lboardb()
	{
		int nkey=0;

		// assign King
		nkey=rigint(kr)+colint(kc);
		kboard[nkey]='k';
				
		// assign Pawns
		if(pr!=0){
			nkey=rigint(pr)+colint(pc);
			kboard[nkey]='p';
		}
		if(p1r!=0){
			nkey=rigint(p1r)+colint(p1c);
			kboard[nkey]='p';
		}
		if(p2r!=0){
			nkey=rigint(p2r)+colint(p2c);
			kboard[nkey]='p';
		}
		if(p3r!=0){
			nkey=rigint(p3r)+colint(p3c);
			kboard[nkey]='p';
		}
		if(p4r!=0){
			nkey=rigint(p4r)+colint(p4c);
			kboard[nkey]='p';
		}
		if(p5r!=0){
			nkey=rigint(p5r)+colint(p5c);
			kboard[nkey]='p';
		}
		if(p6r!=0){
			nkey=rigint(p6r)+colint(p6c);
			kboard[nkey]='p';
		}
		if(p7r!=0){
			nkey=rigint(p7r)+colint(p7c);
			kboard[nkey]='p';
		}
		// assign Queen
		if(qr!=0){
			nkey=rigint(qr)+colint(qc);
			kboard[nkey]='q';
		}
		if(q1r!=0){
			nkey=rigint(q1r)+colint(q1c);
			kboard[nkey]='q';
		}
		if(q2r!=0){
			nkey=rigint(q2r)+colint(q2c);
			kboard[nkey]='q';
		}
		if(q3r!=0){
			nkey=rigint(q3r)+colint(q3c);
			kboard[nkey]='q';
		}
		// assign Rook
		if(rr!=0){
			nkey=rigint(rr)+colint(rc);
			kboard[nkey]='r';
		}
		if(r1r!=0){
			nkey=rigint(r1r)+colint(r1c);
			kboard[nkey]='r';
		}
		if(r2r!=0){
			nkey=rigint(r2r)+colint(r2c);
			kboard[nkey]='r';
		}
		if(r3r!=0){
			nkey=rigint(r3r)+colint(r3c);
			kboard[nkey]='r';
		}
		// assign Bishop
		if(br!=0){
			nkey=rigint(br)+colint(bc);
			kboard[nkey]='b';
		}
		if(b1r!=0){
			nkey=rigint(b1r)+colint(b1c);
			kboard[nkey]='b';
		}
		if(b2r!=0){
			nkey=rigint(b2r)+colint(b2c);
			kboard[nkey]='b';
		}
		if(b3r!=0){
			nkey=rigint(b3r)+colint(b3c);
			kboard[nkey]='b';
		}
		// assign Knight
		if(nr!=0){
			nkey=rigint(nr)+colint(nc);
			kboard[nkey]='n';
		}
		if(n1r!=0){
			nkey=rigint(n1r)+colint(n1c);
			kboard[nkey]='n';
		}
		if(n2r!=0){
			nkey=rigint(n2r)+colint(n2c);
			kboard[nkey]='n';
		}
		if(n3r!=0){
			nkey=rigint(n3r)+colint(n3c);
			kboard[nkey]='n';
		}

	}



	// Load the piece in board for White
	void lboardw()
	{
		int nkey=0;

		// assign King
		nkey=rigint(Kr)+colint(Kc);
		kboard[nkey]='K';
				
		// assign Pawns
		if(Pr!=0){
			nkey=rigint(Pr)+colint(Pc);
			kboard[nkey]='P';
		}
		if(P1r!=0){
			nkey=rigint(P1r)+colint(P1c);
			kboard[nkey]='P';
		}
		if(P2r!=0){
			nkey=rigint(P2r)+colint(P2c);
			kboard[nkey]='P';
		}
		if(P3r!=0){
			nkey=rigint(P3r)+colint(P3c);
			kboard[nkey]='P';
		}
		if(P4r!=0){
			nkey=rigint(P4r)+colint(P4c);
			kboard[nkey]='P';
		}
		if(P5r!=0){
			nkey=rigint(P5r)+colint(P5c);
			kboard[nkey]='P';
		}
		if(P6r!=0){
			nkey=rigint(P6r)+colint(P6c);
			kboard[nkey]='P';
		}
		if(P7r!=0){
			nkey=rigint(P7r)+colint(P7c);
			kboard[nkey]='P';
		}
		// assign Queen
		if(Qr!=0){
			nkey=rigint(Qr)+colint(Qc);
			kboard[nkey]='Q';
		}
		if(Q1r!=0){
			nkey=rigint(Q1r)+colint(Q1c);
			kboard[nkey]='Q';
		}
		if(Q2r!=0){
			nkey=rigint(Q2r)+colint(Q2c);
			kboard[nkey]='Q';
		}
		if(Q3r!=0){
			nkey=rigint(Q3r)+colint(Q3c);
			kboard[nkey]='Q';
		}
		// assign Rook
		if(Rr!=0){
			nkey=rigint(Rr)+colint(Rc);
			kboard[nkey]='R';
		}
		if(R1r!=0){
			nkey=rigint(R1r)+colint(R1c);
			kboard[nkey]='R';
		}
		if(R2r!=0){
			nkey=rigint(R2r)+colint(R2c);
			kboard[nkey]='R';
		}
		if(R3r!=0){
			nkey=rigint(R3r)+colint(R3c);
			kboard[nkey]='R';
		}
		// assign Bishop
		if(Br!=0){
			nkey=rigint(Br)+colint(Bc);
			kboard[nkey]='B';
		}
		if(B1r!=0){
			nkey=rigint(B1r)+colint(B1c);
			kboard[nkey]='B';
		}
		if(B2r!=0){
			nkey=rigint(B2r)+colint(B2c);
			kboard[nkey]='B';
		}
		if(B3r!=0){
			nkey=rigint(B3r)+colint(B3c);
			kboard[nkey]='B';
		}
		// assign Knight
		if(Nr!=0){
			nkey=rigint(Nr)+colint(Nc);
			kboard[nkey]='N';
		}
		if(N1r!=0){
			nkey=rigint(N1r)+colint(N1c);
			kboard[nkey]='N';
		}
		if(N2r!=0){
			nkey=rigint(N2r)+colint(N2c);
			kboard[nkey]='N';
		}
		if(N3r!=0){
			nkey=rigint(N3r)+colint(N3c);
			kboard[nkey]='N';
		}

	}



	// Load the image index for the key.
	int indesb(int caimg)
	{
		int index=0;
		char colorc;
		// for White key
		switch (caimg){
		case 0:
		case 2:
		case 4:
		case 6:
		case 9:
		case 11:
		case 13:
		case 15:
		case 16:
		case 18:
		case 20:
		case 22:
		case 25:
		case 27:
		case 29:
		case 31:
		case 32:
		case 34:
		case 36:
		case 38:
		case 41:
		case 43:
		case 45:
		case 47:
		case 48:
		case 50:
		case 52:
		case 54:
		case 57:
		case 59:
		case 61:
		case 63:colorc='w';break;
		default:colorc='b';break; // for Black key
		}

		// for White key
		if(colorc=='w'){
			index=indexpw(kboard[caimg]);
		}
		// for Black key
		else{
			index=indexpb(kboard[caimg]);
		}

		return index;
		
	
	}



	// Rook presence control for castle. 
	// If find Rook return=1, there is a Rook.
	int isrcas(int cascr)
	{
		
		// Short castle-White h1
		if(cascr==1){
			if((Rr==1&&Rc=='h')||(R1r==1&&R1c=='h'))
				return 1;
			if((R2r==1&&R2c=='h')||(R3r==1&&R3c=='h'))
				return 1;
		}
		// Long castle-White h1
		else if(cascr==2){
			if((Rr==1&&Rc=='a')||(R1r==1&&R1c=='a'))
				return 1;
			if((R2r==1&&R2c=='a')||(R3r==1&&R3c=='a'))
				return 1;
		}
		// Short castle-Black h8
		else if(cascr==3){
			if((rr==8&&rc=='h')||(r1r==8&&r1c=='h'))
				return 1;
			if((r2r==8&&r2c=='h')||(r3r==8&&r3c=='h'))
				return 1;
		}
		// Long castle-Black a8
		else if(cascr==4){
			if((rr==8&&rc=='a')||(r1r==8&&r1c=='a'))
				return 1;
			if((r2r==8&&r2c=='a')||(r3r==8&&r3c=='a'))
				return 1;
		}

		return 0;

	}



	// Castle verification. 
	// Return =1 ok   
	int castlever(char casa)
	{
		int outf=1;
		if(casa=='K'){
			if(Kr!=1||Kc!='e'||isrcas(1)==0)
					 return 0;
		}
		else if(casa=='Q'){
			if(Kr!=1||Kc!='e'||isrcas(2)==0)
					 return 0;
		}
		else if(casa=='k'){
				if(kr!=8||kc!='e'||isrcas(3)==0)
					 return 0;
		}
		else if(casa=='q'){
			if(kr!=8||kc!='e'||isrcas(4)==0)
					 return 0;
		}
		else 
			return 1;

		return outf;
		
	}
		
		
	

			

		
		
}
	





