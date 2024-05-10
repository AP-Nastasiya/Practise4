#pragma once
#include<cmath>
#include "MyForm1.h"

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem7;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem9;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem10;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem8;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem11;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem12;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem13;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem14;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem15;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem16;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Highlight;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2, this->toolStripMenuItem3
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(515, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem5,
					this->toolStripMenuItem6
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(48, 20);
			this->toolStripMenuItem1->Text = L"&Файл";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(269, 22);
			this->toolStripMenuItem5->Text = L"&Сохранить данные таблицы в файл";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem5_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(269, 22);
			this->toolStripMenuItem6->Text = L"выход";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem6_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem7,
					this->toolStripMenuItem8
			});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(39, 20);
			this->toolStripMenuItem2->Text = L"Вид";
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripMenuItem9,
					this->toolStripMenuItem10, this->toolStripMenuItem11, this->toolStripMenuItem12, this->toolStripMenuItem13, this->toolStripMenuItem14
			});
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(120, 22);
			this->toolStripMenuItem7->Text = L"Таблица";
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(244, 22);
			this->toolStripMenuItem9->Text = L"Цвет текста";
			this->toolStripMenuItem9->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem9_Click);
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->Size = System::Drawing::Size(244, 22);
			this->toolStripMenuItem10->Text = L"Цвет фона ячеек";
			this->toolStripMenuItem10->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem10_Click);
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(244, 22);
			this->toolStripMenuItem11->Text = L"Высота строк";
			this->toolStripMenuItem11->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem11_Click);
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(244, 22);
			this->toolStripMenuItem12->Text = L"Ширина столбцов";
			this->toolStripMenuItem12->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem12_Click);
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(244, 22);
			this->toolStripMenuItem13->Text = L"Параметры шрифта заголовка";
			this->toolStripMenuItem13->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem13_Click);
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(244, 22);
			this->toolStripMenuItem14->Text = L"Цвет шрифта заголовка";
			this->toolStripMenuItem14->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem14_Click);
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem15,
					this->toolStripMenuItem16
			});
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(120, 22);
			this->toolStripMenuItem8->Text = L"График";
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->Size = System::Drawing::Size(181, 22);
			this->toolStripMenuItem15->Text = L"Цвет графика";
			this->toolStripMenuItem15->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem15_Click);
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			this->toolStripMenuItem16->Size = System::Drawing::Size(181, 22);
			this->toolStripMenuItem16->Text = L"Цвет фона графика";
			this->toolStripMenuItem16->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem16_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(54, 20);
			this->toolStripMenuItem3->Text = L"Выход";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem3_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Top;
			this->tabControl1->Location = System::Drawing::Point(0, 24);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(515, 334);
			this->tabControl1->TabIndex = 3;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::LightCyan;
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(507, 308);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Вывод данных";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(316, 190);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"4";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(316, 151);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"0,36";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(316, 116);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"7,8";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(316, 79);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"-3,2";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(28, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(255, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Введите положительное значение А=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(28, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Введите шаг XH=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(28, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(222, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Введите конечное значение XK=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(28, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(232, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введите начальное значение XN=";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(57, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(330, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ввод данных промежутка";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::PaleTurquoise;
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(529, 308);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Таблица данных промежутка";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 59);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(267, 238);
			this->dataGridView1->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(8, 24);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(440, 20);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Таблица значений функции на промежутке [XN;XK]";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(301, 137);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(180, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Максимальное значение функции";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(307, 203);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(174, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Минимальное значение функции";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(354, 232);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 1;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(354, 168);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->chart1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(529, 288);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"График функции на промежутке";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(8, 16);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"график";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(513, 246);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->Location = System::Drawing::Point(30, 364);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(473, 38);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(515, 412);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Выполнил студент группы 23-КФ Лапацуева А. П.";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void toolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}



private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double x, xn, xk, xh, y;
	Series^ plot1 = chart1->Series[0];
	//Очистка компонента Chart1
	plot1->Points->Clear();
	//Проверка, что введены данные xn, xk, xh и их преобразование в переменные типа Double
	if ((textBox1->Text != "") && (textBox2->Text != "")
		&& (textBox3->Text != ""))
	{
		xn = Convert::ToDouble(textBox1->Text);
		xk = Convert::ToDouble(textBox2->Text);
		xh = Convert::ToDouble(textBox3->Text);
		//Проверка правильности ввода данных
		if ((xn >= xk) || (xh > (xk - xn)))
		{
			MessageBox::Show("Данные заполнены неверно", "Ошибкаввода данных",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else
		{
			x = xn;
			while (x <= xk)
			{
				if (x <= 0) y = pow(x, 4) + 2 * pow(x, 3) - x;
				else
					if (x > 0 && x < 5) y = exp(-x) + pow(x, 1 / 4);
					else y = log10(pow(x, 3) + pow(x, 2));
				//Нанесение точки с координатами Х и У в компоненте Chart1
				plot1->Points->AddXY(x, y);

				x = x + xh;
			}
		}

	}
	else
	{
		MessageBox::Show("Заполните, пожалуйста, данные", "Ошибка ввода данных",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}//потом удалить
//private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {	}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	double xn, xk, xh, x, y, a, ymax, ymin, yt;
	int i, n;
	Series^ plot1 = chart1->Series[0];
	//Очистка компонента Chart1
	plot1->Points->Clear();
	//Проверка, что введены данные xn, xk, xh и их преобразование в переменные типа Double
	if ((textBox1->Text != "") && (textBox2->Text != "")
		&& (textBox3->Text != "") && (textBox3->Text != ""))
	{
		xn = Convert::ToDouble(textBox1->Text);
		xk = Convert::ToDouble(textBox2->Text);
		xh = Convert::ToDouble(textBox3->Text);
		a = Convert::ToDouble(textBox4->Text);
		//Проверка правильности ввода данных
		if ((xn >= xk) || (xh > (xk - xn)))
		{
			MessageBox::Show("Данные заполнены неверно", "Ошибкаввода данных",MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else
		{
			x = xn;
			while (x <= xk)
			{
				if (x <= 0) y = pow(x, 4) + 2 * pow(x, 3) - x;
				else
					if (x > 0 && x < 5) y = exp(-x) + pow(x, 1 / 4);
					else y = log10(pow(x, 3) + pow(x, 2));
				//Нанесение точки с координатами Х и У в компоненте Chart1
				plot1->Points->AddXY(x, y);

				x = x + xh;
			}
		}

	}
	else
	{
		MessageBox::Show("Заполните, пожалуйста, данные", "Ошибка ввода данных",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	//вторая вкладка
	if ((xn >= xk) || (xh > (xk - xn))) {
		MessageBox::Show("Данные заполнены неверно", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else
	{
		x = xn;
		dataGridView1->Columns->Clear();
		//Заполнение DGView столбцами
		dataGridView1->ColumnCount = 2;
		//Заполнение DGView строками 
		dataGridView1->Rows->Add(ceil((xk - xn) / xh) + 1);
		dataGridView1->Rows[0]->Cells[0]->Value = Convert::ToString(" x");
		dataGridView1->Rows[0]->Cells[1]->Value = Convert::ToString("Y");
		i = 1; x = xn; ymax = -1.8e307; ymin = 1.8e307;
		while
			(x <= xk)
		{
			if (x <= 0) { y = pow(x, 4) + 2 * pow(x, 3) - x; }
			else
				if (x > 0 && x < a) { y = exp(-x) + pow(x, 1 / 4); }
				else
					if (x > a) {
						y = log10(pow(x, 3) + pow(x, 2));}

			plot1->Points->AddXY(x, y);
			dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(x);
			//переменной yt присваивает округленное до двух знаков после запятой значение у
			yt = ceil(y * 100) / 100;
			//Вывод во втором столбце таблицы значение функции
			dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(yt);
			//находит максимальное и минимальное значение и округляет до двух знаков после запятой 

			if (y > ymax) ymax = ceil(y * 100) / 100;
			if (y < ymin) ymin = ceil(y * 100) / 100;
			x = x + xh;
			i++;
		}


		//выводит в компоненты textbox максимальное и минимальное значение функции

		textBox5->Text = Convert::ToString(ymax);
		textBox6->Text = Convert::ToString(ymin);
	}
}
	
private: System::Void toolStripMenuItem9_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ colorDialog1 = gcnew ColorDialog();
	if (colorDialog1->ShowDialog() == System::Windows:: Forms::DialogResult::OK)
	{
		dataGridView1->DefaultCellStyle->ForeColor = colorDialog1 -> Color;
	}
}
private: System::Void toolStripMenuItem10_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ colorDialog1 = gcnew ColorDialog();
	if (colorDialog1 -> ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		dataGridView1->DefaultCellStyle -> BackColor = colorDialog1->Color;
	}

}
private: System::Void toolStripMenuItem13_Click(System::Object^ sender, System::EventArgs^ e) {
	FontDialog^ fontDialog1 = gcnew FontDialog();
	if (fontDialog1 -> ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		label6->Font = fontDialog1->Font;
		label7->Font = fontDialog1->Font;
		label8->Font = fontDialog1->Font;
	}
}
private: System::Void toolStripMenuItem14_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ colorDialog1 = gcnew ColorDialog();
	if (colorDialog1->ShowDialog() == System:: Windows::Forms::DialogResult::OK)
	{
		label6->ForeColor = colorDialog1->Color;
		label7->ForeColor = colorDialog1->Color;
		label8->ForeColor = colorDialog1->Color;
	}

}
private: System::Void toolStripMenuItem15_Click(System::Object^ sender, System::EventArgs^ e) {
	Series^ plot1 = chart1->Series[0];
	ColorDialog^ colorDialog1 = gcnew ColorDialog();
	if (colorDialog1->ShowDialog() == System:: Windows::Forms::DialogResult::OK)
		plot1->Color = colorDialog1->Color;
}

private: System::Void toolStripMenuItem16_Click(System::Object^ sender, System::EventArgs^ e) {
	Series^ plot1 = chart1->Series[0];
	ColorDialog^ colorDialog1 = gcnew ColorDialog();
	if (colorDialog1->ShowDialog() == System:: Windows::Forms::DialogResult::OK) {chart1 -> BackColor = colorDialog1->Color;
	}
}
private: System::Void toolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "Text Files|*.txt";
	saveFileDialog1->FilterIndex = 2; saveFileDialog1 -> RestoreDirectory = true;
	if (saveFileDialog1->ShowDialog()== System::Windows::Forms:: DialogResult::OK)
	{
		StreamWriter^ pwriter = gcnew StreamWriter(saveFileDialog1->FileName);
		for (int i = 0; i < dataGridView1->RowCount; i++) pwriter->WriteLine(dataGridView1->Rows[i]->Cells[0]->Value->ToString() + "| " + dataGridView1->Rows[i]->Cells[1]->Value->ToString());
		pwriter->Close();
	}

}
private: System::Void toolStripMenuItem11_Click(System::Object^ sender, System::EventArgs^ e) {
	int h;
	MyForm1^ f = gcnew MyForm1();
	this->Hide();
	f -> ShowDialog();
	this -> Show();
	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		DataGridViewRow^ row = dataGridView1->Rows[i];
		row->Height = h;
	}
}
private: System::Void toolStripMenuItem12_Click(System::Object^ sender, System::EventArgs^ e) {
	int m;
	MyForm1^ f = gcnew MyForm1();
	this->Hide();
	f -> ShowDialog();
	this -> Show();
	for (int i = 0; i < dataGridView1->ColumnCount; i++)
	{
		 DataGridViewColumn^ column = dataGridView1->Columns[i];
	   	 column->Width = m;
	}

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì 
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251  ýòî íå ÷èñëî) 
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') { t++; }
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé 
	if (str[t] == ',' || str[t] == '.') { a = false; } while (t < l)
	{
		if (str[t] == ',' || str[t] == '.')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà 
		{
			if (t == l - 1 || k > 0) { a = false; } k++;
		}
		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9' 
		else if (str[t] < '0' ||
			str[t] > '9') {
			a = false;
		}
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ 
		this->textBox1->Focus();
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì 
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251  ýòî íå ÷èñëî) 
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') { t++; }
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé 
	if (str[t] == ',' || str[t] == '.') { a = false; } while (t < l)
	{
		if (str[t] == ',' || str[t] == '.')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà 
		{
			if (t == l - 1 || k > 0) { a = false; } k++;
		}
		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9' 
		else if (str[t] < '0' ||
			str[t] > '9') {
			a = false;
		}
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ 
		this->textBox1->Focus();
	}
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì 
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251  ýòî íå ÷èñëî) 
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') { t++; }
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé 
	if (str[t] == ',' || str[t] == '.') { a = false; } while (t < l)
	{
		if (str[t] == ',' || str[t] == '.')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà 
		{
			if (t == l - 1 || k > 0) { a = false; } k++;
		}
		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9' 
		else if (str[t] < '0' ||
			str[t] > '9') {
			a = false;
		}
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ 
		this->textBox1->Focus();
	}
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì 
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251  ýòî íå ÷èñëî) 
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') { t++; }
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé 
	if (str[t] == ',' || str[t] == '.') { a = false; } while (t < l)
	{
		if (str[t] == ',' || str[t] == '.')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà 
		{
			if (t == l - 1 || k > 0) { a = false; } k++;
		}
		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9' 
		else if (str[t] < '0' ||
			str[t] > '9') {
			a = false;
		}
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ 
		this->textBox1->Focus();
	}
}
};
}
