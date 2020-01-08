#pragma once
#include "SearchForm.h"
#include"MyGameForm.h"
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
	/// Сводка для MainFormForUser
	/// </summary>
	public ref class MainFormForUser : public System::Windows::Forms::Form
	{
	public:
		String^ FileName1;
		MainFormForUser(void)
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
		~MainFormForUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panelWithList1;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  buttonFnd;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Countre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Numbers;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::Panel^  Main_panel1;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button_poisk;
	private: System::Windows::Forms::Button^  buttonOpenFG;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ListBox^  listBox;
	private: System::Windows::Forms::Button^  button2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainFormForUser::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelWithList1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->buttonFnd = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Countre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Numbers = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Main_panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button_poisk = (gcnew System::Windows::Forms::Button());
			this->buttonOpenFG = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panelWithList1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->Main_panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(577, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainFormForUser::button1_Click);
			// 
			// panelWithList1
			// 
			this->panelWithList1->Controls->Add(this->button4);
			this->panelWithList1->Controls->Add(this->buttonFnd);
			this->panelWithList1->Controls->Add(this->dataGridView1);
			this->panelWithList1->Location = System::Drawing::Point(0, 32);
			this->panelWithList1->Name = L"panelWithList1";
			this->panelWithList1->Size = System::Drawing::Size(654, 287);
			this->panelWithList1->TabIndex = 12;
			this->panelWithList1->Visible = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(539, 259);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Закрыть";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainFormForUser::button4_Click_1);
			// 
			// buttonFnd
			// 
			this->buttonFnd->Location = System::Drawing::Point(22, 259);
			this->buttonFnd->Name = L"buttonFnd";
			this->buttonFnd->Size = System::Drawing::Size(90, 23);
			this->buttonFnd->TabIndex = 4;
			this->buttonFnd->Text = L"Найти";
			this->buttonFnd->UseVisualStyleBackColor = true;
			this->buttonFnd->Click += gcnew System::EventHandler(this, &MainFormForUser::buttonFnd_Click_1);
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
			this->dataGridView1->Location = System::Drawing::Point(12, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(630, 254);
			this->dataGridView1->TabIndex = 0;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			this->ID->Resizable = System::Windows::Forms::DataGridViewTriState::True;
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
			// Main_panel1
			// 
			this->Main_panel1->AutoSize = true;
			this->Main_panel1->Controls->Add(this->label7);
			this->Main_panel1->Controls->Add(this->label6);
			this->Main_panel1->Controls->Add(this->textBox1);
			this->Main_panel1->Controls->Add(this->button_poisk);
			this->Main_panel1->Controls->Add(this->buttonOpenFG);
			this->Main_panel1->Controls->Add(this->label5);
			this->Main_panel1->Controls->Add(this->listBox);
			this->Main_panel1->Location = System::Drawing::Point(-1, 25);
			this->Main_panel1->Name = L"Main_panel1";
			this->Main_panel1->Size = System::Drawing::Size(657, 294);
			this->Main_panel1->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(334, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Список файлов";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Поиск файлов";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(202, 20);
			this->textBox1->TabIndex = 6;
			// 
			// button_poisk
			// 
			this->button_poisk->Location = System::Drawing::Point(231, 49);
			this->button_poisk->Name = L"button_poisk";
			this->button_poisk->Size = System::Drawing::Size(86, 21);
			this->button_poisk->TabIndex = 1;
			this->button_poisk->Text = L"Найти";
			this->button_poisk->UseVisualStyleBackColor = true;
			this->button_poisk->Click += gcnew System::EventHandler(this, &MainFormForUser::button_poisk_Click);
			// 
			// buttonOpenFG
			// 
			this->buttonOpenFG->Enabled = false;
			this->buttonOpenFG->Location = System::Drawing::Point(334, 257);
			this->buttonOpenFG->Name = L"buttonOpenFG";
			this->buttonOpenFG->Size = System::Drawing::Size(75, 23);
			this->buttonOpenFG->TabIndex = 3;
			this->buttonOpenFG->Text = L"Открыть";
			this->buttonOpenFG->UseVisualStyleBackColor = true;
			this->buttonOpenFG->Click += gcnew System::EventHandler(this, &MainFormForUser::buttonOpenFile_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label5->Location = System::Drawing::Point(457, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Список пуст";
			// 
			// listBox
			// 
			this->listBox->BackColor = System::Drawing::SystemColors::HighlightText;
			this->listBox->FormattingEnabled = true;
			this->listBox->Location = System::Drawing::Point(334, 34);
			this->listBox->Name = L"listBox";
			this->listBox->Size = System::Drawing::Size(308, 212);
			this->listBox->TabIndex = 1;
			this->listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainFormForUser::listBox_SelectedIndexChanged_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Игра";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainFormForUser::button2_Click);
			// 
			// MainFormForUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 322);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panelWithList1);
			this->Controls->Add(this->Main_panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			
			this->Text = L"Список лекарств ";
			this->Activated += gcnew System::EventHandler(this, &MainFormForUser::MainFormForUser_Activated_1);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainFormForUser::MainFormForUser_FormClosed);
			this->panelWithList1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->Main_panel1->ResumeLayout(false);
			this->Main_panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	
			  private: void NoStrInFile()
			  {
				 
				  buttonFnd->Enabled = false;
				

			  }

				  private: void YesStrInFile()
				  {
					 
					  buttonFnd->Enabled = true;
					 

				  }

	private: System::Void buttonOpenFG_Click(System::Object^  sender, System::EventArgs^  e) {
		panelWithList1->Show();
		button1->Hide();

		try {
			String^ str;
			String^ fileName = Convert::ToString(listBox->Items[listBox->SelectedIndex]);
			fileName = fileName + ".txt";
			FileName1 = fileName;

			try {


				StreamReader^ fptr = gcnew StreamReader(fileName);
				int i = 0;
				while ((str = fptr->ReadLine()) != nullptr)
				{
					dataGridView1->Rows->Add();
					dataGridView1->Rows[i]->Cells[0]->Value = (i + 1);//пронумеровать (id)
					cli::array<String^>^ strtalk = str->Split((Char)'#');//Делим на части
					for (int j = 1; j < 6; j++)
					{
						dataGridView1->Rows[i]->Cells[j]->Value = strtalk[j - 1];
					}
					i++;
				}
				if (!i)
					NoStrInFile();

				fptr->Close();

			}
			catch (Exception^ E)
			{

				MessageBox::Show("Ошибка");
			}

		}
		catch (Exception^ E)
		{
			MessageBox::Show("Невозможно открыть файл");
		}

	}


				  private: System::Void textBox1_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
					  textBox1->Clear();
				  }

private: System::Void listBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {


	if (listBox->SelectedItem != nullptr)

	{
		buttonOpenFG->Enabled = true;
		
	}
	else {
		buttonOpenFG->Enabled = false;
		
	}
}

		 private: System::Void buttonOpenFile_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 panelWithList1->Show();
			 button1->Hide();

			 try {
				 String^ str;
				 String^ file = Convert::ToString(listBox->Items[listBox->SelectedIndex]);
				 file = file + ".txt";
				 FileName1 = file;

				 try {


					 StreamReader^ fptr = gcnew StreamReader(file);
					 int i = 0;
					 while ((str = fptr->ReadLine()) != nullptr)
					 {
						 dataGridView1->Rows->Add();
						 dataGridView1->Rows[i]->Cells[0]->Value = (i + 1);//пронумеровать (id)
						 cli::array<String^>^ strtalk = str->Split((Char)'#');//Делим на части
						 for (int j = 1; j < 6; j++)
						 {
							 dataGridView1->Rows[i]->Cells[j]->Value = strtalk[j - 1];
						 }
						 i++;
					 }
					 if (!i)
						 NoStrInFile();

					 fptr->Close();

				 }
				 catch (Exception^ E)
				 {

					 MessageBox::Show("Ошибка");
				 }

			 }
			 catch (Exception^ E)
			 {
				 MessageBox::Show("Невозможно открыть файл");
			 }

		 }




		 private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 panelWithList1->Hide();
			 button1->Show();
		 }

private: System::Void buttonFnd_Click(System::Object^  sender, System::EventArgs^  e) {


	SearchForm ^ Fixx = gcnew SearchForm();
	Fixx->str = FileName1;
	Fixx->ShowDialog();


}

		 private: System::Void panelWithList_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView1->Rows->Clear();
		 }


private: System::Void MainFormForUser_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	this->Close();
	Application::OpenForms[0]->Show();
}
private: System::Void MainFormForUser_Activated_1(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	if (panelWithList1->Visible)
	{

		try {

			String^ str;
			String^ fileName = Convert::ToString(listBox->Items[listBox->SelectedIndex]);
			fileName = fileName + ".txt";
			FileName1 = fileName;

			try {


				StreamReader^ lol = gcnew StreamReader(fileName);
				int i = 0;
				while ((str = lol->ReadLine()) != nullptr)
				{
					dataGridView1->Rows->Add();
					dataGridView1->Rows[i]->Cells[0]->Value = (i + 1);//пронумеровать (id)
					cli::array<String^>^ strtalk = str->Split((Char)'#');//Делим на части

					for (int j = 1; j < 6; j++)
					{
						dataGridView1->Rows[i]->Cells[j]->Value = strtalk[j - 1];
					}
					i++;
				}
				if (!i)
					NoStrInFile();
				else
					YesStrInFile();

				lol->Close();

			}
			catch (Exception^ E)
			{
				MessageBox::Show("Ошибка");


			}

		}
		catch (Exception^ E)
		{
			MessageBox::Show("Невозможно открыть файл");
		}
	}
	if (!(panelWithList1->Visible))
	{

		buttonOpenFG->Enabled = false;
		listBox->Items->Clear();
		textBox1->Clear();

		try {

			buttonOpenFG->Enabled = false;
			System::IO::StreamReader^ new1 = gcnew StreamReader("listbox.txt");

			cli::array<String^>^ nmk = new1->ReadToEnd()->Split(gcnew cli::array<String^>{ "*" }, StringSplitOptions::RemoveEmptyEntries);

			for (int i = 0; i < nmk->Length; i++)
			{
				listBox->Items->Add(nmk[i]);
			}
			new1->Close();
			if (!(nmk->Length))
			{
				label5->Show();


				buttonOpenFG->Enabled = false;

				//button_poisk->Enabled = false;
			}
		}
		catch (Exception^ E)
		{
			MessageBox::Show("Список файлов не доступен");
		}

		if (listBox->Items->Count > 0)
			label5->Visible = false;
		else label5->Visible = true;
	}
}
private: System::Void button_poisk_Click(System::Object^  sender, System::EventArgs^  e) {
	if (listBox->Items->Count > 0)
	{
		if ((textBox1->Text) != String::Empty && !String::IsNullOrWhiteSpace(textBox1->Text))
		{

			int index = listBox->FindString(textBox1->Text);
			if (index >= 0)
			{
				//выделяем строку
				listBox->SetSelected(index, true);
			}
			else
			{
				for (int i = 0; i < listBox->Items->Count; i++)
					listBox->SetSelected(i, false);
				MessageBox::Show("Файл не найден");
			}
		}
		else
			MessageBox::Show("Введите имя искомого файла!");
	}
	else
		MessageBox::Show("Список пуст!");
}


		 private: System::Void Main_panel_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
			 label5->Hide();
}
private: System::Void listBox_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {

	if (listBox->SelectedItem != nullptr)

	{
		buttonOpenFG->Enabled = true;
		
	}
	else {
		buttonOpenFG->Enabled = false;
		
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
	
}
private: System::Void buttonFnd_Click_1(System::Object^  sender, System::EventArgs^  e) {
	SearchForm ^ Fi = gcnew SearchForm();
	Fi->str = FileName1;
	Fi->ShowDialog();

}
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
	panelWithList1->Hide();

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	MyGameForm ^ aaa = gcnew MyGameForm();

	aaa->Show();
}
};
}
