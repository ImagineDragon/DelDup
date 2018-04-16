#pragma once
#include "Form2.h"
#include "Options.h"
#include "FindFiles.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  Ù‡ÈÎToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  ‚ËÈÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÙÛÌÍˆ≥øToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ≥ÌÙÓÏ‡ˆ≥ˇToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÔÓœÓ„‡ÏÛToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ‰Ó‚≥‰Í‡ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  ÒÍ‡ÌÛ‚‡ÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  ÁÛÔËÌËÚËToolStripMenuItem;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::Button^  button4;




	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;



	private: System::Windows::Forms::Label^  status;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;















	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Ù‡ÈÎToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->‚ËÈÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÙÛÌÍˆ≥øToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÒÍ‡ÌÛ‚‡ÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ÁÛÔËÌËÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->≥ÌÙÓÏ‡ˆ≥ˇToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->‰Ó‚≥‰Í‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->status = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->Ù‡ÈÎToolStripMenuItem,
					this->ÙÛÌÍˆ≥øToolStripMenuItem, this->≥ÌÙÓÏ‡ˆ≥ˇToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(496, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Ù‡ÈÎToolStripMenuItem
			// 
			this->Ù‡ÈÎToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem,
					this->toolStripSeparator1, this->‚ËÈÚËToolStripMenuItem
			});
			this->Ù‡ÈÎToolStripMenuItem->Name = L"Ù‡ÈÎToolStripMenuItem";
			this->Ù‡ÈÎToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->Ù‡ÈÎToolStripMenuItem->Text = L"‘‡ÈÎ";
			// 
			// Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem
			// 
			this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem.Image")));
			this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem->Name = L"Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem";
			this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::T));
			this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem->Size = System::Drawing::Size(197, 22);
			this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem->Text = L"Õ‡Î‡¯ÚÛ‚‡ÌÌˇ";
			this->Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(194, 6);
			// 
			// ‚ËÈÚËToolStripMenuItem
			// 
			this->‚ËÈÚËToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"‚ËÈÚËToolStripMenuItem.Image")));
			this->‚ËÈÚËToolStripMenuItem->Name = L"‚ËÈÚËToolStripMenuItem";
			this->‚ËÈÚËToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->‚ËÈÚËToolStripMenuItem->Size = System::Drawing::Size(197, 22);
			this->‚ËÈÚËToolStripMenuItem->Text = L"¬ËÈÚË";
			this->‚ËÈÚËToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::‚ËÈÚËToolStripMenuItem_Click);
			// 
			// ÙÛÌÍˆ≥øToolStripMenuItem
			// 
			this->ÙÛÌÍˆ≥øToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ÒÍ‡ÌÛ‚‡ÚËToolStripMenuItem,
					this->toolStripSeparator4, this->ÁÛÔËÌËÚËToolStripMenuItem
			});
			this->ÙÛÌÍˆ≥øToolStripMenuItem->Name = L"ÙÛÌÍˆ≥øToolStripMenuItem";
			this->ÙÛÌÍˆ≥øToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->ÙÛÌÍˆ≥øToolStripMenuItem->Text = L"‘ÛÌÍˆ≥ø";
			// 
			// ÒÍ‡ÌÛ‚‡ÚËToolStripMenuItem
			// 
			this->ÒÍ‡ÌÛ‚‡ÚËToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ÒÍ‡ÌÛ‚‡ÚËToolStripMenuItem.Image")));
			this->ÒÍ‡ÌÛ‚‡ÚËToolStripMenuItem->Name = L"ÒÍ‡ÌÛ‚‡ÚËToolStripMenuItem";
			this->ÒÍ‡ÌÛ‚‡ÚËToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->ÒÍ‡ÌÛ‚‡ÚËToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->ÒÍ‡ÌÛ‚‡ÚËToolStripMenuItem->Text = L"—Í‡ÌÛ‚‡ÚË";
			this->ÒÍ‡ÌÛ‚‡ÚËToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ÒÍ‡ÌÛ‚‡ÚËToolStripMenuItem_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(168, 6);
			// 
			// ÁÛÔËÌËÚËToolStripMenuItem
			// 
			this->ÁÛÔËÌËÚËToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ÁÛÔËÌËÚËToolStripMenuItem.Image")));
			this->ÁÛÔËÌËÚËToolStripMenuItem->Name = L"ÁÛÔËÌËÚËToolStripMenuItem";
			this->ÁÛÔËÌËÚËToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D));
			this->ÁÛÔËÌËÚËToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->ÁÛÔËÌËÚËToolStripMenuItem->Text = L"¬Ë‰‡ÎËÚË";
			this->ÁÛÔËÌËÚËToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ÁÛÔËÌËÚËToolStripMenuItem_Click);
			// 
			// ≥ÌÙÓÏ‡ˆ≥ˇToolStripMenuItem
			// 
			this->≥ÌÙÓÏ‡ˆ≥ˇToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ÔÓœÓ„‡ÏÛToolStripMenuItem,
					this->toolStripSeparator3, this->‰Ó‚≥‰Í‡ToolStripMenuItem
			});
			this->≥ÌÙÓÏ‡ˆ≥ˇToolStripMenuItem->Name = L"≥ÌÙÓÏ‡ˆ≥ˇToolStripMenuItem";
			this->≥ÌÙÓÏ‡ˆ≥ˇToolStripMenuItem->Size = System::Drawing::Size(83, 20);
			this->≥ÌÙÓÏ‡ˆ≥ˇToolStripMenuItem->Text = L"≤ÌÙÓÏ‡ˆ≥ˇ";
			// 
			// ÔÓœÓ„‡ÏÛToolStripMenuItem
			// 
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ÔÓœÓ„‡ÏÛToolStripMenuItem.Image")));
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem->Name = L"ÔÓœÓ„‡ÏÛToolStripMenuItem";
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::I));
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem->Size = System::Drawing::Size(194, 22);
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem->Text = L"œÓ ÔÓ„‡ÏÛ ";
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ÔÓœÓ„‡ÏÛToolStripMenuItem_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(191, 6);
			// 
			// ‰Ó‚≥‰Í‡ToolStripMenuItem
			// 
			this->‰Ó‚≥‰Í‡ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"‰Ó‚≥‰Í‡ToolStripMenuItem.Image")));
			this->‰Ó‚≥‰Í‡ToolStripMenuItem->Name = L"‰Ó‚≥‰Í‡ToolStripMenuItem";
			this->‰Ó‚≥‰Í‡ToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F1;
			this->‰Ó‚≥‰Í‡ToolStripMenuItem->Size = System::Drawing::Size(194, 22);
			this->‰Ó‚≥‰Í‡ToolStripMenuItem->Text = L"ƒÓ‚≥‰Í‡";
			this->‰Ó‚≥‰Í‡ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::‰Ó‚≥‰Í‡ToolStripMenuItem_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(42, 27);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(24, 24);
			this->button2->TabIndex = 1;
			this->button2->TabStop = false;
			this->toolTip1->SetToolTip(this->button2, L"¬Ë‰‡ÎËÚË");
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(12, 27);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(24, 24);
			this->button3->TabIndex = 1;
			this->button3->TabStop = false;
			this->toolTip1->SetToolTip(this->button3, L"—Í‡ÌÛ‚‡ÚË");
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(72, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(24, 24);
			this->button1->TabIndex = 1;
			this->button1->TabStop = false;
			this->toolTip1->SetToolTip(this->button1, L"Õ‡Î‡¯ÚÛ‚‡ÌÌˇ");
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(102, 27);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(24, 24);
			this->button4->TabIndex = 1;
			this->button4->TabStop = false;
			this->toolTip1->SetToolTip(this->button4, L"¬ËÈÚË");
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dataGridView1->Location = System::Drawing::Point(3, 58);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(490, 255);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Õ‡Á‚‡";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"ÿÎˇı";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column3->HeaderText = L"–ÓÁÏ≥";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 67;
			// 
			// status
			// 
			this->status->AutoSize = true;
			this->status->Dock = System::Windows::Forms::DockStyle::Fill;
			this->status->Location = System::Drawing::Point(3, 0);
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(242, 23);
			this->status->TabIndex = 4;
			this->status->Text = L"Œ˜≥ÍÛ‚‡ÌÌˇ";
			// 
			// progressBar1
			// 
			this->progressBar1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->progressBar1->Location = System::Drawing::Point(251, 3);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(242, 17);
			this->progressBar1->TabIndex = 3;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->progressBar1, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->status, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 316);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(496, 23);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->dataGridView1, 0, 1);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 55)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 23)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(496, 339);
			this->tableLayoutPanel2->TabIndex = 6;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 339);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(512, 378);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DelDup";
			this->EnabledChanged += gcnew System::EventHandler(this, &MainForm::MainForm_EnabledChanged);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		static void Scan(Label ^status, DataGridView ^dataGridView1, ProgressBar ^progressBar1)
		{
			status->Text = "—Í‡ÌÛ‚‡ÌÌˇ";
			dataGridView1->Rows->Clear();
			Process::ClearFileInfoList();

			wchar_t path[255] = L"C:\\Users\\";

			String^ name = Environment::UserName;
			const wchar_t* chars =
				(wchar_t*)(Runtime::InteropServices::Marshal::StringToHGlobalUni(name)).ToPointer();
			wcscat_s(path, chars);
			wcscat_s(path, L"\\Downloads");;

			FileSize = Options::size * 1024;

			SetProgressBar(progressBar1, path, FileSize);

			Process::Find(path, FileSize, progressBar1);
			list<FileInfo> dup = Process::CompareFiles();
			int i = 0;

			if (dup.size() == 0)
			{
				dataGridView1->Rows[i]->Cells[0]->Value = "ƒÛ·Î≥Í‡ÚË ‚≥‰ÒÛÚÌ≥";
			}
			else {
				for each (FileInfo duplicate in dup)
				{
					if (i != dup.size() - 1)
					{
						dataGridView1->Rows->Add();
					}
					dataGridView1->Rows[i]->Cells[0]->Value = Process::ConvertString(duplicate.fileName);
					dataGridView1->Rows[i]->Cells[1]->Value = Process::ConvertString(duplicate.filePath);
					dataGridView1->Rows[i]->Cells[2]->Value = Process::ConvertString(duplicate.fileSize);
					i++;
				}
			}
			status->Text = "—Í‡ÌÛ‚‡ÌÌˇ Á‡‚Â¯ÂÌÓ";
		}

		static void DeleteFiles(Label ^status, DataGridView ^dataGridView1, ProgressBar^ progressBar1)
		{
			status->Text = "¬Ë‰‡ÎÂÌÌˇ";
			progressBar1->Value = 0;
			progressBar1->Maximum = dataGridView1->Rows->Count-1;
			if (Process::DeleteFiles(progressBar1))
			{
				status->Text = "‘‡ÈÎË ‰Îˇ ‚Ë‰‡ÎÂÌÌˇ ‚≥‰ÒÛÚÌ≥";
			}
			else {
				dataGridView1->Rows->Clear();
				Process::ClearFileInfoList();
				status->Text = "¬Ë‰‡ÎÂÌÌˇ Á‡‚Â¯ÂÌÓ";
			}
		}

		static void SetProgressBar(ProgressBar^ progressBar1, wchar_t* path, int fileSize)
		{
			progressBar1->Minimum = 0;
			progressBar1->Maximum = Process::CountFiles(path, fileSize);
			progressBar1->Value = 0;
			progressBar1->Step = 1;
		}

		static void Exit()
		{
			Application::Exit();
		}

	public: static int FileSize = 0;
				
	private: System::Void ‚ËÈÚËToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Exit();
	}
	private: System::Void ÔÓœÓ„‡ÏÛToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Form2 ^ m = gcnew Form2(this);
		MainForm::Enabled = false;
		m->Show();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		MainForm::Scan(status, dataGridView1, progressBar1);
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		Exit();
	}
	private: System::Void ÒÍ‡ÌÛ‚‡ÚËToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MainForm::Scan(status, dataGridView1, progressBar1);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		MainForm::DeleteFiles(status, dataGridView1, progressBar1);
	}
	private: System::Void ÁÛÔËÌËÚËToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MainForm::DeleteFiles(status, dataGridView1, progressBar1);
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Options^ m = gcnew Options(this);
	Options::size = FileSize;
	MainForm::Enabled = false;
	m->Show();
}
private: System::Void Ì‡Î‡¯ÚÛ‚‡ÌÌˇToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Options^ m = gcnew Options(this);
	Options::size = FileSize;
	MainForm::Enabled = false;
	m->Show();
}
private: System::Void ‰Ó‚≥‰Í‡ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	system("start Help.pdf");
}
private: System::Void MainForm_EnabledChanged(System::Object^  sender, System::EventArgs^  e) {
	MainForm::Scan(status, dataGridView1, progressBar1);
}
};
}
