#include"moves choice.h"

if (counter>0){
					 // leggi mosse
					 ok=inpoutFun::inotext::readnmsG();
					// se lettura mossa ok Exit loop code.
					if(ok>0){
						richTextBox1->LoadFile("move.txt",
				        RichTextBoxStreamType::PlainText);
						timer1->Enabled = false;
                        counter = 0;
					}
					else if(ok==0)
						counter++;
					else{
						//funzione stallo
					}
                         

                 }
				 else
					 counter++;
					 
			 }