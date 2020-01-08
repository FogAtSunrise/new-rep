#pragma once
#include <iostream>
#include <fstream>


namespace MedList {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;



	/// <summary>
	/// Сводка для EditForm
	/// </summary>
	public ref class EditForm : public System::Windows::Forms::Form
	{
	public:
		int Cout;
		int num_str;
	private: System::Windows::Forms::Label^  label24;
	public:
	private: System::Windows::Forms::Label^  label25;
	public:		 String^ Name;
		EditForm(void)
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
		~EditForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label18;
	protected:
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBoxzena;
	private: System::Windows::Forms::TextBox^  textBoxnumber;
	private: System::Windows::Forms::TextBox^  textBoxdate;
	private: System::Windows::Forms::TextBox^  textBoxcountre;
	private: System::Windows::Forms::TextBox^  textBoxname;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Panel^  panel_Change;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;


	private: System::Windows::Forms::Button^  buttonOK;
	private: System::Windows::Forms::TextBox^  textBoxID;

	private: System::Windows::Forms::Label^  label21;

	protected:







	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EditForm::typeid));
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxzena = (gcnew System::Windows::Forms::TextBox());
			this->textBoxnumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxdate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxcountre = (gcnew System::Windows::Forms::TextBox());
			this->textBoxname = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel_Change = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel_Change->SuspendLayout();
			this->SuspendLayout();
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label18->Location = System::Drawing::Point(157, 147);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(89, 13);
			this->label18->TabIndex = 112;
			this->label18->Text = L"Не верный ввод";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(151, 220);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(81, 13);
			this->label14->TabIndex = 108;
			this->label14->Text = L"Пустая строка";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(157, 181);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(81, 13);
			this->label13->TabIndex = 107;
			this->label13->Text = L"Пустая строка";
			// 
			// textBox2
			// 
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox2->Location = System::Drawing::Point(227, 128);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(46, 20);
			this->textBox2->TabIndex = 105;
			this->textBox2->Text = L"ГГГГ";
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->Location = System::Drawing::Point(194, 128);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(27, 20);
			this->textBox1->TabIndex = 104;
			this->textBox1->Text = L"ММ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(154, 111);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(81, 13);
			this->label12->TabIndex = 101;
			this->label12->Text = L"Пустая строка";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(157, 73);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 13);
			this->label7->TabIndex = 98;
			this->label7->Text = L"Пустая строка";
			// 
			// textBoxzena
			// 
			this->textBoxzena->Location = System::Drawing::Point(160, 197);
			this->textBoxzena->Name = L"textBoxzena";
			this->textBoxzena->Size = System::Drawing::Size(81, 20);
			this->textBoxzena->TabIndex = 97;
			// 
			// textBoxnumber
			// 
			this->textBoxnumber->Location = System::Drawing::Point(160, 163);
			this->textBoxnumber->Name = L"textBoxnumber";
			this->textBoxnumber->Size = System::Drawing::Size(92, 20);
			this->textBoxnumber->TabIndex = 96;
			// 
			// textBoxdate
			// 
			this->textBoxdate->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxdate->Location = System::Drawing::Point(163, 128);
			this->textBoxdate->Name = L"textBoxdate";
			this->textBoxdate->Size = System::Drawing::Size(27, 20);
			this->textBoxdate->TabIndex = 95;
			this->textBoxdate->Text = L"ДД";
			// 
			// textBoxcountre
			// 
			this->textBoxcountre->Location = System::Drawing::Point(163, 89);
			this->textBoxcountre->Name = L"textBoxcountre";
			this->textBoxcountre->Size = System::Drawing::Size(173, 20);
			this->textBoxcountre->TabIndex = 94;
			// 
			// textBoxname
			// 
			this->textBoxname->Location = System::Drawing::Point(163, 50);
			this->textBoxname->Name = L"textBoxname";
			this->textBoxname->Size = System::Drawing::Size(173, 20);
			this->textBoxname->TabIndex = 93;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 200);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 13);
			this->label6->TabIndex = 92;
			this->label6->Text = L"Цена не выше";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 166);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 13);
			this->label5->TabIndex = 91;
			this->label5->Text = L"Номера аптек (через \",\")";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 13);
			this->label4->TabIndex = 90;
			this->label4->Text = L"Дата производства";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 13);
			this->label3->TabIndex = 89;
			this->label3->Text = L"Страна-производитель";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 13);
			this->label2->TabIndex = 88;
			this->label2->Text = L"Название лекарства";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(160, 73);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(180, 13);
			this->label9->TabIndex = 100;
			this->label9->Text = L"Не должно быть пробелов, #, %, $";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(161, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(160, 13);
			this->label8->TabIndex = 99;
			this->label8->Text = L"Длина строки  от 1 до 20 букв";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(154, 112);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(180, 13);
			this->label10->TabIndex = 103;
			this->label10->Text = L"Не должно быть пробелов, #, %, $";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(154, 111);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(160, 13);
			this->label11->TabIndex = 102;
			this->label11->Text = L"Длина строки  от 1 до 20 букв";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::Red;
			this->label19->Location = System::Drawing::Point(157, 181);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(164, 13);
			this->label19->TabIndex = 111;
			this->label19->Text = L"Номера не должны совпадать!";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(157, 181);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(91, 13);
			this->label15->TabIndex = 109;
			this->label15->Text = L"Лишняя запятая";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::Red;
			this->label17->Location = System::Drawing::Point(151, 220);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(117, 13);
			this->label17->TabIndex = 110;
			this->label17->Text = L"Недопустимая сумма";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::Red;
			this->label16->Location = System::Drawing::Point(157, 147);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(81, 13);
			this->label16->TabIndex = 106;
			this->label16->Text = L"Пустая строка";
			// 
			// panel_Change
			// 
			this->panel_Change->Controls->Add(this->button1);
			this->panel_Change->Controls->Add(this->label23);
			this->panel_Change->Controls->Add(this->label22);
			this->panel_Change->Controls->Add(this->textBox2);
			this->panel_Change->Controls->Add(this->label14);
			this->panel_Change->Controls->Add(this->label13);
			this->panel_Change->Controls->Add(this->label16);
			this->panel_Change->Controls->Add(this->textBoxzena);
			this->panel_Change->Controls->Add(this->textBoxnumber);
			this->panel_Change->Controls->Add(this->label6);
			this->panel_Change->Controls->Add(this->label5);
			this->panel_Change->Controls->Add(this->textBox1);
			this->panel_Change->Controls->Add(this->label19);
			this->panel_Change->Controls->Add(this->label15);
			this->panel_Change->Controls->Add(this->label12);
			this->panel_Change->Controls->Add(this->label17);
			this->panel_Change->Controls->Add(this->label2);
			this->panel_Change->Controls->Add(this->label7);
			this->panel_Change->Controls->Add(this->label3);
			this->panel_Change->Controls->Add(this->label4);
			this->panel_Change->Controls->Add(this->textBoxname);
			this->panel_Change->Controls->Add(this->textBoxdate);
			this->panel_Change->Controls->Add(this->textBoxcountre);
			this->panel_Change->Controls->Add(this->label8);
			this->panel_Change->Controls->Add(this->label9);
			this->panel_Change->Controls->Add(this->label11);
			this->panel_Change->Controls->Add(this->label10);
			this->panel_Change->Controls->Add(this->label18);
			this->panel_Change->Enabled = false;
			this->panel_Change->Location = System::Drawing::Point(277, 22);
			this->panel_Change->Name = L"panel_Change";
			this->panel_Change->Size = System::Drawing::Size(363, 302);
			this->panel_Change->TabIndex = 113;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(241, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 29);
			this->button1->TabIndex = 115;
			this->button1->Text = L"Сохранить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditForm::button1_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(53, 15);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(296, 15);
			this->label23->TabIndex = 114;
			this->label23->Text = L"Исправьте поля записи и нажмите \"Сохранить\":";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(47, 15);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(0, 13);
			this->label22->TabIndex = 113;
			// 
			// buttonOK
			// 
			this->buttonOK->Location = System::Drawing::Point(144, 90);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(55, 27);
			this->buttonOK->TabIndex = 116;
			this->buttonOK->Text = L"Ok";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &EditForm::buttonOK_Click);
			// 
			// textBoxID
			// 
			this->textBoxID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxID->Location = System::Drawing::Point(94, 90);
			this->textBoxID->Multiline = true;
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(44, 27);
			this->textBoxID->TabIndex = 117;
			this->textBoxID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EditForm::textBox3_KeyPress);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(67, 95);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(21, 16);
			this->label21->TabIndex = 118;
			this->label21->Text = L"ID";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(12, 22);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(214, 13);
			this->label24->TabIndex = 119;
			this->label24->Text = L"Введите ID записи, которую необходимо";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(12, 39);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(97, 13);
			this->label25->TabIndex = 120;
			this->label25->Text = L"отредактировать:";
			// 
			// EditForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(652, 336);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->textBoxID);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->panel_Change);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"EditForm";
			this->Text = L"Изменение записи";
			this->Load += gcnew System::EventHandler(this, &EditForm::EditForm_Load);
			this->panel_Change->ResumeLayout(false);
			this->panel_Change->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EditForm_Load(System::Object^  sender, System::EventArgs^  e) {
		panel_Change->Enabled = false;
		label7->Hide();
		label8->Hide();
		label9->Hide();
		label10->Hide();
		label11->Hide();
		label12->Hide();
		label13->Hide();
		label15->Hide();
		label16->Hide();
		label18->Hide();
		label14->Hide();
		label17->Hide();
		label19->Hide();
		textBoxname->Clear();
		textBoxcountre->Clear();
		textBoxdate->Clear();
		textBox1->Clear();
		textBox2->Clear();
		textBoxnumber->Clear();
		textBoxzena->Clear();
		textBoxID->Clear();
	}
