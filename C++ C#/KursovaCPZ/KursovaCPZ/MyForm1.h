#pragma once

namespace KursovaCPZ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBoxStudentInfo;
	protected:
	private: System::Windows::Forms::Button^ buttonAddStudentProfil;
	private: System::Windows::Forms::TextBox^ textBoxStdentNumber;
	private: System::Windows::Forms::TextBox^ textBoxStudentAddress;
	private: System::Windows::Forms::TextBox^ textBoxStudentDepartment;
	private: System::Windows::Forms::TextBox^ textBoxStudentSpeciality;
	private: System::Windows::Forms::TextBox^ textBoxStudentCourse;
	private: System::Windows::Forms::TextBox^ textBoxStudentID;
	private: System::Windows::Forms::TextBox^ textBoxStudentlName;
	private: System::Windows::Forms::TextBox^ textBoxStudentfName;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

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
			this->groupBoxStudentInfo = (gcnew System::Windows::Forms::GroupBox());
			this->buttonAddStudentProfil = (gcnew System::Windows::Forms::Button());
			this->textBoxStdentNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStudentAddress = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStudentDepartment = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStudentSpeciality = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStudentCourse = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStudentID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStudentlName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStudentfName = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBoxStudentInfo->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxStudentInfo
			// 
			this->groupBoxStudentInfo->Controls->Add(this->buttonAddStudentProfil);
			this->groupBoxStudentInfo->Controls->Add(this->textBoxStdentNumber);
			this->groupBoxStudentInfo->Controls->Add(this->textBoxStudentAddress);
			this->groupBoxStudentInfo->Controls->Add(this->textBoxStudentDepartment);
			this->groupBoxStudentInfo->Controls->Add(this->textBoxStudentSpeciality);
			this->groupBoxStudentInfo->Controls->Add(this->textBoxStudentCourse);
			this->groupBoxStudentInfo->Controls->Add(this->textBoxStudentID);
			this->groupBoxStudentInfo->Controls->Add(this->textBoxStudentlName);
			this->groupBoxStudentInfo->Controls->Add(this->textBoxStudentfName);
			this->groupBoxStudentInfo->Controls->Add(this->label10);
			this->groupBoxStudentInfo->Controls->Add(this->label9);
			this->groupBoxStudentInfo->Controls->Add(this->label8);
			this->groupBoxStudentInfo->Controls->Add(this->label7);
			this->groupBoxStudentInfo->Controls->Add(this->label6);
			this->groupBoxStudentInfo->Controls->Add(this->label5);
			this->groupBoxStudentInfo->Controls->Add(this->label4);
			this->groupBoxStudentInfo->Controls->Add(this->label3);
			this->groupBoxStudentInfo->Controls->Add(this->label2);
			this->groupBoxStudentInfo->Location = System::Drawing::Point(12, 12);
			this->groupBoxStudentInfo->Name = L"groupBoxStudentInfo";
			this->groupBoxStudentInfo->Size = System::Drawing::Size(781, 537);
			this->groupBoxStudentInfo->TabIndex = 2;
			this->groupBoxStudentInfo->TabStop = false;
			this->groupBoxStudentInfo->Visible = false;
			// 
			// buttonAddStudentProfil
			// 
			this->buttonAddStudentProfil->Location = System::Drawing::Point(255, 430);
			this->buttonAddStudentProfil->Name = L"buttonAddStudentProfil";
			this->buttonAddStudentProfil->Size = System::Drawing::Size(196, 54);
			this->buttonAddStudentProfil->TabIndex = 17;
			this->buttonAddStudentProfil->Text = L"Додати";
			this->buttonAddStudentProfil->UseVisualStyleBackColor = true;
			this->buttonAddStudentProfil->Click += gcnew System::EventHandler(this, &MyForm1::buttonAddStudentProfil_Click);
			// 
			// textBoxStdentNumber
			// 
			this->textBoxStdentNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxStdentNumber->Location = System::Drawing::Point(265, 342);
			this->textBoxStdentNumber->Name = L"textBoxStdentNumber";
			this->textBoxStdentNumber->Size = System::Drawing::Size(240, 30);
			this->textBoxStdentNumber->TabIndex = 16;
			// 
			// textBoxStudentAddress
			// 
			this->textBoxStudentAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxStudentAddress->Location = System::Drawing::Point(6, 342);
			this->textBoxStudentAddress->Name = L"textBoxStudentAddress";
			this->textBoxStudentAddress->Size = System::Drawing::Size(240, 30);
			this->textBoxStudentAddress->TabIndex = 15;
			// 
			// textBoxStudentDepartment
			// 
			this->textBoxStudentDepartment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxStudentDepartment->Location = System::Drawing::Point(523, 221);
			this->textBoxStudentDepartment->Name = L"textBoxStudentDepartment";
			this->textBoxStudentDepartment->Size = System::Drawing::Size(240, 30);
			this->textBoxStudentDepartment->TabIndex = 14;
			// 
			// textBoxStudentSpeciality
			// 
			this->textBoxStudentSpeciality->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxStudentSpeciality->Location = System::Drawing::Point(265, 221);
			this->textBoxStudentSpeciality->Name = L"textBoxStudentSpeciality";
			this->textBoxStudentSpeciality->Size = System::Drawing::Size(240, 30);
			this->textBoxStudentSpeciality->TabIndex = 13;
			// 
			// textBoxStudentCourse
			// 
			this->textBoxStudentCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxStudentCourse->Location = System::Drawing::Point(6, 221);
			this->textBoxStudentCourse->Name = L"textBoxStudentCourse";
			this->textBoxStudentCourse->Size = System::Drawing::Size(240, 30);
			this->textBoxStudentCourse->TabIndex = 12;
			// 
			// textBoxStudentID
			// 
			this->textBoxStudentID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxStudentID->Location = System::Drawing::Point(523, 129);
			this->textBoxStudentID->Name = L"textBoxStudentID";
			this->textBoxStudentID->Size = System::Drawing::Size(240, 30);
			this->textBoxStudentID->TabIndex = 11;
			// 
			// textBoxStudentlName
			// 
			this->textBoxStudentlName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxStudentlName->Location = System::Drawing::Point(265, 129);
			this->textBoxStudentlName->Name = L"textBoxStudentlName";
			this->textBoxStudentlName->Size = System::Drawing::Size(240, 30);
			this->textBoxStudentlName->TabIndex = 10;
			// 
			// textBoxStudentfName
			// 
			this->textBoxStudentfName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxStudentfName->Location = System::Drawing::Point(6, 129);
			this->textBoxStudentfName->Name = L"textBoxStudentfName";
			this->textBoxStudentfName->Size = System::Drawing::Size(240, 30);
			this->textBoxStudentfName->TabIndex = 9;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(340, 87);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(101, 25);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Прізвище";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(306, 302);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(176, 25);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Номер телефону";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(603, 181);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 25);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Кафедра";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(37, 302);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(184, 25);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Місце проживання";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(328, 181);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 25);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Спеціальність";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(96, 181);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 25);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Курс";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(632, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 25);
			this->label4->TabIndex = 2;
			this->label4->Text = L"ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(96, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Ім\'я";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(250, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(273, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Заповніть даними студента";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(830, 566);
			this->Controls->Add(this->groupBoxStudentInfo);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->groupBoxStudentInfo->ResumeLayout(false);
			this->groupBoxStudentInfo->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonAddStudentProfil_Click(System::Object^ sender, System::EventArgs^ e);
};
}
