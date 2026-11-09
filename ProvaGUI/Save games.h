#pragma once

namespace ProvaGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Savegames
	/// </summary>
	public ref class Savegames : public System::Windows::Forms::Form
	{
	public:
		Savegames(void)
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
		~Savegames()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox9;
	protected: 

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog2;

	private: System::Windows::Forms::Label^  label1;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox9 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// richTextBox9
			// 
			this->richTextBox9->Location = System::Drawing::Point(12, 12);
			this->richTextBox9->Name = L"richTextBox9";
			this->richTextBox9->Size = System::Drawing::Size(100, 23);
			this->richTextBox9->TabIndex = 0;
			this->richTextBox9->Text = L"";
			this->richTextBox9->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(137, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Save pgn";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Savegames::button1_Click);
			// 
			// saveFileDialog2
			// 
			this->saveFileDialog2->FileName = L"games.pgn";
			this->saveFileDialog2->Filter = L" pgn file (*.pgn)|*.pgn";
			this->saveFileDialog2->RestoreDirectory = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(272, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Attention: if you don\'t press on \'Save pgn\' button, when\r\nyou close this window a" 
				L"ll the games data will be deleted.";
			// 
			// Savegames
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(380, 115);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox9);
			this->MaximizeBox = false;
			this->Name = L"Savegames";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Save games";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Savegames::Savegames_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Savegames::Savegames_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// Load save1.txt. 
	private: System::Void Savegames_Load(System::Object^  sender, System::EventArgs^  e) {
				  richTextBox9->LoadFile("save1.txt",RichTextBoxStreamType::PlainText);
			 }

       // Save pgn file (see saveFileDialog control set in 'Save games.h' [project]).  
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 saveFileDialog2->ShowDialog();
				 if(saveFileDialog2->FileName != "")
				 {
					richTextBox9->SaveFile(saveFileDialog2->FileName,RichTextBoxStreamType::PlainText);
					  					 
				 }
			 }
	
    // Reset save1.txt.
private: System::Void Savegames_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 loadsC('g',' ');
		 }
};
}
