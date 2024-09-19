#include "MyForm.h"
#include<Windows.h>
#include<stdio.h>

#pragma comment(lib, "user32.lib")

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Paint::MyForm form;
    Application::Run(% form);
}
struct Vector2D
{
    int X;
    int Y;
};
Vector2D mousePosition;

Paint::MyForm::MyForm(void)
{
    InitializeComponent();
    openFileDialog1->Filter = "Image files(*.bmp, *.jpg, *.png)|*.bmp, *.jpg, *.png";
    saveFileDialog1->Filter = "Image files(*.bmp, *.jpg, *.png)|*.bmp, *.jpg, *.png";
}

System::Void Paint::MyForm::button_Color_Click(System::Object^ sender, System::EventArgs^ e)
{
    colorDialog1->ShowDialog();
    color = colorDialog1->Color;
    button_Color->BackColor = color;
    if (color==Color::Black)
    {
        button_Color->ForeColor = Color::White;
    }
    else
    {
        button_Color->ForeColor = Color::Black;
    }
    pen = gcnew Pen(color, size);
    return System::Void();
}

System::Void Paint::MyForm::button_Clear_Click(System::Object^ sender, System::EventArgs^ e)
{
    clearAll = true;
    pictureBox1->Invalidate();
    return System::Void();
}

System::Void Paint::MyForm::button_ApplySize_Click(System::Object^ sender, System::EventArgs^ e)
{
    size = Convert::ToSingle(numericUpDownSize->Value);
    pen = gcnew Pen (color, size);
    return System::Void();
}

System::Void Paint::MyForm::button_Line_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (statePen!=1)
    {
        statePen = 1;
        button_Line->BackColor = Color::Green;
        button_Circle->BackColor = Color::LightGray;
        button_Square->BackColor = Color::LightGray;
        button_Texture->BackColor = Color::LightGray;
    }

    return System::Void();
}

System::Void Paint::MyForm::button_Circle_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (statePen != 3)
    {
        statePen = 3;
        button_Circle->BackColor = Color::Green;
        button_Line->BackColor = Color::LightGray;
        button_Square->BackColor = Color::LightGray;
        button_Texture->BackColor = Color::LightGray;

        groupBoxCircleSettings->Visible = true;
        groupBoxCircleSettings->Location = Point(30, 172);

        groupBoxSquareSettings->Visible = false;
        groupBoxTextureSettings->Visible = false;
    }
    else
    {
        if (groupBoxCircleSettings->Visible)
        {
            groupBoxCircleSettings->Visible = false;
        }
        else
        {
            groupBoxCircleSettings->Visible = true;
            groupBoxCircleSettings->Location = Point(30, 172);
        }
    }

    return System::Void();
}

System::Void Paint::MyForm::button_Square_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (statePen!=2)
    {
        statePen = 2;
        button_Square->BackColor = Color::Green;
        button_Line->BackColor = Color::LightGray;
        button_Circle->BackColor = Color::LightGray;
        button_Texture->BackColor = Color::LightGray;
        
        groupBoxSquareSettings->Visible = true;
        groupBoxSquareSettings->Location = Point(30, 172);

        groupBoxCircleSettings->Visible = false;
        groupBoxTextureSettings->Visible = false;
    }
    else
    {
        if (groupBoxSquareSettings->Visible)
        {
            groupBoxSquareSettings->Visible = false;
        }
        else
        {
            groupBoxSquareSettings->Visible = true;
            groupBoxSquareSettings->Location = Point(30, 172);
        }
    }

    return System::Void();
}

System::Void Paint::MyForm::button_Texture_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (statePen != 4)
    {
        groupBoxTextureSettings->Visible = true;
        groupBoxTextureSettings->Location = Point(30, 172);

        groupBoxCircleSettings->Visible = false;
        groupBoxSquareSettings->Visible = false;
        if (texture!=nullptr)
        {
            statePen = 4;
            button_Texture->BackColor = Color::Green;
            button_Line->BackColor = Color::LightGray;
            button_Circle->BackColor = Color::LightGray;
            button_Square->BackColor = Color::LightGray;
        }
    }
    else
    {
        if (groupBoxTextureSettings->Visible)
        {
            groupBoxTextureSettings->Visible = false;
        }
        else
        {
            groupBoxTextureSettings->Visible = true;
            groupBoxTextureSettings->Location = Point(30, 172);
        }
    }
    return System::Void();

}

