#pragma once

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ NewGameBtn;

	private: System::Windows::Forms::Button^ ResetBtn;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ TicBtn3;

	private: System::Windows::Forms::Button^ TicBtn2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxO;

	private: System::Windows::Forms::TextBox^ textBoxX;

	private: System::Windows::Forms::Button^ TicBtn9;

	private: System::Windows::Forms::Button^ TicBtn8;

	private: System::Windows::Forms::Button^ TicBtn7;

	private: System::Windows::Forms::Button^ TicBtn6;

	private: System::Windows::Forms::Button^ TicBtn5;

	private: System::Windows::Forms::Button^ TicBtn4;

	private: System::Windows::Forms::Button^ TicBtn1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->NewGameBtn = (gcnew System::Windows::Forms::Button());
			this->ResetBtn = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBoxO = (gcnew System::Windows::Forms::TextBox());
			this->textBoxX = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->TicBtn9 = (gcnew System::Windows::Forms::Button());
			this->TicBtn8 = (gcnew System::Windows::Forms::Button());
			this->TicBtn7 = (gcnew System::Windows::Forms::Button());
			this->TicBtn6 = (gcnew System::Windows::Forms::Button());
			this->TicBtn5 = (gcnew System::Windows::Forms::Button());
			this->TicBtn4 = (gcnew System::Windows::Forms::Button());
			this->TicBtn3 = (gcnew System::Windows::Forms::Button());
			this->TicBtn2 = (gcnew System::Windows::Forms::Button());
			this->TicBtn1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(23, 23);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1302, 135);
			this->panel1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Papyrus", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(250, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(815, 126);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Tic  Tac  Toe  Game";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(25, 176);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1302, 550);
			this->panel2->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Location = System::Drawing::Point(692, 28);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(579, 490);
			this->panel4->TabIndex = 1;
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->NewGameBtn);
			this->panel6->Controls->Add(this->ResetBtn);
			this->panel6->Location = System::Drawing::Point(43, 250);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(515, 212);
			this->panel6->TabIndex = 1;
			// 
			// NewGameBtn
			// 
			this->NewGameBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewGameBtn->Location = System::Drawing::Point(27, 107);
			this->NewGameBtn->Name = L"NewGameBtn";
			this->NewGameBtn->Size = System::Drawing::Size(450, 65);
			this->NewGameBtn->TabIndex = 1;
			this->NewGameBtn->Text = L"New Game";
			this->NewGameBtn->UseVisualStyleBackColor = true;
			this->NewGameBtn->Click += gcnew System::EventHandler(this, &MyForm::NewGameBtn_Click);
			// 
			// ResetBtn
			// 
			this->ResetBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResetBtn->Location = System::Drawing::Point(27, 29);
			this->ResetBtn->Name = L"ResetBtn";
			this->ResetBtn->Size = System::Drawing::Size(450, 65);
			this->ResetBtn->TabIndex = 0;
			this->ResetBtn->Text = L"Reset";
			this->ResetBtn->UseVisualStyleBackColor = true;
			this->ResetBtn->Click += gcnew System::EventHandler(this, &MyForm::ResetBtn_Click);
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->textBoxO);
			this->panel5->Controls->Add(this->textBoxX);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Location = System::Drawing::Point(43, 24);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(515, 199);
			this->panel5->TabIndex = 0;
			// 
			// textBoxO
			// 
			this->textBoxO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxO->ForeColor = System::Drawing::Color::Lime;
			this->textBoxO->Location = System::Drawing::Point(275, 98);
			this->textBoxO->Name = L"textBoxO";
			this->textBoxO->Size = System::Drawing::Size(215, 61);
			this->textBoxO->TabIndex = 3;
			this->textBoxO->Text = L"0";
			this->textBoxO->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxX
			// 
			this->textBoxX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxX->ForeColor = System::Drawing::Color::Red;
			this->textBoxX->Location = System::Drawing::Point(275, 24);
			this->textBoxX->Name = L"textBoxX";
			this->textBoxX->Size = System::Drawing::Size(215, 61);
			this->textBoxX->TabIndex = 2;
			this->textBoxX->Text = L"0";
			this->textBoxX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Lime;
			this->label2->Location = System::Drawing::Point(36, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 42);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Player O    :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(36, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(219, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Player X    : ";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->TicBtn9);
			this->panel3->Controls->Add(this->TicBtn8);
			this->panel3->Controls->Add(this->TicBtn7);
			this->panel3->Controls->Add(this->TicBtn6);
			this->panel3->Controls->Add(this->TicBtn5);
			this->panel3->Controls->Add(this->TicBtn4);
			this->panel3->Controls->Add(this->TicBtn3);
			this->panel3->Controls->Add(this->TicBtn2);
			this->panel3->Controls->Add(this->TicBtn1);
			this->panel3->Location = System::Drawing::Point(23, 28);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(646, 490);
			this->panel3->TabIndex = 0;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// TicBtn9
			// 
			this->TicBtn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicBtn9->Location = System::Drawing::Point(427, 325);
			this->TicBtn9->Name = L"TicBtn9";
			this->TicBtn9->Size = System::Drawing::Size(196, 150);
			this->TicBtn9->TabIndex = 8;
			this->TicBtn9->UseVisualStyleBackColor = true;
			this->TicBtn9->Click += gcnew System::EventHandler(this, &MyForm::TicBtn9_Click);
			// 
			// TicBtn8
			// 
			this->TicBtn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicBtn8->Location = System::Drawing::Point(226, 325);
			this->TicBtn8->Name = L"TicBtn8";
			this->TicBtn8->Size = System::Drawing::Size(196, 150);
			this->TicBtn8->TabIndex = 7;
			this->TicBtn8->UseVisualStyleBackColor = true;
			this->TicBtn8->Click += gcnew System::EventHandler(this, &MyForm::TicBtn8_Click);
			// 
			// TicBtn7
			// 
			this->TicBtn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicBtn7->Location = System::Drawing::Point(25, 325);
			this->TicBtn7->Name = L"TicBtn7";
			this->TicBtn7->Size = System::Drawing::Size(196, 150);
			this->TicBtn7->TabIndex = 6;
			this->TicBtn7->UseVisualStyleBackColor = true;
			this->TicBtn7->Click += gcnew System::EventHandler(this, &MyForm::TicBtn7_Click);
			// 
			// TicBtn6
			// 
			this->TicBtn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicBtn6->Location = System::Drawing::Point(428, 169);
			this->TicBtn6->Name = L"TicBtn6";
			this->TicBtn6->Size = System::Drawing::Size(196, 150);
			this->TicBtn6->TabIndex = 5;
			this->TicBtn6->UseVisualStyleBackColor = true;
			this->TicBtn6->Click += gcnew System::EventHandler(this, &MyForm::TicBtn6_Click);
			// 
			// TicBtn5
			// 
			this->TicBtn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicBtn5->Location = System::Drawing::Point(226, 169);
			this->TicBtn5->Name = L"TicBtn5";
			this->TicBtn5->Size = System::Drawing::Size(196, 150);
			this->TicBtn5->TabIndex = 4;
			this->TicBtn5->UseVisualStyleBackColor = true;
			this->TicBtn5->Click += gcnew System::EventHandler(this, &MyForm::TicBtn5_Click);
			// 
			// TicBtn4
			// 
			this->TicBtn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicBtn4->Location = System::Drawing::Point(25, 169);
			this->TicBtn4->Name = L"TicBtn4";
			this->TicBtn4->Size = System::Drawing::Size(196, 150);
			this->TicBtn4->TabIndex = 3;
			this->TicBtn4->UseVisualStyleBackColor = true;
			this->TicBtn4->Click += gcnew System::EventHandler(this, &MyForm::TicBtn4_Click);
			// 
			// TicBtn3
			// 
			this->TicBtn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicBtn3->Location = System::Drawing::Point(427, 15);
			this->TicBtn3->Name = L"TicBtn3";
			this->TicBtn3->Size = System::Drawing::Size(196, 150);
			this->TicBtn3->TabIndex = 2;
			this->TicBtn3->UseVisualStyleBackColor = true;
			this->TicBtn3->Click += gcnew System::EventHandler(this, &MyForm::TicBtn3_Click);
			// 
			// TicBtn2
			// 
			this->TicBtn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicBtn2->Location = System::Drawing::Point(226, 15);
			this->TicBtn2->Name = L"TicBtn2";
			this->TicBtn2->Size = System::Drawing::Size(196, 150);
			this->TicBtn2->TabIndex = 1;
			this->TicBtn2->UseVisualStyleBackColor = true;
			this->TicBtn2->Click += gcnew System::EventHandler(this, &MyForm::TicBtn2_Click);
			// 
			// TicBtn1
			// 
			this->TicBtn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicBtn1->Location = System::Drawing::Point(25, 15);
			this->TicBtn1->Name = L"TicBtn1";
			this->TicBtn1->Size = System::Drawing::Size(196, 150);
			this->TicBtn1->TabIndex = 0;
			this->TicBtn1->UseVisualStyleBackColor = true;
			this->TicBtn1->Click += gcnew System::EventHandler(this, &MyForm::TicBtn1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(1352, 753);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"Tic Tac Toe Game";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		Boolean checker;
		int plusone;
#pragma endregion
		void Enable_False()
		{
			TicBtn1->Enabled = false;
			TicBtn2->Enabled = false;
			TicBtn3->Enabled = false;
			TicBtn4->Enabled = false;
			TicBtn5->Enabled = false;
			TicBtn6->Enabled = false; 
			TicBtn7->Enabled = false;
			TicBtn8->Enabled = false;
			TicBtn9->Enabled = false;
		}

		void score()
		{
			if (TicBtn1->Text == "X" && TicBtn2->Text == "X" && TicBtn3->Text == "X")
			{
				TicBtn1->BackColor = System::Drawing::Color::Red;
				TicBtn2->BackColor = System::Drawing::Color::Red;
				TicBtn3->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("The winner is Player X","Tic Tac Toe",MessageBoxButtons::OK,MessageBoxIcon::Information);
				plusone = int::Parse(textBoxX->Text);
				textBoxX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (TicBtn4->Text == "X" && TicBtn5->Text == "X" && TicBtn6->Text == "X")
			{
				TicBtn4->BackColor = System::Drawing::Color::Red;
				TicBtn5->BackColor = System::Drawing::Color::Red;
				TicBtn6->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("The winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(textBoxX->Text);
				textBoxX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (TicBtn7->Text == "X" && TicBtn8->Text == "X" && TicBtn9->Text == "X")
			{
				TicBtn7->BackColor = System::Drawing::Color::Red;
				TicBtn8->BackColor = System::Drawing::Color::Red;
				TicBtn9->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("The winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(textBoxX->Text);
				textBoxX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (TicBtn1->Text == "X" && TicBtn4->Text == "X" && TicBtn7->Text == "X")
			{
				TicBtn1->BackColor = System::Drawing::Color::Red;
				TicBtn4->BackColor = System::Drawing::Color::Red;
				TicBtn7->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("The winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(textBoxX->Text);
				textBoxX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (TicBtn2->Text == "X" && TicBtn5->Text == "X" && TicBtn8->Text == "X")
			{
				TicBtn2->BackColor = System::Drawing::Color::Red;
				TicBtn5->BackColor = System::Drawing::Color::Red;
				TicBtn8->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("The winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(textBoxX->Text);
				textBoxX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (TicBtn3->Text == "X" && TicBtn6->Text == "X" && TicBtn9->Text == "X")
			{
				TicBtn3->BackColor = System::Drawing::Color::Red;
				TicBtn6->BackColor = System::Drawing::Color::Red;
				TicBtn9->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("The winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(textBoxX->Text);
				textBoxX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (TicBtn1->Text == "X" && TicBtn5->Text == "X" && TicBtn9->Text == "X")
			{
				TicBtn1->BackColor = System::Drawing::Color::Red;
				TicBtn5->BackColor = System::Drawing::Color::Red;
				TicBtn9->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("The winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(textBoxX->Text);
				textBoxX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (TicBtn3->Text == "X" && TicBtn5->Text == "X" && TicBtn7->Text == "X")
			{
				TicBtn3->BackColor = System::Drawing::Color::Red;
				TicBtn5->BackColor = System::Drawing::Color::Red;
				TicBtn7->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("The winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(textBoxX->Text);
				textBoxX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}





			if (TicBtn1->Text == "O" && TicBtn2->Text == "O" && TicBtn3->Text == "O")
			{
				TicBtn1->BackColor = System::Drawing::Color::Lime;
				TicBtn2->BackColor = System::Drawing::Color::Lime;
				TicBtn3->BackColor = System::Drawing::Color::Lime;
				MessageBox::Show("The winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(textBoxO->Text);
				textBoxO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (TicBtn4->Text == "O" && TicBtn5->Text == "O" && TicBtn6->Text == "O")
			{
				TicBtn4->BackColor = System::Drawing::Color::Lime;
				TicBtn5->BackColor = System::Drawing::Color::Lime;
				TicBtn6->BackColor = System::Drawing::Color::Lime;
				MessageBox::Show("The winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(textBoxO->Text);
				textBoxO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (TicBtn7->Text == "O" && TicBtn8->Text == "O" && TicBtn9->Text == "O")
			{
				TicBtn7->BackColor = System::Drawing::Color::Lime;
				TicBtn8->BackColor = System::Drawing::Color::Lime;
				TicBtn9->BackColor = System::Drawing::Color::Lime;
				MessageBox::Show("The winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(textBoxO->Text);
				textBoxO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (TicBtn1->Text == "O" && TicBtn4->Text == "O" && TicBtn7->Text == "O")
			{
				TicBtn1->BackColor = System::Drawing::Color::Lime;
				TicBtn4->BackColor = System::Drawing::Color::Lime;
				TicBtn7->BackColor = System::Drawing::Color::Lime;
				MessageBox::Show("The winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(textBoxO->Text);
				textBoxO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (TicBtn2->Text == "O" && TicBtn5->Text == "O" && TicBtn8->Text == "O")
			{
				TicBtn2->BackColor = System::Drawing::Color::Lime;
				TicBtn5->BackColor = System::Drawing::Color::Lime;
				TicBtn8->BackColor = System::Drawing::Color::Lime;
				MessageBox::Show("The winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(textBoxO->Text);
				textBoxO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (TicBtn3->Text == "O" && TicBtn6->Text == "O" && TicBtn9->Text == "O")
			{
				TicBtn3->BackColor = System::Drawing::Color::Lime;
				TicBtn6->BackColor = System::Drawing::Color::Lime;
				TicBtn9->BackColor = System::Drawing::Color::Lime;
				MessageBox::Show("The winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(textBoxO->Text);
				textBoxO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (TicBtn1->Text == "O" && TicBtn5->Text == "O" && TicBtn9->Text == "O")
			{
				TicBtn1->BackColor = System::Drawing::Color::Lime;
				TicBtn5->BackColor = System::Drawing::Color::Lime;
				TicBtn9->BackColor = System::Drawing::Color::Lime;
				MessageBox::Show("The winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(textBoxO->Text);
				textBoxO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (TicBtn3->Text == "O" && TicBtn5->Text == "O" && TicBtn7->Text == "O")
			{
				TicBtn3->BackColor = System::Drawing::Color::Lime;
				TicBtn5->BackColor = System::Drawing::Color::Lime;
				TicBtn7->BackColor = System::Drawing::Color::Lime;
				MessageBox::Show("The winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(textBoxO->Text);
				textBoxO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void TicBtn1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			TicBtn1->Text = "X";
			checker = true;
		}
		else
		{
			TicBtn1->Text = "O";
			checker = false;
		}
		score();
		TicBtn1->Enabled = false;
    }
	private: System::Void TicBtn2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			TicBtn2->Text = "X";
			checker = true;
		}
		else
		{
			TicBtn2->Text = "O";
			checker = false;
		}
		score();
		TicBtn2->Enabled = false;
	}
	private: System::Void TicBtn3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			TicBtn3->Text = "X";
			checker = true;
		}
		else
		{
			TicBtn3->Text = "O";
			checker = false;
		}
		score();
		TicBtn3->Enabled = false;
	}
	private: System::Void TicBtn4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			TicBtn4->Text = "X";
			checker = true;
		}
		else
		{
			TicBtn4->Text = "O";
			checker = false;
		}
		score();
		TicBtn4->Enabled = false;
	}
	private: System::Void TicBtn5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			TicBtn5->Text = "X";
			checker = true;
		}
		else
		{
			TicBtn5->Text = "O";
			checker = false;
		}
		score();
		TicBtn5->Enabled = false;
	}
	private: System::Void TicBtn6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			TicBtn6->Text = "X";
			checker = true;
		}
		else
		{
			TicBtn6->Text = "O";
			checker = false;
		}
		score();
		TicBtn6->Enabled = false;
	}
	private: System::Void TicBtn7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			TicBtn7->Text = "X";
			checker = true;
		}
		else
		{
			TicBtn7->Text = "O";
			checker = false;
		}
		score();
		TicBtn7->Enabled = false;
	}
	private: System::Void TicBtn8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			TicBtn8->Text = "X";
			checker = true;
		}
		else
		{
			TicBtn8->Text = "O";
			checker = false;
		}
		score();
		TicBtn8->Enabled = false;
	}
	private: System::Void TicBtn9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			TicBtn9->Text = "X";
			checker = true;
		}
		else
		{
			TicBtn9->Text = "O";
			checker = false;
		}
		score();
		TicBtn9->Enabled = false;
	}
private: System::Void ResetBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	TicBtn1->Enabled = true;
	TicBtn2->Enabled = true;
	TicBtn3->Enabled = true;
	TicBtn4->Enabled = true;
	TicBtn5->Enabled = true;
	TicBtn6->Enabled = true;
	TicBtn7->Enabled = true;
	TicBtn8->Enabled = true;
	TicBtn9->Enabled = true;

	TicBtn1->Text = "";
	TicBtn2->Text = "";
	TicBtn3->Text = "";
	TicBtn4->Text = "";
	TicBtn5->Text = "";
	TicBtn6->Text = "";
	TicBtn7->Text = "";
	TicBtn8->Text = "";
	TicBtn9->Text = "";
	NewGameBtn->Enabled = true;


	TicBtn1->BackColor= System::Drawing::Color::WhiteSmoke;
	TicBtn2->BackColor = System::Drawing::Color::WhiteSmoke;
	TicBtn3->BackColor = System::Drawing::Color::WhiteSmoke;
	TicBtn4->BackColor = System::Drawing::Color::WhiteSmoke;
	TicBtn5->BackColor = System::Drawing::Color::WhiteSmoke;
	TicBtn6->BackColor = System::Drawing::Color::WhiteSmoke;
	TicBtn7->BackColor = System::Drawing::Color::WhiteSmoke;
	TicBtn8->BackColor = System::Drawing::Color::WhiteSmoke;
	TicBtn9->BackColor = System::Drawing::Color::WhiteSmoke;
}

private: System::Void NewGameBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	TicBtn1->Enabled = true;
	TicBtn2->Enabled = true;
	TicBtn3->Enabled = true;
	TicBtn4->Enabled = true;
	TicBtn5->Enabled = true;
	TicBtn6->Enabled = true;
	TicBtn7->Enabled = true;
	TicBtn8->Enabled = true;
	TicBtn9->Enabled = true;

	TicBtn1->Text = "";
	TicBtn2->Text = "";
	TicBtn3->Text = "";
	TicBtn4->Text = "";
	TicBtn5->Text = "";
	TicBtn6->Text = "";
	TicBtn7->Text = "";
	TicBtn8->Text = "";
	TicBtn9->Text = "";
	textBoxX->Text = "0";
	textBoxO->Text = "0";


	TicBtn1->BackColor = System::Drawing::Color::WhiteSmoke;
	TicBtn2->BackColor = System::Drawing::Color::WhiteSmoke;
	TicBtn3->BackColor = System::Drawing::Color::WhiteSmoke;
	TicBtn4->BackColor = System::Drawing::Color::WhiteSmoke;
	TicBtn5->BackColor = System::Drawing::Color::WhiteSmoke;
	TicBtn6->BackColor = System::Drawing::Color::WhiteSmoke;
	TicBtn7->BackColor = System::Drawing::Color::WhiteSmoke;
	TicBtn8->BackColor = System::Drawing::Color::WhiteSmoke;
	TicBtn9->BackColor = System::Drawing::Color::WhiteSmoke;
}
};
}
