#include "MyForm.h"
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Funct::MyForm form;
    Application::Run(% form);
}

System::Void Funct::MyForm::buildToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox_cos->Checked==false && checkBox_sin->Checked==false && checkBox_log->Checked == false 
        && checkBox_xx->Checked == false && checkBox_xn->Checked == false && checkBox_nx->Checked == false
        && checkBox_sqrtx->Checked == false && checkBox_divx->Checked == false && checkBox_bx->Checked == false)
    {
        MessageBox::Show("Select a function","Error!!!");
        return;
    }
    if (textBox_a->Text=="" || textBox_b->Text == "" || textBox_h->Text == "" || textBox_n->Text == "" || textBox_k->Text == "")
    {
        MessageBox::Show("The default settings will be used", "Error!!!");
        DefaultParam();
    }
    else
    {
        a = Convert::ToDouble(textBox_a->Text);
        b = Convert::ToDouble(textBox_b->Text);
        h = Convert::ToDouble(textBox_h->Text);
        n = Convert::ToDouble(textBox_n->Text);
        k = Convert::ToDouble(textBox_k->Text);
    }
    if (checkBox_cos->Checked)
    {
        x = a;
        this->chart->Series[0]->Points->Clear();
        while (x <= b)
        {
            y = Math::Cos(x);
            this->chart->Series[0]->Points->AddXY(x, y);
            x += h;
        }
    }
    if (checkBox_sin->Checked)
    {
        x = a;
        this->chart->Series[1]->Points->Clear();
        while (x <= b)
        {
            y = Math::Sin(x);
            this->chart->Series[1]->Points->AddXY(x, y);
            x += h;
        }
    }
    if (checkBox_log->Checked)
    {
        x = a;
        this->chart->Series[2]->Points->Clear();
        while (x <= b)
        {
            y = Math::Log(x);            
            this->chart->Series[2]->Points->AddXY(x, y);
            x += h;
        }
    }
    if (checkBox_xx->Checked)
    {
        x = a;
        this->chart->Series[3]->Points->Clear();
        while (x <= b)
        {
            y = pow(x,2);
            this->chart->Series[3]->Points->AddXY(x, y);
            x += h;
        }
    }
    if (checkBox_xn->Checked && n<0)
    {
        x = a;
        this->chart->Series[4]->Points->Clear();
        while (x <= b)
        {
            n = n * (-1);
            y = 1/pow(x,n);
            this->chart->Series[4]->Points->AddXY(x, y);
            x += h;
        }
    }
    if (checkBox_xn->Checked && n >= 0)
    {
        x = a;
        this->chart->Series[4]->Points->Clear();
        while (x <= b)
        {
            y =pow(x, n);
            this->chart->Series[4]->Points->AddXY(x, y);
            x += h;
        }
    }
    if (checkBox_nx->Checked)
    {
        x = a;
        this->chart->Series[5]->Points->Clear();
        while (x <= b)
        {
            y = pow(n, x);
            this->chart->Series[5]->Points->AddXY(x, y);
            x += h;
        }
    }
    if (checkBox_sqrtx->Checked)
    {
        x = a;
        this->chart->Series[6]->Points->Clear();
        while (x <= b)
        {
            y = sqrt(x);
            this->chart->Series[6]->Points->AddXY(x, y);
            x += h;
        }
    }
    if (checkBox_divx->Checked)
    {
        x = a;
        this->chart->Series[7]->Points->Clear();
        while (x <= b)
        {
            y = n/x;
            this->chart->Series[7]->Points->AddXY(x, y);
            x += h;
        }
    }
    if (checkBox_bx->Checked)
    {
        x = a;
        this->chart->Series[8]->Points->Clear();
        while (x <= b)
        {
            y = (n*x)-k;
            this->chart->Series[8]->Points->AddXY(x, y);
            x += h;
        }
    }
}

System::Void Funct::MyForm::deleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox_cos->Checked)
    {
        this->chart->Series[0]->Points->Clear();
    }
    if (checkBox_sin->Checked)
    {
        this->chart->Series[1]->Points->Clear();
    }
    if (checkBox_log->Checked)
    {
        this->chart->Series[2]->Points->Clear();
    }
    if (checkBox_xx->Checked)
    {
        this->chart->Series[3]->Points->Clear();
    }
    if (checkBox_xn->Checked)
    {
        this->chart->Series[4]->Points->Clear();
    }
    if (checkBox_nx->Checked)
    {
        this->chart->Series[5]->Points->Clear();
    }
    if (checkBox_sqrtx->Checked)
    {
        this->chart->Series[6]->Points->Clear();
    }
    if (checkBox_divx->Checked)
    {
        this->chart->Series[7]->Points->Clear();
    }
    if (checkBox_bx->Checked)
    {
        this->chart->Series[8]->Points->Clear();
    }
}

void Funct::MyForm::DefaultParam()
{
    a = -10;
    b = 10;
    h = 0.1;
    n = 1;
    k = 0;
    x = a;
}