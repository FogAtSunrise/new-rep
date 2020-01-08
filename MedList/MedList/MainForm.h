
#include "NewFileAdd.h"
#include "AddForm.h"
#include "DelStrMyForm.h"
#include "EditForm.h"
#include "SearchForm.h"
#include "MyGameForm.h"
#include <string>
#include <fstream>
#include <cstdio>  
#pragma once
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
	/// Ñâîäêà äëÿ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		String^ FileName;
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:

		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem;

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  èãğàToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Panel^  Main_panel;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîçäàòüToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  íàéòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  íàñòğîéêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñìåíèòüÏàğîëüToolStripMenuItem;
	private: System::Windows::Forms::Button^  button_poisk;
	private: System::Windows::Forms::Panel^  panel_changePas;
	private: System::Windows::Forms::Button^  buttonNoChangePas;
	private: System::Windows::Forms::Button^  buttonChange;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox_NewPas;
	private: System::Windows::Forms::Label^  lableMistake;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox_pass;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::ListBox^  listBox;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::Button^  buttonSub;
	private: System::Windows::Forms::Button^  buttonOpenFile;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panelWithList;
	private: System::Windows::Forms::ToolStripMenuItem^  çàêğûòüÔàéëToolStripMenuItem;
	private: System::Windows::Forms::Button^  buttonAddAdd;

	private: System::Windows::Forms::DataGridView^  dataGridView1;






	private: System::Windows::Forms::Button^  buttonFnd;
	private: System::Windows::Forms::Button^  buttonChanges;
	private: System::Windows::Forms::Button^  buttonDied;






	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Countre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Numbers;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;









	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîçäàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàéòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàêğûòüÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èãğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàñòğîéêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñìåíèòüÏàğîëüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Main_panel = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button_poisk = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonSub = (gcnew System::Windows::Forms::Button());
			this->buttonOpenFile = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox = (gcnew System::Windows::Forms::ListBox());
			this->panelWithList = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->buttonFnd = (gcnew System::Windows::Forms::Button());
			this->buttonChanges = (gcnew System::Windows::Forms::Button());
			this->buttonDied = (gcnew System::Windows::Forms::Button());
			this->buttonAddAdd = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Countre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Numbers = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel_changePas = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_pass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lableMistake = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_NewPas = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonChange = (gcnew System::Windows::Forms::Button());
			this->buttonNoChangePas = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->Main_panel->SuspendLayout();
			this->panelWithList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel_changePas->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ôàéëToolStripMenuItem,
					this->èãğàToolStripMenuItem, this->íàñòğîéêèToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(654, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ñîçäàòüToolStripMenuItem,
					this->ñîõğàíèòüToolStripMenuItem, this->íàéòèToolStripMenuItem, this->çàêğûòüÔàéëToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Enabled = false;
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(121, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ğàáîòà ñî ôàéëîì";
			// 
			// ñîçäàòüToolStripMenuItem
			// 
			this->ñîçäàòüToolStripMenuItem->Name = L"ñîçäàòüToolStripMenuItem";
			this->ñîçäàòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ñîçäàòüToolStripMenuItem->Text = L"Ââîä çàïèñè";
			this->ñîçäàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ñîçäàòüToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"Óäàëåíèå ñïèñêà";
			this->ñîõğàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ñîõğàíèòüToolStripMenuItem_Click);
			// 
			// íàéòèToolStripMenuItem
			// 
			this->íàéòèToolStripMenuItem->Name = L"íàéòèToolStripMenuItem";
			this->íàéòèToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->íàéòèToolStripMenuItem->Text = L"Çàïğîñ";
			this->íàéòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::íàéòèToolStripMenuItem_Click);
			// 
			// çàêğûòüÔàéëToolStripMenuItem
			// 
			this->çàêğûòüÔàéëToolStripMenuItem->Name = L"çàêğûòüÔàéëToolStripMenuItem";
			this->çàêğûòüÔàéëToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->çàêğûòüÔàéëToolStripMenuItem->Text = L"Çàêğûòü ôàéë";
			this->çàêğûòüÔàéëToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::çàêğûòüÔàéëToolStripMenuItem_Click);
			// 
			// èãğàToolStripMenuItem
			// 
			this->èãğàToolStripMenuItem->Name = L"èãğàToolStripMenuItem";
			this->èãğàToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->èãğàToolStripMenuItem->Text = L"Èãğà";
			this->èãğàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::èãğàToolStripMenuItem_Click);
			// 
			// íàñòğîéêèToolStripMenuItem
			// 
			this->íàñòğîéêèToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ñìåíèòüÏàğîëüToolStripMenuItem });
			this->íàñòğîéêèToolStripMenuItem->Name = L"íàñòğîéêèToolStripMenuItem";
			this->íàñòğîéêèToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->íàñòğîéêèToolStripMenuItem->Text = L"Íàñòğîéêè";
			// 
			// ñìåíèòüÏàğîëüToolStripMenuItem
			// 
			this->ñìåíèòüÏàğîëüToolStripMenuItem->Name = L"ñìåíèòüÏàğîëüToolStripMenuItem";
			this->ñìåíèòüÏàğîëüToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->ñìåíèòüÏàğîëüToolStripMenuItem->Text = L"Ñìåíèòü ïàğîëü";
			this->ñìåíèòüÏàğîëüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ñìåíèòüÏàğîëüToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(558, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 24);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Âûõîä";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// Main_panel
			// 
			this->Main_panel->AutoSize = true;
			this->Main_panel->Controls->Add(this->label7);
			this->Main_panel->Controls->Add(this->label6);
			this->Main_panel->Controls->Add(this->textBox1);
			this->Main_panel->Controls->Add(this->button_poisk);
			this->Main_panel->Controls->Add(this->buttonAdd);
			this->Main_panel->Controls->Add(this->buttonSub);
			this->Main_panel->Controls->Add(this->buttonOpenFile);
			this->Main_panel->Controls->Add(this->label5);
			this->Main_panel->Controls->Add(this->listBox);
			this->Main_panel->Location = System::Drawing::Point(0, 30);
			this->Main_panel->Name = L"Main_panel";
			this->Main_panel->Size = System::Drawing::Size(657, 295);
			this->Main_panel->TabIndex = 5;
			this->Main_panel->VisibleChanged += gcnew System::EventHandler(this, &MainForm::Main_panel_VisibleChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(334, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Ñïèñîê ôàéëîâ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Ïîèñê ôàéëîâ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(202, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->VisibleChanged += gcnew System::EventHandler(this, &MainForm::textBox1_VisibleChanged);
			// 
			// button_poisk
			// 
			this->button_poisk->Location = System::Drawing::Point(231, 49);
			this->button_poisk->Name = L"button_poisk";
			this->button_poisk->Size = System::Drawing::Size(86, 21);
			this->button_poisk->TabIndex = 1;
			this->button_poisk->Text = L"Íàéòè";
			this->button_poisk->UseVisualStyleBackColor = true;
			this->button_poisk->Click += gcnew System::EventHandler(this, &MainForm::button_poisk_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(451, 257);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(75, 23);
			this->buttonAdd->TabIndex = 5;
			this->buttonAdd->Text = L"Äîáàâèòü";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MainForm::buttonAdd_Click);
			// 
			// buttonSub
			// 
			this->buttonSub->Enabled = false;
			this->buttonSub->Location = System::Drawing::Point(567, 257);
			this->buttonSub->Name = L"buttonSub";
			this->buttonSub->Size = System::Drawing::Size(75, 23);
			this->buttonSub->TabIndex = 4;
			this->buttonSub->Text = L"Óäàëèòü";
			this->buttonSub->UseVisualStyleBackColor = true;
			this->buttonSub->Click += gcnew System::EventHandler(this, &MainForm::buttonSub_Click);
			// 
			// buttonOpenFile
			// 
			this->buttonOpenFile->Enabled = false;
			this->buttonOpenFile->Location = System::Drawing::Point(334, 257);
			this->buttonOpenFile->Name = L"buttonOpenFile";
			this->buttonOpenFile->Size = System::Drawing::Size(75, 23);
			this->buttonOpenFile->TabIndex = 3;
			this->buttonOpenFile->Text = L"Îòêğûòü";
			this->buttonOpenFile->UseVisualStyleBackColor = true;
			this->buttonOpenFile->Click += gcnew System::EventHandler(this, &MainForm::buttonOpenFile_Click);
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
			this->label5->Text = L"Ñïèñîê ïóñò";
			// 
			// listBox
			// 
			this->listBox->BackColor = System::Drawing::SystemColors::HighlightText;
			this->listBox->FormattingEnabled = true;
			this->listBox->Location = System::Drawing::Point(334, 34);
			this->listBox->Name = L"listBox";
			this->listBox->Size = System::Drawing::Size(308, 212);
			this->listBox->TabIndex = 1;
			this->listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::listBox_SelectedIndexChanged);
			// 
			// panelWithList
			// 
			this->panelWithList->Controls->Add(this->button4);
			this->panelWithList->Controls->Add(this->buttonFnd);
			this->panelWithList->Controls->Add(this->buttonChanges);
			this->panelWithList->Controls->Add(this->buttonDied);
			this->panelWithList->Controls->Add(this->buttonAddAdd);
			this->panelWithList->Controls->Add(this->dataGridView1);
			this->panelWithList->Location = System::Drawing::Point(0, 28);
			this->panelWithList->Name = L"panelWithList";
			this->panelWithList->Size = System::Drawing::Size(654, 294);
			this->panelWithList->TabIndex = 11;
			this->panelWithList->Visible = false;
			this->panelWithList->VisibleChanged += gcnew System::EventHandler(this, &MainForm::panelWithList_VisibleChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(542, 259);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Çàêğûòü";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// buttonFnd
			// 
			this->buttonFnd->Location = System::Drawing::Point(415, 259);
			this->buttonFnd->Name = L"buttonFnd";
			this->buttonFnd->Size = System::Drawing::Size(90, 23);
			this->buttonFnd->TabIndex = 4;
			this->buttonFnd->Text = L"Íàéòè";
			this->buttonFnd->UseVisualStyleBackColor = true;
			this->buttonFnd->Click += gcnew System::EventHandler(this, &MainForm::buttonFnd_Click);
			// 
			// buttonChanges
			// 
			this->buttonChanges->Location = System::Drawing::Point(285, 259);
			this->buttonChanges->Name = L"buttonChanges";
			this->buttonChanges->Size = System::Drawing::Size(90, 23);
			this->buttonChanges->TabIndex = 3;
			this->buttonChanges->Text = L"Èçìåíèòü";
			this->buttonChanges->UseVisualStyleBackColor = true;
			this->buttonChanges->Click += gcnew System::EventHandler(this, &MainForm::buttonChanges_Click);
			// 
			// buttonDied
			// 
			this->buttonDied->Location = System::Drawing::Point(153, 259);
			this->buttonDied->Name = L"buttonDied";
			this->buttonDied->Size = System::Drawing::Size(90, 23);
			this->buttonDied->TabIndex = 2;
			this->buttonDied->Text = L"Óäàëèòü";
			this->buttonDied->UseVisualStyleBackColor = true;
			this->buttonDied->Click += gcnew System::EventHandler(this, &MainForm::buttonDied_Click);
			// 
			// buttonAddAdd
			// 
			this->buttonAddAdd->Location = System::Drawing::Point(23, 259);
			this->buttonAddAdd->Name = L"buttonAddAdd";
			this->buttonAddAdd->Size = System::Drawing::Size(90, 23);
			this->buttonAddAdd->TabIndex = 1;
			this->buttonAddAdd->Text = L"Äîáàâèòü";
			this->buttonAddAdd->UseVisualStyleBackColor = true;
			this->buttonAddAdd->Click += gcnew System::EventHandler(this, &MainForm::buttonAddAdd_Click);
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
			this->dataGridView1->Location = System::Drawing::Point(12, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(630, 247);
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
			this->Name->HeaderText = L"Íàçâàíèå";
			this->Name->Name = L"Name";
			this->Name->ReadOnly = true;
			this->Name->Width = 160;
			// 
			// Countre
			// 
			this->Countre->HeaderText = L"Ñòğàíà-ïğîèçâîäèòåëü";
			this->Countre->Name = L"Countre";
			this->Countre->ReadOnly = true;
			this->Countre->Width = 150;
			// 
			// Date
			// 
			this->Date->HeaderText = L"Äàòà ïğîèçâîäñòâà";
			this->Date->Name = L"Date";
			this->Date->ReadOnly = true;
			this->Date->Width = 107;
			// 
			// Numbers
			// 
			this->Numbers->HeaderText = L"Íîìåğà àïòåê";
			this->Numbers->Name = L"Numbers";
			this->Numbers->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Öåíà";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 80;
			// 
			// panel_changePas
			// 
			this->panel_changePas->Controls->Add(this->flowLayoutPanel1);
			this->panel_changePas->Location = System::Drawing::Point(3, 28);
			this->panel_changePas->Name = L"panel_changePas";
			this->panel_changePas->Size = System::Drawing::Size(654, 294);
			this->panel_changePas->TabIndex = 2;
			this->panel_changePas->Visible = false;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->label1);
			this->flowLayoutPanel1->Controls->Add(this->textBox_pass);
			this->flowLayoutPanel1->Controls->Add(this->label3);
			this->flowLayoutPanel1->Controls->Add(this->lableMistake);
			this->flowLayoutPanel1->Controls->Add(this->label2);
			this->flowLayoutPanel1->Controls->Add(this->textBox_NewPas);
			this->flowLayoutPanel1->Controls->Add(this->label4);
			this->flowLayoutPanel1->Controls->Add(this->buttonChange);
			this->flowLayoutPanel1->Controls->Add(this->buttonNoChangePas);
			this->flowLayoutPanel1->Location = System::Drawing::Point(246, 39);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(176, 181);
			this->flowLayoutPanel1->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ââåäèòå ñòàğûé ïàğîëü";
			// 
			// textBox_pass
			// 
			this->textBox_pass->Location = System::Drawing::Point(3, 16);
			this->textBox_pass->Name = L"textBox_pass";
			this->textBox_pass->Size = System::Drawing::Size(143, 20);
			this->textBox_pass->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(3, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Ââåäèòå ïàğîëü";
			this->label3->Visible = false;
			// 
			// lableMistake
			// 
			this->lableMistake->AutoSize = true;
			this->lableMistake->ForeColor = System::Drawing::Color::Red;
			this->lableMistake->Location = System::Drawing::Point(3, 52);
			this->lableMistake->Name = L"lableMistake";
			this->lableMistake->Size = System::Drawing::Size(101, 13);
			this->lableMistake->TabIndex = 2;
			this->lableMistake->Text = L"Íå âåğíûé ïàğîëü";
			this->lableMistake->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ââåäèòå íîâûé ïàğîëü";
			// 
			// textBox_NewPas
			// 
			this->textBox_NewPas->Location = System::Drawing::Point(3, 81);
			this->textBox_NewPas->Name = L"textBox_NewPas";
			this->textBox_NewPas->Size = System::Drawing::Size(143, 20);
			this->textBox_NewPas->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(3, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Ââåäèòå ïàğîëü";
			this->label4->Visible = false;
			// 
			// buttonChange
			// 
			this->buttonChange->Location = System::Drawing::Point(3, 120);
			this->buttonChange->Name = L"buttonChange";
			this->buttonChange->Size = System::Drawing::Size(143, 23);
			this->buttonChange->TabIndex = 5;
			this->buttonChange->Text = L"Çàìåíèòü";
			this->buttonChange->UseVisualStyleBackColor = true;
			this->buttonChange->Click += gcnew System::EventHandler(this, &MainForm::buttonChange_Click);
			// 
			// buttonNoChangePas
			// 
			this->buttonNoChangePas->Location = System::Drawing::Point(3, 149);
			this->buttonNoChangePas->Name = L"buttonNoChangePas";
			this->buttonNoChangePas->Size = System::Drawing::Size(140, 22);
			this->buttonNoChangePas->TabIndex = 6;
			this->buttonNoChangePas->Text = L"Îòìåíà";
			this->buttonNoChangePas->UseVisualStyleBackColor = true;
			this->buttonNoChangePas->Click += gcnew System::EventHandler(this, &MainForm::buttonNoChangePas_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 322);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel_changePas);
			this->Controls->Add(this->panelWithList);
			this->Controls->Add(this->Main_panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			
			this->Text = L"Ñïèñîê ëåêàğñòâ";
			this->Activated += gcnew System::EventHandler(this, &MainForm::MainForm_Activated);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainForm::MainForm_FormClosed);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->Main_panel->ResumeLayout(false);
			this->Main_panel->PerformLayout();
			this->panelWithList->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel_changePas->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//
		//Çàêğûòü ôîğìó
		//
	private: System::Void MainForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		
		Application::OpenForms[0]->Show();
		textBox1->Clear();
		panel_changePas->Hide();
		label3->Hide();
		label4->Hide();
		textBox_pass->Clear();
		textBox_NewPas->Clear();
		lableMistake->Hide();
		ôàéëToolStripMenuItem->Enabled = true;
		èãğàToolStripMenuItem->Enabled = true;
		
		íàñòğîéêèToolStripMenuItem->Enabled = true;
	}
	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
	Application::OpenForms[0]->Show();
}

	private: System::Void buttonChange_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if ((textBox_pass->Text != String::Empty) && (textBox_NewPas->Text != String::Empty))
		{
			label3->Hide();
			label4->Hide();
			StreamReader^ f = gcnew StreamReader("read.txt");
			String^ line;
			line = f->ReadLine();
			f->Close();
			StreamWriter^ l = gcnew StreamWriter("write.txt");
			String^ lineNew;
			lineNew = textBox_pass->Text;
			
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
				{	c = c + (n % eng);
					if (c > 'z') c = 'a' + (c - 'z') - 1;
					l->Write(c);
					flag = 1;				}
				if (!flag) l->Write(c);
			}
			l->Close();
			StreamReader^ k = gcnew StreamReader("write.txt");
			String^ line1 = k->ReadLine();
			k->Close();

			if (line1 == line)

			{
				StreamWriter^ h = gcnew StreamWriter("read.txt");
				String^ lineNew;
				lineNew = textBox_NewPas->Text;
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
						h->Write(c);
						flag = 1;
					}
					if (c >= 'a' && c <= 'z')
					{
						c = c + (n % eng);
						if (c > 'z') c = 'a' + (c - 'z') - 1;
						h->Write(c);
						flag = 1;
					}
					if (!flag) h->Write(c);
				}
				panel_changePas->Hide();
				lableMistake->Hide();
				textBox_pass->Clear();
				textBox_NewPas->Clear();
				h->Close();
				ôàéëToolStripMenuItem->Enabled = true;
				èãğàToolStripMenuItem->Enabled = true;
				íàñòğîéêèToolStripMenuItem->Enabled = true;
			}
			else
			{
				lableMistake->Show();
				textBox_pass->Clear();
				textBox_NewPas->Clear();
			}
		}
		else
		{
			label3->Hide();
			label4->Hide();
			lableMistake->Hide();
			if (textBox_pass->Text == String::Empty)
			label3->Show();
			if (textBox_NewPas->Text == String::Empty)
			label4->Show();
		}		
	}
private: System::Void ñìåíèòüÏàğîëüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
//	textBox1->Clear();
	
	panel_changePas->Show();
	ôàéëToolStripMenuItem->Enabled=false;
	èãğàToolStripMenuItem->Enabled = false;
	íàñòğîéêèToolStripMenuItem->Enabled = false;
}
private: System::Void buttonNoChangePas_Click(System::Object^  sender, System::EventArgs^  e) {
	panel_changePas->Hide();
	label3->Hide();
	label4->Hide();
	textBox_pass->Clear();
	textBox_NewPas->Clear();
	lableMistake->Hide();
	ôàéëToolStripMenuItem->Enabled = true;
	èãğàToolStripMenuItem->Enabled = true;
	íàñòğîéêèToolStripMenuItem->Enabled = true;
}

		 //
		 //Ñïèñîê ôàéëîâ
		 //
private: System::Void Main_panel_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {	
	label5->Hide();
}




private: System::Void textBox1_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Clear();
}


private: System::Void button_poisk_Click(System::Object^  sender, System::EventArgs^  e) {
		if (listBox->Items->Count > 0)
	{
		if ((textBox1->Text) != String::Empty && !String::IsNullOrWhiteSpace(textBox1->Text))
		{
	
	int index = listBox->FindString(textBox1->Text);
	if (index >= 0)
	{
		//âûäåëÿåì ñòğîêó
		listBox->SetSelected(index, true);
	}
	else
		{for (int i = 0; i < listBox->Items->Count; i++)
				listBox->SetSelected(i, false);
	MessageBox::Show("Ôàéë íå íàéäåí");
		}
		}
		else
			MessageBox::Show("Ââåäèòå èìÿ èñêîìîãî ôàéëà!");
	}
	else
		MessageBox::Show("Ñïèñîê ïóñò!");
}

		 private: void NoStrInFile()
		 {
			 buttonDied->Enabled = false;
			 buttonChanges->Enabled = false;
			 buttonFnd->Enabled = false;
			 íàéòèToolStripMenuItem->Enabled = false;
			 
			 

		 }

				  private: void YesStrInFile()
				  {
					  buttonDied->Enabled = true;
					  buttonChanges->Enabled = true;
					  buttonFnd->Enabled = true;
					  íàéòèToolStripMenuItem->Enabled = true;
					  ñîõğàíèòüToolStripMenuItem->Enabled = true;
					  

				  }

