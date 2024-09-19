#pragma once

namespace Paint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ actionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ creatToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ elementsPanelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBoxToolbar;
	private: System::Windows::Forms::Button^ button_Clear;
	private: System::Windows::Forms::Button^ button_ApplySize;


	private: System::Windows::Forms::Button^ button_Color;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownSize;
	private: System::Windows::Forms::Button^ button_Circle;
	private: System::Windows::Forms::Button^ button_Line;
	private: System::Windows::Forms::Button^ button_Square;
	private: System::Windows::Forms::Button^ button_Texture;
	private: System::Windows::Forms::GroupBox^ groupBoxSquareSettings;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightSquare;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthSquare;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBoxCircleSettings;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightCircle;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthCircle;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBoxTextureSettings;
	private: System::Windows::Forms::Button^ buttonApplyTexture;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightTexture;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthTexture;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ buttonChooseTexture;
	private: System::Windows::Forms::GroupBox^ groupBoxProjectSettings;
	private: System::Windows::Forms::Button^ buttonOpenProject;
	private: System::Windows::Forms::Button^ buttonCreate;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownProjectHeight;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownProjectWidth;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::RadioButton^ radioButtonAssignments;
	private: System::Windows::Forms::RadioButton^ radioButtonOriginal;
	private: System::Windows::Forms::Label^ label11;
	private: System::ComponentModel::IContainer^ components;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->actionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->elementsPanelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBoxToolbar = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_Circle = (gcnew System::Windows::Forms::Button());
			this->button_Line = (gcnew System::Windows::Forms::Button());
			this->button_Square = (gcnew System::Windows::Forms::Button());
			this->button_Texture = (gcnew System::Windows::Forms::Button());
			this->button_Clear = (gcnew System::Windows::Forms::Button());
			this->button_ApplySize = (gcnew System::Windows::Forms::Button());
			this->button_Color = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBoxSquareSettings = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownHeightSquare = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownWidthSquare = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBoxCircleSettings = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownHeightCircle = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownWidthCircle = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBoxTextureSettings = (gcnew System::Windows::Forms::GroupBox());
			this->buttonChooseTexture = (gcnew System::Windows::Forms::Button());
			this->buttonApplyTexture = (gcnew System::Windows::Forms::Button());
			this->numericUpDownHeightTexture = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownWidthTexture = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBoxProjectSettings = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonAssignments = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonOriginal = (gcnew System::Windows::Forms::RadioButton());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->buttonOpenProject = (gcnew System::Windows::Forms::Button());
			this->buttonCreate = (gcnew System::Windows::Forms::Button());
			this->numericUpDownProjectHeight = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownProjectWidth = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBoxToolbar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSize))->BeginInit();
			this->groupBoxSquareSettings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightSquare))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthSquare))->BeginInit();
			this->groupBoxCircleSettings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightCircle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthCircle))->BeginInit();
			this->groupBoxTextureSettings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightTexture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthTexture))->BeginInit();
			this->groupBoxProjectSettings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProjectHeight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProjectWidth))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->actionsToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1333, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// actionsToolStripMenuItem
			// 
			this->actionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->creatToolStripMenuItem,
					this->saveAsToolStripMenuItem, this->elementsPanelToolStripMenuItem
			});
			this->actionsToolStripMenuItem->Name = L"actionsToolStripMenuItem";
			this->actionsToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->actionsToolStripMenuItem->Text = L"Actions";
			// 
			// creatToolStripMenuItem
			// 
			this->creatToolStripMenuItem->Name = L"creatToolStripMenuItem";
			this->creatToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->creatToolStripMenuItem->Text = L"Creat";
			this->creatToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::creatToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->saveAsToolStripMenuItem->Text = L"Save as";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// elementsPanelToolStripMenuItem
			// 
			this->elementsPanelToolStripMenuItem->Name = L"elementsPanelToolStripMenuItem";
			this->elementsPanelToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->elementsPanelToolStripMenuItem->Text = L"Elements panel";
			this->elementsPanelToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::elementsPanelToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1333, 646);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->SizeChanged += gcnew System::EventHandler(this, &MyForm::pictureBox1_SizeChanged);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// groupBoxToolbar
			// 
			this->groupBoxToolbar->Controls->Add(this->numericUpDownSize);
			this->groupBoxToolbar->Controls->Add(this->button_Circle);
			this->groupBoxToolbar->Controls->Add(this->button_Line);
			this->groupBoxToolbar->Controls->Add(this->button_Square);
			this->groupBoxToolbar->Controls->Add(this->button_Texture);
			this->groupBoxToolbar->Controls->Add(this->button_Clear);
			this->groupBoxToolbar->Controls->Add(this->button_ApplySize);
			this->groupBoxToolbar->Controls->Add(this->button_Color);
			this->groupBoxToolbar->Controls->Add(this->label2);
			this->groupBoxToolbar->Controls->Add(this->label1);
			this->groupBoxToolbar->Location = System::Drawing::Point(12, 59);
			this->groupBoxToolbar->Name = L"groupBoxToolbar";
			this->groupBoxToolbar->Size = System::Drawing::Size(435, 226);
			this->groupBoxToolbar->TabIndex = 3;
			this->groupBoxToolbar->TabStop = false;
			this->groupBoxToolbar->Text = L"Elements panel";
			this->groupBoxToolbar->Visible = false;
			// 
			// numericUpDownSize
			// 
			this->numericUpDownSize->Location = System::Drawing::Point(103, 169);
			this->numericUpDownSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownSize->Name = L"numericUpDownSize";
			this->numericUpDownSize->Size = System::Drawing::Size(75, 22);
			this->numericUpDownSize->TabIndex = 9;
			this->numericUpDownSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button_Circle
			// 
			this->button_Circle->Location = System::Drawing::Point(333, 80);
			this->button_Circle->Name = L"button_Circle";
			this->button_Circle->Size = System::Drawing::Size(68, 53);
			this->button_Circle->TabIndex = 8;
			this->button_Circle->Text = L"Circle";
			this->button_Circle->UseVisualStyleBackColor = true;
			this->button_Circle->Click += gcnew System::EventHandler(this, &MyForm::button_Circle_Click);
			// 
			// button_Line
			// 
			this->button_Line->Location = System::Drawing::Point(235, 80);
			this->button_Line->Name = L"button_Line";
			this->button_Line->Size = System::Drawing::Size(68, 53);
			this->button_Line->TabIndex = 7;
			this->button_Line->Text = L"Line";
			this->button_Line->UseVisualStyleBackColor = true;
			this->button_Line->Click += gcnew System::EventHandler(this, &MyForm::button_Line_Click);
			// 
			// button_Square
			// 
			this->button_Square->Location = System::Drawing::Point(235, 153);
			this->button_Square->Name = L"button_Square";
			this->button_Square->Size = System::Drawing::Size(68, 53);
			this->button_Square->TabIndex = 6;
			this->button_Square->Text = L"Square";
			this->button_Square->UseVisualStyleBackColor = true;
			this->button_Square->Click += gcnew System::EventHandler(this, &MyForm::button_Square_Click);
			// 
			// button_Texture
			// 
			this->button_Texture->Location = System::Drawing::Point(333, 153);
			this->button_Texture->Name = L"button_Texture";
			this->button_Texture->Size = System::Drawing::Size(68, 53);
			this->button_Texture->TabIndex = 5;
			this->button_Texture->Text = L"Texture";
			this->button_Texture->UseVisualStyleBackColor = true;
			this->button_Texture->Click += gcnew System::EventHandler(this, &MyForm::button_Texture_Click);
			// 
			// button_Clear
			// 
			this->button_Clear->Location = System::Drawing::Point(103, 80);
			this->button_Clear->Name = L"button_Clear";
			this->button_Clear->Size = System::Drawing::Size(75, 53);
			this->button_Clear->TabIndex = 4;
			this->button_Clear->Text = L"Clear";
			this->button_Clear->UseVisualStyleBackColor = true;
			this->button_Clear->Click += gcnew System::EventHandler(this, &MyForm::button_Clear_Click);
			// 
			// button_ApplySize
			// 
			this->button_ApplySize->Location = System::Drawing::Point(6, 153);
			this->button_ApplySize->Name = L"button_ApplySize";
			this->button_ApplySize->Size = System::Drawing::Size(91, 53);
			this->button_ApplySize->TabIndex = 3;
			this->button_ApplySize->Text = L"Apply size";
			this->button_ApplySize->UseVisualStyleBackColor = true;
			this->button_ApplySize->Click += gcnew System::EventHandler(this, &MyForm::button_ApplySize_Click);
			// 
			// button_Color
			// 
			this->button_Color->Location = System::Drawing::Point(6, 80);
			this->button_Color->Name = L"button_Color";
			this->button_Color->Size = System::Drawing::Size(75, 53);
			this->button_Color->TabIndex = 2;
			this->button_Color->Text = L"Color";
			this->button_Color->UseVisualStyleBackColor = true;
			this->button_Color->Click += gcnew System::EventHandler(this, &MyForm::button_Color_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(270, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Figures";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(15, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pen parameters";
			// 
			// groupBoxSquareSettings
			// 
			this->groupBoxSquareSettings->Controls->Add(this->numericUpDownHeightSquare);
			this->groupBoxSquareSettings->Controls->Add(this->numericUpDownWidthSquare);
			this->groupBoxSquareSettings->Controls->Add(this->label4);
			this->groupBoxSquareSettings->Controls->Add(this->label3);
			this->groupBoxSquareSettings->Location = System::Drawing::Point(485, 59);
			this->groupBoxSquareSettings->Name = L"groupBoxSquareSettings";
			this->groupBoxSquareSettings->Size = System::Drawing::Size(214, 94);
			this->groupBoxSquareSettings->TabIndex = 4;
			this->groupBoxSquareSettings->TabStop = false;
			this->groupBoxSquareSettings->Text = L"Square settings";
			this->groupBoxSquareSettings->Visible = false;
			// 
			// numericUpDownHeightSquare
			// 
			this->numericUpDownHeightSquare->Location = System::Drawing::Point(120, 58);
			this->numericUpDownHeightSquare->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownHeightSquare->Name = L"numericUpDownHeightSquare";
			this->numericUpDownHeightSquare->Size = System::Drawing::Size(75, 22);
			this->numericUpDownHeightSquare->TabIndex = 10;
			this->numericUpDownHeightSquare->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownWidthSquare
			// 
			this->numericUpDownWidthSquare->Location = System::Drawing::Point(17, 58);
			this->numericUpDownWidthSquare->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownWidthSquare->Name = L"numericUpDownWidthSquare";
			this->numericUpDownWidthSquare->Size = System::Drawing::Size(75, 22);
			this->numericUpDownWidthSquare->TabIndex = 11;
			this->numericUpDownWidthSquare->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(127, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Height";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(23, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Width";
			// 
			// groupBoxCircleSettings
			// 
			this->groupBoxCircleSettings->Controls->Add(this->numericUpDownHeightCircle);
			this->groupBoxCircleSettings->Controls->Add(this->numericUpDownWidthCircle);
			this->groupBoxCircleSettings->Controls->Add(this->label5);
			this->groupBoxCircleSettings->Controls->Add(this->label6);
			this->groupBoxCircleSettings->Location = System::Drawing::Point(956, 59);
			this->groupBoxCircleSettings->Name = L"groupBoxCircleSettings";
			this->groupBoxCircleSettings->Size = System::Drawing::Size(214, 94);
			this->groupBoxCircleSettings->TabIndex = 13;
			this->groupBoxCircleSettings->TabStop = false;
			this->groupBoxCircleSettings->Text = L"Circle settings";
			this->groupBoxCircleSettings->Visible = false;
			// 
			// numericUpDownHeightCircle
			// 
			this->numericUpDownHeightCircle->Location = System::Drawing::Point(120, 58);
			this->numericUpDownHeightCircle->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownHeightCircle->Name = L"numericUpDownHeightCircle";
			this->numericUpDownHeightCircle->Size = System::Drawing::Size(75, 22);
			this->numericUpDownHeightCircle->TabIndex = 10;
			this->numericUpDownHeightCircle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownWidthCircle
			// 
			this->numericUpDownWidthCircle->Location = System::Drawing::Point(17, 58);
			this->numericUpDownWidthCircle->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownWidthCircle->Name = L"numericUpDownWidthCircle";
			this->numericUpDownWidthCircle->Size = System::Drawing::Size(75, 22);
			this->numericUpDownWidthCircle->TabIndex = 11;
			this->numericUpDownWidthCircle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(127, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Height";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(23, 35);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Width";
			// 
			// groupBoxTextureSettings
			// 
			this->groupBoxTextureSettings->Controls->Add(this->buttonChooseTexture);
			this->groupBoxTextureSettings->Controls->Add(this->buttonApplyTexture);
			this->groupBoxTextureSettings->Controls->Add(this->numericUpDownHeightTexture);
			this->groupBoxTextureSettings->Controls->Add(this->numericUpDownWidthTexture);
			this->groupBoxTextureSettings->Controls->Add(this->label7);
			this->groupBoxTextureSettings->Controls->Add(this->label8);
			this->groupBoxTextureSettings->Location = System::Drawing::Point(724, 59);
			this->groupBoxTextureSettings->Name = L"groupBoxTextureSettings";
			this->groupBoxTextureSettings->Size = System::Drawing::Size(214, 133);
			this->groupBoxTextureSettings->TabIndex = 13;
			this->groupBoxTextureSettings->TabStop = false;
			this->groupBoxTextureSettings->Text = L"Texture settings";
			this->groupBoxTextureSettings->Visible = false;
			// 
			// buttonChooseTexture
			// 
			this->buttonChooseTexture->Location = System::Drawing::Point(120, 95);
			this->buttonChooseTexture->Name = L"buttonChooseTexture";
			this->buttonChooseTexture->Size = System::Drawing::Size(77, 32);
			this->buttonChooseTexture->TabIndex = 13;
			this->buttonChooseTexture->Text = L"Choose";
			this->buttonChooseTexture->UseVisualStyleBackColor = true;
			this->buttonChooseTexture->Click += gcnew System::EventHandler(this, &MyForm::buttonChooseTexture_Click);
			// 
			// buttonApplyTexture
			// 
			this->buttonApplyTexture->Location = System::Drawing::Point(17, 95);
			this->buttonApplyTexture->Name = L"buttonApplyTexture";
			this->buttonApplyTexture->Size = System::Drawing::Size(77, 32);
			this->buttonApplyTexture->TabIndex = 12;
			this->buttonApplyTexture->Text = L"Apply";
			this->buttonApplyTexture->UseVisualStyleBackColor = true;
			this->buttonApplyTexture->Click += gcnew System::EventHandler(this, &MyForm::buttonApplyTexture_Click);
			// 
			// numericUpDownHeightTexture
			// 
			this->numericUpDownHeightTexture->Location = System::Drawing::Point(120, 58);
			this->numericUpDownHeightTexture->Name = L"numericUpDownHeightTexture";
			this->numericUpDownHeightTexture->Size = System::Drawing::Size(75, 22);
			this->numericUpDownHeightTexture->TabIndex = 10;
			this->numericUpDownHeightTexture->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownWidthTexture
			// 
			this->numericUpDownWidthTexture->Location = System::Drawing::Point(17, 58);
			this->numericUpDownWidthTexture->Name = L"numericUpDownWidthTexture";
			this->numericUpDownWidthTexture->Size = System::Drawing::Size(75, 22);
			this->numericUpDownWidthTexture->TabIndex = 11;
			this->numericUpDownWidthTexture->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(127, 35);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Height";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(23, 35);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 20);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Width";
			// 
			// groupBoxProjectSettings
			// 
			this->groupBoxProjectSettings->Controls->Add(this->radioButtonAssignments);
			this->groupBoxProjectSettings->Controls->Add(this->radioButtonOriginal);
			this->groupBoxProjectSettings->Controls->Add(this->label11);
			this->groupBoxProjectSettings->Controls->Add(this->buttonOpenProject);
			this->groupBoxProjectSettings->Controls->Add(this->buttonCreate);
			this->groupBoxProjectSettings->Controls->Add(this->numericUpDownProjectHeight);
			this->groupBoxProjectSettings->Controls->Add(this->numericUpDownProjectWidth);
			this->groupBoxProjectSettings->Controls->Add(this->label9);
			this->groupBoxProjectSettings->Controls->Add(this->label10);
			this->groupBoxProjectSettings->Location = System::Drawing::Point(558, 228);
			this->groupBoxProjectSettings->Name = L"groupBoxProjectSettings";
			this->groupBoxProjectSettings->Size = System::Drawing::Size(399, 133);
			this->groupBoxProjectSettings->TabIndex = 14;
			this->groupBoxProjectSettings->TabStop = false;
			this->groupBoxProjectSettings->Text = L"Project  settings";
			this->groupBoxProjectSettings->Enter += gcnew System::EventHandler(this, &MyForm::groupBoxProjectSettings_Enter);
			// 
			// radioButtonAssignments
			// 
			this->radioButtonAssignments->AutoSize = true;
			this->radioButtonAssignments->Location = System::Drawing::Point(283, 98);
			this->radioButtonAssignments->Name = L"radioButtonAssignments";
			this->radioButtonAssignments->Size = System::Drawing::Size(109, 21);
			this->radioButtonAssignments->TabIndex = 16;
			this->radioButtonAssignments->TabStop = true;
			this->radioButtonAssignments->Text = L"Assignments";
			this->radioButtonAssignments->UseVisualStyleBackColor = true;
			// 
			// radioButtonOriginal
			// 
			this->radioButtonOriginal->AutoSize = true;
			this->radioButtonOriginal->Location = System::Drawing::Point(173, 98);
			this->radioButtonOriginal->Name = L"radioButtonOriginal";
			this->radioButtonOriginal->Size = System::Drawing::Size(78, 21);
			this->radioButtonOriginal->TabIndex = 15;
			this->radioButtonOriginal->TabStop = true;
			this->radioButtonOriginal->Text = L"Original";
			this->radioButtonOriginal->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(226, 78);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(113, 17);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Background size";
			// 
			// buttonOpenProject
			// 
			this->buttonOpenProject->Location = System::Drawing::Point(10, 78);
			this->buttonOpenProject->Name = L"buttonOpenProject";
			this->buttonOpenProject->Size = System::Drawing::Size(89, 32);
			this->buttonOpenProject->TabIndex = 13;
			this->buttonOpenProject->Text = L"Open";
			this->buttonOpenProject->UseVisualStyleBackColor = true;
			this->buttonOpenProject->Click += gcnew System::EventHandler(this, &MyForm::buttonOpenProject_Click);
			// 
			// buttonCreate
			// 
			this->buttonCreate->Location = System::Drawing::Point(10, 40);
			this->buttonCreate->Name = L"buttonCreate";
			this->buttonCreate->Size = System::Drawing::Size(89, 32);
			this->buttonCreate->TabIndex = 12;
			this->buttonCreate->Text = L"Create";
			this->buttonCreate->UseVisualStyleBackColor = true;
			this->buttonCreate->Click += gcnew System::EventHandler(this, &MyForm::buttonCreate_Click);
			// 
			// numericUpDownProjectHeight
			// 
			this->numericUpDownProjectHeight->Location = System::Drawing::Point(296, 50);
			this->numericUpDownProjectHeight->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownProjectHeight->Name = L"numericUpDownProjectHeight";
			this->numericUpDownProjectHeight->Size = System::Drawing::Size(75, 22);
			this->numericUpDownProjectHeight->TabIndex = 10;
			this->numericUpDownProjectHeight->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownProjectWidth
			// 
			this->numericUpDownProjectWidth->Location = System::Drawing::Point(193, 50);
			this->numericUpDownProjectWidth->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownProjectWidth->Name = L"numericUpDownProjectWidth";
			this->numericUpDownProjectWidth->Size = System::Drawing::Size(75, 22);
			this->numericUpDownProjectWidth->TabIndex = 11;
			this->numericUpDownProjectWidth->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(303, 27);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 20);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Height";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(199, 27);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 20);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Width";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1333, 674);
			this->Controls->Add(this->groupBoxProjectSettings);
			this->Controls->Add(this->groupBoxTextureSettings);
			this->Controls->Add(this->groupBoxCircleSettings);
			this->Controls->Add(this->groupBoxSquareSettings);
			this->Controls->Add(this->groupBoxToolbar);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBoxToolbar->ResumeLayout(false);
			this->groupBoxToolbar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSize))->EndInit();
			this->groupBoxSquareSettings->ResumeLayout(false);
			this->groupBoxSquareSettings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightSquare))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthSquare))->EndInit();
			this->groupBoxCircleSettings->ResumeLayout(false);
			this->groupBoxCircleSettings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightCircle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthCircle))->EndInit();
			this->groupBoxTextureSettings->ResumeLayout(false);
			this->groupBoxTextureSettings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightTexture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthTexture))->EndInit();
			this->groupBoxProjectSettings->ResumeLayout(false);
			this->groupBoxProjectSettings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProjectHeight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProjectWidth))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		Graphics^ canvas;//полотно
		List<Point> points;//точки
		Pen^ pen;//перо
		bool draw;
		Bitmap^ background;
		Bitmap^ texture;
		Color color;
		float size;
		bool clearAll;
		String^ filename;
		int statePen;
private: System::Void button_Color_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Clear_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_ApplySize_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Line_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Circle_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Square_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Texture_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonApplyTexture_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonChooseTexture_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCreate_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonOpenProject_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void creatToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void elementsPanelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: void DrawBackground();
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void pictureBox1_SizeChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
};
}
