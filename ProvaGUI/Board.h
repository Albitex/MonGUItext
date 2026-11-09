#pragma once

namespace ProvaGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Board
    /// </summary>
	public ref class Board : public System::Windows::Forms::Form
	{
		// castle checkBox controls
	public:
		void castlect()
		{
			if(uploadsc('W')==' '){
				checkBox1->Checked = false;
			}
            if(uploadsc('w')==' '){
				checkBox2->Checked = false;
			}
			if(uploadsc('B')==' '){
				checkBox3->Checked = false;
			}
			if(uploadsc('b')==' '){
				checkBox4->Checked = false;
			}
		}
		
	public:
		Board(void)
		{
			InitializeComponent();
			//
			//TODO: TODO: Add the constructor code here

			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
        /// </summary>
		~Board()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
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
    private: System::Windows::Forms::TextBox^  textBox1;
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
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::CheckBox^  checkBox2;
private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::CheckBox^  checkBox4;
private: System::Windows::Forms::CheckBox^  checkBox5;
private: System::Windows::Forms::CheckBox^  checkBox6;
private: System::Windows::Forms::Label^  label95;
private: System::Windows::Forms::Label^  label96;
private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
private: System::Windows::Forms::Label^  label97;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label98;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button3;


	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Board::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->ImageIndex = 14;
			this->label1->ImageList = this->imageList1;
			this->label1->Location = System::Drawing::Point(43, 21);
			this->label1->MaximumSize = System::Drawing::Size(68, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 34);
			this->label1->TabIndex = 0;
			this->label1->Click += gcnew System::EventHandler(this, &Board::label1_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"wrw.gif");
			this->imageList1->Images->SetKeyName(1, L"b.gif");
			this->imageList1->Images->SetKeyName(2, L"bbb.gif");
			this->imageList1->Images->SetKeyName(3, L"bbw.gif");
			this->imageList1->Images->SetKeyName(4, L"bkb.gif");
			this->imageList1->Images->SetKeyName(5, L"bkw.gif");
			this->imageList1->Images->SetKeyName(6, L"bnb.gif");
			this->imageList1->Images->SetKeyName(7, L"bnw.gif");
			this->imageList1->Images->SetKeyName(8, L"bpb.gif");
			this->imageList1->Images->SetKeyName(9, L"bpw.gif");
			this->imageList1->Images->SetKeyName(10, L"bqb.gif");
			this->imageList1->Images->SetKeyName(11, L"bqw.gif");
			this->imageList1->Images->SetKeyName(12, L"brb.gif");
			this->imageList1->Images->SetKeyName(13, L"brw.gif");
			this->imageList1->Images->SetKeyName(14, L"w.gif");
			this->imageList1->Images->SetKeyName(15, L"wbb.gif");
			this->imageList1->Images->SetKeyName(16, L"wbw.gif");
			this->imageList1->Images->SetKeyName(17, L"wkb.gif");
			this->imageList1->Images->SetKeyName(18, L"wkw.gif");
			this->imageList1->Images->SetKeyName(19, L"wnb.gif");
			this->imageList1->Images->SetKeyName(20, L"wnw.gif");
			this->imageList1->Images->SetKeyName(21, L"wpb.gif");
			this->imageList1->Images->SetKeyName(22, L"wpw.gif");
			this->imageList1->Images->SetKeyName(23, L"wqb.gif");
			this->imageList1->Images->SetKeyName(24, L"wqw.gif");
			this->imageList1->Images->SetKeyName(25, L"wrb.gif");
			// 
			// label2
			// 
			this->label2->ImageIndex = 18;
			this->label2->ImageList = this->imageList1;
			this->label2->Location = System::Drawing::Point(544, 43);
			this->label2->MaximumSize = System::Drawing::Size(68, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 34);
			this->label2->TabIndex = 1;
			this->label2->Click += gcnew System::EventHandler(this, &Board::label2_Click);
			// 
			// label3
			// 
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(479, 267);
			this->label3->MaximumSize = System::Drawing::Size(68, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 34);
			this->label3->TabIndex = 5;
			this->label3->Click += gcnew System::EventHandler(this, &Board::label3_Click);
			// 
			// label4
			// 
			this->label4->ImageIndex = 1;
			this->label4->ImageList = this->imageList1;
			this->label4->Location = System::Drawing::Point(77, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 34);
			this->label4->TabIndex = 3;
			this->label4->Click += gcnew System::EventHandler(this, &Board::label4_Click);
			// 
			// label5
			// 
			this->label5->ImageIndex = 14;
			this->label5->ImageList = this->imageList1;
			this->label5->Location = System::Drawing::Point(111, 21);
			this->label5->MaximumSize = System::Drawing::Size(68, 68);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 34);
			this->label5->TabIndex = 4;
			this->label5->Click += gcnew System::EventHandler(this, &Board::label5_Click);
			// 
			// label6
			// 
			this->label6->ImageIndex = 1;
			this->label6->ImageList = this->imageList1;
			this->label6->Location = System::Drawing::Point(145, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 34);
			this->label6->TabIndex = 5;
			this->label6->Click += gcnew System::EventHandler(this, &Board::label6_Click);
			// 
			// label7
			// 
			this->label7->ImageIndex = 14;
			this->label7->ImageList = this->imageList1;
			this->label7->Location = System::Drawing::Point(179, 21);
			this->label7->MaximumSize = System::Drawing::Size(68, 68);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 34);
			this->label7->TabIndex = 6;
			this->label7->Click += gcnew System::EventHandler(this, &Board::label7_Click);
			// 
			// label8
			// 
			this->label8->ImageIndex = 1;
			this->label8->ImageList = this->imageList1;
			this->label8->Location = System::Drawing::Point(213, 21);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 34);
			this->label8->TabIndex = 7;
			this->label8->Click += gcnew System::EventHandler(this, &Board::label8_Click);
			// 
			// label9
			// 
			this->label9->ImageIndex = 14;
			this->label9->ImageList = this->imageList1;
			this->label9->Location = System::Drawing::Point(247, 21);
			this->label9->MaximumSize = System::Drawing::Size(68, 68);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(34, 34);
			this->label9->TabIndex = 8;
			this->label9->Click += gcnew System::EventHandler(this, &Board::label9_Click);
			// 
			// label10
			// 
			this->label10->ImageIndex = 1;
			this->label10->ImageList = this->imageList1;
			this->label10->Location = System::Drawing::Point(281, 21);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 34);
			this->label10->TabIndex = 9;
			this->label10->Click += gcnew System::EventHandler(this, &Board::label10_Click);
			// 
			// label11
			// 
			this->label11->ImageIndex = 1;
			this->label11->ImageList = this->imageList1;
			this->label11->Location = System::Drawing::Point(43, 55);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 34);
			this->label11->TabIndex = 10;
			this->label11->Click += gcnew System::EventHandler(this, &Board::label11_Click);
			// 
			// label12
			// 
			this->label12->ImageIndex = 1;
			this->label12->ImageList = this->imageList1;
			this->label12->Location = System::Drawing::Point(111, 55);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(34, 34);
			this->label12->TabIndex = 11;
			this->label12->Click += gcnew System::EventHandler(this, &Board::label12_Click);
			// 
			// label13
			// 
			this->label13->ImageIndex = 1;
			this->label13->ImageList = this->imageList1;
			this->label13->Location = System::Drawing::Point(247, 55);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(34, 34);
			this->label13->TabIndex = 12;
			this->label13->Click += gcnew System::EventHandler(this, &Board::label13_Click);
			// 
			// label14
			// 
			this->label14->ImageIndex = 1;
			this->label14->ImageList = this->imageList1;
			this->label14->Location = System::Drawing::Point(179, 55);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(34, 34);
			this->label14->TabIndex = 13;
			this->label14->Click += gcnew System::EventHandler(this, &Board::label14_Click);
			// 
			// label15
			// 
			this->label15->ImageIndex = 14;
			this->label15->ImageList = this->imageList1;
			this->label15->Location = System::Drawing::Point(77, 55);
			this->label15->MaximumSize = System::Drawing::Size(68, 68);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 34);
			this->label15->TabIndex = 14;
			this->label15->Click += gcnew System::EventHandler(this, &Board::label15_Click);
			// 
			// label16
			// 
			this->label16->ImageIndex = 14;
			this->label16->ImageList = this->imageList1;
			this->label16->Location = System::Drawing::Point(145, 55);
			this->label16->MaximumSize = System::Drawing::Size(68, 68);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(34, 34);
			this->label16->TabIndex = 15;
			this->label16->Click += gcnew System::EventHandler(this, &Board::label16_Click);
			// 
			// label17
			// 
			this->label17->ImageIndex = 14;
			this->label17->ImageList = this->imageList1;
			this->label17->Location = System::Drawing::Point(213, 55);
			this->label17->MaximumSize = System::Drawing::Size(68, 68);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(34, 34);
			this->label17->TabIndex = 16;
			this->label17->Click += gcnew System::EventHandler(this, &Board::label17_Click);
			// 
			// label18
			// 
			this->label18->ImageIndex = 14;
			this->label18->ImageList = this->imageList1;
			this->label18->Location = System::Drawing::Point(281, 55);
			this->label18->MaximumSize = System::Drawing::Size(68, 68);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(34, 34);
			this->label18->TabIndex = 17;
			this->label18->Click += gcnew System::EventHandler(this, &Board::label18_Click);
			// 
			// label19
			// 
			this->label19->ImageIndex = 1;
			this->label19->ImageList = this->imageList1;
			this->label19->Location = System::Drawing::Point(77, 89);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(34, 34);
			this->label19->TabIndex = 18;
			this->label19->Click += gcnew System::EventHandler(this, &Board::label19_Click);
			// 
			// label20
			// 
			this->label20->ImageIndex = 14;
			this->label20->ImageList = this->imageList1;
			this->label20->Location = System::Drawing::Point(43, 89);
			this->label20->MaximumSize = System::Drawing::Size(68, 68);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(34, 34);
			this->label20->TabIndex = 19;
			this->label20->Click += gcnew System::EventHandler(this, &Board::label20_Click);
			// 
			// label21
			// 
			this->label21->ImageIndex = 14;
			this->label21->ImageList = this->imageList1;
			this->label21->Location = System::Drawing::Point(111, 89);
			this->label21->MaximumSize = System::Drawing::Size(68, 68);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(34, 34);
			this->label21->TabIndex = 20;
			this->label21->Click += gcnew System::EventHandler(this, &Board::label21_Click);
			// 
			// label22
			// 
			this->label22->ImageIndex = 14;
			this->label22->ImageList = this->imageList1;
			this->label22->Location = System::Drawing::Point(179, 89);
			this->label22->MaximumSize = System::Drawing::Size(68, 68);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(34, 34);
			this->label22->TabIndex = 21;
			this->label22->Click += gcnew System::EventHandler(this, &Board::label22_Click);
			// 
			// label23
			// 
			this->label23->ImageIndex = 14;
			this->label23->ImageList = this->imageList1;
			this->label23->Location = System::Drawing::Point(247, 89);
			this->label23->MaximumSize = System::Drawing::Size(68, 68);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(34, 34);
			this->label23->TabIndex = 22;
			this->label23->Click += gcnew System::EventHandler(this, &Board::label23_Click);
			// 
			// label24
			// 
			this->label24->ImageIndex = 1;
			this->label24->ImageList = this->imageList1;
			this->label24->Location = System::Drawing::Point(145, 89);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(34, 34);
			this->label24->TabIndex = 23;
			this->label24->Click += gcnew System::EventHandler(this, &Board::label24_Click);
			// 
			// label25
			// 
			this->label25->ImageIndex = 1;
			this->label25->ImageList = this->imageList1;
			this->label25->Location = System::Drawing::Point(213, 89);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(34, 34);
			this->label25->TabIndex = 24;
			this->label25->Click += gcnew System::EventHandler(this, &Board::label25_Click);
			// 
			// label26
			// 
			this->label26->ImageIndex = 1;
			this->label26->ImageList = this->imageList1;
			this->label26->Location = System::Drawing::Point(281, 89);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(34, 34);
			this->label26->TabIndex = 25;
			this->label26->Click += gcnew System::EventHandler(this, &Board::label26_Click);
			// 
			// label27
			// 
			this->label27->ImageIndex = 1;
			this->label27->ImageList = this->imageList1;
			this->label27->Location = System::Drawing::Point(43, 123);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(34, 34);
			this->label27->TabIndex = 26;
			this->label27->Click += gcnew System::EventHandler(this, &Board::label27_Click);
			// 
			// label28
			// 
			this->label28->ImageIndex = 1;
			this->label28->ImageList = this->imageList1;
			this->label28->Location = System::Drawing::Point(111, 123);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(34, 34);
			this->label28->TabIndex = 27;
			this->label28->Click += gcnew System::EventHandler(this, &Board::label28_Click);
			// 
			// label29
			// 
			this->label29->ImageIndex = 1;
			this->label29->ImageList = this->imageList1;
			this->label29->Location = System::Drawing::Point(179, 123);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(34, 34);
			this->label29->TabIndex = 28;
			this->label29->Click += gcnew System::EventHandler(this, &Board::label29_Click);
			// 
			// label30
			// 
			this->label30->ImageIndex = 1;
			this->label30->ImageList = this->imageList1;
			this->label30->Location = System::Drawing::Point(247, 123);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(34, 34);
			this->label30->TabIndex = 29;
			this->label30->Click += gcnew System::EventHandler(this, &Board::label30_Click);
			// 
			// label31
			// 
			this->label31->ImageIndex = 14;
			this->label31->ImageList = this->imageList1;
			this->label31->Location = System::Drawing::Point(77, 123);
			this->label31->MaximumSize = System::Drawing::Size(68, 68);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(34, 34);
			this->label31->TabIndex = 30;
			this->label31->Click += gcnew System::EventHandler(this, &Board::label31_Click);
			// 
			// label32
			// 
			this->label32->ImageIndex = 14;
			this->label32->ImageList = this->imageList1;
			this->label32->Location = System::Drawing::Point(145, 123);
			this->label32->MaximumSize = System::Drawing::Size(68, 68);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(34, 34);
			this->label32->TabIndex = 31;
			this->label32->Click += gcnew System::EventHandler(this, &Board::label32_Click);
			// 
			// label33
			// 
			this->label33->ImageIndex = 14;
			this->label33->ImageList = this->imageList1;
			this->label33->Location = System::Drawing::Point(213, 123);
			this->label33->MaximumSize = System::Drawing::Size(68, 68);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(34, 34);
			this->label33->TabIndex = 32;
			this->label33->Click += gcnew System::EventHandler(this, &Board::label33_Click);
			// 
			// label34
			// 
			this->label34->ImageIndex = 14;
			this->label34->ImageList = this->imageList1;
			this->label34->Location = System::Drawing::Point(281, 123);
			this->label34->MaximumSize = System::Drawing::Size(68, 68);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(34, 34);
			this->label34->TabIndex = 33;
			this->label34->Click += gcnew System::EventHandler(this, &Board::label34_Click);
			// 
			// label35
			// 
			this->label35->ImageIndex = 1;
			this->label35->ImageList = this->imageList1;
			this->label35->Location = System::Drawing::Point(77, 157);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(34, 34);
			this->label35->TabIndex = 34;
			this->label35->Click += gcnew System::EventHandler(this, &Board::label35_Click);
			// 
			// label36
			// 
			this->label36->ImageIndex = 1;
			this->label36->ImageList = this->imageList1;
			this->label36->Location = System::Drawing::Point(145, 157);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(34, 34);
			this->label36->TabIndex = 35;
			this->label36->Click += gcnew System::EventHandler(this, &Board::label36_Click);
			// 
			// label37
			// 
			this->label37->ImageIndex = 1;
			this->label37->ImageList = this->imageList1;
			this->label37->Location = System::Drawing::Point(213, 157);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(34, 34);
			this->label37->TabIndex = 36;
			this->label37->Click += gcnew System::EventHandler(this, &Board::label37_Click);
			// 
			// label38
			// 
			this->label38->ImageIndex = 1;
			this->label38->ImageList = this->imageList1;
			this->label38->Location = System::Drawing::Point(281, 157);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(34, 34);
			this->label38->TabIndex = 37;
			this->label38->Click += gcnew System::EventHandler(this, &Board::label38_Click);
			// 
			// label39
			// 
			this->label39->ImageIndex = 14;
			this->label39->ImageList = this->imageList1;
			this->label39->Location = System::Drawing::Point(43, 157);
			this->label39->MaximumSize = System::Drawing::Size(68, 68);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(34, 34);
			this->label39->TabIndex = 38;
			this->label39->Click += gcnew System::EventHandler(this, &Board::label39_Click);
			// 
			// label40
			// 
			this->label40->ImageIndex = 14;
			this->label40->ImageList = this->imageList1;
			this->label40->Location = System::Drawing::Point(111, 157);
			this->label40->MaximumSize = System::Drawing::Size(68, 68);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(34, 34);
			this->label40->TabIndex = 39;
			this->label40->Click += gcnew System::EventHandler(this, &Board::label40_Click);
			// 
			// label41
			// 
			this->label41->ImageIndex = 14;
			this->label41->ImageList = this->imageList1;
			this->label41->Location = System::Drawing::Point(179, 157);
			this->label41->MaximumSize = System::Drawing::Size(68, 68);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(34, 34);
			this->label41->TabIndex = 40;
			this->label41->Click += gcnew System::EventHandler(this, &Board::label41_Click);
			// 
			// label42
			// 
			this->label42->ImageIndex = 14;
			this->label42->ImageList = this->imageList1;
			this->label42->Location = System::Drawing::Point(247, 157);
			this->label42->MaximumSize = System::Drawing::Size(68, 68);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(34, 34);
			this->label42->TabIndex = 41;
			this->label42->Click += gcnew System::EventHandler(this, &Board::label42_Click);
			// 
			// label43
			// 
			this->label43->ImageIndex = 14;
			this->label43->ImageList = this->imageList1;
			this->label43->Location = System::Drawing::Point(77, 191);
			this->label43->MaximumSize = System::Drawing::Size(68, 68);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(34, 34);
			this->label43->TabIndex = 42;
			this->label43->Click += gcnew System::EventHandler(this, &Board::label43_Click);
			// 
			// label44
			// 
			this->label44->ImageIndex = 14;
			this->label44->ImageList = this->imageList1;
			this->label44->Location = System::Drawing::Point(145, 191);
			this->label44->MaximumSize = System::Drawing::Size(68, 68);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(34, 34);
			this->label44->TabIndex = 43;
			this->label44->Click += gcnew System::EventHandler(this, &Board::label44_Click);
			// 
			// label45
			// 
			this->label45->ImageIndex = 14;
			this->label45->ImageList = this->imageList1;
			this->label45->Location = System::Drawing::Point(213, 191);
			this->label45->MaximumSize = System::Drawing::Size(68, 68);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(34, 34);
			this->label45->TabIndex = 44;
			this->label45->Click += gcnew System::EventHandler(this, &Board::label45_Click);
			// 
			// label46
			// 
			this->label46->ImageIndex = 14;
			this->label46->ImageList = this->imageList1;
			this->label46->Location = System::Drawing::Point(281, 191);
			this->label46->MaximumSize = System::Drawing::Size(68, 68);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(34, 34);
			this->label46->TabIndex = 45;
			this->label46->Click += gcnew System::EventHandler(this, &Board::label46_Click);
			// 
			// label47
			// 
			this->label47->ImageIndex = 1;
			this->label47->ImageList = this->imageList1;
			this->label47->Location = System::Drawing::Point(43, 191);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(34, 34);
			this->label47->TabIndex = 46;
			this->label47->Click += gcnew System::EventHandler(this, &Board::label47_Click);
			// 
			// label48
			// 
			this->label48->ImageIndex = 1;
			this->label48->ImageList = this->imageList1;
			this->label48->Location = System::Drawing::Point(111, 191);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(34, 34);
			this->label48->TabIndex = 47;
			this->label48->Click += gcnew System::EventHandler(this, &Board::label48_Click);
			// 
			// label49
			// 
			this->label49->ImageIndex = 1;
			this->label49->ImageList = this->imageList1;
			this->label49->Location = System::Drawing::Point(179, 191);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(34, 34);
			this->label49->TabIndex = 48;
			this->label49->Click += gcnew System::EventHandler(this, &Board::label49_Click);
			// 
			// label50
			// 
			this->label50->ImageIndex = 1;
			this->label50->ImageList = this->imageList1;
			this->label50->Location = System::Drawing::Point(247, 191);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(34, 34);
			this->label50->TabIndex = 49;
			this->label50->Click += gcnew System::EventHandler(this, &Board::label50_Click);
			// 
			// label51
			// 
			this->label51->ImageIndex = 1;
			this->label51->ImageList = this->imageList1;
			this->label51->Location = System::Drawing::Point(77, 225);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(34, 34);
			this->label51->TabIndex = 50;
			this->label51->Click += gcnew System::EventHandler(this, &Board::label51_Click);
			// 
			// label52
			// 
			this->label52->ImageIndex = 1;
			this->label52->ImageList = this->imageList1;
			this->label52->Location = System::Drawing::Point(145, 225);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(34, 34);
			this->label52->TabIndex = 51;
			this->label52->Click += gcnew System::EventHandler(this, &Board::label52_Click);
			// 
			// label53
			// 
			this->label53->ImageIndex = 1;
			this->label53->ImageList = this->imageList1;
			this->label53->Location = System::Drawing::Point(213, 225);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(34, 34);
			this->label53->TabIndex = 52;
			this->label53->Click += gcnew System::EventHandler(this, &Board::label53_Click);
			// 
			// label54
			// 
			this->label54->ImageIndex = 1;
			this->label54->ImageList = this->imageList1;
			this->label54->Location = System::Drawing::Point(281, 225);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(34, 34);
			this->label54->TabIndex = 53;
			this->label54->Click += gcnew System::EventHandler(this, &Board::label54_Click);
			// 
			// label55
			// 
			this->label55->ImageIndex = 1;
			this->label55->ImageList = this->imageList1;
			this->label55->Location = System::Drawing::Point(247, 259);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(34, 34);
			this->label55->TabIndex = 54;
			this->label55->Click += gcnew System::EventHandler(this, &Board::label55_Click);
			// 
			// label56
			// 
			this->label56->ImageIndex = 14;
			this->label56->ImageList = this->imageList1;
			this->label56->Location = System::Drawing::Point(43, 225);
			this->label56->MaximumSize = System::Drawing::Size(68, 68);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(34, 34);
			this->label56->TabIndex = 55;
			this->label56->Click += gcnew System::EventHandler(this, &Board::label56_Click);
			// 
			// label57
			// 
			this->label57->ImageIndex = 14;
			this->label57->ImageList = this->imageList1;
			this->label57->Location = System::Drawing::Point(111, 225);
			this->label57->MaximumSize = System::Drawing::Size(68, 68);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(34, 34);
			this->label57->TabIndex = 56;
			this->label57->Click += gcnew System::EventHandler(this, &Board::label57_Click);
			// 
			// label58
			// 
			this->label58->ImageIndex = 14;
			this->label58->ImageList = this->imageList1;
			this->label58->Location = System::Drawing::Point(179, 225);
			this->label58->MaximumSize = System::Drawing::Size(68, 68);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(34, 34);
			this->label58->TabIndex = 57;
			this->label58->Click += gcnew System::EventHandler(this, &Board::label58_Click);
			// 
			// label59
			// 
			this->label59->ImageIndex = 14;
			this->label59->ImageList = this->imageList1;
			this->label59->Location = System::Drawing::Point(247, 225);
			this->label59->MaximumSize = System::Drawing::Size(68, 68);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(34, 34);
			this->label59->TabIndex = 58;
			this->label59->Click += gcnew System::EventHandler(this, &Board::label59_Click);
			// 
			// label60
			// 
			this->label60->ImageIndex = 14;
			this->label60->ImageList = this->imageList1;
			this->label60->Location = System::Drawing::Point(77, 259);
			this->label60->MaximumSize = System::Drawing::Size(68, 68);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(34, 34);
			this->label60->TabIndex = 59;
			this->label60->Click += gcnew System::EventHandler(this, &Board::label60_Click);
			// 
			// label61
			// 
			this->label61->ImageIndex = 14;
			this->label61->ImageList = this->imageList1;
			this->label61->Location = System::Drawing::Point(145, 259);
			this->label61->MaximumSize = System::Drawing::Size(68, 68);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(34, 34);
			this->label61->TabIndex = 60;
			this->label61->Click += gcnew System::EventHandler(this, &Board::label61_Click);
			// 
			// label62
			// 
			this->label62->ImageIndex = 14;
			this->label62->ImageList = this->imageList1;
			this->label62->Location = System::Drawing::Point(213, 259);
			this->label62->MaximumSize = System::Drawing::Size(68, 68);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(34, 34);
			this->label62->TabIndex = 61;
			this->label62->Click += gcnew System::EventHandler(this, &Board::label62_Click);
			// 
			// label63
			// 
			this->label63->ImageIndex = 1;
			this->label63->ImageList = this->imageList1;
			this->label63->Location = System::Drawing::Point(43, 259);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(34, 34);
			this->label63->TabIndex = 62;
			this->label63->Click += gcnew System::EventHandler(this, &Board::label63_Click);
			// 
			// label64
			// 
			this->label64->ImageIndex = 1;
			this->label64->ImageList = this->imageList1;
			this->label64->Location = System::Drawing::Point(111, 259);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(34, 34);
			this->label64->TabIndex = 63;
			this->label64->Click += gcnew System::EventHandler(this, &Board::label64_Click);
			// 
			// label65
			// 
			this->label65->ImageIndex = 1;
			this->label65->ImageList = this->imageList1;
			this->label65->Location = System::Drawing::Point(179, 259);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(34, 34);
			this->label65->TabIndex = 64;
			this->label65->Click += gcnew System::EventHandler(this, &Board::label65_Click);
			// 
			// label66
			// 
			this->label66->ImageIndex = 14;
			this->label66->ImageList = this->imageList1;
			this->label66->Location = System::Drawing::Point(281, 259);
			this->label66->Margin = System::Windows::Forms::Padding(0);
			this->label66->MaximumSize = System::Drawing::Size(68, 68);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(34, 34);
			this->label66->TabIndex = 65;
			this->label66->Click += gcnew System::EventHandler(this, &Board::label66_Click);
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label67->Location = System::Drawing::Point(24, 29);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(14, 15);
			this->label67->TabIndex = 66;
			this->label67->Text = L"8";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label68->Location = System::Drawing::Point(24, 63);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(14, 15);
			this->label68->TabIndex = 67;
			this->label68->Text = L"7";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label69->Location = System::Drawing::Point(24, 97);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(14, 15);
			this->label69->TabIndex = 68;
			this->label69->Text = L"6";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label70->Location = System::Drawing::Point(24, 131);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(14, 15);
			this->label70->TabIndex = 69;
			this->label70->Text = L"5";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label71->Location = System::Drawing::Point(24, 165);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(14, 15);
			this->label71->TabIndex = 70;
			this->label71->Text = L"4";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label72->Location = System::Drawing::Point(24, 199);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(14, 15);
			this->label72->TabIndex = 71;
			this->label72->Text = L"3";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label73->Location = System::Drawing::Point(24, 233);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(14, 15);
			this->label73->TabIndex = 72;
			this->label73->Text = L"2";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label74->Location = System::Drawing::Point(24, 267);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(14, 15);
			this->label74->TabIndex = 73;
			this->label74->Text = L"1";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label75->Location = System::Drawing::Point(53, 296);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(14, 15);
			this->label75->TabIndex = 74;
			this->label75->Text = L"A";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label76->Location = System::Drawing::Point(87, 296);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(15, 15);
			this->label76->TabIndex = 75;
			this->label76->Text = L"B";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label77->Location = System::Drawing::Point(121, 296);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(15, 15);
			this->label77->TabIndex = 76;
			this->label77->Text = L"C";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label78->Location = System::Drawing::Point(155, 296);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(16, 15);
			this->label78->TabIndex = 77;
			this->label78->Text = L"D";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label79->Location = System::Drawing::Point(189, 296);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(15, 15);
			this->label79->TabIndex = 78;
			this->label79->Text = L"E";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label80->Location = System::Drawing::Point(223, 296);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(14, 15);
			this->label80->TabIndex = 79;
			this->label80->Text = L"F";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label81->Location = System::Drawing::Point(257, 296);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(16, 15);
			this->label81->TabIndex = 80;
			this->label81->Text = L"G";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label82->Location = System::Drawing::Point(291, 296);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(16, 15);
			this->label82->TabIndex = 81;
			this->label82->Text = L"H";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(27, 397);
			this->textBox1->MaxLength = 100;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(643, 20);
			this->textBox1->TabIndex = 82;
			this->textBox1->Text = L"Past FEN here";
			this->textBox1->Click += gcnew System::EventHandler(this, &Board::textBox1_Click);
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label83->Location = System::Drawing::Point(306, 381);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(31, 13);
			this->label83->TabIndex = 83;
			this->label83->Text = L"FEN";
			// 
			// label84
			// 
			this->label84->ImageKey = L"wqw.gif";
			this->label84->ImageList = this->imageList1;
			this->label84->Location = System::Drawing::Point(544, 89);
			this->label84->MaximumSize = System::Drawing::Size(68, 68);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(34, 34);
			this->label84->TabIndex = 84;
			this->label84->Click += gcnew System::EventHandler(this, &Board::label84_Click);
			// 
			// label85
			// 
			this->label85->ImageIndex = 0;
			this->label85->ImageList = this->imageList1;
			this->label85->Location = System::Drawing::Point(544, 133);
			this->label85->MaximumSize = System::Drawing::Size(68, 68);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(34, 34);
			this->label85->TabIndex = 85;
			this->label85->Click += gcnew System::EventHandler(this, &Board::label85_Click);
			// 
			// label86
			// 
			this->label86->ImageIndex = 16;
			this->label86->ImageList = this->imageList1;
			this->label86->Location = System::Drawing::Point(544, 180);
			this->label86->MaximumSize = System::Drawing::Size(68, 68);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(34, 34);
			this->label86->TabIndex = 86;
			this->label86->Click += gcnew System::EventHandler(this, &Board::label86_Click);
			// 
			// label87
			// 
			this->label87->ImageIndex = 20;
			this->label87->ImageList = this->imageList1;
			this->label87->Location = System::Drawing::Point(544, 225);
			this->label87->MaximumSize = System::Drawing::Size(68, 68);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(34, 34);
			this->label87->TabIndex = 87;
			this->label87->Click += gcnew System::EventHandler(this, &Board::label87_Click);
			// 
			// label88
			// 
			this->label88->ImageIndex = 22;
			this->label88->ImageList = this->imageList1;
			this->label88->Location = System::Drawing::Point(544, 269);
			this->label88->MaximumSize = System::Drawing::Size(68, 68);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(34, 34);
			this->label88->TabIndex = 88;
			this->label88->Click += gcnew System::EventHandler(this, &Board::label88_Click);
			// 
			// label89
			// 
			this->label89->ImageIndex = 4;
			this->label89->ImageList = this->imageList1;
			this->label89->Location = System::Drawing::Point(612, 44);
			this->label89->MaximumSize = System::Drawing::Size(68, 68);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(34, 34);
			this->label89->TabIndex = 89;
			this->label89->Click += gcnew System::EventHandler(this, &Board::label89_Click);
			// 
			// label90
			// 
			this->label90->ImageIndex = 10;
			this->label90->ImageList = this->imageList1;
			this->label90->Location = System::Drawing::Point(612, 89);
			this->label90->MaximumSize = System::Drawing::Size(68, 68);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(34, 34);
			this->label90->TabIndex = 90;
			this->label90->Click += gcnew System::EventHandler(this, &Board::label90_Click);
			// 
			// label91
			// 
			this->label91->ImageIndex = 12;
			this->label91->ImageList = this->imageList1;
			this->label91->Location = System::Drawing::Point(612, 133);
			this->label91->MaximumSize = System::Drawing::Size(68, 68);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(34, 34);
			this->label91->TabIndex = 91;
			this->label91->Click += gcnew System::EventHandler(this, &Board::label91_Click);
			// 
			// label92
			// 
			this->label92->ImageIndex = 2;
			this->label92->ImageList = this->imageList1;
			this->label92->Location = System::Drawing::Point(612, 180);
			this->label92->MaximumSize = System::Drawing::Size(68, 68);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(34, 34);
			this->label92->TabIndex = 92;
			this->label92->Click += gcnew System::EventHandler(this, &Board::label92_Click);
			// 
			// label93
			// 
			this->label93->ImageIndex = 6;
			this->label93->ImageList = this->imageList1;
			this->label93->Location = System::Drawing::Point(612, 225);
			this->label93->MaximumSize = System::Drawing::Size(68, 68);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(34, 34);
			this->label93->TabIndex = 93;
			this->label93->Click += gcnew System::EventHandler(this, &Board::label93_Click);
			// 
			// label94
			// 
			this->label94->ImageIndex = 8;
			this->label94->ImageList = this->imageList1;
			this->label94->Location = System::Drawing::Point(612, 267);
			this->label94->MaximumSize = System::Drawing::Size(68, 68);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(34, 34);
			this->label94->TabIndex = 94;
			this->label94->Click += gcnew System::EventHandler(this, &Board::label94_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(260, 423);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 28);
			this->button1->TabIndex = 95;
			this->button1->Text = L"Load fen";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Board::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(364, 44);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(72, 17);
			this->checkBox1->TabIndex = 96;
			this->checkBox1->Text = L"White 0-0";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Board::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(442, 44);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(81, 17);
			this->checkBox2->TabIndex = 97;
			this->checkBox2->Text = L"White 0-0-0";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Board::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(364, 72);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(71, 17);
			this->checkBox3->TabIndex = 98;
			this->checkBox3->Text = L"Black 0-0";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Board::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(441, 72);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(80, 17);
			this->checkBox4->TabIndex = 99;
			this->checkBox4->Text = L"Black 0-0-0";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Board::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Checked = true;
			this->checkBox5->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox5->Location = System::Drawing::Point(364, 133);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(54, 17);
			this->checkBox5->TabIndex = 100;
			this->checkBox5->Text = L"White";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Board::checkBox5_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(364, 156);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(53, 17);
			this->checkBox6->TabIndex = 101;
			this->checkBox6->Text = L"Black";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Board::checkBox6_CheckedChanged);
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Location = System::Drawing::Point(416, 28);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(36, 13);
			this->label95->TabIndex = 102;
			this->label95->Text = L"Castle";
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Location = System::Drawing::Point(361, 117);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(49, 13);
			this->label96->TabIndex = 103;
			this->label96->Text = L"Move to:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(442, 133);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(50, 20);
			this->numericUpDown1->TabIndex = 104;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Board::numericUpDown1_ValueChanged);
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->Location = System::Drawing::Point(443, 117);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(45, 13);
			this->label97->TabIndex = 105;
			this->label97->Text = L"n. move";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(364, 205);
			this->textBox2->MaxLength = 2;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(36, 20);
			this->textBox2->TabIndex = 106;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Board::textBox2_TextChanged);
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->Location = System::Drawing::Point(361, 189);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(60, 13);
			this->label98->TabIndex = 107;
			this->label98->Text = L"En passant";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(364, 277);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 108;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Board::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(124, 325);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 28);
			this->button3->TabIndex = 109;
			this->button3->Text = L"Load board";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Board::button3_Click);
			// 
			// Board
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(696, 481);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label98);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label97);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label96);
			this->Controls->Add(this->label95);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
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
			this->Controls->Add(this->textBox1);
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
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Board";
			this->Text = L"Board";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Board::Board_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Board::Board_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
				 // load set White King piece
				 loadsc('K');

			 }

