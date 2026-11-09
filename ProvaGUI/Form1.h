#include "stdafx.h"
#include "trasform.h"
#include "inpoutdll.h"
#include "logdelete.h"
#include "Board.h"
#include "moves choice.h"
#include "Save games.h"
#include "viewlog.h"
#include "Viewhelp.h"
#include <process.h>
#include <string>
#pragma once


namespace ProvaGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

		

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		public:

			

			// Writes the acquired FEN in inpout.text
			int writef()
			{
				using namespace std;
				int ok=0;
                inpoutFun::inotext::resettxt('a');
				inpoutFun::inotext::resettxt('b');
				ok=inpoutFun::inotext::writetext('z');
				return ok;
			}

			// Acquire the Depth parameter
			void loadDepth()
			{
				std::string Depc;
				Albi1::MarshalString(numericUpDown1->Value.ToString(),Depc);
				inpoutFun::inpfGUI::inpD(Depc,'d');
			   
			}

			// Acquire the DepthLOW parameter
			void loadDepthl()
			{
				std::string Depc1;
				Albi1::MarshalString(numericUpDown4->Value.ToString(),Depc1);
				inpoutFun::inpfGUI::inpD(Depc1,'e');
			   
			}

			// Acquire the Multipv parameter 
			void loadmulti()
			{
				std::string Depc2;
				Albi1::MarshalString(numericUpDown2->Value.ToString(),Depc2);
				inpoutFun::inpfGUI::inpD(Depc2,'m');
			   
			}

			// Acquire the MultipvLOW parameter  
			void loadmultil()
			{
				std::string Depc3;
				Albi1::MarshalString(numericUpDown5->Value.ToString(),Depc3);
				inpoutFun::inpfGUI::inpD(Depc3,'n');
			   
			}

			// Acquire the Delta parameter 
			void loadDeltaa()
			{
				std::string Depc4;
				Albi1::MarshalString(numericUpDown3->Value.ToString(),Depc4);
				inpoutFun::inpfGUI::inpD(Depc4,'a');
			   
			}

			// Acquire the Delta LOW parameter
			void loadDeltaal()
			{
				std::string Depc5;
				Albi1::MarshalString(numericUpDown6->Value.ToString(),Depc5);
				inpoutFun::inpfGUI::inpD(Depc5,'b');
			   
			}

			// Acquire the n.LOW moves parameter
			void loadnmossel()
			{
				std::string Depc6;
				Albi1::MarshalString(numericUpDown9->Value.ToString(),Depc6);
				inpoutFun::inpfGUI::inpD(Depc6,'g');
			   
			}

			// Acquire the Hash parameter 
			void loadhash()
			{
				std::string Depc7;
				Albi1::MarshalString(numericUpDown8->Value.ToString(),Depc7);
				inpoutFun::inpfGUI::inpD(Depc7,'h');
			   
			}

			// Acquire the Threads parameter 
			void loadthread()
			{
				std::string Depc8;
				Albi1::MarshalString(numericUpDown10->Value.ToString(),Depc8);
				inpoutFun::inpfGUI::inpD(Depc8,'t');
			   
			}

			// Acquire the n.limit moves parameter  
			void loadlimim()
			{
				std::string Depc9;
				Albi1::MarshalString(numericUpDown7->Value.ToString(),Depc9);
				inpoutFun::inpfGUI::inpD(Depc9,'l');
			   
			}

			// Acquire the 'Create log' parameter 
			void loadcrealog()
			{
				std::string Depc10;
				if (checkBox1->CheckState == CheckState::Checked) 
					Depc10="y";
				else
					Depc10="n";
				inpoutFun::inpfGUI::inpD(Depc10,'c');
			   
			}

			
			// Acquire the Limited analysis parameter 
			void loadanall()
			{
				std::string Depc11;
				if (checkBox2->CheckState == CheckState::Checked){
					Depc11="l";
					//set depth a=9
					inpoutFun::inpfGUI::inpD("9",'d');
					numericUpDown1->Value=9;
					//set depth low=9
					inpoutFun::inpfGUI::inpD("9",'e');
					numericUpDown4->Value=9;

				}
				else{
					Depc11="f";
				}
				inpoutFun::inpfGUI::inpD(Depc11,'i');
			   
			}

			// read Best move ( max. 3 best moves)
			int bestmove()
			{
				using namespace std;
				int ok; string datob;
				ok=inpoutFun::inotext::linpout();
				return ok;
            } 

			

			// DISPLAY

			// display n.tot games and time
			void disntotg()
			{
				using namespace std;
				string str;
				str=inpoutFun::inpfGUI::outD('G');
				label27->Text=gcnew String(str.c_str());
			    str=inpoutFun::inpfGUI::outD('T');
				label28->Text=gcnew String(str.c_str());
			}



			// display Best move
			void disbestm()
			{
				std::string str;
				str=inpoutFun::inpfGUI::outD('a');
				textBox2->Text=gcnew String(str.c_str());
			}

			// display Best move percentage %
			void disper()
			{
				std::string str;
				str=inpoutFun::inpfGUI::outD('b')+"%";
				textBox5->Text=gcnew String(str.c_str());
			}

			// display Best move total n.games
			void disntot()
			{
				std::string str;
				str=inpoutFun::inpfGUI::outD('c');
				textBox8->Text=gcnew String(str.c_str());
			}

			// display Best move1
			void disbestm1()
			{
				std::string str;
				str=inpoutFun::inpfGUI::outD('g');
				textBox3->Text=gcnew String(str.c_str());
			}

			// display Best move1 percentage %
			void disper1()
			{
				std::string str;
				str=inpoutFun::inpfGUI::outD('h')+"%";
				textBox6->Text=gcnew String(str.c_str());
			}

			// display Best move1 total n.games
			void disntot1()
			{
				std::string str;
				str=inpoutFun::inpfGUI::outD('i');
				textBox9->Text=gcnew String(str.c_str());
			}

			// display Best move2
			void disbestm2()
			{
				std::string str;
				str=inpoutFun::inpfGUI::outD('o');
				textBox4->Text=gcnew String(str.c_str());
			}

			// display Best move2 percentage %
			void disper2()
			{
				std::string str;
				str=inpoutFun::inpfGUI::outD('p')+"%";
				textBox7->Text=gcnew String(str.c_str());
			}

			// display Best move2 total n.games
			void disntot2()
			{
				std::string str;
				str=inpoutFun::inpfGUI::outD('q');
				textBox10->Text=gcnew String(str.c_str());
			}

			
			// PROGRESS BAR E LABEL
			// progress bar win
			void perwin()
			{
				using namespace std;
				int s;
				s=inpoutFun::inpfGUI::outDi('A');
				progressBar1->Value=s;
				
			}

			// label win
			void labelwin()
			{
				using namespace std;
				string str;
				str=inpoutFun::inpfGUI::outD('d');
				label15->Text=gcnew String(str.c_str());
				
			}

			// progress bar draw
			void perdraw()
			{
				using namespace std;
				int s=inpoutFun::inpfGUI::outDi('B');
				progressBar4->Value=s;
			}

			// label draw
			void labeldraw()
			{
				std::string str;
				str=inpoutFun::inpfGUI::outD('e');
				label17->Text=gcnew String(str.c_str());
			}

			// progress bar lose
			void perlose()
			{
				using namespace std;
				int s=inpoutFun::inpfGUI::outDi('C');
				progressBar5->Value=s;
			}

			// label lose
			void labellose()
			{
				std::string str;
				str=inpoutFun::inpfGUI::outD('f');
				label18->Text=gcnew String(str.c_str());
			}

			// progress bar win1
			void perwin1()
			{
				using namespace std;
				int s=inpoutFun::inpfGUI::outDi('D');
				progressBar2->Value=s;
			}

			// label win1
			void labelwin1()
			{
				using namespace std;
				string str;
				str=inpoutFun::inpfGUI::outD('l');
				label21->Text=gcnew String(str.c_str());
				
			}

			// progress bar draw1
			void perdraw1()
			{
				using namespace std;
				int s=inpoutFun::inpfGUI::outDi('E');
				progressBar6->Value=s;
			}

			// label draw1
			void labeldraw1()
			{
				std::string str;
				str=inpoutFun::inpfGUI::outD('m');
				label22->Text=gcnew String(str.c_str());
			}

			// progress bar lose1
			void perlose1()
			{
				using namespace std;
				int s=inpoutFun::inpfGUI::outDi('F');
				progressBar7->Value=s;
			}

			// label lose1
			void labellose1()
			{
				std::string str;
				str=inpoutFun::inpfGUI::outD('n');
				label23->Text=gcnew String(str.c_str());
			}

			// progress bar win2
			void perwin2()
			{
				using namespace std;
				int s=inpoutFun::inpfGUI::outDi('G');
				progressBar3->Value=s;
			}

			// label win2
			void labelwin2()
			{
				using namespace std;
				string str;
				str=inpoutFun::inpfGUI::outD('r');
				label24->Text=gcnew String(str.c_str());
				
			}
			// progress bar draw2
			void perdraw2()
			{
				using namespace std;
				int s=inpoutFun::inpfGUI::outDi('H');
				progressBar8->Value=s;
			}

			// label draw2
			void labeldraw2()
			{
				std::string str;
				str=inpoutFun::inpfGUI::outD('s');
				label25->Text=gcnew String(str.c_str());
			}

			// progress bar lose2
			void perlose2()
			{
				using namespace std;
				int s=inpoutFun::inpfGUI::outDi('I');
				progressBar9->Value=s;
			}

			// label lose2
			void labellose2()
			{
				std::string str;
				str=inpoutFun::inpfGUI::outD('t');
				label26->Text=gcnew String(str.c_str());
			}


            // Display result at start
			void disparinz()
			{
				disbestm();disper();disntot();perwin();labelwin();
				perdraw();labeldraw();perlose();labellose();disbestm1();disper1();
				disntot1();perwin1();labelwin1();perdraw1();labeldraw1();perlose1();
				labellose1();disbestm2();disper2();disntot2();perwin2();labelwin2();
				perdraw2();labeldraw2();perlose2();labellose2();
			}

			// Display result at real time and end analysis
			void generaldisp()
			{
				using namespace std;
				if(bestmove()==0){
					disntotg();disparinz();
				}

			}

			

			

	private:
			// To launch the Children program (analysis engine)
		    void outtras()
			{
				using namespace System;
                using namespace System::IO;
                using namespace System::Diagnostics;
				String ^installPath = AppDomain::CurrentDomain->BaseDirectory;
                ProcessStartInfo ^startInfo = gcnew ProcessStartInfo;
                startInfo->CreateNoWindow = true;
                startInfo->FileName = Path::Combine(installPath, "MS2.exe");
                startInfo->UseShellExecute = false;
                Process::Start(startInfo);
												
			}
			
			

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
        /// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::ProgressBar^  progressBar2;
	private: System::Windows::Forms::ProgressBar^  progressBar3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label14;




