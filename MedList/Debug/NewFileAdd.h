#pragma once

namespace MedList {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для NewFileAdd
	/// </summary>
	public ref class NewFileAdd : public System::Windows::Forms::Form
	{
	public:
		NewFileAdd(void)
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
		~NewFileAdd()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Button^  button1;
	private:

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(NewFileAdd::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(250, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите имя файла";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(187, 118);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NewFileAdd::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(12, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите имя!";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(9, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(206, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Файл с таким именем уже существует";
			this->label3->Visible = false;
			// 
			// NewFileAdd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 153);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"NewFileAdd";
			this->Text = L"Создание файла";
			this->Load += gcnew System::EventHandler(this, &NewFileAdd::NewFileAdd_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int u = 0;
		if (textBox1->Text == String::Empty)
			label2->Visible = true;
		else
		{

			try {
				String^ listcoll = "";
				StreamReader^ hhh = gcnew StreamReader("listbox.txt");
				cli::array<String^>^ nmk = hhh->ReadToEnd()->Split(gcnew cli::array<String^>{ "*" }, StringSplitOptions::RemoveEmptyEntries);
				if ((nmk->Length)>0)
				for (int i = 0; i < nmk->Length; i++)
				{
					listcoll = listcoll + nmk[i] + "*";
					if (textBox1->Text == nmk[i])
					{
						label3->Visible = true;
						u = 1;
					}
				}
				hhh->Close();
				if (!u)
				{
					label3->Visible = false;
					label2->Visible = false;
					
						listcoll = listcoll + textBox1->Text + "*";
						StreamWriter^ fptrg = gcnew StreamWriter(textBox1->Text + ".txt");
						fptrg->Close();
						System::IO::File::WriteAllText("listbox.txt", listcoll);
					NewFileAdd::Close();
					
				}
					
				}
				
			catch (Exception^ E)
			{
				MessageBox::Show("Список файлов не доступен");
			}



		}

	}
	private: System::Void NewFileAdd_Load(System::Object^  sender, System::EventArgs^  e) {
		label2->Visible = false;
		label3->Visible = false;
		textBox1->Clear();
	}
	};}
