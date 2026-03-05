#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Taschenrechner : public System::Windows::Forms::Form
	{
	private:
		double ersteZahl = 0;
		String^ rechenOperation = "";

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ dateiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mnu_exit;
	private: System::Windows::Forms::ToolStripMenuItem^ mnu_info;


		   bool istNeueZahl = true;

	public:
		Taschenrechner(void)
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
		~Taschenrechner()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ grp_box;
	private: System::Windows::Forms::TextBox^ txb_ausgabe;
	private: System::Windows::Forms::Button^ btn_0;

	private: System::Windows::Forms::Button^ btn_3;

	private: System::Windows::Forms::Button^ btn_2;

	private: System::Windows::Forms::Button^ btn_1;
	private: System::Windows::Forms::Button^ btn_6;


	private: System::Windows::Forms::Button^ btn_5;
	private: System::Windows::Forms::Button^ btn_9;


	private: System::Windows::Forms::Button^ btn_7;
	private: System::Windows::Forms::Button^ btn_8;


	private: System::Windows::Forms::Button^ btn_4;
	private: System::Windows::Forms::Button^ btn_komma;

	private: System::Windows::Forms::Button^ btn_pl_min;
	private: System::Windows::Forms::Button^ btn_teilen;
	private: System::Windows::Forms::Button^ btn_mal;
	private: System::Windows::Forms::Button^ btn_minus;
	private: System::Windows::Forms::Button^ btn_plus;
	private: System::Windows::Forms::Button^ btn_c;
	private: System::Windows::Forms::Button^ btn_enter;

	private: System::Windows::Forms::Button^ btn_prozent;


	protected:


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->grp_box = (gcnew System::Windows::Forms::GroupBox());
			this->btn_prozent = (gcnew System::Windows::Forms::Button());
			this->btn_enter = (gcnew System::Windows::Forms::Button());
			this->btn_c = (gcnew System::Windows::Forms::Button());
			this->btn_komma = (gcnew System::Windows::Forms::Button());
			this->btn_pl_min = (gcnew System::Windows::Forms::Button());
			this->btn_teilen = (gcnew System::Windows::Forms::Button());
			this->btn_mal = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->txb_ausgabe = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->dateiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnu_exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnu_info = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grp_box->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// grp_box
			// 
			this->grp_box->BackColor = System::Drawing::SystemColors::ControlLight;
			this->grp_box->Controls->Add(this->btn_prozent);
			this->grp_box->Controls->Add(this->btn_enter);
			this->grp_box->Controls->Add(this->btn_c);
			this->grp_box->Controls->Add(this->btn_komma);
			this->grp_box->Controls->Add(this->btn_pl_min);
			this->grp_box->Controls->Add(this->btn_teilen);
			this->grp_box->Controls->Add(this->btn_mal);
			this->grp_box->Controls->Add(this->btn_minus);
			this->grp_box->Controls->Add(this->btn_plus);
			this->grp_box->Controls->Add(this->btn_3);
			this->grp_box->Controls->Add(this->btn_2);
			this->grp_box->Controls->Add(this->btn_1);
			this->grp_box->Controls->Add(this->btn_6);
			this->grp_box->Controls->Add(this->btn_5);
			this->grp_box->Controls->Add(this->btn_9);
			this->grp_box->Controls->Add(this->btn_7);
			this->grp_box->Controls->Add(this->btn_8);
			this->grp_box->Controls->Add(this->btn_4);
			this->grp_box->Controls->Add(this->btn_0);
			this->grp_box->Controls->Add(this->txb_ausgabe);
			this->grp_box->Location = System::Drawing::Point(543, 88);
			this->grp_box->Name = L"grp_box";
			this->grp_box->Size = System::Drawing::Size(574, 670);
			this->grp_box->TabIndex = 0;
			this->grp_box->TabStop = false;
			// 
			// btn_prozent
			// 
			this->btn_prozent->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_prozent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_prozent->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_prozent->FlatAppearance->BorderSize = 0;
			this->btn_prozent->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_prozent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_prozent->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_prozent->Location = System::Drawing::Point(345, 246);
			this->btn_prozent->Name = L"btn_prozent";
			this->btn_prozent->Size = System::Drawing::Size(75, 56);
			this->btn_prozent->TabIndex = 20;
			this->btn_prozent->Text = L"%";
			this->btn_prozent->UseVisualStyleBackColor = false;
			this->btn_prozent->Click += gcnew System::EventHandler(this, &Taschenrechner::btn_prozent_Click);
			// 
			// btn_enter
			// 
			this->btn_enter->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_enter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_enter->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_enter->FlatAppearance->BorderSize = 0;
			this->btn_enter->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_enter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_enter->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_enter->ForeColor = System::Drawing::Color::Red;
			this->btn_enter->Location = System::Drawing::Point(345, 545);
			this->btn_enter->Name = L"btn_enter";
			this->btn_enter->Size = System::Drawing::Size(169, 56);
			this->btn_enter->TabIndex = 19;
			this->btn_enter->Text = L"=";
			this->btn_enter->UseVisualStyleBackColor = false;
			this->btn_enter->Click += gcnew System::EventHandler(this, &Taschenrechner::btn_enter_Click);
			// 
			// btn_c
			// 
			this->btn_c->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_c->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_c->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_c->FlatAppearance->BorderSize = 0;
			this->btn_c->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_c->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_c->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_c->ForeColor = System::Drawing::Color::Red;
			this->btn_c->Location = System::Drawing::Point(163, 246);
			this->btn_c->Name = L"btn_c";
			this->btn_c->Size = System::Drawing::Size(75, 56);
			this->btn_c->TabIndex = 18;
			this->btn_c->Text = L"C";
			this->btn_c->UseVisualStyleBackColor = false;
			this->btn_c->Click += gcnew System::EventHandler(this, &Taschenrechner::btn_c_Click);
			// 
			// btn_komma
			// 
			this->btn_komma->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_komma->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_komma->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_komma->FlatAppearance->BorderSize = 0;
			this->btn_komma->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_komma->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_komma->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_komma->Location = System::Drawing::Point(254, 545);
			this->btn_komma->Name = L"btn_komma";
			this->btn_komma->Size = System::Drawing::Size(75, 56);
			this->btn_komma->TabIndex = 17;
			this->btn_komma->Text = L",";
			this->btn_komma->UseVisualStyleBackColor = false;
			this->btn_komma->Click += gcnew System::EventHandler(this, &Taschenrechner::btn_komma_Click);
			// 
			// btn_pl_min
			// 
			this->btn_pl_min->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_pl_min->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_pl_min->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_pl_min->FlatAppearance->BorderSize = 0;
			this->btn_pl_min->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_pl_min->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_pl_min->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pl_min->Location = System::Drawing::Point(254, 246);
			this->btn_pl_min->Name = L"btn_pl_min";
			this->btn_pl_min->Size = System::Drawing::Size(75, 56);
			this->btn_pl_min->TabIndex = 16;
			this->btn_pl_min->Text = L"+/-";
			this->btn_pl_min->UseVisualStyleBackColor = false;
			this->btn_pl_min->Click += gcnew System::EventHandler(this, &Taschenrechner::btn_pl_min_Click);
			// 
			// btn_teilen
			// 
			this->btn_teilen->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_teilen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_teilen->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_teilen->FlatAppearance->BorderSize = 0;
			this->btn_teilen->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_teilen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_teilen->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_teilen->Location = System::Drawing::Point(439, 468);
			this->btn_teilen->Name = L"btn_teilen";
			this->btn_teilen->Size = System::Drawing::Size(75, 56);
			this->btn_teilen->TabIndex = 15;
			this->btn_teilen->Text = L"/";
			this->btn_teilen->UseVisualStyleBackColor = false;
			this->btn_teilen->Click += gcnew System::EventHandler(this, &Taschenrechner::Operator_Click);
			// 
			// btn_mal
			// 
			this->btn_mal->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_mal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_mal->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_mal->FlatAppearance->BorderSize = 0;
			this->btn_mal->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_mal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_mal->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_mal->Location = System::Drawing::Point(439, 393);
			this->btn_mal->Name = L"btn_mal";
			this->btn_mal->Size = System::Drawing::Size(75, 56);
			this->btn_mal->TabIndex = 14;
			this->btn_mal->Text = L"x";
			this->btn_mal->UseVisualStyleBackColor = false;
			this->btn_mal->Click += gcnew System::EventHandler(this, &Taschenrechner::Operator_Click);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_minus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_minus->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_minus->FlatAppearance->BorderSize = 0;
			this->btn_minus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_minus->Location = System::Drawing::Point(439, 319);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(75, 56);
			this->btn_minus->TabIndex = 13;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &Taschenrechner::Operator_Click);
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_plus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_plus->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_plus->FlatAppearance->BorderSize = 0;
			this->btn_plus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_plus->Location = System::Drawing::Point(439, 246);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(75, 56);
			this->btn_plus->TabIndex = 12;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = false;
			this->btn_plus->Click += gcnew System::EventHandler(this, &Taschenrechner::Operator_Click);
			// 
			// btn_3
			// 
			this->btn_3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_3->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_3->FlatAppearance->BorderSize = 0;
			this->btn_3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_3->Location = System::Drawing::Point(345, 319);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(75, 56);
			this->btn_3->TabIndex = 11;
			this->btn_3->Text = L"3";
			this->btn_3->UseVisualStyleBackColor = false;
			this->btn_3->Click += gcnew System::EventHandler(this, &Taschenrechner::Zahl_Click);
			// 
			// btn_2
			// 
			this->btn_2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_2->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_2->FlatAppearance->BorderSize = 0;
			this->btn_2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_2->Location = System::Drawing::Point(254, 319);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(75, 56);
			this->btn_2->TabIndex = 10;
			this->btn_2->Text = L"2";
			this->btn_2->UseVisualStyleBackColor = false;
			this->btn_2->Click += gcnew System::EventHandler(this, &Taschenrechner::Zahl_Click);
			// 
			// btn_1
			// 
			this->btn_1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_1->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_1->FlatAppearance->BorderSize = 0;
			this->btn_1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_1->Location = System::Drawing::Point(163, 319);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(75, 56);
			this->btn_1->TabIndex = 9;
			this->btn_1->Text = L"1";
			this->btn_1->UseVisualStyleBackColor = false;
			this->btn_1->Click += gcnew System::EventHandler(this, &Taschenrechner::Zahl_Click);
			// 
			// btn_6
			// 
			this->btn_6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_6->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_6->FlatAppearance->BorderSize = 0;
			this->btn_6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_6->Location = System::Drawing::Point(345, 393);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(75, 56);
			this->btn_6->TabIndex = 8;
			this->btn_6->Text = L"6";
			this->btn_6->UseVisualStyleBackColor = false;
			this->btn_6->Click += gcnew System::EventHandler(this, &Taschenrechner::Zahl_Click);
			// 
			// btn_5
			// 
			this->btn_5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_5->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_5->FlatAppearance->BorderSize = 0;
			this->btn_5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_5->Location = System::Drawing::Point(254, 393);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(75, 56);
			this->btn_5->TabIndex = 7;
			this->btn_5->Text = L"5";
			this->btn_5->UseVisualStyleBackColor = false;
			this->btn_5->Click += gcnew System::EventHandler(this, &Taschenrechner::Zahl_Click);
			// 
			// btn_9
			// 
			this->btn_9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_9->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_9->FlatAppearance->BorderSize = 0;
			this->btn_9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_9->Location = System::Drawing::Point(345, 468);
			this->btn_9->Name = L"btn_9";
			this->btn_9->Size = System::Drawing::Size(75, 56);
			this->btn_9->TabIndex = 6;
			this->btn_9->Text = L"9";
			this->btn_9->UseVisualStyleBackColor = false;
			this->btn_9->Click += gcnew System::EventHandler(this, &Taschenrechner::Zahl_Click);
			// 
			// btn_7
			// 
			this->btn_7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_7->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_7->FlatAppearance->BorderSize = 0;
			this->btn_7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_7->Location = System::Drawing::Point(163, 468);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(75, 56);
			this->btn_7->TabIndex = 5;
			this->btn_7->Text = L"7";
			this->btn_7->UseVisualStyleBackColor = false;
			this->btn_7->Click += gcnew System::EventHandler(this, &Taschenrechner::Zahl_Click);
			// 
			// btn_8
			// 
			this->btn_8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_8->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_8->FlatAppearance->BorderSize = 0;
			this->btn_8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_8->Location = System::Drawing::Point(254, 468);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(75, 56);
			this->btn_8->TabIndex = 4;
			this->btn_8->Text = L"8";
			this->btn_8->UseVisualStyleBackColor = false;
			this->btn_8->Click += gcnew System::EventHandler(this, &Taschenrechner::Zahl_Click);
			// 
			// btn_4
			// 
			this->btn_4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_4->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_4->FlatAppearance->BorderSize = 0;
			this->btn_4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_4->Location = System::Drawing::Point(163, 393);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(75, 56);
			this->btn_4->TabIndex = 3;
			this->btn_4->Text = L"4";
			this->btn_4->UseVisualStyleBackColor = false;
			this->btn_4->Click += gcnew System::EventHandler(this, &Taschenrechner::Zahl_Click);
			// 
			// btn_0
			// 
			this->btn_0->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_0->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btn_0->FlatAppearance->BorderSize = 0;
			this->btn_0->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->btn_0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_0->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_0->Location = System::Drawing::Point(163, 545);
			this->btn_0->Name = L"btn_0";
			this->btn_0->Size = System::Drawing::Size(75, 56);
			this->btn_0->TabIndex = 2;
			this->btn_0->Text = L"0";
			this->btn_0->UseVisualStyleBackColor = false;
			this->btn_0->Click += gcnew System::EventHandler(this, &Taschenrechner::Zahl_Click);
			// 
			// txb_ausgabe
			// 
			this->txb_ausgabe->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->txb_ausgabe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txb_ausgabe->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txb_ausgabe->ForeColor = System::Drawing::Color::Black;
			this->txb_ausgabe->Location = System::Drawing::Point(163, 156);
			this->txb_ausgabe->Name = L"txb_ausgabe";
			this->txb_ausgabe->ReadOnly = true;
			this->txb_ausgabe->Size = System::Drawing::Size(351, 44);
			this->txb_ausgabe->TabIndex = 0;
			this->txb_ausgabe->Text = L"0";
			this->txb_ausgabe->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::LightGray;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->dateiToolStripMenuItem,
					this->mnu_info
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1253, 39);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// dateiToolStripMenuItem
			// 
			this->dateiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mnu_exit });
			this->dateiToolStripMenuItem->Name = L"dateiToolStripMenuItem";
			this->dateiToolStripMenuItem->Size = System::Drawing::Size(82, 35);
			this->dateiToolStripMenuItem->Text = L"Datei";
			// 
			// mnu_exit
			// 
			this->mnu_exit->Name = L"mnu_exit";
			this->mnu_exit->Size = System::Drawing::Size(224, 36);
			this->mnu_exit->Text = L"Beenden";
			this->mnu_exit->Click += gcnew System::EventHandler(this, &Taschenrechner::mnu_exit_Click);
			// 
			// mnu_info
			// 
			this->mnu_info->Name = L"mnu_info";
			this->mnu_info->Size = System::Drawing::Size(67, 35);
			this->mnu_info->Text = L"Info";
			this->mnu_info->Click += gcnew System::EventHandler(this, &Taschenrechner::mnu_info_Click);
			// 
			// Taschenrechner
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1253, 822);
			this->Controls->Add(this->grp_box);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Taschenrechner";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Taschenrechner";
			this->Load += gcnew System::EventHandler(this, &Taschenrechner::Taschenrechner_Load);
			this->grp_box->ResumeLayout(false);
			this->grp_box->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Taschenrechner_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Zahl_Click(System::Object^ sender, System::EventArgs^ e) {
		if (istNeueZahl) {
			this->txb_ausgabe->Text = "";
			istNeueZahl = false;
		}

		Button^ geklickterButton = safe_cast<Button^>(sender);

		if (this->txb_ausgabe->Text == "0") {
			this->txb_ausgabe->Text = geklickterButton->Text;
		}
		else {
			this->txb_ausgabe->Text += geklickterButton->Text;
		}
	}

	private: System::Void Operator_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ geklickterButton = safe_cast<Button^>(sender);

		ersteZahl = Double::Parse(this->txb_ausgabe->Text);
		rechenOperation = geklickterButton->Text;
		istNeueZahl = true;
	}

	private: System::Void btn_komma_Click(System::Object^ sender, System::EventArgs^ e) {
		if (istNeueZahl) {
			this->txb_ausgabe->Text = "0,";
			istNeueZahl = false;
		}
		else if (!this->txb_ausgabe->Text->Contains(",")) {
			this->txb_ausgabe->Text += ",";
		}
	}
	private: System::Void btn_pl_min_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->txb_ausgabe->Text != "0" && this->txb_ausgabe->Text != "") {
			if (this->txb_ausgabe->Text->StartsWith("-")) {
				this->txb_ausgabe->Text = this->txb_ausgabe->Text->Substring(1);
			}
			else {
				this->txb_ausgabe->Text = "-" + this->txb_ausgabe->Text;
			}
		}
	}
	private: System::Void btn_c_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txb_ausgabe->Text = "0";
		ersteZahl = 0;
		rechenOperation = "";
		istNeueZahl = true;
	}
	private: System::Void btn_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		double zweiteZahl = 0;
		double ergebnis = 0;

		if (!Double::TryParse(this->txb_ausgabe->Text, zweiteZahl)) {
			return;
		}

		if (rechenOperation == "+") {
			ergebnis = ersteZahl + zweiteZahl;
		}
		else if (rechenOperation == "-") {
			ergebnis = ersteZahl - zweiteZahl;
		}
		else if (rechenOperation == "x") { 
			ergebnis = ersteZahl * zweiteZahl;
		}
		else if (rechenOperation == "/") {
			if (zweiteZahl == 0) {
				MessageBox::Show("Teilen durch 0 nicht möglich!", "Fehler", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->txb_ausgabe->Text = "0";
				istNeueZahl = true;
				return;
			}
			ergebnis = ersteZahl / zweiteZahl;
		}
		else {
			return;
		}

		this->txb_ausgabe->Text = ergebnis.ToString();

		ersteZahl = ergebnis; 
		rechenOperation = ""; 
		istNeueZahl = true;
	}
	private: System::Void btn_prozent_Click(System::Object^ sender, System::EventArgs^ e) {
		double aktuellerWert = 0;

		if (Double::TryParse(this->txb_ausgabe->Text, aktuellerWert)) {
			aktuellerWert = aktuellerWert / 100;

			this->txb_ausgabe->Text = aktuellerWert.ToString();
			istNeueZahl = true; 
		}
	}
	private: System::Void mnu_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void mnu_info_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Version 1 \nEin C++/CLR Taschenrechner.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
};
}