private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::TextBox^  textBox8;
private: System::Windows::Forms::TextBox^  textBox9;
private: System::Windows::Forms::TextBox^  textBox10;



private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label18;


private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::PictureBox^  pictureBox2;


private: System::Windows::Forms::ProgressBar^  progressBar4;
private: System::Windows::Forms::ProgressBar^  progressBar5;
private: System::Windows::Forms::ProgressBar^  progressBar6;
private: System::Windows::Forms::ProgressBar^  progressBar7;
private: System::Windows::Forms::ProgressBar^  progressBar8;
private: System::Windows::Forms::ProgressBar^  progressBar9;

private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label28;


private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Timer^  timer1;

private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;


private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::ProgressBar^  progressBar10;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::ImageList^  imageList2;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::Label^  label75;
private: System::Windows::Forms::Label^  label76;
private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::Label^  label78;
private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::Label^  label80;
private: System::Windows::Forms::Label^  label81;
private: System::Windows::Forms::Label^  label82;
private: System::Windows::Forms::Label^  label83;
private: System::Windows::Forms::Label^  label84;
private: System::Windows::Forms::Label^  label85;
private: System::Windows::Forms::Label^  label86;
private: System::Windows::Forms::Label^  label87;
private: System::Windows::Forms::Label^  label88;
private: System::Windows::Forms::Label^  label89;
private: System::Windows::Forms::Label^  label90;
private: System::Windows::Forms::Label^  label91;
private: System::Windows::Forms::Label^  label92;
private: System::Windows::Forms::Label^  label93;
private: System::Windows::Forms::Label^  label94;
private: System::Windows::Forms::Label^  label95;
private: System::Windows::Forms::Label^  label96;
private: System::Windows::Forms::Label^  label97;
private: System::Windows::Forms::Label^  label98;
private: System::Windows::Forms::Label^  label99;
private: System::Windows::Forms::Label^  label100;
private: System::Windows::Forms::Label^  label101;
private: System::Windows::Forms::Label^  label102;
private: System::Windows::Forms::Label^  label103;
private: System::Windows::Forms::Label^  label104;
private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::Label^  label106;
private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::NumericUpDown^  numericUpDown11;
private: System::Windows::Forms::Label^  label107;
private: System::Windows::Forms::CheckBox^  checkBox4;



