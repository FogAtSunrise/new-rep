#pragma once
#include <fstream>
#include <iostream>

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
	/// Сводка для AddForm
	/// </summary>
	public ref class AddForm : public System::Windows::Forms::Form
	{
	public:
		String^ df;
		AddForm(void)
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
		~AddForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBoxname;
	private: System::Windows::Forms::TextBox^  textBoxcountre;
	private: System::Windows::Forms::TextBox^  textBoxdate;
	private: System::Windows::Forms::TextBox^  textBoxnumber;
	private: System::Windows::Forms::TextBox^  textBoxzena;
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;



	private: System::Windows::Forms::Label^  label16;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label19;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxname = (gcnew System::Windows::Forms::TextBox());
			this->textBoxcountre = (gcnew System::Windows::Forms::TextBox());
			this->textBoxdate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxnumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxzena = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Добавление нового товара:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Название лекарства";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Страна-производитель";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Дата производства";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 184);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Номера аптек (через \",\")";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 223);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Цена";
			// 
			// textBoxname
			// 
			this->textBoxname->Location = System::Drawing::Point(136, 62);
			this->textBoxname->Name = L"textBoxname";
			this->textBoxname->Size = System::Drawing::Size(173, 20);
			this->textBoxname->TabIndex = 6;
			// 
			// textBoxcountre
			// 
			this->textBoxcountre->Location = System::Drawing::Point(136, 103);
			this->textBoxcountre->Name = L"textBoxcountre";
			this->textBoxcountre->Size = System::Drawing::Size(173, 20);
			this->textBoxcountre->TabIndex = 7;
			// 
			// textBoxdate
			// 
			this->textBoxdate->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxdate->Location = System::Drawing::Point(136, 141);
			this->textBoxdate->Name = L"textBoxdate";
			this->textBoxdate->Size = System::Drawing::Size(27, 20);
			this->textBoxdate->TabIndex = 8;
			this->textBoxdate->Text = L"ДД";
			this->textBoxdate->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddForm::textBoxdate_KeyPress);
			// 
			// textBoxnumber
			// 
			this->textBoxnumber->Location = System::Drawing::Point(136, 181);
			this->textBoxnumber->Name = L"textBoxnumber";
			this->textBoxnumber->Size = System::Drawing::Size(163, 20);
			this->textBoxnumber->TabIndex = 9;
			this->textBoxnumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddForm::textBoxnumber_KeyPress);
			// 
			// textBoxzena
			// 
			this->textBoxzena->Location = System::Drawing::Point(136, 220);
			this->textBoxzena->Name = L"textBoxzena";
			this->textBoxzena->Size = System::Drawing::Size(81, 20);
			this->textBoxzena->TabIndex = 10;
			this->textBoxzena->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddForm::textBoxzena_KeyPress);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(122, 259);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(84, 23);
			this->buttonAdd->TabIndex = 11;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &AddForm::buttonAdd_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(273, 9);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(50, 13);
			this->linkLabel1->TabIndex = 12;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Помощь";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AddForm::linkLabel1_LinkClicked);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(136, 87);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Пустая строка";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(139, 87);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(160, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Длина строки  от 1 до 20 букв";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(136, 87);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(180, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Не должно быть пробелов, #, %, $";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(139, 126);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(180, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Не должно быть пробелов, #, %, $";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(139, 125);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(160, 13);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Длина строки  от 1 до 20 букв";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(139, 125);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(81, 13);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Пустая строка";
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->Location = System::Drawing::Point(167, 141);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(27, 20);
			this->textBox1->TabIndex = 19;
			this->textBox1->Text = L"ММ";
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox2->Location = System::Drawing::Point(200, 141);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(46, 20);
			this->textBox2->TabIndex = 20;
			this->textBox2->Text = L"ГГГГ";
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddForm::textBox2_KeyPress);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::Red;
			this->label16->Location = System::Drawing::Point(136, 162);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(81, 13);
			this->label16->TabIndex = 24;
			this->label16->Text = L"Пустая ячейка";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label18->Location = System::Drawing::Point(139, 162);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(89, 13);
			this->label18->TabIndex = 26;
			this->label18->Text = L"Не верный ввод";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(139, 204);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(81, 13);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Пустая строка";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(139, 243);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(81, 13);
			this->label14->TabIndex = 28;
			this->label14->Text = L"Пустая строка";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(139, 204);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(91, 13);
			this->label15->TabIndex = 29;
			this->label15->Text = L"Лишняя запятая";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::Red;
			this->label17->Location = System::Drawing::Point(139, 243);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(117, 13);
			this->label17->TabIndex = 30;
			this->label17->Text = L"Недопустимая сумма";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::Red;
			this->label19->Location = System::Drawing::Point(139, 204);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(164, 13);
			this->label19->TabIndex = 31;
			this->label19->Text = L"Номера не должны совпадать!";
			// 
			// AddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(335, 294);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->textBoxzena);
			this->Controls->Add(this->textBoxnumber);
			this->Controls->Add(this->textBoxdate);
			this->Controls->Add(this->textBoxcountre);
			this->Controls->Add(this->textBoxname);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AddForm";
			this->Text = L"Добавление записи";
			this->Load += gcnew System::EventHandler(this, &AddForm::AddForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e) {

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
			if (bly[0]=='0' || ly[0] == '0' || ly[0] == '0')
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

			for (int i = 0; i < bhh->Length-1; i++)
			{
				
				for (int j = i+1; j < bhh->Length; j++)
				{
					if (Convert::ToInt32(bhh[i])== Convert::ToInt32(bhh[j]))
						label19->Show();
				}
			}
		}
		
		//Цена

		if ((textBoxzena->Text) == String::Empty || (textBoxzena->Text) == String::Empty)
			label14->Show();
		else if (textBoxzena->Text->Length > 9 || textBoxzena->Text == "0")
			label17->Show();

		if (!(label17->Visible || label7->Visible || label8->Visible || label9->Visible || label10->Visible || label11->Visible || label12->Visible || label16->Visible || label13->Visible || label14->Visible || label15->Visible || label19->Visible || label18->Visible))
		{
			try {
				StreamWriter^ fptr = gcnew StreamWriter(df, true);
				fptr->WriteLine(textBoxname->Text + "#" + textBoxcountre->Text + "#" + textBoxdate->Text + "." + textBox1->Text + "." + textBox2->Text + "#" + textBoxnumber->Text + "#" + textBoxzena->Text);
				fptr->Close();
				this->Close();
				

			}
			catch (Exception^ E)
			{
				MessageBox::Show("Ошибка открытия файла");
			}




		}
	
	}
private: System::Void AddForm_Load(System::Object^  sender, System::EventArgs^  e) {
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
	if ((!(e->KeyChar > 47) || !(e->KeyChar < 58)) &&  (!(e->KeyChar == 8))) //запрет на ввод кроме цифр, запятой и bsp
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

private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	MessageBox::Show("Вы находитесь в меню ввода очередной записи.\nНиже приведены правила для корректного ввода данных\n\n- Ни одно из полей не может быть пустым или состоящим из одних пробелов\n-В названиях лекарства и страны-производителя должно быть от 1 до 20 символов (пробелы не допускаются)\n-Дата производства должна быть из диапазона 01.01.1980-30.12.2019, ни одно значение не должно начинаться с 0\n-Номера аптек вводятся через запятую без пробелов (запятая не может стоять в конце)\n-Цена должна быть длиной не более 9 символов\nДля выхода из меню просто закройте окно (при добавлении записи, выход из меню осуществляется автоматически).");
}
};
}