private: System::Void listBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
	
	if (listBox->SelectedItem != nullptr)

	{
		buttonOpenFile->Enabled = true;
		buttonSub->Enabled = true;
	}
	else {
		buttonOpenFile->Enabled = false;
		buttonSub->Enabled = false;
	}
}



		 //
		 //Îòêğûòü ôàéë
		 //
	private: System::Void buttonOpenFile_Click(System::Object^  sender, System::EventArgs^  e) {
	ôàéëToolStripMenuItem->Enabled = true;
	panelWithList->Show();
	button1->Hide();
	
		try {
		String^ str;
		String^ fileName = Convert::ToString(listBox->Items[listBox->SelectedIndex]);
		 fileName = fileName + ".txt";
		 FileName = fileName;
	
	try {
		
	
		StreamReader^ fptr = gcnew StreamReader(fileName);
		int i = 0;
		while ((str = fptr->ReadLine()) != nullptr)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = (i + 1);//ïğîíóìåğîâàòü (id)
			cli::array<String^>^ strtalk = str->Split((Char)'#');//Äåëèì íà ÷àñòè
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
		
		MessageBox::Show("Îøèáêà");
	}
	
}
		 catch (Exception^ E)
		 {
			 MessageBox::Show("Íåâîçìîæíî îòêğûòü ôàéë");
		 }

}