private: System::ComponentModel::IContainer^  components;





	protected: 

	private:
		/// <summary>
		/// Required designer variable.
        /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar5 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar6 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar7 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar8 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar9 = (gcnew System::Windows::Forms::ProgressBar());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->progressBar10 = (gcnew System::Windows::Forms::ProgressBar());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown11))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(92, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Depth";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->AutoSize = true;
			this->numericUpDown1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->numericUpDown1->Location = System::Drawing::Point(46, 64);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->ReadOnly = true;
			this->numericUpDown1->Size = System::Drawing::Size(40, 20);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {7, 0, 0, 0});
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->AutoSize = true;
			this->numericUpDown2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->numericUpDown2->Location = System::Drawing::Point(46, 102);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {21, 0, 0, 0});
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->ReadOnly = true;
			this->numericUpDown2->Size = System::Drawing::Size(40, 20);
			this->numericUpDown2->TabIndex = 5;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown2_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(92, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Multi pv";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->AutoSize = true;
			this->numericUpDown3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->numericUpDown3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown3->Location = System::Drawing::Point(34, 138);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1200, 0, 0, 0});
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->ReadOnly = true;
			this->numericUpDown3->Size = System::Drawing::Size(52, 20);
			this->numericUpDown3->TabIndex = 7;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {100, 0, 0, 0});
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown3_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(92, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Delta";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->AutoSize = true;
			this->numericUpDown4->BackColor = System::Drawing::SystemColors::HighlightText;
			this->numericUpDown4->Location = System::Drawing::Point(182, 64);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->ReadOnly = true;
			this->numericUpDown4->Size = System::Drawing::Size(40, 20);
			this->numericUpDown4->TabIndex = 9;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {7, 0, 0, 0});
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown4_ValueChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(226, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"LOW depth";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->AutoSize = true;
			this->numericUpDown5->BackColor = System::Drawing::SystemColors::HighlightText;
			this->numericUpDown5->Location = System::Drawing::Point(182, 102);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {21, 0, 0, 0});
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->ReadOnly = true;
			this->numericUpDown5->Size = System::Drawing::Size(40, 20);
			this->numericUpDown5->TabIndex = 11;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown5_ValueChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(226, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"LOW multi pv";
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->AutoSize = true;
			this->numericUpDown6->BackColor = System::Drawing::SystemColors::HighlightText;
			this->numericUpDown6->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown6->Location = System::Drawing::Point(170, 138);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1200, 0, 0, 0});
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->ReadOnly = true;
			this->numericUpDown6->Size = System::Drawing::Size(52, 20);
			this->numericUpDown6->TabIndex = 13;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {150, 0, 0, 0});
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown6_ValueChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(226, 140);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"LOW delta";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(348, 28);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(74, 17);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"Create log";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(485, 27);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(99, 17);
			this->checkBox2->TabIndex = 16;
			this->checkBox2->Text = L"Limited analysis";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->AutoSize = true;
			this->numericUpDown7->BackColor = System::Drawing::SystemColors::HighlightText;
			this->numericUpDown7->Location = System::Drawing::Point(485, 59);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {40, 0, 0, 0});
			this->numericUpDown7->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->ReadOnly = true;
			this->numericUpDown7->Size = System::Drawing::Size(40, 20);
			this->numericUpDown7->TabIndex = 17;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {17, 0, 0, 0});
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown7_ValueChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(226, 28);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"n.LOW moves";
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->AutoSize = true;
			this->numericUpDown8->BackColor = System::Drawing::SystemColors::HighlightText;
			this->numericUpDown8->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {32, 0, 0, 0});
			this->numericUpDown8->Location = System::Drawing::Point(348, 97);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1024, 0, 0, 0});
			this->numericUpDown8->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {32, 0, 0, 0});
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->ReadOnly = true;
			this->numericUpDown8->Size = System::Drawing::Size(50, 20);
			this->numericUpDown8->TabIndex = 19;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {256, 0, 0, 0});
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown8_ValueChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(404, 99);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Hash";
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->AutoSize = true;
			this->numericUpDown9->BackColor = System::Drawing::SystemColors::HighlightText;
			this->numericUpDown9->Location = System::Drawing::Point(182, 26);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {21, 0, 0, 0});
			this->numericUpDown9->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->ReadOnly = true;
			this->numericUpDown9->Size = System::Drawing::Size(40, 20);
			this->numericUpDown9->TabIndex = 21;
			this->numericUpDown9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {7, 0, 0, 0});
			this->numericUpDown9->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown9_ValueChanged);
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->AutoSize = true;
			this->numericUpDown10->BackColor = System::Drawing::SystemColors::HighlightText;
			this->numericUpDown10->Location = System::Drawing::Point(348, 138);
			this->numericUpDown10->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16, 0, 0, 0});
			this->numericUpDown10->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->ReadOnly = true;
			this->numericUpDown10->Size = System::Drawing::Size(40, 20);
			this->numericUpDown10->TabIndex = 22;
			this->numericUpDown10->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->numericUpDown10->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown10_ValueChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(390, 140);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Threads";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(531, 61);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 13);
			this->label10->TabIndex = 24;
			this->label10->Text = L"n.limit moves";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(31, 313);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(66, 13);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Best move";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Control;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(25, 386);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(82, 20);
			this->textBox3->TabIndex = 27;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(40, 370);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 13);
			this->label12->TabIndex = 28;
			this->label12->Text = L"2° move";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(25, 444);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(82, 20);
			this->textBox4->TabIndex = 29;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(40, 428);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(46, 13);
			this->label13->TabIndex = 30;
			this->label13->Text = L"3° move";
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::SystemColors::Control;
			this->progressBar1->Location = System::Drawing::Point(305, 330);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(166, 23);
			this->progressBar1->TabIndex = 31;
			// 
			// progressBar2
			// 
			this->progressBar2->BackColor = System::Drawing::SystemColors::Control;
			this->progressBar2->Location = System::Drawing::Point(305, 386);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(166, 23);
			this->progressBar2->TabIndex = 32;
			// 
			// progressBar3
			// 
			this->progressBar3->BackColor = System::Drawing::SystemColors::Control;
			this->progressBar3->Location = System::Drawing::Point(305, 444);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(166, 23);
			this->progressBar3->TabIndex = 33;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Control;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(125, 329);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(39, 20);
			this->textBox5->TabIndex = 34;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::Control;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(125, 386);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(39, 20);
			this->textBox6->TabIndex = 35;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(125, 444);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(39, 20);
			this->textBox7->TabIndex = 36;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(136, 313);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(16, 13);
			this->label14->TabIndex = 37;
			this->label14->Text = L"%";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(361, 314);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(37, 13);
			this->label15->TabIndex = 47;
			this->label15->Text = L"n.win";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::Control;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(170, 330);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(60, 20);
			this->textBox8->TabIndex = 48;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::Control;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(170, 386);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(60, 20);
			this->textBox9->TabIndex = 49;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(170, 444);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(60, 20);
			this->textBox10->TabIndex = 50;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(179, 313);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(37, 13);
			this->label16->TabIndex = 51;
			this->label16->Text = L"n.tot.";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(554, 314);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(45, 13);
			this->label17->TabIndex = 52;
			this->label17->Text = L"n.draw";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(746, 314);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(41, 13);
			this->label18->TabIndex = 53;
			this->label18->Text = L"n.lose";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(702, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(140, 170);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 56;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(46, 278);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 32);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 57;
			this->pictureBox2->TabStop = false;
			// 
			// progressBar4
			// 
			this->progressBar4->BackColor = System::Drawing::SystemColors::Control;
			this->progressBar4->Location = System::Drawing::Point(495, 330);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(166, 23);
			this->progressBar4->TabIndex = 60;
			// 
			// progressBar5
			// 
			this->progressBar5->BackColor = System::Drawing::SystemColors::Control;
			this->progressBar5->Location = System::Drawing::Point(689, 330);
			this->progressBar5->Name = L"progressBar5";
			this->progressBar5->Size = System::Drawing::Size(166, 23);
			this->progressBar5->TabIndex = 61;
			// 
			// progressBar6
			// 
			this->progressBar6->BackColor = System::Drawing::SystemColors::Control;
			this->progressBar6->Location = System::Drawing::Point(495, 386);
			this->progressBar6->Name = L"progressBar6";
			this->progressBar6->Size = System::Drawing::Size(166, 23);
			this->progressBar6->TabIndex = 62;
			// 
			// progressBar7
			// 
			this->progressBar7->BackColor = System::Drawing::SystemColors::Control;
			this->progressBar7->Location = System::Drawing::Point(689, 386);
			this->progressBar7->Name = L"progressBar7";
			this->progressBar7->Size = System::Drawing::Size(166, 23);
			this->progressBar7->TabIndex = 63;
			// 
			// progressBar8
			// 
			this->progressBar8->BackColor = System::Drawing::SystemColors::Control;
			this->progressBar8->Location = System::Drawing::Point(495, 444);
			this->progressBar8->Name = L"progressBar8";
			this->progressBar8->Size = System::Drawing::Size(166, 23);
			this->progressBar8->TabIndex = 64;
			// 
			// progressBar9
			// 
			this->progressBar9->BackColor = System::Drawing::SystemColors::Control;
			this->progressBar9->Location = System::Drawing::Point(689, 444);
			this->progressBar9->Name = L"progressBar9";
			this->progressBar9->Size = System::Drawing::Size(166, 23);
			this->progressBar9->TabIndex = 65;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(361, 370);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 13);
			this->label21->TabIndex = 67;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(554, 370);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(0, 13);
			this->label22->TabIndex = 68;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(746, 370);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(0, 13);
			this->label23->TabIndex = 69;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(361, 428);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(0, 13);
			this->label24->TabIndex = 70;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(554, 428);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 13);
			this->label25->TabIndex = 71;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(746, 428);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(0, 13);
			this->label26->TabIndex = 72;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Control;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(25, 329);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(82, 20);
			this->textBox2->TabIndex = 25;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(615, 241);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(85, 15);
			this->label27->TabIndex = 75;
			this->label27->Text = L"total n.games:\r\n";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(615, 266);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(60, 15);
			this->label28->TabIndex = 76;
			this->label28->Text = L"total time:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->Location = System::Drawing::Point(485, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 79;
			this->button2->Text = L"View log";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->WorkerSupportsCancellation = true;
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::backgroundWorker1_DoWork);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button4->Location = System::Drawing::Point(485, 106);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 83;
			this->button4->Text = L"Reset log";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button5->Location = System::Drawing::Point(46, 18);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 84;
			this->button5->Text = L"Help";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::OrangeRed;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(170, 188);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 45);
			this->button6->TabIndex = 85;
			this->button6->Text = L"Chessboard\r\nset position";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// progressBar10
			// 
			this->progressBar10->Enabled = false;
			this->progressBar10->Location = System::Drawing::Point(388, 228);
			this->progressBar10->Name = L"progressBar10";
			this->progressBar10->Size = System::Drawing::Size(83, 10);
			this->progressBar10->Step = 20;
			this->progressBar10->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
			this->progressBar10->TabIndex = 89;
			this->progressBar10->Value = 100;
			this->progressBar10->Visible = false;
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(450, 199);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 88;
			this->button3->Text = L"STOP";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(412, 190);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(32, 32);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 90;
			this->pictureBox3->TabStop = false;
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(331, 199);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 91;
			this->button1->Text = L"START";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"wrw1.gif");
			this->imageList2->Images->SetKeyName(1, L"b1.jpg");
			this->imageList2->Images->SetKeyName(2, L"bbb1.gif");
			this->imageList2->Images->SetKeyName(3, L"bbw1.gif");
			this->imageList2->Images->SetKeyName(4, L"bkb1.gif");
			this->imageList2->Images->SetKeyName(5, L"bkw1.gif");
			this->imageList2->Images->SetKeyName(6, L"bnb1.gif");
			this->imageList2->Images->SetKeyName(7, L"bnw1.gif");
			this->imageList2->Images->SetKeyName(8, L"bpb1.gif");
			this->imageList2->Images->SetKeyName(9, L"bpw1.gif");
			this->imageList2->Images->SetKeyName(10, L"bqb1.gif");
			this->imageList2->Images->SetKeyName(11, L"bqw1.gif");
			this->imageList2->Images->SetKeyName(12, L"brb1.gif");
			this->imageList2->Images->SetKeyName(13, L"brw1.gif");
			this->imageList2->Images->SetKeyName(14, L"w1.gif");
			this->imageList2->Images->SetKeyName(15, L"wbb1.gif");
			this->imageList2->Images->SetKeyName(16, L"wbw1.gif");
			this->imageList2->Images->SetKeyName(17, L"wkb1.gif");
			this->imageList2->Images->SetKeyName(18, L"wkw1.gif");
			this->imageList2->Images->SetKeyName(19, L"wnb1.gif");
			this->imageList2->Images->SetKeyName(20, L"wnw1.gif");
			this->imageList2->Images->SetKeyName(21, L"wpb1.gif");
			this->imageList2->Images->SetKeyName(22, L"wpw_1.gif");
			this->imageList2->Images->SetKeyName(23, L"wqb1.gif");
			this->imageList2->Images->SetKeyName(24, L"wqw1.gif");
			this->imageList2->Images->SetKeyName(25, L"wrb1.gif");
			// 
			// label19
			// 
			this->label19->ImageIndex = 14;
			this->label19->ImageList = this->imageList2;
			this->label19->Location = System::Drawing::Point(677, 18);
			this->label19->MinimumSize = System::Drawing::Size(22, 22);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(22, 22);
			this->label19->TabIndex = 92;
			this->label19->Visible = false;
			// 
			// label20
			// 
			this->label20->ImageKey = L"b1.jpg";
			this->label20->ImageList = this->imageList2;
			this->label20->Location = System::Drawing::Point(699, 18);
			this->label20->MinimumSize = System::Drawing::Size(22, 22);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(22, 22);
			this->label20->TabIndex = 93;
			this->label20->Visible = false;
			// 
			// label29
			// 
			this->label29->ImageIndex = 14;
			this->label29->ImageList = this->imageList2;
			this->label29->Location = System::Drawing::Point(721, 18);
			this->label29->MinimumSize = System::Drawing::Size(22, 22);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(22, 22);
			this->label29->TabIndex = 94;
			this->label29->Visible = false;
			// 
			// label30
			// 
			this->label30->ImageKey = L"b1.jpg";
			this->label30->ImageList = this->imageList2;
			this->label30->Location = System::Drawing::Point(743, 18);
			this->label30->MinimumSize = System::Drawing::Size(22, 22);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(22, 22);
			this->label30->TabIndex = 95;
			this->label30->Visible = false;
			// 
			// label31
			// 
			this->label31->ImageIndex = 14;
			this->label31->ImageList = this->imageList2;
			this->label31->Location = System::Drawing::Point(765, 18);
			this->label31->MinimumSize = System::Drawing::Size(22, 22);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(22, 22);
			this->label31->TabIndex = 96;
			this->label31->Visible = false;
			// 
			// label32
			// 
			this->label32->ImageKey = L"b1.jpg";
			this->label32->ImageList = this->imageList2;
			this->label32->Location = System::Drawing::Point(787, 18);
			this->label32->MinimumSize = System::Drawing::Size(22, 22);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(22, 22);
			this->label32->TabIndex = 97;
			this->label32->Visible = false;
			// 
			// label33
			// 
			this->label33->ImageIndex = 14;
			this->label33->ImageList = this->imageList2;
			this->label33->Location = System::Drawing::Point(809, 18);
			this->label33->MinimumSize = System::Drawing::Size(22, 22);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(22, 22);
			this->label33->TabIndex = 98;
			this->label33->Visible = false;
			// 
			// label34
			// 
			this->label34->ImageKey = L"b1.jpg";
			this->label34->ImageList = this->imageList2;
			this->label34->Location = System::Drawing::Point(831, 18);
			this->label34->MinimumSize = System::Drawing::Size(22, 22);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(22, 22);
			this->label34->TabIndex = 99;
			this->label34->Visible = false;
			// 
			// label35
			// 
			this->label35->ImageIndex = 14;
			this->label35->ImageList = this->imageList2;
			this->label35->Location = System::Drawing::Point(699, 40);
			this->label35->MinimumSize = System::Drawing::Size(22, 22);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(22, 22);
			this->label35->TabIndex = 100;
			this->label35->Visible = false;
			// 
			// label36
			// 
			this->label36->ImageKey = L"b1.jpg";
			this->label36->ImageList = this->imageList2;
			this->label36->Location = System::Drawing::Point(677, 40);
			this->label36->MinimumSize = System::Drawing::Size(22, 22);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(22, 22);
			this->label36->TabIndex = 101;
			this->label36->Visible = false;
			// 
			// label37
			// 
			this->label37->ImageIndex = 14;
			this->label37->ImageList = this->imageList2;
			this->label37->Location = System::Drawing::Point(743, 40);
			this->label37->MinimumSize = System::Drawing::Size(22, 22);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(22, 22);
			this->label37->TabIndex = 102;
			this->label37->Visible = false;
			// 
			// label38
			// 
			this->label38->ImageKey = L"b1.jpg";
			this->label38->ImageList = this->imageList2;
			this->label38->Location = System::Drawing::Point(721, 40);
			this->label38->MinimumSize = System::Drawing::Size(22, 22);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(22, 22);
			this->label38->TabIndex = 103;
			this->label38->Visible = false;
			// 
			// label39
			// 
			this->label39->ImageKey = L"b1.jpg";
			this->label39->ImageList = this->imageList2;
			this->label39->Location = System::Drawing::Point(765, 40);
			this->label39->MinimumSize = System::Drawing::Size(22, 22);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(22, 22);
			this->label39->TabIndex = 104;
			this->label39->Visible = false;
			// 
			// label40
			// 
			this->label40->ImageKey = L"b1.jpg";
			this->label40->ImageList = this->imageList2;
			this->label40->Location = System::Drawing::Point(809, 40);
			this->label40->MinimumSize = System::Drawing::Size(22, 22);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(22, 22);
			this->label40->TabIndex = 105;
			this->label40->Visible = false;
			// 
			// label41
			// 
			this->label41->ImageIndex = 14;
			this->label41->ImageList = this->imageList2;
			this->label41->Location = System::Drawing::Point(787, 40);
			this->label41->MinimumSize = System::Drawing::Size(22, 22);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(22, 22);
			this->label41->TabIndex = 106;
			this->label41->Visible = false;
			// 
			// label42
			// 
			this->label42->ImageIndex = 14;
			this->label42->ImageList = this->imageList2;
			this->label42->Location = System::Drawing::Point(831, 40);
			this->label42->MinimumSize = System::Drawing::Size(22, 22);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(22, 22);
			this->label42->TabIndex = 107;
			this->label42->Visible = false;
			// 
			// label43
			// 
			this->label43->ImageKey = L"b1.jpg";
			this->label43->ImageList = this->imageList2;
			this->label43->Location = System::Drawing::Point(699, 62);
			this->label43->MinimumSize = System::Drawing::Size(22, 22);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(22, 22);
			this->label43->TabIndex = 108;
			this->label43->Visible = false;
			// 
			// label44
			// 
			this->label44->ImageKey = L"b1.jpg";
			this->label44->ImageList = this->imageList2;
			this->label44->Location = System::Drawing::Point(743, 62);
			this->label44->MinimumSize = System::Drawing::Size(22, 22);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(22, 22);
			this->label44->TabIndex = 109;
			this->label44->Visible = false;
			// 
			// label45
			// 
			this->label45->ImageKey = L"b1.jpg";
			this->label45->ImageList = this->imageList2;
			this->label45->Location = System::Drawing::Point(787, 62);
			this->label45->MinimumSize = System::Drawing::Size(22, 22);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(22, 22);
			this->label45->TabIndex = 110;
			this->label45->Visible = false;
			// 
			// label46
			// 
			this->label46->ImageKey = L"b1.jpg";
			this->label46->ImageList = this->imageList2;
			this->label46->Location = System::Drawing::Point(831, 62);
			this->label46->MinimumSize = System::Drawing::Size(22, 22);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(22, 22);
			this->label46->TabIndex = 111;
			this->label46->Visible = false;
			// 
			// label47
			// 
			this->label47->ImageIndex = 14;
			this->label47->ImageList = this->imageList2;
			this->label47->Location = System::Drawing::Point(677, 62);
			this->label47->MinimumSize = System::Drawing::Size(22, 22);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(22, 22);
			this->label47->TabIndex = 112;
			this->label47->Visible = false;
			// 
			// label48
			// 
			this->label48->ImageIndex = 14;
			this->label48->ImageList = this->imageList2;
			this->label48->Location = System::Drawing::Point(721, 62);
			this->label48->MinimumSize = System::Drawing::Size(22, 22);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(22, 22);
			this->label48->TabIndex = 113;
			this->label48->Visible = false;
			// 
			// label49
			// 
			this->label49->ImageIndex = 14;
			this->label49->ImageList = this->imageList2;
			this->label49->Location = System::Drawing::Point(765, 62);
			this->label49->MinimumSize = System::Drawing::Size(22, 22);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(22, 22);
			this->label49->TabIndex = 114;
			this->label49->Visible = false;
			// 
			// label50
			// 
			this->label50->ImageIndex = 14;
			this->label50->ImageList = this->imageList2;
			this->label50->Location = System::Drawing::Point(809, 62);
			this->label50->MinimumSize = System::Drawing::Size(22, 22);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(22, 22);
			this->label50->TabIndex = 115;
			this->label50->Visible = false;
			// 
			// label51
			// 
			this->label51->ImageIndex = 14;
			this->label51->ImageList = this->imageList2;
			this->label51->Location = System::Drawing::Point(699, 84);
			this->label51->MinimumSize = System::Drawing::Size(22, 22);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(22, 22);
			this->label51->TabIndex = 116;
			this->label51->Visible = false;
			// 
			// label52
			// 
			this->label52->ImageIndex = 14;
			this->label52->ImageList = this->imageList2;
			this->label52->Location = System::Drawing::Point(743, 84);
			this->label52->MinimumSize = System::Drawing::Size(22, 22);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(22, 22);
			this->label52->TabIndex = 117;
			this->label52->Visible = false;
			// 
			// label53
			// 
			this->label53->ImageIndex = 14;
			this->label53->ImageList = this->imageList2;
			this->label53->Location = System::Drawing::Point(787, 84);
			this->label53->MinimumSize = System::Drawing::Size(22, 22);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(22, 22);
			this->label53->TabIndex = 118;
			this->label53->Visible = false;
			// 
			// label54
			// 
			this->label54->ImageIndex = 14;
			this->label54->ImageList = this->imageList2;
			this->label54->Location = System::Drawing::Point(831, 84);
			this->label54->MinimumSize = System::Drawing::Size(22, 22);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(22, 22);
			this->label54->TabIndex = 119;
			this->label54->Visible = false;
			// 
			// label55
			// 
			this->label55->ImageKey = L"b1.jpg";
			this->label55->ImageList = this->imageList2;
			this->label55->Location = System::Drawing::Point(677, 84);
			this->label55->MinimumSize = System::Drawing::Size(22, 22);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(22, 22);
			this->label55->TabIndex = 120;
			this->label55->Visible = false;
			// 
			// label56
			// 
			this->label56->ImageKey = L"b1.jpg";
			this->label56->ImageList = this->imageList2;
			this->label56->Location = System::Drawing::Point(721, 84);
			this->label56->MinimumSize = System::Drawing::Size(22, 22);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(22, 22);
			this->label56->TabIndex = 121;
			this->label56->Visible = false;
			// 
			// label57
			// 
			this->label57->ImageKey = L"b1.jpg";
			this->label57->ImageList = this->imageList2;
			this->label57->Location = System::Drawing::Point(765, 84);
			this->label57->MinimumSize = System::Drawing::Size(22, 22);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(22, 22);
			this->label57->TabIndex = 122;
			this->label57->Visible = false;
			// 
			// label58
			// 
			this->label58->ImageKey = L"b1.jpg";
			this->label58->ImageList = this->imageList2;
			this->label58->Location = System::Drawing::Point(809, 84);
			this->label58->MinimumSize = System::Drawing::Size(22, 22);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(22, 22);
			this->label58->TabIndex = 123;
			this->label58->Visible = false;
			// 
			// label59
			// 
			this->label59->ImageKey = L"b1.jpg";
			this->label59->ImageList = this->imageList2;
			this->label59->Location = System::Drawing::Point(699, 106);
			this->label59->MinimumSize = System::Drawing::Size(22, 22);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(22, 22);
			this->label59->TabIndex = 124;
			this->label59->Visible = false;
			// 
			// label60
			// 
			this->label60->ImageKey = L"b1.jpg";
			this->label60->ImageList = this->imageList2;
			this->label60->Location = System::Drawing::Point(743, 106);
			this->label60->MinimumSize = System::Drawing::Size(22, 22);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(22, 22);
			this->label60->TabIndex = 125;
			this->label60->Visible = false;
			// 
			// label61
			// 
			this->label61->ImageKey = L"b1.jpg";
			this->label61->ImageList = this->imageList2;
			this->label61->Location = System::Drawing::Point(787, 106);
			this->label61->MinimumSize = System::Drawing::Size(22, 22);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(22, 22);
			this->label61->TabIndex = 126;
			this->label61->Visible = false;
			// 
			// label62
			// 
			this->label62->ImageKey = L"b1.jpg";
			this->label62->ImageList = this->imageList2;
			this->label62->Location = System::Drawing::Point(831, 106);
			this->label62->MinimumSize = System::Drawing::Size(22, 22);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(22, 22);
			this->label62->TabIndex = 127;
			this->label62->Visible = false;
			// 
			// label63
			// 
			this->label63->ImageIndex = 14;
			this->label63->ImageList = this->imageList2;
			this->label63->Location = System::Drawing::Point(677, 106);
			this->label63->MinimumSize = System::Drawing::Size(22, 22);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(22, 22);
			this->label63->TabIndex = 128;
			this->label63->Visible = false;
			// 
			// label64
			// 
			this->label64->ImageIndex = 14;
			this->label64->ImageList = this->imageList2;
			this->label64->Location = System::Drawing::Point(721, 106);
			this->label64->MinimumSize = System::Drawing::Size(22, 22);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(22, 22);
			this->label64->TabIndex = 129;
			this->label64->Visible = false;
			// 
			// label65
			// 
			this->label65->ImageIndex = 14;
			this->label65->ImageList = this->imageList2;
			this->label65->Location = System::Drawing::Point(765, 106);
			this->label65->MinimumSize = System::Drawing::Size(22, 22);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(22, 22);
			this->label65->TabIndex = 130;
			this->label65->Visible = false;
			// 
			// label66
			// 
			this->label66->ImageIndex = 14;
			this->label66->ImageList = this->imageList2;
			this->label66->Location = System::Drawing::Point(809, 106);
			this->label66->MinimumSize = System::Drawing::Size(22, 22);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(22, 22);
			this->label66->TabIndex = 131;
			this->label66->Visible = false;
			// 
			// label67
			// 
			this->label67->ImageIndex = 14;
			this->label67->ImageList = this->imageList2;
			this->label67->Location = System::Drawing::Point(699, 128);
			this->label67->MinimumSize = System::Drawing::Size(22, 22);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(22, 22);
			this->label67->TabIndex = 132;
			this->label67->Visible = false;
			// 
			// label68
			// 
			this->label68->ImageIndex = 14;
			this->label68->ImageList = this->imageList2;
			this->label68->Location = System::Drawing::Point(743, 128);
			this->label68->MinimumSize = System::Drawing::Size(22, 22);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(22, 22);
			this->label68->TabIndex = 133;
			this->label68->Visible = false;
			// 
			// label69
			// 
			this->label69->ImageIndex = 14;
			this->label69->ImageList = this->imageList2;
			this->label69->Location = System::Drawing::Point(787, 128);
			this->label69->MinimumSize = System::Drawing::Size(22, 22);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(22, 22);
			this->label69->TabIndex = 134;
			this->label69->Visible = false;
			// 
			// label70
			// 
			this->label70->ImageIndex = 14;
			this->label70->ImageList = this->imageList2;
			this->label70->Location = System::Drawing::Point(831, 128);
			this->label70->MinimumSize = System::Drawing::Size(22, 22);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(22, 22);
			this->label70->TabIndex = 135;
			this->label70->Visible = false;
			// 
			// label71
			// 
			this->label71->ImageKey = L"b1.jpg";
			this->label71->ImageList = this->imageList2;
			this->label71->Location = System::Drawing::Point(678, 128);
			this->label71->MinimumSize = System::Drawing::Size(22, 22);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(22, 22);
			this->label71->TabIndex = 136;
			this->label71->Visible = false;
			// 
			// label72
			// 
			this->label72->ImageKey = L"b1.jpg";
			this->label72->ImageList = this->imageList2;
			this->label72->Location = System::Drawing::Point(721, 128);
			this->label72->MinimumSize = System::Drawing::Size(22, 22);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(22, 22);
			this->label72->TabIndex = 137;
			this->label72->Visible = false;
			// 
			// label73
			// 
			this->label73->ImageKey = L"b1.jpg";
			this->label73->ImageList = this->imageList2;
			this->label73->Location = System::Drawing::Point(765, 128);
			this->label73->MinimumSize = System::Drawing::Size(22, 22);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(22, 22);
			this->label73->TabIndex = 138;
			this->label73->Visible = false;
			// 
			// label74
			// 
			this->label74->ImageKey = L"b1.jpg";
			this->label74->ImageList = this->imageList2;
			this->label74->Location = System::Drawing::Point(809, 128);
			this->label74->MinimumSize = System::Drawing::Size(22, 22);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(22, 22);
			this->label74->TabIndex = 139;
			this->label74->Visible = false;
			// 
			// label75
			// 
			this->label75->ImageKey = L"b1.jpg";
			this->label75->ImageList = this->imageList2;
			this->label75->Location = System::Drawing::Point(699, 150);
			this->label75->MinimumSize = System::Drawing::Size(22, 22);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(22, 22);
			this->label75->TabIndex = 140;
			this->label75->Visible = false;
			// 
			// label76
			// 
			this->label76->ImageKey = L"b1.jpg";
			this->label76->ImageList = this->imageList2;
			this->label76->Location = System::Drawing::Point(743, 150);
			this->label76->MinimumSize = System::Drawing::Size(22, 22);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(22, 22);
			this->label76->TabIndex = 141;
			this->label76->Visible = false;
			// 
			// label77
			// 
			this->label77->ImageKey = L"b1.jpg";
			this->label77->ImageList = this->imageList2;
			this->label77->Location = System::Drawing::Point(787, 150);
			this->label77->MinimumSize = System::Drawing::Size(22, 22);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(22, 22);
			this->label77->TabIndex = 142;
			this->label77->Visible = false;
			// 
			// label78
			// 
			this->label78->ImageKey = L"b1.jpg";
			this->label78->ImageList = this->imageList2;
			this->label78->Location = System::Drawing::Point(831, 150);
			this->label78->MinimumSize = System::Drawing::Size(22, 22);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(22, 22);
			this->label78->TabIndex = 143;
			this->label78->Visible = false;
			// 
			// label79
			// 
			this->label79->ImageIndex = 14;
			this->label79->ImageList = this->imageList2;
			this->label79->Location = System::Drawing::Point(677, 150);
			this->label79->MinimumSize = System::Drawing::Size(22, 22);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(22, 22);
			this->label79->TabIndex = 144;
			this->label79->Visible = false;
			// 
			// label80
			// 
			this->label80->ImageIndex = 14;
			this->label80->ImageList = this->imageList2;
			this->label80->Location = System::Drawing::Point(721, 150);
			this->label80->MinimumSize = System::Drawing::Size(22, 22);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(22, 22);
			this->label80->TabIndex = 145;
			this->label80->Visible = false;
			// 
			// label81
			// 
			this->label81->ImageIndex = 14;
			this->label81->ImageList = this->imageList2;
			this->label81->Location = System::Drawing::Point(765, 150);
			this->label81->MinimumSize = System::Drawing::Size(22, 22);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(22, 22);
			this->label81->TabIndex = 146;
			this->label81->Visible = false;
			// 
			// label82
			// 
			this->label82->ImageIndex = 14;
			this->label82->ImageList = this->imageList2;
			this->label82->Location = System::Drawing::Point(809, 150);
			this->label82->MinimumSize = System::Drawing::Size(22, 22);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(22, 22);
			this->label82->TabIndex = 147;
			this->label82->Visible = false;
			// 
			// label83
			// 
			this->label83->ImageIndex = 14;
			this->label83->ImageList = this->imageList2;
			this->label83->Location = System::Drawing::Point(699, 172);
			this->label83->MinimumSize = System::Drawing::Size(22, 22);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(22, 22);
			this->label83->TabIndex = 148;
			this->label83->Visible = false;
			// 
			// label84
			// 
			this->label84->ImageIndex = 14;
			this->label84->ImageList = this->imageList2;
			this->label84->Location = System::Drawing::Point(743, 172);
			this->label84->MinimumSize = System::Drawing::Size(22, 22);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(22, 22);
			this->label84->TabIndex = 149;
			this->label84->Visible = false;
			// 
			// label85
			// 
			this->label85->ImageIndex = 14;
			this->label85->ImageList = this->imageList2;
			this->label85->Location = System::Drawing::Point(787, 172);
			this->label85->MinimumSize = System::Drawing::Size(22, 22);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(22, 22);
			this->label85->TabIndex = 150;
			this->label85->Visible = false;
			// 
			// label86
			// 
			this->label86->ImageIndex = 14;
			this->label86->ImageList = this->imageList2;
			this->label86->Location = System::Drawing::Point(831, 172);
			this->label86->MinimumSize = System::Drawing::Size(22, 22);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(22, 22);
			this->label86->TabIndex = 151;
			this->label86->Visible = false;
			// 
			// label87
			// 
			this->label87->ImageKey = L"b1.jpg";
			this->label87->ImageList = this->imageList2;
			this->label87->Location = System::Drawing::Point(677, 172);
			this->label87->MinimumSize = System::Drawing::Size(22, 22);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(22, 22);
			this->label87->TabIndex = 152;
			this->label87->Visible = false;
			// 
			// label88
			// 
			this->label88->ImageKey = L"b1.jpg";
			this->label88->ImageList = this->imageList2;
			this->label88->Location = System::Drawing::Point(721, 172);
			this->label88->MinimumSize = System::Drawing::Size(22, 22);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(22, 22);
			this->label88->TabIndex = 153;
			this->label88->Visible = false;
			// 
			// label89
			// 
			this->label89->ImageKey = L"b1.jpg";
			this->label89->ImageList = this->imageList2;
			this->label89->Location = System::Drawing::Point(765, 172);
			this->label89->MinimumSize = System::Drawing::Size(22, 22);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(22, 22);
			this->label89->TabIndex = 154;
			this->label89->Visible = false;
			// 
			// label90
			// 
			this->label90->ImageKey = L"b1.jpg";
			this->label90->ImageList = this->imageList2;
			this->label90->Location = System::Drawing::Point(809, 172);
			this->label90->MinimumSize = System::Drawing::Size(22, 22);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(22, 22);
			this->label90->TabIndex = 155;
			this->label90->Visible = false;
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Location = System::Drawing::Point(681, 199);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(14, 13);
			this->label91->TabIndex = 156;
			this->label91->Text = L"A";
			this->label91->Visible = false;
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Location = System::Drawing::Point(703, 199);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(14, 13);
			this->label92->TabIndex = 157;
			this->label92->Text = L"B";
			this->label92->Visible = false;
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Location = System::Drawing::Point(725, 199);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(14, 13);
			this->label93->TabIndex = 158;
			this->label93->Text = L"C";
			this->label93->Visible = false;
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->Location = System::Drawing::Point(747, 199);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(15, 13);
			this->label94->TabIndex = 159;
			this->label94->Text = L"D";
			this->label94->Visible = false;
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Location = System::Drawing::Point(769, 199);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(14, 13);
			this->label95->TabIndex = 160;
			this->label95->Text = L"E";
			this->label95->Visible = false;
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Location = System::Drawing::Point(791, 199);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(13, 13);
			this->label96->TabIndex = 161;
			this->label96->Text = L"F";
			this->label96->Visible = false;
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->Location = System::Drawing::Point(813, 199);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(15, 13);
			this->label97->TabIndex = 162;
			this->label97->Text = L"G";
			this->label97->Visible = false;
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->Location = System::Drawing::Point(835, 199);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(15, 13);
			this->label98->TabIndex = 163;
			this->label98->Text = L"H";
			this->label98->Visible = false;
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->Location = System::Drawing::Point(660, 177);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(13, 13);
			this->label99->TabIndex = 164;
			this->label99->Text = L"1";
			this->label99->Visible = false;
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->Location = System::Drawing::Point(660, 155);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(13, 13);
			this->label100->TabIndex = 165;
			this->label100->Text = L"2";
			this->label100->Visible = false;
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->Location = System::Drawing::Point(660, 133);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(13, 13);
			this->label101->TabIndex = 166;
			this->label101->Text = L"3";
			this->label101->Visible = false;
			// 
			// label102
			// 
			this->label102->AutoSize = true;
			this->label102->Location = System::Drawing::Point(660, 111);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(13, 13);
			this->label102->TabIndex = 167;
			this->label102->Text = L"4";
			this->label102->Visible = false;
			// 
			// label103
			// 
			this->label103->AutoSize = true;
			this->label103->Location = System::Drawing::Point(660, 89);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(13, 13);
			this->label103->TabIndex = 168;
			this->label103->Text = L"5";
			this->label103->Visible = false;
			// 
			// label104
			// 
			this->label104->AutoSize = true;
			this->label104->Location = System::Drawing::Point(660, 67);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(13, 13);
			this->label104->TabIndex = 169;
			this->label104->Text = L"6";
			this->label104->Visible = false;
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->Location = System::Drawing::Point(660, 45);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(13, 13);
			this->label105->TabIndex = 170;
			this->label105->Text = L"7";
			this->label105->Visible = false;
			// 
			// label106
			// 
			this->label106->AutoSize = true;
			this->label106->Location = System::Drawing::Point(660, 23);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(13, 13);
			this->label106->TabIndex = 171;
			this->label106->Text = L"8";
			this->label106->Visible = false;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(34, 188);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(71, 17);
			this->checkBox3->TabIndex = 172;
			this->checkBox3->Text = L"Auto stop";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox3_CheckedChanged);
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->AutoSize = true;
			this->numericUpDown11->BackColor = System::Drawing::SystemColors::HighlightText;
			this->numericUpDown11->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown11->Location = System::Drawing::Point(34, 212);
			this->numericUpDown11->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {100000, 0, 0, 0});
			this->numericUpDown11->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->ReadOnly = true;
			this->numericUpDown11->Size = System::Drawing::Size(59, 20);
			this->numericUpDown11->TabIndex = 173;
			this->numericUpDown11->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown11->Visible = false;
			this->numericUpDown11->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown11_ValueChanged);
			// 
			// label107
			// 
			this->label107->AutoSize = true;
			this->label107->Location = System::Drawing::Point(31, 235);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(49, 13);
			this->label107->TabIndex = 174;
			this->label107->Text = L"n.Games";
			this->label107->Visible = false;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(348, 64);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(72, 17);
			this->checkBox4->TabIndex = 175;
			this->checkBox4->Text = L"Save pgn";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox4_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(883, 490);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->label107);
			this->Controls->Add(this->numericUpDown11);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->label106);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->label104);
			this->Controls->Add(this->label103);
			this->Controls->Add(this->label102);
			this->Controls->Add(this->label101);
			this->Controls->Add(this->label100);
			this->Controls->Add(this->label99);
			this->Controls->Add(this->label98);
			this->Controls->Add(this->label97);
			this->Controls->Add(this->label96);
			this->Controls->Add(this->label95);
			this->Controls->Add(this->label94);
			this->Controls->Add(this->label93);
			this->Controls->Add(this->label92);
			this->Controls->Add(this->label91);
			this->Controls->Add(this->label90);
			this->Controls->Add(this->label89);
			this->Controls->Add(this->label88);
			this->Controls->Add(this->label87);
			this->Controls->Add(this->label86);
			this->Controls->Add(this->label85);
			this->Controls->Add(this->label84);
			this->Controls->Add(this->label83);
			this->Controls->Add(this->label82);
			this->Controls->Add(this->label81);
			this->Controls->Add(this->label80);
			this->Controls->Add(this->label79);
			this->Controls->Add(this->label78);
			this->Controls->Add(this->label77);
			this->Controls->Add(this->label76);
			this->Controls->Add(this->label75);
			this->Controls->Add(this->label74);
			this->Controls->Add(this->label73);
			this->Controls->Add(this->label72);
			this->Controls->Add(this->label71);
			this->Controls->Add(this->label70);
			this->Controls->Add(this->label69);
			this->Controls->Add(this->label68);
			this->Controls->Add(this->label67);
			this->Controls->Add(this->label66);
			this->Controls->Add(this->label65);
			this->Controls->Add(this->label64);
			this->Controls->Add(this->label63);
			this->Controls->Add(this->label62);
			this->Controls->Add(this->label61);
			this->Controls->Add(this->label60);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->label58);
			this->Controls->Add(this->label57);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->progressBar10);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->progressBar9);
			this->Controls->Add(this->progressBar8);
			this->Controls->Add(this->progressBar7);
			this->Controls->Add(this->progressBar6);
			this->Controls->Add(this->progressBar5);
			this->Controls->Add(this->progressBar4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->progressBar3);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->numericUpDown10);
			this->Controls->Add(this->numericUpDown9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(418, 288);
			this->Name = L"Form1";
			this->Text = L"M.Scarface 2e";
			this->Activated += gcnew System::EventHandler(this, &Form1::Form1_Activated);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form1::Form1_FormClosed);
			this->Shown += gcnew System::EventHandler(this, &Form1::Form1_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown11))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		
         // SET PARAMETERS
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 loadDepth();
		 }
