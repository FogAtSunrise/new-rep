#include "MainForm.h"
#include "MainFormForUser.h"


#pragma once

namespace MedList {
	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для vhod
	/// </summary>
	public ref class vhod : public System::Windows::Forms::Form
	{
	public:
		vhod(void)
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
		~vhod()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel_VvodPar;
	private: System::Windows::Forms::TextBox^  textBox_Par;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label_Mistake;
	private: System::Windows::Forms::Button^  button_Vhod;
	private: System::Windows::Forms::Button^  button_Nazad;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel_Main;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button_Worker;
	private: System::Windows::Forms::Button^  button_User;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(vhod::typeid));
			this->flowLayoutPanel_VvodPar = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_Par = (gcnew System::Windows::Forms::TextBox());
			this->label_Mistake = (gcnew System::Windows::Forms::Label());
			this->button_Vhod = (gcnew System::Windows::Forms::Button());
			this->button_Nazad = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel_Main = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_Worker = (gcnew System::Windows::Forms::Button());
			this->button_User = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel_VvodPar->SuspendLayout();
			this->flowLayoutPanel_Main->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel_VvodPar
			// 
			this->flowLayoutPanel_VvodPar->Controls->Add(this->label1);
			this->flowLayoutPanel_VvodPar->Controls->Add(this->textBox_Par);
			this->flowLayoutPanel_VvodPar->Controls->Add(this->label_Mistake);
			this->flowLayoutPanel_VvodPar->Controls->Add(this->button_Vhod);
			this->flowLayoutPanel_VvodPar->Controls->Add(this->button_Nazad);
			this->flowLayoutPanel_VvodPar->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel_VvodPar->Location = System::Drawing::Point(224, 83);
			this->flowLayoutPanel_VvodPar->Name = L"flowLayoutPanel_VvodPar";
			this->flowLayoutPanel_VvodPar->Size = System::Drawing::Size(223, 125);
			this->flowLayoutPanel_VvodPar->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Введите пароль:";
			// 
			// textBox_Par
			// 
			this->textBox_Par->Location = System::Drawing::Point(3, 16);
			this->textBox_Par->Name = L"textBox_Par";
			this->textBox_Par->Size = System::Drawing::Size(216, 20);
			this->textBox_Par->TabIndex = 0;
			// 
			// label_Mistake
			// 
			this->label_Mistake->AutoSize = true;
			this->label_Mistake->ForeColor = System::Drawing::Color::Red;
			this->label_Mistake->Location = System::Drawing::Point(3, 39);
			this->label_Mistake->Name = L"label_Mistake";
			this->label_Mistake->Size = System::Drawing::Size(101, 13);
			this->label_Mistake->TabIndex = 3;
			this->label_Mistake->Text = L"Не верный пароль";
			this->label_Mistake->Visible = false;
			// 
			// button_Vhod
			// 
			this->button_Vhod->Location = System::Drawing::Point(3, 55);
			this->button_Vhod->Name = L"button_Vhod";
			this->button_Vhod->Size = System::Drawing::Size(216, 26);
			this->button_Vhod->TabIndex = 1;
			this->button_Vhod->Text = L"Вход";
			this->button_Vhod->UseVisualStyleBackColor = true;
			this->button_Vhod->Click += gcnew System::EventHandler(this, &vhod::button_Vhod_Click);
			// 
			// button_Nazad
			// 
			this->button_Nazad->Location = System::Drawing::Point(3, 87);
			this->button_Nazad->Name = L"button_Nazad";
			this->button_Nazad->Size = System::Drawing::Size(216, 26);
			this->button_Nazad->TabIndex = 2;
			this->button_Nazad->Text = L"Назад";
			this->button_Nazad->UseVisualStyleBackColor = true;
			this->button_Nazad->Click += gcnew System::EventHandler(this, &vhod::button_Nazad_Click);
			// 
			// flowLayoutPanel_Main
			// 
			this->flowLayoutPanel_Main->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel_Main->AutoSize = true;
			this->flowLayoutPanel_Main->Controls->Add(this->label2);
			this->flowLayoutPanel_Main->Controls->Add(this->button_Worker);
			this->flowLayoutPanel_Main->Controls->Add(this->button_User);
			this->flowLayoutPanel_Main->Location = System::Drawing::Point(221, 83);
			this->flowLayoutPanel_Main->Name = L"flowLayoutPanel_Main";
			this->flowLayoutPanel_Main->Size = System::Drawing::Size(226, 125);
			this->flowLayoutPanel_Main->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Выберите режим работы:";
			// 
			// button_Worker
			// 
			this->button_Worker->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button_Worker->AutoSize = true;
			this->button_Worker->Location = System::Drawing::Point(3, 16);
			this->button_Worker->Name = L"button_Worker";
			this->button_Worker->Size = System::Drawing::Size(219, 33);
			this->button_Worker->TabIndex = 0;
			this->button_Worker->Text = L"Разработчик";
			this->button_Worker->UseVisualStyleBackColor = true;
			this->button_Worker->Click += gcnew System::EventHandler(this, &vhod::button_Worker_Click);
			// 
			// button_User
			// 
			this->button_User->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button_User->AutoSize = true;
			this->button_User->Location = System::Drawing::Point(3, 55);
			this->button_User->Name = L"button_User";
			this->button_User->Size = System::Drawing::Size(219, 35);
			this->button_User->TabIndex = 2;
			this->button_User->Text = L"Пользователь";
			this->button_User->UseVisualStyleBackColor = true;
			this->button_User->Click += gcnew System::EventHandler(this, &vhod::button_User_Click);
			// 
			// vhod
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 322);
			this->Controls->Add(this->flowLayoutPanel_Main);
			this->Controls->Add(this->flowLayoutPanel_VvodPar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"vhod";
			this->Text = L"Вход";
			this->flowLayoutPanel_VvodPar->ResumeLayout(false);
			this->flowLayoutPanel_VvodPar->PerformLayout();
			this->flowLayoutPanel_Main->ResumeLayout(false);
			this->flowLayoutPanel_Main->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_Worker_Click(System::Object^  sender, System::EventArgs^  e) {
		flowLayoutPanel_Main->Hide();
	}
private: System::Void button_Nazad_Click(System::Object^  sender, System::EventArgs^  e) {
	flowLayoutPanel_Main->Show();
	label_Mistake->Hide();
	textBox_Par->Clear();
}
private: System::Void button_Vhod_Click(System::Object^  sender, System::EventArgs^  e) {
	StreamReader^ j = gcnew StreamReader("read.txt");
	String^ line;
	line = j->ReadLine();
	j->Close();
	//String^ login = Convert::ToString(textBox_Par->Text);
	StreamWriter^ l = gcnew StreamWriter("write.txt");
	String^ lineNew;
	lineNew = textBox_Par->Text;
	
	char c;
	int n = 5, eng = 26;
	for (int i = 0; i < lineNew->Length; i++)
	{
		c = lineNew[i];
		int flag = 0;
		if (c >= 'A' && c <= 'Z')
		{
			c = c + (n % eng);
			if (c > 'Z') c = 'A' + (c - 'Z') - 1;
			l->Write(c);
			flag = 1;
		}

		if (c >= 'a' && c <= 'z')
		{
			c = c + (n % eng);
			if (c > 'z') c = 'a' + (c - 'z') - 1;
			l->Write(c);
			flag = 1;
		}
		if (!flag) l->Write(c);
	}	
	l->Close();
	StreamReader^ k = gcnew StreamReader("write.txt");
	String^ line1 = k->ReadLine();
	k->Close();

	if (line1 == line)
	{
		MainForm^ dtf = gcnew MainForm();
		dtf->Show();
		this->Hide();
		flowLayoutPanel_Main->Show();
		textBox_Par->Clear();
		label_Mistake->Hide();
	}
	else
	{
		label_Mistake->Show();
		textBox_Par->Clear();
	}
}

private: System::Void button_User_Click(System::Object^  sender, System::EventArgs^  e) {
	MainFormForUser^ dtfyt = gcnew MainFormForUser();
	dtfyt->ShowDialog();
	


}
};
}
