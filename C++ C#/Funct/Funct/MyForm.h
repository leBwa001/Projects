#pragma once

namespace Funct {

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ buildToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox_b;
	private: System::Windows::Forms::TextBox^ textBox_h;
	private: System::Windows::Forms::TextBox^ textBox_a;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox_sin;
	private: System::Windows::Forms::CheckBox^ checkBox_cos;
	private: System::Windows::Forms::CheckBox^ checkBox_log;

	private: System::Windows::Forms::CheckBox^ checkBox_xx;

	private: System::Windows::Forms::TextBox^ textBox_n;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox_xn;
	private: System::Windows::Forms::CheckBox^ checkBox_nx;
	private: System::Windows::Forms::TextBox^ textBox_k;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox_bx;
	private: System::Windows::Forms::CheckBox^ checkBox_sqrtx;
	private: System::Windows::Forms::CheckBox^ checkBox_divx;














	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buildToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_k = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_n = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_b = (gcnew System::Windows::Forms::TextBox());
			this->textBox_h = (gcnew System::Windows::Forms::TextBox());
			this->textBox_a = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_bx = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_sqrtx = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_divx = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_nx = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_xn = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_xx = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_log = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_sin = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_cos = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart
			// 
			this->chart->BorderlineWidth = 3;
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(0, 31);
			this->chart->Name = L"chart";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series1->Legend = L"Legend1";
			series1->LegendText = L"cos";
			series1->Name = L"Series1";
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->LegendText = L"sin";
			series2->Name = L"Series2";
			series3->BorderWidth = 3;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->LegendText = L"log";
			series3->Name = L"Series3";
			series4->BorderWidth = 3;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->LegendText = L"x^2";
			series4->Name = L"Series4";
			series5->BorderWidth = 3;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Color = System::Drawing::Color::Black;
			series5->Legend = L"Legend1";
			series5->LegendText = L"x^n";
			series5->Name = L"Series5";
			series5->ShadowColor = System::Drawing::Color::Black;
			series6->BorderWidth = 3;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series6->Legend = L"Legend1";
			series6->LegendText = L"n^x";
			series6->Name = L"Series6";
			series7->BorderWidth = 3;
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series7->Color = System::Drawing::Color::Aqua;
			series7->Legend = L"Legend1";
			series7->LegendText = L"sqrt(x)";
			series7->Name = L"Series7";
			series8->BorderWidth = 3;
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series8->Color = System::Drawing::Color::Fuchsia;
			series8->Legend = L"Legend1";
			series8->LegendText = L"n/x";
			series8->Name = L"Series8";
			series9->BorderWidth = 3;
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series9->Color = System::Drawing::Color::Gray;
			series9->Legend = L"Legend1";
			series9->LegendText = L"nx-k";
			series9->Name = L"Series9";
			this->chart->Series->Add(series1);
			this->chart->Series->Add(series2);
			this->chart->Series->Add(series3);
			this->chart->Series->Add(series4);
			this->chart->Series->Add(series5);
			this->chart->Series->Add(series6);
			this->chart->Series->Add(series7);
			this->chart->Series->Add(series8);
			this->chart->Series->Add(series9);
			this->chart->Size = System::Drawing::Size(872, 611);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title1->Name = L"Title1";
			title1->Text = L"Graphs";
			this->chart->Titles->Add(title1);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1257, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->buildToolStripMenuItem,
					this->deleteToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// buildToolStripMenuItem
			// 
			this->buildToolStripMenuItem->Name = L"buildToolStripMenuItem";
			this->buildToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->buildToolStripMenuItem->Text = L"Build";
			this->buildToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::buildToolStripMenuItem_Click);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->deleteToolStripMenuItem->Text = L"Delete";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox_k);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox_n);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox_b);
			this->groupBox1->Controls->Add(this->textBox_h);
			this->groupBox1->Controls->Add(this->textBox_a);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(878, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(370, 331);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Parametrs";
			// 
			// textBox_k
			// 
			this->textBox_k->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_k->Location = System::Drawing::Point(100, 237);
			this->textBox_k->Name = L"textBox_k";
			this->textBox_k->Size = System::Drawing::Size(100, 34);
			this->textBox_k->TabIndex = 9;
			this->textBox_k->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_k_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(15, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 29);
			this->label5->TabIndex = 8;
			this->label5->Text = L"k(...)=";
			// 
			// textBox_n
			// 
			this->textBox_n->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_n->Location = System::Drawing::Point(100, 188);
			this->textBox_n->Name = L"textBox_n";
			this->textBox_n->Size = System::Drawing::Size(100, 34);
			this->textBox_n->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(15, 188);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"n(...)=";
			// 
			// textBox_b
			// 
			this->textBox_b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_b->Location = System::Drawing::Point(100, 84);
			this->textBox_b->Name = L"textBox_b";
			this->textBox_b->Size = System::Drawing::Size(100, 34);
			this->textBox_b->TabIndex = 5;
			// 
			// textBox_h
			// 
			this->textBox_h->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_h->Location = System::Drawing::Point(128, 137);
			this->textBox_h->Name = L"textBox_h";
			this->textBox_h->Size = System::Drawing::Size(100, 34);
			this->textBox_h->TabIndex = 4;
			// 
			// textBox_a
			// 
			this->textBox_a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_a->Location = System::Drawing::Point(128, 34);
			this->textBox_a->Name = L"textBox_a";
			this->textBox_a->Size = System::Drawing::Size(100, 34);
			this->textBox_a->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(15, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"H(step)=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(15, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"B(to)=";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(15, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"A(from)=";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkBox_bx);
			this->groupBox2->Controls->Add(this->checkBox_sqrtx);
			this->groupBox2->Controls->Add(this->checkBox_divx);
			this->groupBox2->Controls->Add(this->checkBox_nx);
			this->groupBox2->Controls->Add(this->checkBox_xn);
			this->groupBox2->Controls->Add(this->checkBox_xx);
			this->groupBox2->Controls->Add(this->checkBox_log);
			this->groupBox2->Controls->Add(this->checkBox_sin);
			this->groupBox2->Controls->Add(this->checkBox_cos);
			this->groupBox2->Location = System::Drawing::Point(878, 380);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(370, 262);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L" Graps";
			// 
			// checkBox_bx
			// 
			this->checkBox_bx->AutoSize = true;
			this->checkBox_bx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_bx->Location = System::Drawing::Point(222, 124);
			this->checkBox_bx->Name = L"checkBox_bx";
			this->checkBox_bx->Size = System::Drawing::Size(104, 33);
			this->checkBox_bx->TabIndex = 8;
			this->checkBox_bx->Text = L"y=nx-k";
			this->checkBox_bx->UseVisualStyleBackColor = true;
			// 
			// checkBox_sqrtx
			// 
			this->checkBox_sqrtx->AutoSize = true;
			this->checkBox_sqrtx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_sqrtx->Location = System::Drawing::Point(222, 43);
			this->checkBox_sqrtx->Name = L"checkBox_sqrtx";
			this->checkBox_sqrtx->Size = System::Drawing::Size(127, 33);
			this->checkBox_sqrtx->TabIndex = 7;
			this->checkBox_sqrtx->Text = L"y=sqrt(x)";
			this->checkBox_sqrtx->UseVisualStyleBackColor = true;
			// 
			// checkBox_divx
			// 
			this->checkBox_divx->AutoSize = true;
			this->checkBox_divx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_divx->Location = System::Drawing::Point(222, 85);
			this->checkBox_divx->Name = L"checkBox_divx";
			this->checkBox_divx->Size = System::Drawing::Size(91, 33);
			this->checkBox_divx->TabIndex = 6;
			this->checkBox_divx->Text = L"y=n/x";
			this->checkBox_divx->UseVisualStyleBackColor = true;
			// 
			// checkBox_nx
			// 
			this->checkBox_nx->AutoSize = true;
			this->checkBox_nx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_nx->Location = System::Drawing::Point(20, 202);
			this->checkBox_nx->Name = L"checkBox_nx";
			this->checkBox_nx->Size = System::Drawing::Size(95, 33);
			this->checkBox_nx->TabIndex = 5;
			this->checkBox_nx->Text = L"y=n^x";
			this->checkBox_nx->UseVisualStyleBackColor = true;
			// 
			// checkBox_xn
			// 
			this->checkBox_xn->AutoSize = true;
			this->checkBox_xn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_xn->Location = System::Drawing::Point(222, 163);
			this->checkBox_xn->Name = L"checkBox_xn";
			this->checkBox_xn->Size = System::Drawing::Size(95, 33);
			this->checkBox_xn->TabIndex = 4;
			this->checkBox_xn->Text = L"y=x^n";
			this->checkBox_xn->UseVisualStyleBackColor = true;
			// 
			// checkBox_xx
			// 
			this->checkBox_xx->AutoSize = true;
			this->checkBox_xx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_xx->Location = System::Drawing::Point(20, 163);
			this->checkBox_xx->Name = L"checkBox_xx";
			this->checkBox_xx->Size = System::Drawing::Size(95, 33);
			this->checkBox_xx->TabIndex = 3;
			this->checkBox_xx->Text = L"y=x^2";
			this->checkBox_xx->UseVisualStyleBackColor = true;
			// 
			// checkBox_log
			// 
			this->checkBox_log->AutoSize = true;
			this->checkBox_log->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_log->Location = System::Drawing::Point(20, 124);
			this->checkBox_log->Name = L"checkBox_log";
			this->checkBox_log->Size = System::Drawing::Size(121, 33);
			this->checkBox_log->TabIndex = 2;
			this->checkBox_log->Text = L"y=log(x)";
			this->checkBox_log->UseVisualStyleBackColor = true;
			// 
			// checkBox_sin
			// 
			this->checkBox_sin->AutoSize = true;
			this->checkBox_sin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_sin->Location = System::Drawing::Point(20, 85);
			this->checkBox_sin->Name = L"checkBox_sin";
			this->checkBox_sin->Size = System::Drawing::Size(118, 33);
			this->checkBox_sin->TabIndex = 1;
			this->checkBox_sin->Text = L"y=sin(x)";
			this->checkBox_sin->UseVisualStyleBackColor = true;
			// 
			// checkBox_cos
			// 
			this->checkBox_cos->AutoSize = true;
			this->checkBox_cos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_cos->Location = System::Drawing::Point(20, 43);
			this->checkBox_cos->Name = L"checkBox_cos";
			this->checkBox_cos->Size = System::Drawing::Size(125, 33);
			this->checkBox_cos->TabIndex = 0;
			this->checkBox_cos->Text = L"y=cos(x)";
			this->checkBox_cos->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(1257, 645);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:double a, b, h, n, k,v;
	private:double x, y;
	private: System::Void buildToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void deleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: void DefaultParam();
};
}