private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	
	NewFileAdd^ Newf = gcnew NewFileAdd();
	 Newf->ShowDialog();
 
	}

private: System::Void buttonAddAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	AddForm ^ F = gcnew AddForm();
	F->df = FileName;
	F->ShowDialog();
	}
	
private: System::Void MainForm_Activated(System::Object^  sender, System::EventArgs^  e) {
	
	dataGridView1->Rows->Clear();
	if (panelWithList->Visible)
	{
		
		try {
			
			String^ str;
			String^ fileName = Convert::ToString(listBox->Items[listBox->SelectedIndex]);
			fileName = fileName + ".txt";
			FileName = fileName;
		
			try {


				StreamReader^ fptr = gcnew StreamReader(fileName);
				int i = 0;
				while ((str = fptr->ReadLine()) != nullptr)
				{
					dataGridView1->Rows->Add();
					dataGridView1->Rows[i]->Cells[0]->Value = (i + 1);//ïğîíóìåğîâàòü (id)
					cli::array<String^>^ strtalk = str->Split((Char)'#');//Äåëèì íà ÷àñòè

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
				
				fptr->Close();
			
			}
			catch (Exception^ E)
			{
				MessageBox::Show("Îøèáêà");
				

			}

		}
		catch (Exception^ E)
		{
			MessageBox::Show("Íåâîçìîæíî îòêğûòü ôàéë");
		}
	}
	if (!(panel_changePas->Visible) && !(panelWithList->Visible))
	{
		buttonSub->Enabled = false;
		buttonOpenFile->Enabled = false;
		listBox->Items->Clear();
		textBox1->Clear();
		
			try {	


				buttonSub->Enabled = false;
				buttonOpenFile->Enabled = false;
				System::IO::StreamReader^ nmkr = gcnew StreamReader("listbox.txt");

				cli::array<String^>^ nmk = nmkr->ReadToEnd()->Split(gcnew cli::array<String^>{ "*" }, StringSplitOptions::RemoveEmptyEntries);

				for (int i = 0; i < nmk->Length; i++)
				{
					listBox->Items->Add(nmk[i]);
				}
				nmkr->Close();
				if (!(nmk->Length))
				{
					label5->Show();

					buttonSub->Enabled = false;
					buttonOpenFile->Enabled = false;
					
					//button_poisk->Enabled = false;
				}
			}
			catch (Exception^ E)
			{
				MessageBox::Show("Ñïèñîê ôàéëîâ íå äîñòóïåí");
			}
		
			if (listBox->Items->Count > 0)
				label5->Visible = false;
		else label5->Visible = true;
	}
}
private: System::Void ñîçäàòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	AddForm ^ Fww = gcnew AddForm();
	Fww->df = FileName;
	Fww->ShowDialog();

}