System::Void Paint::MyForm::buttonApplyTexture_Click(System::Object^ sender, System::EventArgs^ e)
{
    float width = Convert::ToSingle(numericUpDownWidthTexture->Value);
    float height = Convert::ToSingle(numericUpDownHeightTexture->Value);
    texture = gcnew Bitmap(texture, width, height);
    return System::Void();
}

System::Void Paint::MyForm::buttonChooseTexture_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ file;
    openFileDialog1->ShowDialog();
    if (file== "openFileDialig1")
    {
        return;
    }
    statePen = 4;
    texture = gcnew Bitmap(file);
    button_Texture->BackColor = Color::Green;
    button_Line->BackColor = Color::LightGray;
    button_Circle->BackColor = Color::LightGray;
    button_Square->BackColor = Color::LightGray;
    return System::Void();
}

System::Void Paint::MyForm::buttonCreate_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Width = Convert::ToInt32(numericUpDownProjectWidth->Value);
    this->Height = Convert::ToInt32(numericUpDownProjectHeight->Value);
    if (groupBoxProjectSettings->Visible )
    {
        groupBoxProjectSettings->Visible = false;
    }
    filename = "openFileDialog1";

    return System::Void();
}

System::Void Paint::MyForm::buttonOpenProject_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (radioButtonOriginal->Checked==false && radioButtonAssignments->Checked==false )
    {
        MessageBox::Show("Select the background size", "WARNING!!!");
        return;
    }
    openFileDialog1->ShowDialog();
    filename = openFileDialog1->FileName;
    if (filename="openFileDialog1")
    {
        return;
    }
    background = gcnew Bitmap(filename);
    if (radioButtonOriginal->Checked)
    {
        this->Width = background->Width;
        this->Height = background->Height;
    }
    if (radioButtonAssignments->Checked)
    {
        background = gcnew Bitmap(background, Convert::ToInt32(numericUpDownProjectWidth->Value), Convert::ToInt32(numericUpDownProjectHeight->Value));
        this->Width = background->Width;
        this->Height = background->Height;
    }

    canvas = Graphics::FromImage(background);
    pictureBox1->Image = background;
    if (groupBoxProjectSettings->Visible)
    {
        groupBoxProjectSettings->Visible = false;
    }

    return System::Void();
}

System::Void Paint::MyForm::creatToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (groupBoxProjectSettings->Visible)
    {
        groupBoxProjectSettings->Visible = false;
    }
    else
    {
        groupBoxProjectSettings->Visible = true;
        groupBoxProjectSettings->Location = Point(12,37);
    }
    return System::Void();
}

System::Void Paint::MyForm::saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ fname;
    saveFileDialog1->ShowDialog();
    fname = saveFileDialog1->FileName;
    if (fname=="")
    {
        return;
    }
    Bitmap^ img = gcnew Bitmap(pictureBox1->Image);
    img->Save(fname);
    return System::Void();
}

System::Void Paint::MyForm::elementsPanelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (groupBoxToolbar->Visible )
    {
        groupBoxToolbar->Visible = false;
    }
    else
    {
        groupBoxToolbar->Visible = true;
        groupBoxToolbar->Location = Point(12, 37);
    }
    return System::Void();
}

System::Void Paint::MyForm::aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Information","...");
}

void Paint::MyForm::DrawBackground()
{
    if (filename!="openFileDialig1")
    {
        background = gcnew Bitmap(filename);
        background = gcnew Bitmap(background, pictureBox1->Width,pictureBox1->Height);
    }
    else
    {
        background = gcnew Bitmap(pictureBox1->Image, pictureBox1->Width, pictureBox1->Height);
    }
    delete canvas;
    canvas = Graphics::FromImage(background);
    pictureBox1->Image = background;
    pictureBox1->Refresh();
    pictureBox1->Invalidate();
}

