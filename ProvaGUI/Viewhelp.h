#pragma once

namespace ProvaGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Viewhelp
	/// </summary>
	public ref class Viewhelp : public System::Windows::Forms::Form
	{
	public:
		Viewhelp(void)
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
		~Viewhelp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(22, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(683, 420);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->WordWrap = false;
			// 
			// Viewhelp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(727, 444);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"Viewhelp";
			this->Text = L"View help";
			this->Load += gcnew System::EventHandler(this, &Viewhelp::Viewhelp_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		// Display help
	private: System::Void Viewhelp_Load(System::Object^  sender, System::EventArgs^  e) {
				 richTextBox1->LoadFile("readme.rtf",
				 RichTextBoxStreamType::RichText);
			 }
	
	};
}
