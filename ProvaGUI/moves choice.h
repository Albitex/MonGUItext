#pragma once

namespace ProvaGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// global variables for select moves state
	static int counter=0,counter1=0;
	static int butt2=0;// = 1 start state

	/// <summary>
	/// Summary for moveschoice
	/// </summary>
	public ref class moveschoice : public System::Windows::Forms::Form
	{
		
	public:
		moveschoice(void)
		{
			InitializeComponent();
			//
			// TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used
		/// </summary>
		~moveschoice()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer2;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
        /// the contents of this method with the code editor
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Khaki;
			this->richTextBox1->EnableAutoDragDrop = true;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(12, 34);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(309, 284);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(111, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 15);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Possible moves ";
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &moveschoice::timer2_Tick);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Khaki;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(89, 324);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(54, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->AllowDrop = true;
			this->textBox2->BackColor = System::Drawing::Color::Khaki;
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(149, 324);
			this->textBox2->MaxLength = 7;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"write or drag moves ";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &moveschoice::textBox2_TextChanged);
			this->textBox2->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &moveschoice::textBox2_DragDrop);
			this->textBox2->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &moveschoice::textBox2_DragEnter);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::Khaki;
			this->richTextBox2->EnableAutoDragDrop = true;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(392, 34);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(309, 284);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = L"\n   ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(503, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 15);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Select moves";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(126, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"load move";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &moveschoice::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(506, 360);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"START";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &moveschoice::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(320, 360);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Restart";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &moveschoice::button3_Click);
			// 
			// moveschoice
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(712, 446);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->MaximizeBox = false;
			this->Name = L"moveschoice";
			this->Text = L"Moves";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &moveschoice::moveschoice_FormClosing);
			this->Load += gcnew System::EventHandler(this, &moveschoice::moveschoice_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

   // Timer start for delay reading of the possible moves from analysis engine,
   // and display user instruction.
private: System::Void moveschoice_Load(System::Object^  sender, System::EventArgs^  e) {
				 //Start delay
				 timer2->Enabled = true;
				 // display user instruction
				 string str=dispnms('c');
			     richTextBox2->Text=gcnew String(str.c_str());
			 }

   // Display possible moves.
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
				 using namespace std;
				 int ok=0;string str;
				 if(counter>0)
					 ok=readmovtx(); 
				
				 // if moves reading is ok Exit loop code and display moves.
			     if(ok>0){
					 richTextBox1->LoadFile("move.txt",
					 RichTextBoxStreamType::PlainText);
					 timer2->Enabled = false;
					 counter = 0;
					 str=dipnmsG();
					 textBox1->Text=gcnew String(str.c_str());
					 button1->Enabled=true;button2->Enabled=true;
					 button3->Enabled=true;textBox2->Enabled=true;
				  }
				  else if(ok==0)
					  counter++;
				  else{
					  loadsn(ok,'m');
                      string str=disperrf(ok);
			          richTextBox1->Text=gcnew String(str.c_str());
					  richTextBox2->Text="";
				  }
				  
			}
				 
                         

  // Dragdrop single move.		
private: System::Void textBox2_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
				if (e->Data->GetDataPresent(DataFormats::Text))
					e->Effect = DragDropEffects::Copy;
				else
					e->Effect = DragDropEffects::None;
            }

  // Dragdrop single move.
private: System::Void textBox2_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			  // Drop the text on to the RichTextBox.
			   String ^str = gcnew String(e->Data->GetData(DataFormats::Text)->ToString()); 
			   textBox2->Text = str;
			   expst(str,'M');//load the select move 
		 	}

  // Validation move choice.
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 button1->Enabled=false;textBox2->Enabled=false;button2->Enabled=false;
			 butt2=1;
			 using namespace std;
			 string str=dispnms('a');
			 richTextBox2->Text=gcnew String(str.c_str());
			 // write start 'on' to launch engine
			 loadsn(1,'s');
			 // some audio effect-load engine
			 plSound("au4.wav");
		 }

	// Load a single move.
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			  loadsn(1,'L');string str=dispnms('b');
			  // display load move or error
			  richTextBox2->Text=gcnew String(str.c_str());
			  if(uploadsn('k')==0)
			  {
				  // some audio effect-move
				  plSound("au3.wav");
			  }
			  else{
				  //some audio effect-error
				  plSound("au2.wav");
				  // load error move
				  loadsn(0,'k');
			  }
		  }

  // Restart button.
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			  // load reset and state moves choice
			  loadsn(0,'r');loadsn(0,'L');loadsn(0,'s');
			  button1->Enabled=true;textBox2->Enabled=true;
			  button2->Enabled=true;
			  // display user instruction
			  string str=dispnms('c');
			  richTextBox2->Text=gcnew String(str.c_str());
			  butt2=0;
			  // some audio effect-restart
			  plSound("au5.wav");
		 }

  // Write single move.
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ str=textBox2->Text;
			 expst(str,'M');//load the select move
		 }

  // Send to analysis engine the moves choices.
private: System::Void moveschoice_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 using namespace std;
			 int oks;
			 // reset the communication txt files
			 inpoutFun::inotext::resettxt('a');inpoutFun::inotext::resettxt('b');
			 // write moves loop
			 if(butt2==1){
				 do{
					 //write moves (2 attempts)
					 oks=inpoutFun::inotext::writeMtext();
					 if(oks==1)
						 oks=inpoutFun::inotext::writetext('f');
					 counter1++;
				 }
				 while(oks==0&&counter1<3);
				 counter1=0;butt2=0;

			 }
			 // reset Moves window state
			 loadsn(0,'R');loadsn(0,'L');
		 }


};
}