private: System::Void buttonSub_Click(System::Object^  sender, System::EventArgs^  e) {
	
		try {
			String^ str;
			String^ fileName = Convert::ToString(listBox->Items[listBox->SelectedIndex]);
			listBox->Items->Remove(listBox->SelectedIndex);
			StreamReader^ hhh = gcnew StreamReader("listbox.txt");
			String^ listcoll = "";
			cli::array<String^>^ nmk = hhh->ReadToEnd()->Split(gcnew cli::array<String^>{ "*" }, StringSplitOptions::RemoveEmptyEntries);
			if ((nmk->Length) > 0)
				for (int i = 0; i < nmk->Length; i++)
				{
					if (fileName != nmk[i])
						listcoll = listcoll + nmk[i] + "*";

				}

			hhh->Close();
			System::IO::File::WriteAllText("listbox.txt", listcoll);
			fileName = fileName + ".txt";
			IntPtr ptr = Marshal::StringToHGlobalAnsi(fileName);
			char* char_str = (char*)ptr.ToPointer();
			remove(char_str);

			Marshal::FreeHGlobal(ptr);


			MessageBox::Show("Ôàéë óäàëåí");
		}
		catch (Exception^ E)
		{

			MessageBox::Show("Îøèáêà");
		}

	



}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	ôàéëToolStripMenuItem->Enabled = false;
	panelWithList->Hide();
	button1->Show();
}