private: System::Void numericUpDown4_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 loadDepthl();
		 }
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 loadmulti();
		 }
private: System::Void numericUpDown5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 loadmultil();
		 }
private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 loadDeltaa();
		 }
private: System::Void numericUpDown6_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 loadDeltaal();
		 }
private: System::Void numericUpDown9_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 loadnmossel();
		 }
private: System::Void numericUpDown8_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 loadhash();
		 }
private: System::Void numericUpDown10_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 loadthread();
		 }
private: System::Void numericUpDown7_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 loadlimim();
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 loadcrealog();
		 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 loadanall();
		 }

private: System::Void Form1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 inpoutFun::inotext::resettxt('a');
		 }


         // AFTER BOARD WINDOW CLOSING OR MOVES WINDOW CLOSING
private: System::Void Form1_Activated(System::Object^  sender, System::EventArgs^  e) {
			 // if close Board window with position set ok, display chessboard
			 if(uploadsn('s')==0&&uploadsn('z')==1){
				 pictureBox1->Visible = false;
				 label19->ImageIndex =uploadF(0);label19->Visible = true;
				 label20->ImageIndex =uploadF(1);label20->Visible = true;
				 label29->ImageIndex =uploadF(2);label29->Visible = true;
				 label30->ImageIndex =uploadF(3);label30->Visible = true;
				 label31->ImageIndex =uploadF(4);label31->Visible = true;
				 label32->ImageIndex =uploadF(5);label32->Visible = true;
				 label33->ImageIndex =uploadF(6);label33->Visible = true;
				 label34->ImageIndex =uploadF(7);label34->Visible = true;
				 label36->ImageIndex =uploadF(8);label36->Visible = true;
				 label35->ImageIndex =uploadF(9);label35->Visible = true;
				 label38->ImageIndex =uploadF(10);label38->Visible = true;
				 label37->ImageIndex =uploadF(11);label37->Visible = true;
				 label39->ImageIndex =uploadF(12);label39->Visible = true;
				 label41->ImageIndex =uploadF(13);label41->Visible = true;
				 label40->ImageIndex =uploadF(14);label40->Visible = true;
				 label42->ImageIndex =uploadF(15);label42->Visible = true;
				 label47->ImageIndex =uploadF(16);label47->Visible = true;
				 label43->ImageIndex =uploadF(17);label43->Visible = true;
				 label48->ImageIndex =uploadF(18);label48->Visible = true;
				 label44->ImageIndex =uploadF(19);label44->Visible = true;
				 label49->ImageIndex =uploadF(20);label49->Visible = true;
				 label45->ImageIndex =uploadF(21);label45->Visible = true;
				 label50->ImageIndex =uploadF(22);label50->Visible = true;
				 label46->ImageIndex =uploadF(23);label46->Visible = true;
				 label55->ImageIndex =uploadF(24);label55->Visible = true;
				 label51->ImageIndex =uploadF(25);label51->Visible = true;
				 label56->ImageIndex =uploadF(26);label56->Visible = true;
				 label52->ImageIndex =uploadF(27);label52->Visible = true;
				 label57->ImageIndex =uploadF(28);label57->Visible = true;
				 label53->ImageIndex =uploadF(29);label53->Visible = true;
				 label58->ImageIndex =uploadF(30);label54->Visible = true;
				 label54->ImageIndex =uploadF(31);label58->Visible = true;
				 label63->ImageIndex =uploadF(32);label63->Visible = true;
				 label59->ImageIndex =uploadF(33);label59->Visible = true;
				 label64->ImageIndex =uploadF(34);label64->Visible = true;
				 label60->ImageIndex =uploadF(35);label60->Visible = true;
				 label65->ImageIndex =uploadF(36);label65->Visible = true;
				 label61->ImageIndex =uploadF(37);label61->Visible = true;
				 label66->ImageIndex =uploadF(38);label66->Visible = true;
				 label62->ImageIndex =uploadF(39);label62->Visible = true;
				 label71->ImageIndex =uploadF(40);label71->Visible = true;
				 label67->ImageIndex =uploadF(41);label67->Visible = true;
				 label72->ImageIndex =uploadF(42);label72->Visible = true;
				 label68->ImageIndex =uploadF(43);label68->Visible = true;
				 label73->ImageIndex =uploadF(44);label73->Visible = true;
				 label69->ImageIndex =uploadF(45);label69->Visible = true;
				 label74->ImageIndex =uploadF(46);label74->Visible = true;
				 label70->ImageIndex =uploadF(47);label70->Visible = true;
				 label79->ImageIndex =uploadF(48);label79->Visible = true;
				 label75->ImageIndex =uploadF(49);label75->Visible = true;
				 label80->ImageIndex =uploadF(50);label80->Visible = true;
				 label76->ImageIndex =uploadF(51);label76->Visible = true;
				 label81->ImageIndex =uploadF(52);label81->Visible = true;
				 label77->ImageIndex =uploadF(53);label77->Visible = true;
				 label82->ImageIndex =uploadF(54);label82->Visible = true;
				 label78->ImageIndex =uploadF(55);label78->Visible = true;
				 label87->ImageIndex =uploadF(56);label87->Visible = true;
				 label83->ImageIndex =uploadF(57);label83->Visible = true;
				 label88->ImageIndex =uploadF(58);label88->Visible = true;
				 label84->ImageIndex =uploadF(59);label84->Visible = true;
				 label89->ImageIndex =uploadF(60);label89->Visible = true;
				 label85->ImageIndex =uploadF(61);label85->Visible = true;
				 label90->ImageIndex =uploadF(62);label90->Visible = true;
				 label86->ImageIndex =uploadF(63);label86->Visible = true;
				 label91->Visible = true;label92->Visible = true;
				 label93->Visible = true;label94->Visible = true;
                 label95->Visible = true;label96->Visible = true;
				 label97->Visible = true;label98->Visible = true;
				 label99->Visible = true;label100->Visible = true;
				 label101->Visible = true;label102->Visible = true;
                 label103->Visible = true;label104->Visible = true;
				 label105->Visible = true;label106->Visible = true;
				 button1->Enabled = true; button1->BackColor = System::Drawing::Color::OrangeRed;
				 
		    }
			 // if no position ok from Board window and no moves 
			 // from Moves window, changes colour to the start button  
			else if(uploadsn('s')==0&&uploadsn('z')==0){
				 button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			}
			// if start ok from Moves window
			else if(uploadsn('s')==1){
				     // if autostop=on
				     if(uploadsn('v')==1){
						 numericUpDown11->Enabled=false;
					 }
					 // run backgroundWorker to launch Children
					 checkBox1->Enabled=false;
					 checkBox2->Enabled=false;
					 checkBox3->Enabled=false;
					 checkBox4->Enabled=false;
				     loadsn(0,'s');inpoutFun::inotext::resetvar();loadsn(0,'t');disntotg();disparinz();
					 button1->Enabled=false;button4->Enabled=false;
					 button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
					 button3->Enabled=true;button3->BackColor = System::Drawing::Color::OrangeRed;
					 button6->BackColor = System::Drawing::SystemColors::ButtonShadow;
					 button6->Enabled = false;
					 backgroundWorker1->RunWorkerAsync();
					 timer1->Enabled = true;
					 pictureBox3->BackColor = System::Drawing::Color::Khaki;
					 progressBar10->Enabled = true;
					 progressBar10->Visible = true;
					 // some audio effect-start analysis
					 plSound("au6.wav");
			}
			 
		 }
		 

        // DISPLAY LOG
 private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  // Open View Log window
			  viewlog^ frmAbout = gcnew viewlog();
              // Display frmAbout as a modal dialog
              frmAbout->ShowDialog();
		}


         //  STOP MANAGEMENT
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			    // result Display at real time analysis
			    inpoutFun::inotext::resetvar();generaldisp();

				//  STOP MANAGEMENT
				//
			    if(uploadsn('U')==1||uploadsn('u')==1){
					if(uploadsn('p')==1){
						timer1->Enabled = false; 
						this->backgroundWorker1->CancelAsync();
						// some audio effect-stop analysis
						if(uploadsn('u')==1){
							plSound("au7.wav");
						}
						// result Display at end analisys
			            inpoutFun::inotext::resetvar();generaldisp();
			            progressBar10->Enabled = false;
			            progressBar10->Visible = false;
			            pictureBox3->BackColor = System::Drawing::SystemColors::Control;
			            button1->Enabled=true;button1->BackColor = System::Drawing::Color::OrangeRed;
			            button3->BackColor = System::Drawing::SystemColors::ButtonShadow;button3->Enabled=false;
			            button4->Enabled=true;inpoutFun::inotext::resettxt('a');
			            button6->Enabled=true;button6->BackColor = System::Drawing::Color::OrangeRed;
			            checkBox1->Enabled=true;
			            checkBox2->Enabled=true;
						checkBox3->Enabled=true;
			            checkBox4->Enabled=true;
			            loadsn(0,'U');loadsn(0,'Z');loadsn(0,'t');
						// Enable autostop
						if(uploadsn('v')==1){
							checkBox3->Enabled=true;
					        numericUpDown11->Enabled=true;
						}
						// Save games window display
						if(uploadsn('P')==1){
							 Savegames^ frmAbout = gcnew Savegames();
                             // Display frmAbout as a modal dialog
                             frmAbout->ShowDialog();
						}
			        }
					else{
						if(uploadsn('Z')==1){
							timer1->Enabled = false; 
						    this->backgroundWorker1->CancelAsync();
							inpoutFun::inotext::resetvar();generaldisp();
			                progressBar10->Enabled = false;
			                progressBar10->Visible = false;
			                pictureBox3->BackColor = System::Drawing::SystemColors::Control;
			                button1->Enabled=true;button1->BackColor = System::Drawing::Color::OrangeRed;
			                button3->BackColor = System::Drawing::SystemColors::ButtonShadow;button3->Enabled=false;
			                button4->Enabled=true;inpoutFun::inotext::resettxt('a');
			                button6->Enabled=true;button6->BackColor = System::Drawing::Color::OrangeRed;
			                checkBox1->Enabled=true;
			                checkBox2->Enabled=true;
							checkBox3->Enabled=true;
							checkBox4->Enabled=true;
			                loadsn(0,'U');loadsn(0,'Z');loadsn(0,'t');
							if(uploadsn('v')==1){
								numericUpDown11->Enabled=true;
						    }
							if(uploadsn('P')==1){
								Savegames^ frmAbout = gcnew Savegames();
                                // Display frmAbout as a modal dialog
                                frmAbout->ShowDialog();
						    }
						}
						else{
							loadsn(1,'Z');
						}
					}
			     }

				else{
					if(uploadsn('Z')==1){
							timer1->Enabled = false; 
						    this->backgroundWorker1->CancelAsync();
							inpoutFun::inotext::resetvar();generaldisp();
			                progressBar10->Enabled = false;
			                progressBar10->Visible = false;
			                pictureBox3->BackColor = System::Drawing::SystemColors::Control;
			                button1->Enabled=true;button1->BackColor = System::Drawing::Color::OrangeRed;
			                button3->BackColor = System::Drawing::SystemColors::ButtonShadow;button3->Enabled=false;
			                button4->Enabled=true;inpoutFun::inotext::resettxt('a');
			                button6->Enabled=true;button6->BackColor = System::Drawing::Color::OrangeRed;
			                checkBox1->Enabled=true;
			                checkBox2->Enabled=true;
							checkBox3->Enabled=true;
							checkBox4->Enabled=true;
			                loadsn(0,'U');loadsn(0,'Z');loadsn(0,'t');
							if(uploadsn('v')==1){
								numericUpDown11->Enabled=true;
						    }
							if(uploadsn('P')==1){
								Savegames^ frmAbout = gcnew Savegames();
                                // Display frmAbout as a modal dialog
                                frmAbout->ShowDialog();
						    }
						}
				}

			 }


             // RUN ANALYSIS ENGINE