System::Void Paint::MyForm::pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
    switch (statePen)
    {
    case 1:
        if (points.Count>1)
        {
        canvas->DrawLines(pen, points.ToArray());
        }
        break;
    case 2:
        if (mousePosition.X != -1 && mousePosition.Y != -1)
        {
            canvas->DrawRectangle(pen, mousePosition.X, mousePosition.Y, Convert::ToInt32(numericUpDownWidthSquare->Value), Convert::ToInt32(numericUpDownHeightSquare->Value));
        }
        break;
    case 3:
        if (mousePosition.X != -1 && mousePosition.Y != -1)
        {
            canvas->DrawEllipse(pen, mousePosition.X, mousePosition.Y, Convert::ToInt32(numericUpDownWidthCircle->Value), Convert::ToInt32(numericUpDownHeightCircle->Value));
        }
        break;
    case 4:
        if (mousePosition.X != -1 && mousePosition.Y != -1)
        {
            canvas->DrawImage(texture, mousePosition.X, mousePosition.Y, texture->Width, texture->Height);
        }
        break;
    default:
        break;
    }
    if (clearAll)
    {
        points.Clear();
        canvas->Clear(Color::White);
        clearAll = false;
        mousePosition.X = -1;
        mousePosition.Y = -1;
        DrawBackground();
    }
}

System::Void Paint::MyForm::pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    if (statePen == 1)
    {
        points.Clear();
        points.Add(e->Location);
        draw = true;
        pictureBox1->SizeMode = PictureBoxSizeMode::Normal;
    }
    else
    {
        mousePosition.X = e->Location.X;
        mousePosition.Y = e->Location.Y;
    }
    pictureBox1->Invalidate();
}

System::Void Paint::MyForm::pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    if (draw && points.Contains(Point(e->X, e->Y))==false)
    {
        if (e->Button==System::Windows::Forms::MouseButtons::Left)
        {
            points.Add(e->Location);
        }
        pictureBox1->Invalidate();
    }
}

System::Void Paint::MyForm::pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    draw = false;
    pictureBox1->Invalidate();
    mousePosition.X = -1;
    mousePosition.Y = -1;
}

System::Void Paint::MyForm::pictureBox1_SizeChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (pictureBox1->Image) 
    {
        if (background)
        {
            background = gcnew Bitmap(background, pictureBox1->Width, pictureBox1->Height);
        }
        else
        {
            background = gcnew Bitmap(pictureBox1->Image, pictureBox1->Width, pictureBox1->Height);
        }
        delete canvas;
        canvas = Graphics::FromImage(background);
        pictureBox1->Image = background;
        pictureBox1->Refresh();
        pictureBox1->Invalidate();
    }
}

System::Void Paint::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    color = Color::Red;
    size = 14;
    pen = gcnew Pen(color, size);
    List<Point>^ points = gcnew List<Point>();
    draw = false;
    statePen = 1;
    button_Line->BackColor = Color::Green;
    button_Circle->BackColor = Color::LightGray;
    button_Square->BackColor = Color::LightGray;
    button_Texture->BackColor = Color::LightGray;
    Bitmap^ Img = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
    canvas = Graphics::FromImage(Img);
    pictureBox1->Image = Img;
    pictureBox1->BackColor = Color::White;
    numericUpDownProjectWidth->Minimum = 300;
    numericUpDownProjectHeight->Minimum = 300;
    numericUpDownProjectWidth->Maximum = GetSystemMetrics(SM_CXSCREEN);
    numericUpDownProjectHeight->Maximum= GetSystemMetrics(SM_CYSCREEN);
    clearAll = false;
    filename = "openFileDialog1";
    button_Color->BackColor = Color::Red;
    return System::Void();
}
