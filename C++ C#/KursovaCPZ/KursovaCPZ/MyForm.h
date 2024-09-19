#pragma once

namespace KursovaCPZ {

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
	private: System::Windows::Forms::GroupBox^ groupBoxMenu;
	protected:
	private: System::Windows::Forms::Button^ buttonSearch;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Button^ buttonEditing;
	private: System::Windows::Forms::Button^ buttonCreate;
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
			this->groupBoxMenu = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonEditing = (gcnew System::Windows::Forms::Button());
			this->buttonCreate = (gcnew System::Windows::Forms::Button());
			this->groupBoxMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxMenu
			// 
			this->groupBoxMenu->Controls->Add(this->buttonSearch);
			this->groupBoxMenu->Controls->Add(this->buttonDelete);
			this->groupBoxMenu->Controls->Add(this->buttonEditing);
			this->groupBoxMenu->Controls->Add(this->buttonCreate);
			this->groupBoxMenu->Location = System::Drawing::Point(38, 25);
			this->groupBoxMenu->Name = L"groupBoxMenu";
			this->groupBoxMenu->Size = System::Drawing::Size(397, 393);
			this->groupBoxMenu->TabIndex = 0;
			this->groupBoxMenu->TabStop = false;
			// 
			// buttonSearch
			// 
			this->buttonSearch->Location = System::Drawing::Point(105, 311);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(188, 53);
			this->buttonSearch->TabIndex = 3;
			this->buttonSearch->Text = L"Пошук";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &MyForm::buttonSearch_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Location = System::Drawing::Point(105, 221);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(188, 53);
			this->buttonDelete->TabIndex = 2;
			this->buttonDelete->Text = L"Видалити";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyForm::buttonDelete_Click);
			// 
			// buttonEditing
			// 
			this->buttonEditing->Location = System::Drawing::Point(105, 129);
			this->buttonEditing->Name = L"buttonEditing";
			this->buttonEditing->Size = System::Drawing::Size(188, 53);
			this->buttonEditing->TabIndex = 1;
			this->buttonEditing->Text = L"Редагувати";
			this->buttonEditing->UseVisualStyleBackColor = true;
			this->buttonEditing->Click += gcnew System::EventHandler(this, &MyForm::buttonEditing_Click);
			// 
			// buttonCreate
			// 
			this->buttonCreate->Location = System::Drawing::Point(105, 37);
			this->buttonCreate->Name = L"buttonCreate";
			this->buttonCreate->Size = System::Drawing::Size(188, 53);
			this->buttonCreate->TabIndex = 0;
			this->buttonCreate->Text = L"Додати ";
			this->buttonCreate->UseVisualStyleBackColor = true;
			this->buttonCreate->Click += gcnew System::EventHandler(this, &MyForm::buttonCreate_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(490, 465);
			this->Controls->Add(this->groupBoxMenu);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBoxMenu->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonCreate_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonEditing_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e);
};
}