private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			 // to launch Children 
			 outtras();
		 }


         // SET ENGINE STOP IF CLOSE FORM1 (SECURITY).
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 // set stop if close form1
			 loadsn(0,'a');
		 }


         // DISPLAY LOG DELETE WINDOW
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			  // Display Log delete window 
			  logdelete^ frmAbout = gcnew logdelete();
              // Display frmAbout as a modal dialog
              frmAbout->ShowDialog();
		 }


         // DISPLAY HELP WINDOW 
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Display Help window
			 Viewhelp^ frmAbout = gcnew Viewhelp();
              // Display frmAbout as a modal dialog
              frmAbout->ShowDialog();

		 }


         // SET FEN, BOARD WINDOW
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Display Board window 
			 Board^ frmAbout = gcnew Board();
             // Display frmAbout as a modal dialog
             frmAbout->ShowDialog();
		 }


         // BUTTON 1, CALL POSSIBLE MOVES
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 // start analysis
			 if(uploadsn('z')==1){
				 if(writef()==1){
					 inpoutFun::inotext::resetvar();disparinz();
					 inpoutFun::inotext::resetvar();disntotg();disparinz();outtras();
					 moveschoice^ frmAbout = gcnew moveschoice();
					 // Display frmAbout as a modal dialog
					 frmAbout->ShowDialog();
				 }
				 else{
					 button6->BackColor = System::Drawing::Color::OrangeRed;
				 }
			 }
			 
		}


        // BUTTON 3, STOP
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 // Stop analysis
			 if(timer1->Enabled == true){
				 loadsn(1,'a');
				 plSound("au7.wav");
			 }
			 			 
		 }


         // AUTOSTOP
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox3->CheckState == CheckState::Checked){
				 // Enable autostop
				 loadsn(1,'u');
				 numericUpDown11->Visible = true;
				 label107->Visible = true;
			 }
			 else{
				 numericUpDown11->Visible = false;
				 label107->Visible = false;
				 // Disable autostop
				 loadsn(0,'u');
			 }
		 }
private: System::Void numericUpDown11_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 // load max. n games for autostop
			 expst(numericUpDown11->Value.ToString(),'u');
		 }


         // SAVE GAMES
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox4->CheckState == CheckState::Checked){
				 // Enable save games
				 loadsn(1,'P');
			 }
			 else{
				 // Disable save games
				 loadsn(0,'P');
			 }
		 }


         // AUDIO EFFECT AT START PROGRAM
private: System::Void Form1_Shown(System::Object^  sender, System::EventArgs^  e) {
			 // some audio effect-start program
			 plSound("au8.wav");
		 }
};
}

