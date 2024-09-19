#include "MyForm.h"
#include<iostream>
#include<math.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Clculator::MyForm form;
    Application::Run(% form);
}

System::Void Clculator::MyForm::button0_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text==(L"0"))
    {
        textBox1->Clear();
    }
    textBox1->AppendText(L"0");
}

System::Void Clculator::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text == (L"0"))
    {
        textBox1->Clear();
    }
    textBox1->AppendText(L"1");
}

System::Void Clculator::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text == (L"0"))
    {
        textBox1->Clear();
    }
    textBox1->AppendText(L"2");
}

System::Void Clculator::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text == (L"0"))
    {
        textBox1->Clear();
    }
    textBox1->AppendText(L"3");
}

System::Void Clculator::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text == (L"0"))
    {
        textBox1->Clear();
    }
    textBox1->AppendText(L"4");
}

System::Void Clculator::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text == (L"0"))
    {
        textBox1->Clear();
    }
    textBox1->AppendText(L"5");
}

System::Void Clculator::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text == (L"0"))
    {
        textBox1->Clear();
    }
    textBox1->AppendText(L"6");
}

System::Void Clculator::MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text == (L"0"))
    {
        textBox1->Clear();
    }
    textBox1->AppendText(L"7");
}

System::Void Clculator::MyForm::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text == (L"0"))
    {
        textBox1->Clear();
    }
    textBox1->AppendText(L"8");
}

System::Void Clculator::MyForm::button9_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text == (L"0"))
    {
        textBox1->Clear();
    }
    textBox1->AppendText(L"9");
}

System::Void Clculator::MyForm::button_krap_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text != (L""))
    {
        textBox1->AppendText(L".");
    }
}

System::Void Clculator::MyForm::button_C_Click(System::Object^ sender, System::EventArgs^ e)
{
    textBox1->Clear();
}

System::Void Clculator::MyForm::button_pl_Click(System::Object^ sender, System::EventArgs^ e)
{
    Num1 = Convert::ToDouble(textBox1->Text);
    deistv = 1;
    textBox1->Clear();
}

System::Void Clculator::MyForm::button_mi_Click(System::Object^ sender, System::EventArgs^ e)
{
    Num1 = Convert::ToDouble(textBox1->Text);
    deistv = 2;
    textBox1->Clear();
}

System::Void Clculator::MyForm::button_mu_Click(System::Object^ sender, System::EventArgs^ e)
{
    Num1 = Convert::ToDouble(textBox1->Text);
    deistv = 3;
    textBox1->Clear();
}

System::Void Clculator::MyForm::button_div_Click(System::Object^ sender, System::EventArgs^ e)
{
    Num1 = Convert::ToDouble(textBox1->Text);
    deistv = 4;
    textBox1->Clear();
}

System::Void Clculator::MyForm::button_is_Click(System::Object^ sender, System::EventArgs^ e)
{
    Num2 = Convert::ToDouble(textBox1->Text);
    if (deistv == 1)
    {
        Num1 = Num1 + Num2;
    }
    if (deistv == 2)
    {
        Num1 = Num1 - Num2;
    }
    if (deistv == 3)
    {
        Num1 = Num1 * Num2;
    }
    if (deistv == 4)
    {
        Num1 = Num1 / Num2;
    }
    if (deistv == 5)
    {
        Num1 = pow(Num1, Num2);
    }
    textBox1->Text = Convert::ToString(Num1);
}

System::Void Clculator::MyForm::button_sqrt_Click(System::Object^ sender, System::EventArgs^ e)
{
    Num1 = Convert::ToDouble(textBox1->Text);
    textBox1->Clear();
    Num1 = sqrt(Num1);
    textBox1->Text = Convert::ToString(Num1);
}

System::Void Clculator::MyForm::button_pow2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Num1 = Convert::ToDouble(textBox1->Text);
    textBox1->Clear();
    Num1 = pow(Num1,2);
    textBox1->Text = Convert::ToString(Num1);
}

System::Void Clculator::MyForm::button_pown_Click(System::Object^ sender, System::EventArgs^ e)
{
    Num1 = Convert::ToDouble(textBox1->Text);
    deistv = 5;
    textBox1->Clear();
}

System::Void Clculator::MyForm::button_sin_Click(System::Object^ sender, System::EventArgs^ e)
{
    Num1 = Convert::ToDouble(textBox1->Text);
    textBox1->Clear();
    Num1 = sin(Num1);
    textBox1->Text = Convert::ToString(Num1);
}

System::Void Clculator::MyForm::button_cos_Click(System::Object^ sender, System::EventArgs^ e)
{
    Num1 = Convert::ToDouble(textBox1->Text);
    textBox1->Clear();
    Num1 = cos(Num1);
    textBox1->Text = Convert::ToString(Num1);
}