private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			     // load set empty key
			     loadsc('v');
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
			 // load board E8 key
			 loadsn(4,'i');loadsn( label7->ImageIndex,'I');label7->ImageIndex =uploadsn('w');
		 }

  // INPUT FEN
private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			    // past FEN
			    textBox1->Text = Clipboard::GetText();
	            System::String ^ fenB=" "; fenB=Clipboard::GetText();
				expst(fenB,'f');
				// on behalf  FEN control
				if(uploadsn('f')==0){
					textBox1->Text="Error fen, past FEN here";
					loadsn(0,'p');
					 // some audio effect-error
					plSound("au2.wav");
				}
				
		 }

 
  // LOAD FEN
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 
			 // write or past FEN manually
			 System::String ^ fenB1=textBox1->Text;
			 expst(fenB1,'f');
			 button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
				// on behalf  FEN control
				if(textBox1->Text=="Error fen, past FEN here"||uploadsn('f')==0){
					textBox1->Text="Error fen, Past FEN here";
					loadsn(0,'p');
					plSound("au2.wav");
				}
				else{

					// full control FEN
					if(uploadsn('i')==1){
						// start move ok
						loadsn(1,'p');
						// start chessboard
						loadsn(0,'S');
						loadsn(0,'b');
						loadsn(0,'F');
						// FEN display in chessboard
						loadsn(0,'d');label1->ImageIndex = uploadsn('d');
						loadsn(1,'d');label4->ImageIndex = uploadsn('d'); 
						loadsn(2,'d');label5->ImageIndex = uploadsn('d');
						loadsn(3,'d');label6->ImageIndex = uploadsn('d'); 
						loadsn(4,'d');label7->ImageIndex = uploadsn('d'); 
						loadsn(5,'d');label8->ImageIndex = uploadsn('d'); 
						loadsn(6,'d');label9->ImageIndex = uploadsn('d'); 
						loadsn(7,'d');label10->ImageIndex = uploadsn('d'); 
						loadsn(8,'d');label11->ImageIndex = uploadsn('d'); 
						loadsn(9,'d');label15->ImageIndex = uploadsn('d'); 
						loadsn(10,'d');label12->ImageIndex = uploadsn('d'); 
						loadsn(11,'d');label16->ImageIndex = uploadsn('d'); 
						loadsn(12,'d');label14->ImageIndex = uploadsn('d');
						loadsn(13,'d');label17->ImageIndex = uploadsn('d');
						loadsn(14,'d');label13->ImageIndex = uploadsn('d');
						loadsn(15,'d');label18->ImageIndex = uploadsn('d');
						loadsn(16,'d');label20->ImageIndex = uploadsn('d');
						loadsn(17,'d');label19->ImageIndex = uploadsn('d');
						loadsn(18,'d');label21->ImageIndex = uploadsn('d');
						loadsn(19,'d');label24->ImageIndex = uploadsn('d');
						loadsn(20,'d');label22->ImageIndex = uploadsn('d');
						loadsn(21,'d');label25->ImageIndex = uploadsn('d');
						loadsn(22,'d');label23->ImageIndex = uploadsn('d');
						loadsn(23,'d');label26->ImageIndex = uploadsn('d');
						loadsn(24,'d');label27->ImageIndex = uploadsn('d');
						loadsn(25,'d');label31->ImageIndex = uploadsn('d');
						loadsn(26,'d');label28->ImageIndex = uploadsn('d');
						loadsn(27,'d');label32->ImageIndex = uploadsn('d');
						loadsn(28,'d');label29->ImageIndex = uploadsn('d');
						loadsn(29,'d');label33->ImageIndex = uploadsn('d');
						loadsn(30,'d');label30->ImageIndex = uploadsn('d');
						loadsn(31,'d');label34->ImageIndex = uploadsn('d');
						loadsn(32,'d');label39->ImageIndex = uploadsn('d'); 
						loadsn(33,'d');label35->ImageIndex = uploadsn('d');
						loadsn(34,'d');label40->ImageIndex = uploadsn('d');
						loadsn(35,'d');label36->ImageIndex = uploadsn('d');
						loadsn(36,'d');label41->ImageIndex = uploadsn('d');
						loadsn(37,'d');label37->ImageIndex = uploadsn('d');
						loadsn(38,'d');label42->ImageIndex = uploadsn('d');
						loadsn(39,'d');label38->ImageIndex = uploadsn('d');
						loadsn(40,'d');label47->ImageIndex = uploadsn('d');
						loadsn(41,'d');label43->ImageIndex = uploadsn('d');
						loadsn(42,'d');label48->ImageIndex = uploadsn('d');
						loadsn(43,'d');label44->ImageIndex = uploadsn('d');
						loadsn(44,'d');label49->ImageIndex = uploadsn('d');
						loadsn(45,'d');label45->ImageIndex = uploadsn('d');
						loadsn(46,'d');label50->ImageIndex = uploadsn('d');
						loadsn(47,'d');label46->ImageIndex = uploadsn('d');
						loadsn(48,'d');label56->ImageIndex = uploadsn('d');
						loadsn(49,'d');label51->ImageIndex = uploadsn('d');
						loadsn(50,'d');label57->ImageIndex = uploadsn('d');
						loadsn(51,'d');label52->ImageIndex = uploadsn('d');
						loadsn(52,'d');label58->ImageIndex = uploadsn('d');
						loadsn(53,'d');label53->ImageIndex = uploadsn('d');
						loadsn(54,'d');label59->ImageIndex = uploadsn('d');
						loadsn(55,'d');label54->ImageIndex = uploadsn('d');
						loadsn(56,'d');label63->ImageIndex = uploadsn('d');
						loadsn(57,'d');label60->ImageIndex = uploadsn('d');
						loadsn(58,'d');label64->ImageIndex = uploadsn('d');
						loadsn(59,'d');label61->ImageIndex = uploadsn('d');
						loadsn(60,'d');label65->ImageIndex = uploadsn('d');
						loadsn(61,'d');label62->ImageIndex = uploadsn('d');
						loadsn(62,'d');label55->ImageIndex = uploadsn('d');
						loadsn(63,'d');label66->ImageIndex = uploadsn('d');
						
						// display position controls  (castle,enpassant ecc..)

						//castle
						if(uploadsc('W')=='K'){
							checkBox1->Checked = true;
						}
						if(uploadsc('w')=='Q'){
							checkBox2->Checked = true;
						}
						if(uploadsc('B')=='k'){
							checkBox3->Checked = true;
						}
						if(uploadsc('b')=='q'){
							checkBox4->Checked = true;
						}
						// color
						if(uploadsc('c')=='w'){
							checkBox5->Checked = true;
							checkBox6->Checked = false;
						}
						else{
							checkBox6->Checked = true;
							checkBox5->Checked = false;
						}
						// move number
						int p=uploadsn('m');
						numericUpDown1->Value=p;

						// en passant
                        std::string str6;
				        str6=dipSGB('E');
				        textBox2->Text=gcnew String(str6.c_str());
						loadsC('r',' ');
						//some audio effect-load FEN ok
						plSound("au1.wav");
						
					}
					else{
						// display full control error  
						textBox1->Text=" Error fen, past correct FEN here";
						// reset parameters board 
					    loadsC('r',' ');loadsn(0,'p');
						plSound("au2.wav");
					}
				}
			 
		 }


