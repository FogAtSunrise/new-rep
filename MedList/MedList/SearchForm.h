#pragma once
#include <string.h>
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
	/// Сводка для SearchForm
	/// </summary>
	public ref class SearchForm : public System::Windows::Forms::Form
	{
	public:
		String^ str;
		SearchForm(void)
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
		~SearchForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




















	private: System::Windows::Forms::Label^  label1;



	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Countre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Numbers;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
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
	private: System::Windows::Forms::Label^  label18;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SearchForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Countre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Numbers = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
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
			this->label18 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(11, 9);
			this->label1->MinimumSize = System::Drawing::Size(0, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(347, 16);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Заполните поля, по которым хотите начать поиск";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ID, this->Name,
					this->Countre, this->Date, this->Numbers, this->Column1
			});
			this->dataGridView1->Location = System::Drawing::Point(8, 153);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(630, 173);
			this->dataGridView1->TabIndex = 57;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			this->ID->Width = 30;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Название";
			this->Name->Name = L"Name";
			this->Name->ReadOnly = true;
			this->Name->Width = 160;
			// 
			// Countre
			// 
			this->Countre->HeaderText = L"Страна-производитель";
			this->Countre->Name = L"Countre";
			this->Countre->ReadOnly = true;
			this->Countre->Width = 150;
			// 
			// Date
			// 
			this->Date->HeaderText = L"Дата производства";
			this->Date->Name = L"Date";
			this->Date->ReadOnly = true;
			this->Date->Width = 107;
			// 
			// Numbers
			// 
			this->Numbers->HeaderText = L"Номера аптек";
			this->Numbers->Name = L"Numbers";
			this->Numbers->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Цена";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 80;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(588, 12);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(50, 13);
			this->linkLabel1->TabIndex = 58;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Помощь";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &SearchForm::linkLabel1_LinkClicked);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(517, 115);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 24);
			this->button1->TabIndex = 59;
			this->button1->Text = L"Поиск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SearchForm::button1_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::Red;
			this->label19->Location = System::Drawing::Point(460, 60);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(164, 13);
			this->label19->TabIndex = 85;
			this->label19->Text = L"Номера не должны совпадать!";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::Red;
			this->label17->Location = System::Drawing::Point(454, 99);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(117, 13);
			this->label17->TabIndex = 84;
			this->label17->Text = L"Недопустимая сумма";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(460, 60);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(91, 13);
			this->label15->TabIndex = 83;
			this->label15->Text = L"Лишняя запятая";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(454, 99);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(109, 13);
			this->label14->TabIndex = 82;
			this->label14->Text = L"Строка из пробелов";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(460, 60);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(109, 13);
			this->label13->TabIndex = 81;
			this->label13->Text = L"Строка из пробелов";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::Red;
			this->label16->Location = System::Drawing::Point(139, 137);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(109, 13);
			this->label16->TabIndex = 79;
			this->label16->Text = L"Строка из пробелов";
			// 
			// textBox2
			// 
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox2->Location = System::Drawing::Point(208, 114);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(46, 20);
			this->textBox2->TabIndex = 78;
			this->textBox2->Text = L"ГГГГ";
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SearchForm::textBox2_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->Location = System::Drawing::Point(175, 114);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(27, 20);
			this->textBox1->TabIndex = 77;
			this->textBox1->Text = L"ММ";
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SearchForm::textBox1_KeyPress);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(142, 99);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(180, 13);
			this->label10->TabIndex = 76;
			this->label10->Text = L"Не должно быть пробелов, #, %, $";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(142, 98);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(160, 13);
			this->label11->TabIndex = 75;
			this->label11->Text = L"Длина строки  от 1 до 20 букв";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(142, 98);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(109, 13);
			this->label12->TabIndex = 74;
			this->label12->Text = L"Строка из пробелов";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(142, 60);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(180, 13);
			this->label9->TabIndex = 73;
			this->label9->Text = L"Не должно быть пробелов, #, %, $";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(148, 60);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(160, 13);
			this->label8->TabIndex = 72;
			this->label8->Text = L"Длина строки  от 1 до 20 букв";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(145, 60);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(109, 13);
			this->label7->TabIndex = 71;
			this->label7->Text = L"Строка из пробелов";
			// 
			// textBoxzena
			// 
			this->textBoxzena->Location = System::Drawing::Point(457, 76);
			this->textBoxzena->Name = L"textBoxzena";
			this->textBoxzena->Size = System::Drawing::Size(81, 20);
			this->textBoxzena->TabIndex = 70;
			this->textBoxzena->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SearchForm::textBoxzena_KeyPress);
			// 
			// textBoxnumber
			// 
			this->textBoxnumber->Location = System::Drawing::Point(457, 39);
			this->textBoxnumber->Name = L"textBoxnumber";
			this->textBoxnumber->Size = System::Drawing::Size(92, 20);
			this->textBoxnumber->TabIndex = 69;
			this->textBoxnumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SearchForm::textBoxnumber_KeyPress);
			// 
			// textBoxdate
			// 
			this->textBoxdate->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxdate->Location = System::Drawing::Point(144, 114);
			this->textBoxdate->Name = L"textBoxdate";
			this->textBoxdate->Size = System::Drawing::Size(27, 20);
			this->textBoxdate->TabIndex = 68;
			this->textBoxdate->Text = L"ДД";
			this->textBoxdate->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SearchForm::textBoxdate_KeyPress);
			// 
			// textBoxcountre
			// 
			this->textBoxcountre->Location = System::Drawing::Point(144, 76);
			this->textBoxcountre->Name = L"textBoxcountre";
			this->textBoxcountre->Size = System::Drawing::Size(173, 20);
			this->textBoxcountre->TabIndex = 67;
			// 
			// textBoxname
			// 
			this->textBoxname->Location = System::Drawing::Point(145, 39);
			this->textBoxname->Name = L"textBoxname";
			this->textBoxname->Size = System::Drawing::Size(173, 20);
			this->textBoxname->TabIndex = 66;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(372, 79);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 13);
			this->label6->TabIndex = 65;
			this->label6->Text = L"Цена не выше";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(327, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 13);
			this->label5->TabIndex = 64;
			this->label5->Text = L"Номера аптек (через \",\")";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 13);
			this->label4->TabIndex = 63;
			this->label4->Text = L"Дата не раньше";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 13);
			this->label3->TabIndex = 62;
			this->label3->Text = L"Страна-производитель";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 13);
			this->label2->TabIndex = 61;
			this->label2->Text = L"Название лекарства";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label18->Location = System::Drawing::Point(139, 137);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(89, 13);
			this->label18->TabIndex = 86;
			this->label18->Text = L"Не верный ввод";
			// 
			// SearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(650, 338);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label7);
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
			this->Controls->Add(this->button1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			
			this->Text = L"Поиск";
			this->Load += gcnew System::EventHandler(this, &SearchForm::SearchForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}





	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int column[5];
		memset(column, 1, 5 * sizeof(int));
		bool no_empty = false;


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
		if ((textBoxname->Text) != String::Empty)
		{
			no_empty = true;
			if (String::IsNullOrWhiteSpace(name))
				label7->Show();
			else
				if ((textBoxname->Text)->Length < 2 || (textBoxname->Text)->Length>20)
					label8->Show();
				else
					if (name->Contains(" ") || name->Contains("#") || name->Contains("%") || name->Contains("$"))
						label9->Show();
		}
		else
			column[0] = 0;

		//Проверка страны

		countre = textBoxcountre->Text;
		if ((textBoxcountre->Text) != String::Empty)
		{
			no_empty = true;
			if (String::IsNullOrWhiteSpace(countre))
				label12->Show();
			else
				if ((textBoxcountre->Text)->Length < 2 || (textBoxcountre->Text)->Length>20)
					label11->Show();
				else
					if (countre->Contains(" ") || countre->Contains("#") || countre->Contains("%") || countre->Contains("$"))
						label10->Show();
		}
		else
			column[1] = 0;
		//Проверка даты


		if (!((textBoxdate->Text) == String::Empty && (textBox1->Text) == String::Empty && (textBox2->Text) == String::Empty))

		{
			no_empty = true;
			String^ bly = textBoxdate->Text;
			String^ ly = textBox1->Text;
			String^ y = textBox2->Text;
			if (bly[0] == '0' || ly[0] == '0' || ly[0] == '0')
				label18->Show();
			else {
			dd = Convert::ToInt32(textBoxdate->Text);
			mm = Convert::ToInt32(textBox1->Text);
			gg = Convert::ToInt32(textBox2->Text);
			if (dd < 1 || dd > 30 || mm < 1 || mm>12 || gg < 1980 || gg > 2019)
				label18->Show();
		}

			
			if (String::IsNullOrWhiteSpace(textBoxdate->Text) || String::IsNullOrWhiteSpace(textBox1->Text) || String::IsNullOrWhiteSpace(textBox2->Text))
				label16->Show();

		}
		else
			column[2] = 0;

		//Номера аптек

		if ((textBoxnumber->Text) != String::Empty)
		{
			no_empty = true;
			if (String::IsNullOrWhiteSpace(textBoxnumber->Text))
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
		}
		else
			column[3] = 0;

		//Цена

		if ((textBoxzena->Text) != String::Empty)
		{
			no_empty = true;
			if ((textBoxzena->Text) == String::Empty)
				label14->Show();
			else if (textBoxzena->Text->Length > 9 || textBoxzena->Text == "0")
				label17->Show();
		}
	
		else
			column[4] = 0;

		bool check;
	if (!(label18->Visible || label17->Visible || label7->Visible || label9->Visible || label19->Visible || label10->Visible || label11->Visible || label12->Visible || label16->Visible || label13->Visible || label14->Visible || label15->Visible || label8->Visible))
	
	if (no_empty)
		{
			
	try {
				while (0 != dataGridView1->RowCount)
				dataGridView1->Rows->RemoveAt(0);

			StreamReader^ fshop = gcnew StreamReader(str);
			String^ for_search;
			int num_of_row = 0;
			
			int i = 1;
			while ((for_search = fshop->ReadLine()) != nullptr)
			{
			check = true;
			cli::array<String^>^ strtalk = for_search->Split((Char)'#');//Делим на части

			

				if (column[0])
					if (strtalk[0] != textBoxname->Text)
						check = false;

				if (column[1])
					if (strtalk[1] != textBoxcountre->Text)
						check = false;

				if (column[2])
				{
					
					cli::array<String^>^ Data = strtalk[2]->Split(gcnew cli::array<String^>{ "." }, StringSplitOptions::RemoveEmptyEntries);
				int	ddq = Convert::ToInt32(textBoxdate->Text);
				int	mmq = Convert::ToInt32(textBox1->Text);
				int	ggq = Convert::ToInt32(textBox2->Text);
				int	dd1 = Convert::ToInt32(Data[0]);
				int	mm1 = Convert::ToInt32(Data[1]);
				int	gg1 = Convert::ToInt32(Data[2]);
				if (gg1<ggq)
					check = false;
				else
					if (mm1<mmq && gg1==ggq)
						check = false;
					else
						if (dd1<ddq && mm1 == mmq && gg1 == ggq)
							check = false;
				}

				if (column[3])
				{
					int ravn=0;
					cli::array<String^>^ bhh = strtalk[3]->Split(gcnew cli::array<String^>{ "," }, StringSplitOptions::RemoveEmptyEntries);
					cli::array<String^>^ er = textBoxnumber->Text->Split(gcnew cli::array<String^>{ "," }, StringSplitOptions::RemoveEmptyEntries);

					for (int ti = 0; ti < er->Length; ti++)
					{
						
						for (int j = 0; j < bhh->Length; j++)
						{
							if (bhh[j] == er[ti])
								ravn++;
						}
						if (!ravn)
							break;
					}
					if (ravn != er->Length)
						check = false;
				}
				if (column[4])
				{
					int	ddd = Convert::ToInt32(textBoxzena->Text);
					int	mmm = Convert::ToInt32(strtalk[4]);
						if (mmm>ddd)
						check = false;
				}



			if (check)
			{
				dataGridView1->Rows->Add();
				dataGridView1->Rows[num_of_row]->Cells[0]->Value = (i++);
				dataGridView1->Rows[num_of_row]->Cells[1]->Value = strtalk[0];
				dataGridView1->Rows[num_of_row]->Cells[2]->Value = strtalk[1];
				dataGridView1->Rows[num_of_row]->Cells[3]->Value = strtalk[2];
				dataGridView1->Rows[num_of_row]->Cells[4]->Value = strtalk[3];
				dataGridView1->Rows[num_of_row]->Cells[5]->Value = strtalk[4];
				num_of_row++;
			}
		}
	if (!num_of_row)
		MessageBox::Show("По результатам поиска ничего не было найдено!");
	fshop->Close();
					
				}
				catch (Exception^ E) {
					MessageBox::Show("Ошибка открытия файла!");
				}
			}
			else
			MessageBox::Show("Все поля пустые!\nВыберите поля для поиска");




		

}


