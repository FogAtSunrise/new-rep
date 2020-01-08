#pragma once
#include<iostream>
#include<fstream>

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
	/// Сводка для DelStrMyForm
	/// </summary>
	public ref class DelStrMyForm : public System::Windows::Forms::Form
	{
	public:

		String^ NameFromMainForm;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	public:
		int CountFromMainForm;

		DelStrMyForm(void)
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
		~DelStrMyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBoxNumber;
	protected:
	private: System::Windows::Forms::Button^  buttonDelet;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DelStrMyForm::typeid));
			this->textBoxNumber = (gcnew System::Windows::Forms::TextBox());
			this->buttonDelet = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// textBoxNumber
			// 
			this->textBoxNumber->Location = System::Drawing::Point(162, 56);
			this->textBoxNumber->Multiline = true;
			this->textBoxNumber->Name = L"textBoxNumber";
			this->textBoxNumber->Size = System::Drawing::Size(39, 23);
			this->textBoxNumber->TabIndex = 0;
			this->textBoxNumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &DelStrMyForm::textBoxNumber_KeyPress);
			// 
			// buttonDelet
			// 
			this->buttonDelet->Location = System::Drawing::Point(278, 107);
			this->buttonDelet->Name = L"buttonDelet";
			this->buttonDelet->Size = System::Drawing::Size(85, 23);
			this->buttonDelet->TabIndex = 1;
			this->buttonDelet->Text = L"Удалить";
			this->buttonDelet->UseVisualStyleBackColor = true;
			this->buttonDelet->Click += gcnew System::EventHandler(this, &DelStrMyForm::buttonDelet_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(124, 56);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(21, 16);
			this->label21->TabIndex = 119;
			this->label21->Text = L"ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(92, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 15);
			this->label1->TabIndex = 120;
			this->label1->Text = L"Введите ID удаляемой записи";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(323, 10);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(50, 13);
			this->linkLabel1->TabIndex = 121;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Помощь";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &DelStrMyForm::linkLabel1_LinkClicked);
			// 
			// DelStrMyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 142);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->buttonDelet);
			this->Controls->Add(this->textBoxNumber);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"DelStrMyForm";
			this->Text = L"Удаление";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonDelet_Click(System::Object^  sender, System::EventArgs^  e) {

		try
		{
			if ((textBoxNumber->Text) != String::Empty)
			{
			//	int amountCount = CountFromMainForm;
				int numb = Convert::ToInt32(textBoxNumber->Text);
				if (numb <= CountFromMainForm && numb != 0)
				{
					StreamReader^ FirstDoc = gcnew StreamReader("write.txt");
					StreamWriter^ FirdDoc = gcnew StreamWriter(NameFromMainForm);
					String ^current_str;
					for (int i = 1; i < numb; i++)
					{
						current_str = FirstDoc->ReadLine();
						FirdDoc->WriteLine(current_str);
					}
					current_str = FirstDoc->ReadLine(); //Убираем ненужную строку
					for (int i = numb; i < CountFromMainForm; i++)
					{
						current_str = FirstDoc->ReadLine();
						FirdDoc->WriteLine(current_str);
					}
					FirstDoc->Close();
					FirdDoc->Close();
					
					this->Close();
					MessageBox::Show("Успешно удалена запись!");
					textBoxNumber->Text = "";

				}
				else
					MessageBox::Show("Неверный id!");

			}
			else
				MessageBox::Show("Не ввели число!");
		}
		catch (Exception^ E)
		{
			MessageBox::Show("Не удалось открыть файл");
		}

		
	}

private: System::Void textBoxNumber_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

	if ((!(e->KeyChar > 47) || !(e->KeyChar < 58)) && (!(e->KeyChar == 8))) //запрет на ввод кроме цифр, запятой и bsp
	{
		e->Handled = true;
	}
}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	MessageBox::Show("Вы находитесь в меню удаления записи.\nНиже приведена последовательность действий при удалени записи.\n\n В Диалоговом окне необходимо ввести ID записи, которую вы хотите удалить, и нажать кнопку - Удалить.");
}
};
}
