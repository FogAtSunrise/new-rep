#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <cstdio>
#include <dos.h>
//#include "windows.h"
namespace MedList {

	using namespace std;
	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Runtime::InteropServices;
	
	/// <summary>
	/// Сводка для MyGameForm
	/// </summary>
	public ref class MyGameForm : public System::Windows::Forms::Form
	{
	public:
		

	
		MyGameForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
	
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyGameForm()
		{
			if (components)
			{
				delete components;
			}
		}



































	private: System::Windows::Forms::Timer^  timer1;




































	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyGameForm::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 750;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyGameForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 8000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyGameForm::timer2_Tick);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(-1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(398, 403);
			this->panel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(276, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Необходимо запомнить расположение изображений";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(771, 254);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Поехайли! ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(299, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyGameForm::button1_Click_1);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Beige;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->pictureBox31);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->pictureBox13);
			this->panel2->Controls->Add(this->pictureBox14);
			this->panel2->Controls->Add(this->pictureBox15);
			this->panel2->Controls->Add(this->pictureBox11);
			this->panel2->Controls->Add(this->pictureBox16);
			this->panel2->Controls->Add(this->pictureBox9);
			this->panel2->Controls->Add(this->pictureBox10);
			this->panel2->Controls->Add(this->pictureBox12);
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Controls->Add(this->pictureBox6);
			this->panel2->Controls->Add(this->pictureBox7);
			this->panel2->Controls->Add(this->pictureBox8);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->pictureBox29);
			this->panel2->Controls->Add(this->pictureBox32);
			this->panel2->Controls->Add(this->pictureBox30);
			this->panel2->Controls->Add(this->pictureBox27);
			this->panel2->Controls->Add(this->pictureBox25);
			this->panel2->Controls->Add(this->pictureBox28);
			this->panel2->Controls->Add(this->pictureBox26);
			this->panel2->Controls->Add(this->pictureBox23);
			this->panel2->Controls->Add(this->pictureBox21);
			this->panel2->Controls->Add(this->pictureBox24);
			this->panel2->Controls->Add(this->pictureBox22);
			this->panel2->Controls->Add(this->pictureBox19);
			this->panel2->Controls->Add(this->pictureBox17);
			this->panel2->Controls->Add(this->pictureBox20);
			this->panel2->Controls->Add(this->pictureBox18);
			this->panel2->Location = System::Drawing::Point(23, 49);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(340, 340);
			this->panel2->TabIndex = 18;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Khaki;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(80, 80);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.BackgroundImage")));
			this->pictureBox31->Location = System::Drawing::Point(0, 0);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(80, 80);
			this->pictureBox31->TabIndex = 0;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &MyGameForm::pictureBox31_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Khaki;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(86, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(80, 80);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Khaki;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(86, 260);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(80, 80);
			this->pictureBox13->TabIndex = 13;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Visible = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Cornsilk;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(260, 260);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(80, 80);
			this->pictureBox14->TabIndex = 15;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Visible = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Khaki;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(0, 260);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(80, 80);
			this->pictureBox15->TabIndex = 12;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Visible = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Tan;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(0, 172);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(80, 80);
			this->pictureBox11->TabIndex = 8;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Visible = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Khaki;
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(174, 260);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(80, 80);
			this->pictureBox16->TabIndex = 14;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Visible = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::BurlyWood;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(86, 172);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(80, 80);
			this->pictureBox9->TabIndex = 9;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Tan;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(260, 172);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(80, 80);
			this->pictureBox10->TabIndex = 11;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Visible = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Khaki;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(172, 172);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(80, 80);
			this->pictureBox12->TabIndex = 10;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Cornsilk;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(86, 86);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(80, 80);
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Khaki;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(260, 86);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(80, 80);
			this->pictureBox6->TabIndex = 7;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Wheat;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(0, 86);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(80, 80);
			this->pictureBox7->TabIndex = 4;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Khaki;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(172, 86);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(80, 80);
			this->pictureBox8->TabIndex = 6;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Wheat;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(260, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(80, 80);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::BurlyWood;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(172, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(80, 80);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.BackgroundImage")));
			this->pictureBox29->Location = System::Drawing::Point(86, 0);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(80, 80);
			this->pictureBox29->TabIndex = 1;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Click += gcnew System::EventHandler(this, &MyGameForm::pictureBox29_Click);
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.BackgroundImage")));
			this->pictureBox32->Location = System::Drawing::Point(172, 0);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(80, 80);
			this->pictureBox32->TabIndex = 2;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Click += gcnew System::EventHandler(this, &MyGameForm::pictureBox32_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.BackgroundImage")));
			this->pictureBox30->Location = System::Drawing::Point(260, 0);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(80, 80);
			this->pictureBox30->TabIndex = 3;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Click += gcnew System::EventHandler(this, &MyGameForm::pictureBox30_Click);
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.BackgroundImage")));
			this->pictureBox27->Location = System::Drawing::Point(0, 86);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(80, 80);
			this->pictureBox27->TabIndex = 4;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Click += gcnew System::EventHandler(this, &MyGameForm::pictureBox27_Click);
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.BackgroundImage")));
			this->pictureBox25->Location = System::Drawing::Point(86, 86);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(80, 80);
			this->pictureBox25->TabIndex = 5;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Click += gcnew System::EventHandler(this, &MyGameForm::pictureBox25_Click);
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.BackgroundImage")));
			this->pictureBox28->Location = System::Drawing::Point(172, 86);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(80, 80);
			this->pictureBox28->TabIndex = 6;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Click += gcnew System::EventHandler(this, &MyGameForm::pictureBox28_Click);
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.BackgroundImage")));
			this->pictureBox26->Location = System::Drawing::Point(260, 86);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(80, 80);
			this->pictureBox26->TabIndex = 7;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Click += gcnew System::EventHandler(this, &MyGameForm::pictureBox26_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.BackgroundImage")));
			this->pictureBox23->Location = System::Drawing::Point(0, 172);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(80, 80);
			this->pictureBox23->TabIndex = 8;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &MyGameForm::pictureBox23_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.BackgroundImage")));
			this->pictureBox21->Location = System::Drawing::Point(86, 172);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(80, 80);
			this->pictureBox21->TabIndex = 9;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &MyGameForm::pictureBox21_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.BackgroundImage")));
			this->pictureBox24->Location = System::Drawing::Point(172, 172);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(80, 80);
			this->pictureBox24->TabIndex = 10;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &MyGameForm::pictureBox24_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.BackgroundImage")));
			this->pictureBox22->Location = System::Drawing::Point(260, 172);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(80, 80);
			this->pictureBox22->TabIndex = 11;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &MyGameForm::pictureBox22_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.BackgroundImage")));
			this->pictureBox19->Location = System::Drawing::Point(0, 260);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(80, 80);
			this->pictureBox19->TabIndex = 12;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &MyGameForm::pictureBox19_Click);
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.BackgroundImage")));
			this->pictureBox17->Location = System::Drawing::Point(86, 260);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(80, 80);
			this->pictureBox17->TabIndex = 13;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &MyGameForm::pictureBox17_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.BackgroundImage")));
			this->pictureBox20->Location = System::Drawing::Point(174, 260);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(80, 80);
			this->pictureBox20->TabIndex = 14;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &MyGameForm::pictureBox20_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.BackgroundImage")));
			this->pictureBox18->Location = System::Drawing::Point(260, 260);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(80, 80);
			this->pictureBox18->TabIndex = 15;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &MyGameForm::pictureBox18_Click);
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Location = System::Drawing::Point(-1, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(395, 400);
			this->panel3->TabIndex = 16;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(142, 221);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 46);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Выйти";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyGameForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(142, 169);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 46);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Правила";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyGameForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(142, 117);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 46);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Начать игру";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyGameForm::button2_Click);
			// 
			// MyGameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(385, 401);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyGameForm";
			this->Text = L"Найди пары";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}

	

	#pragma endregion
		private: 
			int check;
			int StopIt;
			int Win;
			cli::array<int>^FG = gcnew cli::array<int>(16);
			cli::array<int>^myNumber = gcnew cli::array<int>(16);
			cli::array<PictureBox^>^ImPick = gcnew cli::array<PictureBox^>(16);
			int mistake;;
			
			int ten = 0;
			
	private: void win()
	{
	
		if (!mistake)
			MessageBox::Show("Вы победили!!!");
		else MessageBox::Show("Вы проиграли...");
	
	
		panel3->Show();
	}
			
	//private: void Know(PictureBox^ click1)
	

	


private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	
	timer1->Stop();
	mistake++;
	for (int i = 0; i < 16; i++)
		if (FG[i])
		{

			ImPick[i]->Hide();
			FG[i] = 0;
		}
}

private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
	timer2->Stop();
	for (int i = 0; i < 16; i++)
		ImPick[i]->Hide();
	label2->Hide();
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	panel3->Show();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	panel3->Hide();
	

	ImPick[0] = pictureBox1;
	ImPick[1] = pictureBox2;
	ImPick[2] = pictureBox3;
	ImPick[3] = pictureBox4;
	ImPick[4] = pictureBox7;
	ImPick[5] = pictureBox5;
	ImPick[6] = pictureBox8;
	ImPick[7] = pictureBox6;
	ImPick[8] = pictureBox11;
	ImPick[9] = pictureBox9;
	ImPick[10] = pictureBox12;
	ImPick[11] = pictureBox10;
	ImPick[12] = pictureBox15;
	ImPick[13] = pictureBox13;
	ImPick[14] = pictureBox16;
	ImPick[15] = pictureBox14;
	for (int i = 0; i < 16; i++)
		ImPick[i]->Show();
	for (int i = 0; i < 16; i++)
		FG[i] = 0;
	check = 0;
	mistake = 0;
	Win = 0;
	myNumber[0] = 1;
	myNumber[1] = 2;
	myNumber[2] = 3;
	myNumber[3] = 4;
	myNumber[4] = 4;
	myNumber[5] = 5;
	myNumber[6] = 2;
	myNumber[7] = 6;
	myNumber[8] = 7;
	myNumber[9] = 3;
	myNumber[10] = 6;
	myNumber[11] = 7;
	myNumber[12] = 8;
	myNumber[13] = 8;
	myNumber[14] = 1;
	myNumber[15] = 5;
	timer2->Start();
	label2->Show();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Игра - Найди пары \n В начале игроку дается 8 секунд на просмотр таблицы из разных картинок(каждой картинки по две), необходимо запомнить их расположение. Затем картинки скрываются и игрок должен раскрывать по очереди пары одинаковых картинок. \n Побеждает тот, кто смог раскрыть все пары подряд и не допустить ни одной ошибки.");
}


private: System::Void pictureBox31_Click(System::Object^  sender, System::EventArgs^  e) {

	pictureBox1->Show();
	if (!check)  //Первое нажатие
	{
		FG[0] = 1;
		check++;
	}
	else      //Второе нажатие
		if (check == 1) {
		check = 0;  //Обнуляем

		for (int i = 0; i < 16; i++)
			if (FG[i])
			{
				if (myNumber[i] == myNumber[0])
				{
					Win++;
					FG[i] = 0;
					ten = 1;
					if (Win == 8)
						win();
				}

			}
		if (!ten)
		{
			FG[0] = 1;
			timer1->Start();
		}
		else ten = 0;
	}


}
private: System::Void pictureBox29_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox2->Show();
	if (!check)  //Первое нажатие
	{
		FG[1] = 1;
		check++;
	}
	else      //Второе нажатие
		if (check == 1) {
		check = 0;  //Обнуляем
		for (int i = 0; i < 16; i++)
			if (FG[i])
			{
				if (myNumber[i] == myNumber[1])
				{
					Win++;
					FG[i] = 0;
					ten = 1;
					if (Win == 8)
						win();
				}
			}
		if (!ten)
		{
			FG[1] = 1;
			timer1->Start();
		}
		else ten = 0;
	}
}
private: System::Void pictureBox32_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox3->Show();
	if (!check)  //Первое нажатие
	{
		FG[2] = 1;
		check++;
	}
	else      //Второе нажатие
		if (check == 1) {
		check = 0;  //Обнуляем
		for (int i = 0; i < 16; i++)
			if (FG[i])
			{
				if (myNumber[i] == myNumber[2])
				{
					Win++;
					FG[i] = 0;
					ten = 1;
					if (Win == 8)
						win();
				}

			}
		if (!ten)
		{
			FG[2] = 1;
			timer1->Start();
		}
		else ten = 0;
	}
}
private: System::Void pictureBox30_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox4->Show();
	if (!check)  //Первое нажатие
	{
		FG[3] = 1;
		check++;
	}
	else      //Второе нажатие
		if (check == 1) {
		check = 0;  //Обнуляем
		for (int i = 0; i < 16; i++)
			if (FG[i])
			{
				if (myNumber[i] == myNumber[3])
				{
					Win++;
					FG[i] = 0;
					ten = 1;
					if (Win == 8)
						win();
				}

			}
		if (!ten)
		{
			FG[3] = 1;
			timer1->Start();

		}
		else ten = 0;
	}
}
private: System::Void pictureBox27_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox7->Show();
	if (!check)  //Первое нажатие
	{
		FG[4] = 1;
		check++;
	}
	else      //Второе нажатие
		if (check == 1) {
		check = 0;  //Обнуляем
		for (int i = 0; i < 16; i++)
			if (FG[i])
			{
				if (myNumber[i] == myNumber[4])
				{
					Win++;
					FG[i] = 0;
					ten = 1;
					if (Win == 8)
						win();
				}

			}
		if (!ten)
		{
			FG[4] = 1;
			timer1->Start();

		}
		else ten = 0;
	}
}
private: System::Void pictureBox25_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox5->Show();
	if (!check)  //Первое нажатие
	{
		FG[5] = 1;
		check++;
	}
	else      //Второе нажатие
		if (check == 1) {
		check = 0;  //Обнуляем
		for (int i = 0; i < 16; i++)
			if (FG[i])
			{
				if (myNumber[i] == myNumber[5])
				{
					Win++;
					FG[i] = 0;
					ten = 1;
					if (Win == 8)
						win();
				}


			}
		if (!ten)
		{
			FG[5] = 1;
			timer1->Start();

		}
		else ten = 0;
	}
}
private: System::Void pictureBox28_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox8->Show();
	if (!check)  //Первое нажатие
	{
		FG[6] = 1;
		check++;
	}
	else      //Второе нажатие
		if (check == 1) {
		check = 0;  //Обнуляем
		for (int i = 0; i < 16; i++)
			if (FG[i])
			{
				if (myNumber[i] == myNumber[6])
				{
					Win++;
					FG[i] = 0;
					ten = 1;
					if (Win == 8)
						win();
				}

			}
		if (!ten)
		{
			FG[6] = 1;
			timer1->Start();

		}
		else ten = 0;
	}
}
private: System::Void pictureBox26_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox6->Show();
	if (!check)  //Первое нажатие
	{
		FG[7] = 1;
		check++;
	}
	else      //Второе нажатие
		if (check == 1) {
		check = 0;  //Обнуляем
		for (int i = 0; i < 16; i++)
			if (FG[i])
			{
				if (myNumber[i] == myNumber[7])
				{
					Win++;
					FG[i] = 0;
					ten = 1;
					if (Win == 8)
						win();
				}

			}
		if (!ten)
		{
			FG[7] = 1;
			timer1->Start();

		}
		else ten = 0;
	}
}
private: System::Void pictureBox23_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox11->Show();
	if (!check)  //Первое нажатие
	{
		FG[8] = 1;
		check++;
	}
	else      //Второе нажатие
		if (check == 1) {
		check = 0;  //Обнуляем
		for (int i = 0; i < 16; i++)
			if (FG[i])
			{
				if (myNumber[i] == myNumber[8])
				{
					Win++;
					FG[i] = 0;
					ten = 1;
					if (Win == 8)
						win();
				}

			}
		if (!ten)
		{
			FG[8] = 1;
			timer1->Start();

		}
		else ten = 0;
	}
}
private: System::Void pictureBox21_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox9->Show();
	if (!check)  //Первое нажатие
	{
		FG[9] = 1;
		check++;
	}
	else      //Второе нажатие
		if (check == 1) {
		check = 0;  //Обнуляем
		for (int i = 0; i < 16; i++)
			if (FG[i])
			{
				if (myNumber[i] == myNumber[9])
				{
					Win++;
					FG[i] = 0;
					ten = 1;
					if (Win == 8)
						win();
				}

			}
		if (!ten)
		{
			FG[9] = 1;
			timer1->Start();

		}
		else ten = 0;
	}
}
private: System::Void pictureBox24_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox12->Show();
	if (!check)  //Первое нажатие
	{
		FG[10] = 1;
		check++;
	}
	else      //Второе нажатие
		if (check == 1) {
		check = 0;  //Обнуляем
		for (int i = 0; i < 16; i++)
			if (FG[i])
			{
				if (myNumber[i] == myNumber[10])
				{
					Win++;
					FG[i] = 0;
					ten = 1;
					if (Win == 8)
						win();
				}

			}
		if (!ten)
		{
			FG[10] = 1;
			timer1->Start();

		}
		else ten = 0;
	}
}
private: System::Void pictureBox22_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox10->Show();
	if (!check)  //Первое нажатие
	{
		FG[11] = 1;
		check++;
	}
	else      //Второе нажатие
		if (check == 1)  {
		check = 0;  //Обнуляем
		for (int i = 0; i < 16; i++)
			if (FG[i])
			{
				if (myNumber[i] == myNumber[11])
				{
					Win++;
					FG[i] = 0;
					ten = 1;
					if (Win == 8)
						win();
				}

			}
		if (!ten)
		{
			FG[11] = 1;
			timer1->Start();

		}
		else ten = 0;
	}
}
private: System::Void pictureBox19_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox15->Show();
	if (!check)  //Первое нажатие
	{
		FG[12] = 1;
		check++;
	}
	else      //Второе нажатие
		if (check == 1)  {
		check = 0;  //Обнуляем
		for (int i = 0; i < 16; i++)
			if (FG[i])
			{
				if (myNumber[i] == myNumber[12])
				{
					Win++;
					FG[i] = 0;
					ten = 1;
					if (Win == 8)
						win();
				}

			}
		if (!ten)
		{
			FG[12] = 1;
			timer1->Start();

		}
		else ten = 0;
	}
}
private: System::Void pictureBox17_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox13->Show();
	if (!check)  //Первое нажатие
	{
		FG[13] = 1;
		check++;
	}
	else      //Второе нажатие
		if (check == 1) {
		check = 0;  //Обнуляем
		for (int i = 0; i < 16; i++)
			if (FG[i])
			{
				if (myNumber[i] == myNumber[13])
				{
					Win++;
					FG[i] = 0;
					ten = 1;
					if (Win == 8)
						win();
				}

			}
		if (!ten)
		{
			FG[13] = 1;
			timer1->Start();
		}
		else ten = 0;
	}
}
private: System::Void pictureBox20_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox16->Show();
	if (!check)  //Первое нажатие
	{
		FG[14] = 1;
		check++;
	}
	else      //Второе нажатие
	if (check == 1){
		check = 0;  //Обнуляем
		for (int i = 0; i < 16; i++)
			if (FG[i])
			{
				if (myNumber[i] == myNumber[14])
				{
					Win++;
					FG[i] = 0;
					ten = 1;
					if (Win == 8)
						win();
				}

			}
		if (!ten)
		{
			FG[14] = 1;
			timer1->Start();
		}
		else ten = 0;
	}
}
private: System::Void pictureBox18_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox14->Show();
	if (!check)  //Первое нажатие
	{
		FG[15] = 1;
		check++;
	}
	else      //Второе нажатие
		if (check == 1) {
		check = 0;  //Обнуляем
		for (int i = 0; i < 16; i++)
			if (FG[i])
			{
				if (myNumber[i] == myNumber[15])
				{
					Win++;
					FG[i] = 0;
					ten = 1;
					if (Win == 8)
						win();
				}

			}
		if (!ten)
		{
			FG[15] = 1;
			timer1->Start();
		}
		else ten = 0;
	}
}
};
}