private: System::Void buttonFnd_Click(System::Object^  sender, System::EventArgs^  e) {
	
		
		SearchForm ^ Fi = gcnew SearchForm();
		Fi->str = FileName;
		Fi->ShowDialog();


}
private: System::Void çàêğûòüÔàéëToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ôàéëToolStripMenuItem->Enabled = false;
	panelWithList->Hide();
	button1->Show();
}
private: System::Void íàéòèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SearchForm ^ Fi = gcnew SearchForm();
	Fi->str = FileName;
	Fi->ShowDialog();
}
private: System::Void buttonChanges_Click(System::Object^  sender, System::EventArgs^  e) {
	
		EditForm ^ DR = gcnew EditForm();
	DR->Name = FileName;
	DR->Cout = dataGridView1->Rows->Count;
	DR->ShowDialog();
	
}

private: System::Void ñîõğàíèòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult result;
	result = MessageBox::Show(this, "Âû äåéñòâèòåëüíî õîòèòå î÷èñòèòü âñş òàáëèöó?", "Óäàëèòü âñş òàáëèöó", MessageBoxButtons::YesNo);
	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		try {
			
			StreamWriter ^SHOP = gcnew StreamWriter(FileName);
			SHOP->Write("");
			SHOP->Close();
			MainForm_Activated(sender, e);
		}
		catch (Exception^ E)
		{
			MessageBox::Show("Íåïğåäâèäåííàÿ îøèáêà!");
		}
	}



}
private: System::Void panelWithList_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
}
private: System::Void buttonDied_Click(System::Object^  sender, System::EventArgs^  e) {
	
	StreamReader^ FirstDoc = gcnew StreamReader(FileName);
	StreamWriter^ FirdDoc = gcnew StreamWriter("write.txt");
	String ^current_str;
	for (int i = 0; i < dataGridView1->Rows->Count; i++)
	{
		current_str = FirstDoc->ReadLine();
		FirdDoc->WriteLine(current_str);
	}

	FirstDoc->Close();
	FirdDoc->Close();
	DelStrMyForm ^ oneder = gcnew DelStrMyForm();
	oneder->NameFromMainForm = FileName;
    oneder->CountFromMainForm = dataGridView1->Rows->Count;
	oneder->ShowDialog();

}
private: System::Void èãğàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyGameForm ^ F = gcnew MyGameForm();

	F->ShowDialog();
}
};
}