private: System::Void label84_Click(System::Object^  sender, System::EventArgs^  e) {
			 // load set White Queen piece
			 loadsc('Q');
		 }
private: System::Void label85_Click(System::Object^  sender, System::EventArgs^  e) {
			 // load set White Rook piece
			 loadsc('R');
		 }
private: System::Void label86_Click(System::Object^  sender, System::EventArgs^  e) {
			 // load set White Bishop piece
			 loadsc('B');
		 }
private: System::Void label87_Click(System::Object^  sender, System::EventArgs^  e) {
			 // load set White Knight piece
			 loadsc('N');
		 }
private: System::Void label88_Click(System::Object^  sender, System::EventArgs^  e) {
			 // load set White Pawn piece
			 loadsc('P');
		 }
private: System::Void label89_Click(System::Object^  sender, System::EventArgs^  e) {
			 // load set Black King piece
			 loadsc('k');
		 }
private: System::Void label90_Click(System::Object^  sender, System::EventArgs^  e) {
			 // load set Black Queen piece
			 loadsc('q');
		 }
private: System::Void label91_Click(System::Object^  sender, System::EventArgs^  e) {
			 // load set Black Rook piece
			 loadsc('r');
		 }
private: System::Void label92_Click(System::Object^  sender, System::EventArgs^  e) {
			 // load set Black Bishop piece
			 loadsc('b');
		 }