private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((!(e->KeyChar > 47) || !(e->KeyChar < 58)) && (!(e->KeyChar == 8))) //запрет на ввод кроме цифр, запятой и bsp
	{
		e->Handled = true;
	}
}

private: System::Void buttonOK_Click(System::Object^  sender, System::EventArgs^  e) {

	try
	{
		if ((textBoxID->Text) != String::Empty)
		{
			 num_str = Convert::ToInt32(textBoxID->Text);

			if (Cout != 0)
			{
				if (num_str <= Cout && num_str != 0)
				{
					StreamReader^ f = gcnew StreamReader(Name);
					StreamWriter ^dop = gcnew StreamWriter("write.txt");
					String ^current_str;
					String ^current;
					for (int i = 0; i < Cout; i++)
					{
						current = f->ReadLine();
						dop->WriteLine(current);
						if (i == num_str - 1)
							current_str = current;
					}
					dop->Close();
					f->Close();
					panel_Change->Enabled = true;
					textBoxname->Clear();
					textBoxcountre->Clear();
					textBoxdate->Clear();
					textBox1->Clear();
					textBox2->Clear();
					textBoxnumber->Clear();
					textBoxzena->Clear();
					cli::array<String^>^ strtalk = current_str->Split((Char)'#');
					textBoxname->Text = strtalk[0];
					textBoxcountre->Text = strtalk[1];

					cli::array<String^>^ Data1 = strtalk[2]->Split((Char)'.');
					textBoxdate->Text = Data1[0];
					textBox1->Text = Data1[1];
					textBox2->Text = Data1[2];
					textBoxnumber->Text = strtalk[3];
					textBoxzena->Text = strtalk[4];

						}
				else
					MessageBox::Show("Неверный ID записи");
				}
			else
				MessageBox::Show("Нет ни одной записи!");

		}
		else
			MessageBox::Show("Не ввели число!");

	}
	catch (Exception^ E)
	{
		MessageBox::Show("Не удалось открыть файл!");
	}

}

