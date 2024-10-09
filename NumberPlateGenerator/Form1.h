#pragma once
#include <stdlib.h>
#include <string>
#include <iostream>


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		string generateLetter() {
			char arr [] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 
							'P', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

			string str = "";

			while (str.length() < 2) {
				int randomNum = rand() % sizeof(arr);
				str += arr[randomNum];
			}
			
			cout << str;
			return str;
		}

		string generateNumber(int digit) {
			if (digit == 3) {
				int temp = rand() % 900 + 100;
				string str = to_string(temp);
				cout << str;
				return str;
			}
			else if (digit == 4) {
				int temp = rand() % 9000 + 1000;
				string str = to_string(temp);
				cout << str;
				return str;
			}
			return 0;
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
	private: System::Windows::Forms::Label^ welcomeMessage;
	protected:
	private: System::Windows::Forms::Button^ generateButton;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::TextBox^ inputDigit;

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
			this->welcomeMessage = (gcnew System::Windows::Forms::Label());
			this->generateButton = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::Label());
			this->inputDigit = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// welcomeMessage
			// 
			this->welcomeMessage->AutoSize = true;
			this->welcomeMessage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->welcomeMessage->Location = System::Drawing::Point(12, 35);
			this->welcomeMessage->Name = L"welcomeMessage";
			this->welcomeMessage->Size = System::Drawing::Size(347, 20);
			this->welcomeMessage->TabIndex = 0;
			this->welcomeMessage->Text = L"Please enter how many digits you want (3 or 4) : ";
			this->welcomeMessage->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->welcomeMessage->Click += gcnew System::EventHandler(this, &Form1::welcomeMessage_Click);
			// 
			// generateButton
			// 
			this->generateButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->generateButton->Location = System::Drawing::Point(275, 257);
			this->generateButton->Name = L"generateButton";
			this->generateButton->Size = System::Drawing::Size(193, 40);
			this->generateButton->TabIndex = 1;
			this->generateButton->Text = L"New";
			this->generateButton->UseVisualStyleBackColor = true;
			this->generateButton->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->result->Location = System::Drawing::Point(127, 117);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(160, 55);
			this->result->TabIndex = 2;
			this->result->Text = L"Result";
			this->result->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// inputDigit
			// 
			this->inputDigit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->inputDigit->Location = System::Drawing::Point(365, 32);
			this->inputDigit->Name = L"inputDigit";
			this->inputDigit->Size = System::Drawing::Size(42, 26);
			this->inputDigit->TabIndex = 3;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(480, 320);
			this->Controls->Add(this->inputDigit);
			this->Controls->Add(this->result);
			this->Controls->Add(this->generateButton);
			this->Controls->Add(this->welcomeMessage);
			this->Name = L"Form1";
			this->Text = L"NumberPlateGenerator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		string letter = generateLetter();
		string number = generateNumber(4);
		string combine = letter + " " + number;
		
		result->Text = gcnew String(combine.c_str());
		
	}
	private: System::Void welcomeMessage_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