private: System::Void SearchForm_Load(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	MessageBox::Show("Вы находитесь в меню поиска.\nНиже приведена последовательность действий нахождения нужной записи.\n\nСначала заполните те поля, по которым вы хотите осуществить поиск, оставшиеся поля оставьте пустыми, а затем нажмите кнопку Поиск для того, чтобы программа осуществила поиск внутри Базы Данных.\nПравила заполнения полей:\n-В названиях лекарства и страны-производителя должно быть от 1 до 20 символов (пробелы не допускаются)\n-Дата производства должна быть из диапазона 01.01.1980-30.12.2019, ни одно значение не должно начинаться с 0\n-Номера аптек вводятся через запятую без пробелов (запятая не может стоять в конце)\n-Цена должна быть длиной не более 9 символов\nДля выхода из меню просто закройте окно.");
}





private: System::Void textBoxdate_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((!(e->KeyChar > 47) || !(e->KeyChar < 58))  && (!(e->KeyChar == 8))) //запрет на ввод кроме цифр, запятой и bsp
	{
		e->Handled = true;
	}

}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((!(e->KeyChar > 47) || !(e->KeyChar < 58)) &&  (!(e->KeyChar == 8))) //запрет на ввод кроме цифр, запятой и bsp
	{
		e->Handled = true;
	}
}
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((!(e->KeyChar > 47) || !(e->KeyChar < 58)) &&  (!(e->KeyChar == 8))) //запрет на ввод кроме цифр, запятой и bsp
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
private: System::Void textBoxzena_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((!(e->KeyChar > 47) || !(e->KeyChar < 58))  && (!(e->KeyChar == 8))) //запрет на ввод кроме цифр, запятой и bsp
	{
		e->Handled = true;
	}
}
};
}