private: System::Void label93_Click(System::Object^  sender, System::EventArgs^  e) {
			 // load set Black Knight piece
			 loadsc('n');
		 }
private: System::Void label94_Click(System::Object^  sender, System::EventArgs^  e) {
			 // load set Black Pawn piece
			 loadsc('p');
		 }


  // LOAD BOARD ALL KEYS (excluded E8, already load over, code line n.1639)

private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
             loadsn(0,'i');loadsn( label1->ImageIndex,'I'); label1->ImageIndex =uploadsn('w');
			 // castle control
			 loadsn(label1->ImageIndex,'A');
			 if(uploadsn('a')==1){
				 checkBox4->Checked = false;
				 loadsC('b',' ');
			 }
			 castlect();
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(1,'i');loadsn(label4->ImageIndex,'I');label4->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(2,'i');loadsn(label5->ImageIndex,'I');label5->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(3,'i');loadsn(label6->ImageIndex,'I');label6->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(5,'i');loadsn(label8->ImageIndex,'I');label8->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(6,'i');loadsn(label9->ImageIndex,'I');label9->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(7,'i');loadsn(label10->ImageIndex,'I');label10->ImageIndex =uploadsn('n');
			 // castle control
			 loadsn(label10->ImageIndex,'B');
			  if(uploadsn('a')==1){
				 checkBox3->Checked = false;
				 loadsC('B',' ');
			 }
             castlect();
		 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
			loadsn(8,'i'); loadsn(label11->ImageIndex,'I');label11->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(9,'i');loadsn(label15->ImageIndex,'I');label15->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(10,'i');loadsn(label12->ImageIndex,'I');label12->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(11,'i');loadsn(label16->ImageIndex,'I');label16->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(12,'i');loadsn(label14->ImageIndex,'I');label14->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(13,'i');loadsn(label17->ImageIndex,'I');label17->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(14,'i');loadsn(label13->ImageIndex,'I');label13->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label18_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(15,'i');loadsn(label18->ImageIndex,'I');label18->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label20_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(16,'i');loadsn(label20->ImageIndex,'I');label20->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(17,'i');loadsn(label19->ImageIndex,'I');label19->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label21_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(18,'i');loadsn(label21->ImageIndex,'I');label21->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label24_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(19,'i');loadsn(label24->ImageIndex,'I');label24->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label22_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(20,'i');loadsn(label22->ImageIndex,'I');label22->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label25_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(21,'i');loadsn(label25->ImageIndex,'I');label25->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label23_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(22,'i');loadsn(label23->ImageIndex,'I');label23->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label26_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(23,'i');loadsn(label26->ImageIndex,'I');label26->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label27_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(24,'i');loadsn(label27->ImageIndex,'I');label27->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label31_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(25,'i');loadsn(label31->ImageIndex,'I');label31->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label28_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(26,'i');loadsn(label28->ImageIndex,'I');label28->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label32_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(27,'i');loadsn(label32->ImageIndex,'I');label32->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label29_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(28,'i');loadsn(label29->ImageIndex,'I');label29->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label33_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(29,'i');loadsn(label33->ImageIndex,'I');label33->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label30_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(30,'i');loadsn(label30->ImageIndex,'I');label30->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label34_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(31,'i');loadsn(label34->ImageIndex,'I');label34->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label39_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(32,'i');loadsn(label39->ImageIndex,'I');label39->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label35_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(33,'i');loadsn(label35->ImageIndex,'I');label35->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label40_Click(System::Object^  sender, System::EventArgs^  e) {
			loadsn(34,'i'); loadsn(label40->ImageIndex,'I');label40->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label36_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(35,'i');loadsn(label36->ImageIndex,'I');label36->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label41_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(36,'i');loadsn(label41->ImageIndex,'I');label41->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label37_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(37,'i');loadsn(label37->ImageIndex,'I');label37->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label42_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(38,'i');loadsn(label42->ImageIndex,'I');label42->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label38_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(39,'i');loadsn(label38->ImageIndex,'I');label38->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label47_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(40,'i');loadsn(label47->ImageIndex,'I');label47->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label43_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(41,'i');loadsn(label43->ImageIndex,'I');label43->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label48_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(42,'i');loadsn(label48->ImageIndex,'I');label48->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label44_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(43,'i');loadsn(label44->ImageIndex,'I');label44->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label49_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(44,'i');loadsn(label49->ImageIndex,'I');label49->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label45_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(45,'i');loadsn(label45->ImageIndex,'I');label45->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label50_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(46,'i');loadsn(label50->ImageIndex,'I');label50->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label46_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(47,'i');loadsn(label46->ImageIndex,'I');label46->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label56_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(48,'i');loadsn(label56->ImageIndex,'I');label56->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label51_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(49,'i');loadsn(label51->ImageIndex,'I');label51->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label57_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(50,'i');loadsn(label57->ImageIndex,'I');label57->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label52_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(51,'i');loadsn(label52->ImageIndex,'I');label52->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label58_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(52,'i');loadsn(label58->ImageIndex,'I');label58->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label53_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(53,'i');loadsn(label53->ImageIndex,'I');label53->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label59_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(54,'i');loadsn(label59->ImageIndex,'I');label59->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label54_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(55,'i');loadsn(label54->ImageIndex,'I');label54->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label63_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(56,'i');loadsn(label63->ImageIndex,'I');label63->ImageIndex =uploadsn('n');
			 // castle control
			 loadsn(label63->ImageIndex,'C');
			 if(uploadsn('a')==1){
				 checkBox2->Checked = false;
				 loadsC('w',' ');
			 }
			 castlect();
		 }