private: System::Void textBoxzena_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

	if ((!(e->KeyChar > 47) || !(e->KeyChar < 58)) && (!(e->KeyChar == 8))) //запрет на ввод кроме цифр, запятой и bsp
	{
		e->Handled = true;
	}
}
private: System::Void textBoxnumber_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((!(e->KeyChar > 47) || !(e->KeyChar < 58)) && (!(e->KeyChar == 44)) && (!(e->KeyChar == 8))) //запрет на ввод кроме цифр, запятой и bsp
	{
		e->Handled = true;
	}
}
private: System::Void textBoxdate_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((!(e->KeyChar > 47) || !(e->KeyChar < 58)) && (!(e->KeyChar == 8))) //запрет на ввод кроме цифр, запятой и bsp
	{
		e->Handled = true;
	}


}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((!(e->KeyChar > 47) || !(e->KeyChar < 58)) && (!(e->KeyChar == 8))) //запрет на ввод кроме цифр, запятой и bsp
	{
		e->Handled = true;
	}
}

private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((!(e->KeyChar > 47) || !(e->KeyChar < 58)) && (!(e->KeyChar == 8))) //запрет на ввод кроме цифр, запятой и bsp
	{
		e->Handled = true;
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	label7->Hide();
	label8->Hide();
	label9->Hide();
	label17->Hide();
	label10->Hide();
	label11->Hide();
	label12->Hide();
	label16->Hide();
	label13->Hide();
	label14->Hide();
	label15->Hide();
	label19->Hide();
	label18->Hide();
	//if ( (textBoxdate->Text) != String::Empty && (textBoxnumber->Text) != String::Empty && (textBoxzena->Text) != String::Empty)

	String ^name;
	String ^countre;
	int dd, mm, gg;
	String ^ number = textBoxzena->Text;


	//Проверка названия

	name = textBoxname->Text;
	if (String::IsNullOrWhiteSpace(name) || (textBoxname->Text) == String::Empty)
		label7->Show();
	else
		if ((textBoxname->Text)->Length < 2 || (textBoxname->Text)->Length>20)
			label8->Show();
		else
			if (name->Contains(" ") || name->Contains("#") || name->Contains("%") || name->Contains("$"))
				label9->Show();


	//Проверка страны

	countre = textBoxcountre->Text;
	if (String::IsNullOrWhiteSpace(countre) || (textBoxcountre->Text) == String::Empty)
		label12->Show();
	else
		if ((textBoxcountre->Text)->Length < 2 || (textBoxcountre->Text)->Length>20)
			label11->Show();
		else
			if (countre->Contains(" ") || countre->Contains("#") || countre->Contains("%") || countre->Contains("$"))
				label10->Show();

	//Проверка даты


	if ((textBoxdate->Text) == String::Empty || (textBox1->Text) == String::Empty || (textBox2->Text) == String::Empty || String::IsNullOrWhiteSpace(textBoxdate->Text) || String::IsNullOrWhiteSpace(textBox1->Text) || String::IsNullOrWhiteSpace(textBox2->Text))
		label16->Show();
	else {
		String^ bly = textBoxdate->Text;
		String^ ly = textBox1->Text;
		String^ y = textBox2->Text;
		if (bly[0] == '0' || ly[0] == '0' || ly[0] == '0')
			label18->Show();



		dd = Convert::ToInt32(textBoxdate->Text);
		mm = Convert::ToInt32(textBox1->Text);
		gg = Convert::ToInt32(textBox2->Text);
		if (dd < 1 || dd > 30 || mm < 1 || mm>12 || gg < 1980 || gg > 2019)
			label18->Show();

	}

	//Номера аптек

	if ((textBoxnumber->Text) == String::Empty)
		label13->Show();
	else if (textBoxnumber->Text[textBoxnumber->Text->Length - 1] == ',')
		label15->Show();
	else {
		String^ nmkhr = textBoxnumber->Text;
		cli::array<String^>^ bhh = nmkhr->Split(gcnew cli::array<String^>{ "," }, StringSplitOptions::RemoveEmptyEntries);

		for (int i = 0; i < bhh->Length - 1; i++)
		{

			for (int j = i + 1; j < bhh->Length; j++)
			{
				if (bhh[i] == bhh[j])
					label19->Show();
			}
		}
	}

	//Цена

	if ((textBoxzena->Text) == String::Empty || (textBoxzena->Text) == String::Empty)
		label14->Show();
	else if (textBoxzena->Text->Length > 9 || textBoxzena->Text == "0")
		label17->Show();

	if (!(label17->Visible || label7->Visible || label8->Visible || label9->Visible || label19->Visible || label10->Visible || label11->Visible || label12->Visible || label16->Visible || label13->Visible || label14->Visible || label15->Visible || label18->Visible))
	{
		try {

			StreamReader^ fff = gcnew StreamReader(Name);
			String^ sravn;
			for (int i = 0; i < num_str; i++)
				sravn = fff->ReadLine();
			fff->Close();
			String ^current1 = textBoxname->Text + "#" + textBoxcountre->Text + "#" + textBoxdate->Text + "." + textBox1->Text + "." + textBox2->Text + "#" + textBoxnumber->Text + "#" + textBoxzena->Text;
			if (sravn != current1)
			{
				StreamWriter^ dop3 = gcnew StreamWriter(Name);
				StreamReader ^f4 = gcnew StreamReader("write.txt");
				String ^current_str;
				for (int i = 0; i < Cout; i++)
				{
					if (i == num_str - 1)
						dop3->WriteLine(current1);
					else 	dop3->WriteLine(f4->ReadLine());

				}
				dop3->Close();
				f4->Close();

				MessageBox::Show("Запись успешно изменена!");
				EditForm_Load(sender, e);
			}
			else
			{
				MessageBox::Show("Вы не изменили ни одного поля");
			}


		}
		catch (Exception^ E)
		{
			MessageBox::Show("Ошибка открытия файла");
		}




	}




}
};
}
