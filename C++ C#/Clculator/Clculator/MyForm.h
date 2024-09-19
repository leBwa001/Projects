#pragma once

namespace Clculator {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ button_krap;

	private: System::Windows::Forms::Button^ button_C;
	private: System::Windows::Forms::Button^ button_pl;
	private: System::Windows::Forms::Button^ button_mu;
	private: System::Windows::Forms::Button^ button_mi;
	private: System::Windows::Forms::Button^ button_div;
	private: System::Windows::Forms::Button^ button_is;
	private: System::Windows::Forms::Button^ button_sqrt;
	private: System::Windows::Forms::Button^ button_pow2;
	private: System::Windows::Forms::Button^ button_pown;
	private: System::Windows::Forms::Button^ button_sin;
	private: System::Windows::Forms::Button^ button_cos;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button_krap = (gcnew System::Windows::Forms::Button());
			this->button_C = (gcnew System::Windows::Forms::Button());
			this->button_pl = (gcnew System::Windows::Forms::Button());
			this->button_mu = (gcnew System::Windows::Forms::Button());
			this->button_mi = (gcnew System::Windows::Forms::Button());
			this->button_div = (gcnew System::Windows::Forms::Button());
			this->button_is = (gcnew System::Windows::Forms::Button());
			this->button_sqrt = (gcnew System::Windows::Forms::Button());
			this->button_pow2 = (gcnew System::Windows::Forms::Button());
			this->button_pown = (gcnew System::Windows::Forms::Button());
			this->button_sin = (gcnew System::Windows::Forms::Button());
			this->button_cos = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(316, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(14, 221);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(58, 49);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(78, 221);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(58, 49);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(142, 221);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(58, 49);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(14, 166);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(58, 49);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(78, 166);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(58, 49);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(142, 166);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(58, 49);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(14, 111);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(58, 49);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(78, 111);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(58, 49);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(142, 111);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(58, 49);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button0
			// 
			this->button0->Location = System::Drawing::Point(14, 276);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(122, 49);
			this->button0->TabIndex = 10;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// button_krap
			// 
			this->button_krap->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_krap->Location = System::Drawing::Point(142, 276);
			this->button_krap->Name = L"button_krap";
			this->button_krap->Size = System::Drawing::Size(58, 49);
			this->button_krap->TabIndex = 11;
			this->button_krap->Text = L".";
			this->button_krap->UseVisualStyleBackColor = true;
			this->button_krap->Click += gcnew System::EventHandler(this, &MyForm::button_krap_Click);
			// 
			// button_C
			// 
			this->button_C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_C->Location = System::Drawing::Point(14, 56);
			this->button_C->Name = L"button_C";
			this->button_C->Size = System::Drawing::Size(58, 49);
			this->button_C->TabIndex = 13;
			this->button_C->Text = L"C";
			this->button_C->UseVisualStyleBackColor = true;
			this->button_C->Click += gcnew System::EventHandler(this, &MyForm::button_C_Click);
			// 
			// button_pl
			// 
			this->button_pl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_pl->Location = System::Drawing::Point(206, 111);
			this->button_pl->Name = L"button_pl";
			this->button_pl->Size = System::Drawing::Size(58, 104);
			this->button_pl->TabIndex = 14;
			this->button_pl->Text = L"+";
			this->button_pl->UseVisualStyleBackColor = true;
			this->button_pl->Click += gcnew System::EventHandler(this, &MyForm::button_pl_Click);
			// 
			// button_mu
			// 
			this->button_mu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_mu->Location = System::Drawing::Point(142, 56);
			this->button_mu->Name = L"button_mu";
			this->button_mu->Size = System::Drawing::Size(58, 49);
			this->button_mu->TabIndex = 15;
			this->button_mu->Text = L"*";
			this->button_mu->UseVisualStyleBackColor = true;
			this->button_mu->Click += gcnew System::EventHandler(this, &MyForm::button_mu_Click);
			// 
			// button_mi
			// 
			this->button_mi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_mi->Location = System::Drawing::Point(206, 56);
			this->button_mi->Name = L"button_mi";
			this->button_mi->Size = System::Drawing::Size(58, 49);
			this->button_mi->TabIndex = 16;
			this->button_mi->Text = L"-";
			this->button_mi->UseVisualStyleBackColor = true;
			this->button_mi->Click += gcnew System::EventHandler(this, &MyForm::button_mi_Click);
			// 
			// button_div
			// 
			this->button_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_div->Location = System::Drawing::Point(78, 56);
			this->button_div->Name = L"button_div";
			this->button_div->Size = System::Drawing::Size(58, 49);
			this->button_div->TabIndex = 17;
			this->button_div->Text = L"/";
			this->button_div->UseVisualStyleBackColor = true;
			this->button_div->Click += gcnew System::EventHandler(this, &MyForm::button_div_Click);
			// 
			// button_is
			// 
			this->button_is->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_is->Location = System::Drawing::Point(206, 221);
			this->button_is->Name = L"button_is";
			this->button_is->Size = System::Drawing::Size(58, 104);
			this->button_is->TabIndex = 18;
			this->button_is->Text = L"=";
			this->button_is->UseVisualStyleBackColor = true;
			this->button_is->Click += gcnew System::EventHandler(this, &MyForm::button_is_Click);
			// 
			// button_sqrt
			// 
			this->button_sqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_sqrt->Location = System::Drawing::Point(270, 56);
			this->button_sqrt->Name = L"button_sqrt";
			this->button_sqrt->Size = System::Drawing::Size(66, 49);
			this->button_sqrt->TabIndex = 19;
			this->button_sqrt->Text = L"sqrt";
			this->button_sqrt->UseVisualStyleBackColor = true;
			this->button_sqrt->Click += gcnew System::EventHandler(this, &MyForm::button_sqrt_Click);
			// 
			// button_pow2
			// 
			this->button_pow2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_pow2->Location = System::Drawing::Point(270, 111);
			this->button_pow2->Name = L"button_pow2";
			this->button_pow2->Size = System::Drawing::Size(66, 49);
			this->button_pow2->TabIndex = 20;
			this->button_pow2->Text = L"pow^2";
			this->button_pow2->UseVisualStyleBackColor = true;
			this->button_pow2->Click += gcnew System::EventHandler(this, &MyForm::button_pow2_Click);
			// 
			// button_pown
			// 
			this->button_pown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_pown->Location = System::Drawing::Point(270, 166);
			this->button_pown->Name = L"button_pown";
			this->button_pown->Size = System::Drawing::Size(66, 49);
			this->button_pown->TabIndex = 21;
			this->button_pown->Text = L"pow^n";
			this->button_pown->UseVisualStyleBackColor = true;
			this->button_pown->Click += gcnew System::EventHandler(this, &MyForm::button_pown_Click);
			// 
			// button_sin
			// 
			this->button_sin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_sin->Location = System::Drawing::Point(271, 221);
			this->button_sin->Name = L"button_sin";
			this->button_sin->Size = System::Drawing::Size(66, 49);
			this->button_sin->TabIndex = 22;
			this->button_sin->Text = L"sin()";
			this->button_sin->UseVisualStyleBackColor = true;
			this->button_sin->Click += gcnew System::EventHandler(this, &MyForm::button_sin_Click);
			// 
			// button_cos
			// 
			this->button_cos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_cos->Location = System::Drawing::Point(271, 276);
			this->button_cos->Name = L"button_cos";
			this->button_cos->Size = System::Drawing::Size(66, 49);
			this->button_cos->TabIndex = 23;
			this->button_cos->Text = L"cos()";
			this->button_cos->UseVisualStyleBackColor = true;
			this->button_cos->Click += gcnew System::EventHandler(this, &MyForm::button_cos_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(341, 335);
			this->Controls->Add(this->button_cos);
			this->Controls->Add(this->button_sin);
			this->Controls->Add(this->button_pown);
			this->Controls->Add(this->button_pow2);
			this->Controls->Add(this->button_sqrt);
			this->Controls->Add(this->button_is);
			this->Controls->Add(this->button_div);
			this->Controls->Add(this->button_mi);
			this->Controls->Add(this->button_mu);
			this->Controls->Add(this->button_pl);
			this->Controls->Add(this->button_C);
			this->Controls->Add(this->button_krap);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: double Num1, Num2;
private: int deistv=0;
private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_krap_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_C_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_pl_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_mi_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_mu_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_div_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_is_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_sqrt_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_pow2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_pown_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_sin_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_cos_Click(System::Object^ sender, System::EventArgs^ e);
};
}