private: System::Void label60_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(57,'i');loadsn(label60->ImageIndex,'I');label60->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label64_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(58,'i');loadsn(label64->ImageIndex,'I');label64->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label61_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(59,'i');loadsn(label61->ImageIndex,'I');label61->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label65_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(60,'i');loadsn(label65->ImageIndex,'I');label65->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label62_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(61,'i');loadsn(label62->ImageIndex,'I');label62->ImageIndex =uploadsn('w');castlect();
		 }
private: System::Void label55_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(62,'i');loadsn(label55->ImageIndex,'I');label55->ImageIndex =uploadsn('n');castlect();
		 }
private: System::Void label66_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(63,'i');loadsn(label66->ImageIndex,'I');label66->ImageIndex =uploadsn('w');
			 // castle control
			 loadsn(label66->ImageIndex,'D');
			 if(uploadsn('a')==1){
				 checkBox1->Checked = false;
				 loadsC('W',' ');
			 }
			 castlect();
		 }



  // RESET position (Board and FEN).
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 // reset chessboard
			 loadsn(0,'S');
			 // reset parameters;
			 loadsC('r',' ');
			 // start position reset
			 loadsn(0,'p');
			 // chessboard reset display
			 loadsC('R',' ');
			 label1->ImageIndex=14;label5->ImageIndex=14;label7->ImageIndex=14;
			 label9->ImageIndex=14;label15->ImageIndex=14;label16->ImageIndex=14;
			 label17->ImageIndex=14;label18->ImageIndex=14;label20->ImageIndex=14;
			 label21->ImageIndex=14;label22->ImageIndex=14;label23->ImageIndex=14;
			 label31->ImageIndex=14;label32->ImageIndex=14;label33->ImageIndex=14;
			 label34->ImageIndex=14;label39->ImageIndex=14;label40->ImageIndex=14;
			 label41->ImageIndex=14;label42->ImageIndex=14;label43->ImageIndex=14;
			 label44->ImageIndex=14;label45->ImageIndex=14;label46->ImageIndex=14;
			 label56->ImageIndex=14;label57->ImageIndex=14;label58->ImageIndex=14;
			 label59->ImageIndex=14;label60->ImageIndex=14;label61->ImageIndex=14;
			 label62->ImageIndex=14;label66->ImageIndex=14;
			 label4->ImageIndex=1;label6->ImageIndex=1;label8->ImageIndex=1;
			 label10->ImageIndex=1;label11->ImageIndex=1;label12->ImageIndex=1;
			 label14->ImageIndex=1;label13->ImageIndex=1;label19->ImageIndex=1;
			 label24->ImageIndex=1;label25->ImageIndex=1;label26->ImageIndex=1;
			 label27->ImageIndex=1;label28->ImageIndex=1;label29->ImageIndex=1;
			 label30->ImageIndex=1;label35->ImageIndex=1;label36->ImageIndex=1;
			 label37->ImageIndex=1;label38->ImageIndex=1;label47->ImageIndex=1;
			 label48->ImageIndex=1;label49->ImageIndex=1;label50->ImageIndex=1;
			 label51->ImageIndex=1;label52->ImageIndex=1;label53->ImageIndex=1;
			 label54->ImageIndex=1;label63->ImageIndex=1;label64->ImageIndex=1;
			 label55->ImageIndex=1;label65->ImageIndex=1;

			 // controls reset
			 textBox1->Text="Past FEN here";loadsn(0,'p');
			 numericUpDown1->Value=0;
			 textBox2->Text="-";loadsn(0,'G');loadsn(0,'S');
			 checkBox1->Checked = false;
			 checkBox2->Checked = false;
             checkBox3->Checked = false;
			 checkBox4->Checked = false;
			 checkBox5->Checked = true;
			 
		 }

  // Load Enpassant 
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 expst(textBox2->Text,'E');
			 if(uploadsn('e')==0){
				 textBox2->Text="-";
				 expst(textBox2->Text,'E');
			 }
			 if(textBox2->Text==" "||textBox2->Text==""){
				 String ^ oe="-";
				 expst(oe,'E');
			 }
			 
			 
			 
		 }

  // Load/display color/enpassant
private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox5->CheckState == CheckState::Checked){
					loadsC('c','w');checkBox6->Checked = false;
			 }
			 else{
					checkBox6->Checked = true;
			 }
			 if(uploadsn('l')==0){
				 textBox2->Text="-";
			 }
		 }
private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			  if (checkBox6->CheckState == CheckState::Checked){
					loadsC('c','b');checkBox5->Checked = false;
			 }
			 else{
					checkBox5->Checked = true;
			 }
			 if(uploadsn('l')==0){
				 textBox2->Text="-";
			 }

		 }

  // Load/display castle
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox1->CheckState == CheckState::Checked){
				 if(label65->ImageIndex==17&&label66->ImageIndex==0)
					 loadsC('W','K');
				 else{
					 checkBox1->Checked = false;
				 }

			 }
			 else{
				 loadsC('W',' ');
			 }

		 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox2->CheckState == CheckState::Checked){
				 if(label65->ImageIndex==17&&label63->ImageIndex==25)
					 loadsC('w','Q');
				 
				 else{
					 checkBox2->Checked = false;
				 }
			 }
			 else{
				 loadsC('w',' ');
			 }
		 }
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox3->CheckState == CheckState::Checked){
				 if(label7->ImageIndex==5&&label10->ImageIndex==12)
					 loadsC('B','k');
				 else{
					 checkBox3->Checked = false;
				 }
			 }
			 else{
				loadsC('B',' ');
			 }
		 }
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox4->CheckState == CheckState::Checked){
				 if(label7->ImageIndex==5&&label1->ImageIndex==13)
					 loadsC('b','q');
				 else{
					  checkBox4->Checked = false;
				 }

			 }
			 else{
				 loadsC('b',' ');
			 }
		 }

  // load/display move number
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 expst(numericUpDown1->Value.ToString(),'N');
		 }

  // LOAD  CHESSBOARD IN FEN
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 loadsn(0,'S');loadsC('r',' ');
			 // move number
			 expst(numericUpDown1->Value.ToString(),'N');
			 // en passant
			 expst(textBox2->Text,'A');
			 // 50 moves
			 expst("0",'C');
			 // color
			 if(checkBox5->Checked == true)
				 loadsC('c','w');
			 if(checkBox6->Checked == true)
				 loadsC('c','b');
			 // castle
			 if(checkBox1->Checked == true)
				 loadsC('W','K');
			 else
				 loadsC('W',' ');

			 if(checkBox2->Checked == true)
				 loadsC('w','Q');
			 else
				 loadsC('w',' ');

			 if(checkBox3->Checked == true)
				 loadsC('B','k');
			 else
				 loadsC('B',' ');

			 if(checkBox4->Checked == true)
				 loadsC('b','q');
			 else
				 loadsC('b',' ');

						 

			  // reset start position
			 loadsn(0,'p');
			 // load FEN key to key
			 loadsn2(0,label1->ImageIndex);
			 loadsn2(1,label4->ImageIndex);
			 loadsn2(2,label5->ImageIndex);
			 loadsn2(3,label6->ImageIndex);
			 loadsn2(4,label7->ImageIndex);
			 loadsn2(5,label8->ImageIndex);
			 loadsn2(6,label9->ImageIndex);
			 loadsn2(7,label10->ImageIndex);
			 loadsn2(8,label11->ImageIndex);
			 loadsn2(9,label15->ImageIndex);
			 loadsn2(10,label12->ImageIndex);
			 loadsn2(11,label16->ImageIndex);
			 loadsn2(12,label14->ImageIndex);
			 loadsn2(13,label17->ImageIndex);
			 loadsn2(14,label13->ImageIndex);
			 loadsn2(15,label18->ImageIndex);
			 loadsn2(16,label20->ImageIndex);
			 loadsn2(17,label19->ImageIndex);
			 loadsn2(18,label21->ImageIndex);
			 loadsn2(19,label24->ImageIndex);
			 loadsn2(20,label22->ImageIndex);
			 loadsn2(21,label25->ImageIndex);
			 loadsn2(22,label23->ImageIndex);
			 loadsn2(23,label26->ImageIndex);
			 loadsn2(24,label27->ImageIndex);
			 loadsn2(25,label31->ImageIndex);
			 loadsn2(26,label28->ImageIndex);
			 loadsn2(27,label32->ImageIndex);
			 loadsn2(28,label29->ImageIndex);
			 loadsn2(29,label33->ImageIndex);
			 loadsn2(30,label30->ImageIndex);
			 loadsn2(31,label34->ImageIndex);
			 loadsn2(32,label39->ImageIndex);
			 loadsn2(33,label35->ImageIndex);
			 loadsn2(34,label40->ImageIndex);
			 loadsn2(35,label36->ImageIndex);
			 loadsn2(36,label41->ImageIndex);
			 loadsn2(37,label37->ImageIndex);
			 loadsn2(38,label42->ImageIndex);
			 loadsn2(39,label38->ImageIndex);
			 loadsn2(40,label47->ImageIndex);
			 loadsn2(41,label43->ImageIndex);
			 loadsn2(42,label48->ImageIndex);
			 loadsn2(43,label44->ImageIndex);
			 loadsn2(44,label49->ImageIndex);
			 loadsn2(45,label45->ImageIndex);
			 loadsn2(46,label50->ImageIndex);
			 loadsn2(47,label46->ImageIndex);
			 loadsn2(48,label56->ImageIndex);
			 loadsn2(49,label51->ImageIndex);
			 loadsn2(50,label57->ImageIndex);
			 loadsn2(51,label52->ImageIndex);
			 loadsn2(52,label58->ImageIndex);
			 loadsn2(53,label53->ImageIndex);
			 loadsn2(54,label59->ImageIndex);
			 loadsn2(55,label54->ImageIndex);
			 loadsn2(56,label63->ImageIndex);
			 loadsn2(57,label60->ImageIndex);
			 loadsn2(58,label64->ImageIndex);
			 loadsn2(59,label61->ImageIndex);
			 loadsn2(60,label65->ImageIndex);
			 loadsn2(61,label62->ImageIndex);
			 loadsn2(62,label55->ImageIndex);
			 loadsn2(63,label66->ImageIndex);

			 button1->BackColor = System::Drawing::Color::OrangeRed;
			 // display FEN load from chessboard
			 std::string strB;
			 strB=dipSGB('F');
			 textBox1->Text=gcnew String(strB.c_str());
			 loadsC('s',' ');
			 // some audio effect-error
			 if(strB==" ? Error fen"){
				 plSound("au2.wav");
             }
		 }

  // reset to the Board window closing
private: System::Void Board_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 loadsC('r',' ');loadsn(0,'S');loadsn(0,'G');
		 }
  // reset to the Board window opening
private: System::Void Board_Load(System::Object^  sender, System::EventArgs^  e) {
			 // reset chessboard
			 loadsn(0,'S');
			 // reset parameters;
			 loadsC('r',' ');
			 // reset start position ok
			 loadsn(0,'p');
			 // reset chessboard decoder
			 loadsC('R',' ');
			 textBox2->Text="-";loadsn(0,'G');loadsn(0,'S');
		 }
};
}
