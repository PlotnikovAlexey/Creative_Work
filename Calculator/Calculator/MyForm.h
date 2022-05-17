#pragma once
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// Функция возведения в степень
	double power(double x, int y) {
		return System::Math::Pow(x, y);
	}
	//Функция для вычисления косинуса
	double cosinus(double x) {
		return System::Math::Cos(x);
	}
	//Функция для вычисления арккосинуса
	double acosinus(double x) {
		return System::Math::Acos(x);
	}
	//Функция для вычисления синуса
	double sinus(double x) {
		return System::Math::Sin(x);
	}
	//Функция для вычисления арксинуса
	double asinus(double x) {
		return System::Math::Asin(x);
	}
	//Функция для вычисления тангенсов
	double tangens(double x) {
		return System::Math::Tan(x);
	}
	//Функция для вычисления арктангенсов
	double atangens(double x) {
		return System::Math::Atan(x);
	}
	//Функция для вычисления логарифма
	float logar(double a, double b) {
		return (System::Math::Log(b) / System::Math::Log(a));
	}
	// Функция перевода в тип Int
	int todouble(System::String^ str, int y) {
		switch (str[y])
		{
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		default:
			break;
		}
	}
	//Функция проверки, является ли следующий знак числом
	bool nextch(System::String^ str,int tek) {
		if (str[tek+1] >= '0' && str[tek + 1] <= '9') {
			return true;
		}
		else {
			return false;
		}
	}
	//Функция проверки, является ли предыдущий знак числом
	bool prevch(System::String^ str, int tek) {
		if (str[tek - 1] >= '0' && str[tek - 1] <= '9') {
			return true;
		}
		else {
			return false;
		}
	}
	// Функция проверки на pi, x и e
	bool per(System::String^ str, int tek) {
		if (str[tek] == 'x' || str[tek] == 'i' || str[tek] == 'e') {
			return true;
		}
		else {
			return false;
		}
	}
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;



















	private: System::Windows::Forms::Label^ label13;















	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label12;



	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;






	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(425, 71);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Алгеброическое уравнение", L"Трансцендентное уравнение" });
			this->comboBox1->Location = System::Drawing::Point(401, 9);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(175, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Text = L"Выберите вид уравнения";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(13, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введите уравнение:";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(12, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(194, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Введите промежуток:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(23, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"от";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(58, 135);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(53, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(170, 135);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(53, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(126, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"до";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(133, 196);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(105, 20);
			this->textBox4->TabIndex = 10;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(24, 196);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Результат:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(43, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(164, 24);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Не выбран вид!";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Location = System::Drawing::Point(364, 71);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(34, 20);
			this->label13->TabIndex = 33;
			this->label13->Text = L"= 0";
			this->label13->Visible = false;
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click_1);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(295, 169);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(53, 20);
			this->textBox10->TabIndex = 49;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Location = System::Drawing::Point(7, 167);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(279, 20);
			this->label12->TabIndex = 50;
			this->label12->Text = L"Введите точность вычислений:";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(17, 71);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(341, 20);
			this->textBox11->TabIndex = 54;
			this->textBox11->Visible = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(447, 110);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 33);
			this->button2->TabIndex = 55;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(456, 169);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 46);
			this->button3->TabIndex = 56;
			this->button3->Text = L"Примеры";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(581, 220);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор уравнений";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Protect()) {
			System::String^ s;
			bool logf = false;
			int logfc = 0;
			int perem;
			double logs[100];
			for (int i = 0; i < 100; i++) {
				logs[i] = 0;
			}
			double tan[100];
			for (int i = 0; i < 100; i++) {
				tan[i] = 0;
			}
			double atan[100];
			for (int i = 0; i < 100; i++) {
				atan[i] = 0;
			}
			double cosin[100];
			for (int i = 0; i < 100; i++) {
				cosin[i] = 0;
			}
			double acosin[100];
			for (int i = 0; i < 100; i++) {
				acosin[i] = 0;
			}
			double si[100];
			for (int i = 0; i < 100; i++) {
				si[i] = 0;
			}
			double asi[100];
			for (int i = 0; i < 100; i++) {
				asi[i] = 0;
			}
			double co[10];
			for (int i = 0; i < 10; i++) {
				co[i] = 0;
			}
			double nums[100];
			for (int i = 0; i < 100; i++) {
				nums[i] = 0;
			}
			double mn[100];
			for (int i = 0; i < 100; i++) {
				mn[i] = 0;
			}
			double mx[10];
			for (int i = 0; i < 10; i++) {
				mx[i] = 0;
			}
			double q[6];
			bool fl;
			double a, b, c, e;
			int ez, num;
			double Result, prom;

			for (int i = 0; i < 6; i++) {
				q[i] = 0;
			}
			double pi = System::Math::PI;
			double exp = System::Math::E;
			perem = 0;
			prom = 0;
			Result = 0;
			a = 0;
			b = 0;
			e = 0;
			c = 0;
			ez = 0;
			// Проверка коректности ввода точности вычислений
			if ((textBox10->Text->Length == 0)) {
				MessageBox::Show("Введите точность вычислений!");
			}
			else {
				e = System::Convert::ToDouble(textBox10->Text);
				num = textBox10->Text->Length;
				ez = num - 2;
			}
			//Проверка корректонсти ввода промежутка 
			if ((textBox2->Text->Length == 0) || (textBox3->Text->Length == 0)) {
				MessageBox::Show("Введите промежуток!");
				fl = false;
			}
			else {
				a = System::Convert::ToDouble(textBox2->Text);
				b = System::Convert::ToDouble(textBox3->Text);
				fl = true;
			}


			if (comboBox1->SelectedItem == "Алгеброическое уравнение") {
				s = "     " + textBox11->Text + "     ";
				for (int i = 5; i < s->Length - 5; i++) {
					if (s[i] <= '9' && s[i] >= '0') {
						int r = 0;
						// Числа
						if (!nextch(s, i)) {
							if (prevch(s, i) && prevch(s, i - 1)) {
								if (s[i - 3] == '-') {
									nums[i] = -(todouble(s, i - 2) * 100 + todouble(s, i - 1) * 10 + todouble(s, i));
								}
								else {
									nums[i] = todouble(s, i - 2) * 100 + todouble(s, i - 1) * 10 + todouble(s, i);
								}
							}
							if (!prevch(s, i - 1) && prevch(s, i)) {
								if (s[i - 2] == '-') {
									nums[i] = -(todouble(s, i - 1) * 10 + todouble(s, i));
								}
								else {
									nums[i] = todouble(s, i - 1) * 10 + todouble(s, i);
								}
							}
							if (!prevch(s, i)) {
								if (s[i - 1] == '-') {
									nums[i] = -todouble(s, i);
								}
								else {
									nums[i] = todouble(s, i);
								}
							}
						}
					}
					// Степень у x
					if (s[i] == 'x') {
						if (s[i + 1] == '^' && s[i + 2] == '(' && s[i + 4] == ')') {
							switch (s[i + 3])
							{
							case '0':
								mx[0] = 0;
								if (s[i - 1] == '*') {
									int j = 1;
									bool ch = false;
									while (!ch) {
										if (nums[i - j] != 0) {
											ch = true;
										}
										else {
											j++;
										}
									}
									co[0] = nums[i - j];
								}
								break;
							case '1':
								mx[1] = 1;
								if (s[i - 1] == '*') {
									int j = 1;
									bool ch = false;
									while (!ch) {
										if (nums[i - j] != 0) {
											ch = true;
										}
										else {
											j++;
										}
									}
									co[1] = nums[i - j];
								}
								break;
							case '2':
								mx[2] = 2;
								if (s[i - 1] == '*') {
									int j = 1;
									bool ch = false;
									while (!ch) {
										if (nums[i - j] != 0) {
											ch = true;
										}
										else {
											j++;
										}
									}
									co[2] = nums[i - j];
								}
								break;
							case '3':
								mx[3] = 3;
								if (s[i - 1] == '*') {
									int j = 1;
									bool ch = false;
									while (!ch) {
										if (nums[i - j] != 0) {
											ch = true;
										}
										else {
											j++;
										}
									}
									co[3] = nums[i - j];
									nums[i - j] = 0;
								}
								break;
							case '4':
								mx[4] = 4;
								if (s[i - 1] == '*') {
									int j = 1;
									bool ch = false;
									while (!ch) {
										if (nums[i - j] != 0) {
											ch = true;
										}
										else {
											j++;
										}
									}
									co[4] = nums[i - j];
									nums[i - j] = 0;
								}
								break;
							case '5':
								mx[5] = 5;
								if (s[i - 1] == '*') {
									int j = 1;
									bool ch = false;
									while (!ch) {
										if (nums[i - j] != 0) {
											ch = true;
										}
										else {
											j++;
										}
									}
									co[5] = nums[i - j];
									nums[i - j] = 0;
								}
								break;
							case '6':
								mx[6] = 6;
								if (s[i - 1] == '*') {
									int j = 1;
									bool ch = false;
									while (!ch) {
										if (nums[i - j] != 0) {
											ch = true;
										}
										else {
											j++;
										}
									}
									co[6] = nums[i - j];
									nums[i - j] = 0;
								}
								break;
							case '7':
								mx[7] = 7;
								if (s[i - 1] == '*') {
									int j = 1;
									bool ch = false;
									while (!ch) {
										if (nums[i - j] != 0) {
											ch = true;
										}
										else {
											j++;
										}
									}
									co[7] = nums[i - j];
									nums[i - j] = 0;
								}
								break;
							case '8':
								mx[8] = 8;
								if (s[i - 1] == '*') {
									int j = 1;
									bool ch = false;
									while (!ch) {
										if (nums[i - j] != 0) {
											ch = true;
										}
										else {
											j++;
										}
									}
									co[8] = nums[i - j];
									nums[i - j] = 0;
								}
								break;
							case '9':
								mx[9] = 9;
								if (s[i - 1] == '*') {
									int j = 1;
									bool ch = false;
									while (!ch) {
										if (nums[i - j] != 0) {
											ch = true;
										}
										else {
											j++;
										}
									}
									co[9] = nums[i - j];
									nums[i - j] = 0;
								}
								break;
							default:
								break;
							}
						}
					}
				}
				// Вычисление результата методом половинного деления
				Result = 0;
				while ((b - a) > e) {
					c = (a + b) / 2;
					if (((co[9] * power(a, mx[9]) + co[8] * power(a, mx[8]) + co[7] * power(a, mx[7]) + co[6] * power(a, mx[6]) + co[5] * power(a, mx[5]) + co[4] * power(a, mx[4]) + co[3] * power(a, mx[3]) + co[2] * power(a, mx[2]) + co[1] * power(a, mx[1]) + co[0]) * (co[9] * power(c, mx[9]) + co[8] * power(c, mx[8]) + co[7] * power(c, mx[7]) + co[6] * power(c, mx[6]) + co[5] * power(c, mx[5]) + co[4] * power(c, mx[4]) + co[3] * power(c, mx[3]) + co[2] * power(c, mx[2]) + co[1] * power(c, mx[1]) + co[0])) > 0) {
						a = c;
					}
					else {
						b = c;
					}
				}
				if (((System::Convert::ToInt32(textBox2->Text) + System::Convert::ToInt32(textBox3->Text)) % 2) == 0) {
					Result = System::Math::Round(c, ez) + e;
				}
				else {
					Result = System::Math::Round(c, ez);
				}
				textBox4->Text = System::Convert::ToString(Result);
			}


			if (comboBox1->SelectedItem == "Трансцендентное уравнение") {
					s = "     " + textBox11->Text + "     ";
					for (int i = 5; i < s->Length - 5; i++) {
						if (s[i] <= '9' && s[i] >= '0') {
							int r = 0;
							// Числа
							if (!nextch(s, i)) {
								if (prevch(s, i) && prevch(s, i - 1)) {
									if (s[i - 3] == '-') {
										nums[i] = -(todouble(s, i - 2) * 100 + todouble(s, i - 1) * 10 + todouble(s, i));
									}
									else {
										nums[i] = todouble(s, i - 2) * 100 + todouble(s, i - 1) * 10 + todouble(s, i);
									}
								}
								if (!prevch(s, i - 1) && prevch(s, i)) {
									if (s[i - 2] == '-') {
										nums[i] = -(todouble(s, i - 1) * 10 + todouble(s, i));
									}
									else {
										nums[i] = todouble(s, i - 1) * 10 + todouble(s, i);
									}
								}
								if (!prevch(s, i)) {
									if (s[i - 1] == '-') {
										nums[i] = -todouble(s, i);
									}
									else {
										nums[i] = todouble(s, i);
									}
								}
							}
							// Умножение и деление
							if (s[i - 1] != ' ' && !prevch(s, i) && !nextch(s, i) && (!per(s, i - 2) || !per(s, i - 1)) && s[i + 3] != '(') {
								if (s[i - 1] == '*') {
									int j = 1;
									bool ch = false;
									while (!ch) {
										if (nums[i - j] != 0) {
											ch = true;
										}
										else {
											j++;
										}
									}
									mn[i] = nums[i] * nums[i - j];
									nums[i] = 0;
									nums[i - j] = 0;
								}
								if (s[i - 1] == '/') {
									int j = 1;
									bool ch = false;
									while (!ch) {
										if (nums[i - j] != 0) {
											ch = true;
										}
										else {
											j++;
										}
									}
									mn[i] = nums[i - j] / nums[i];
									nums[i] = 0;
									nums[i - j] = 0;
								}
							}
							if (prevch(s, i) && !prevch(s, (i - 1)) && !nextch(s, i) && (!per(s, i - 3) || !per(s, i - 2)) && s[i + 3] != '(') {
								if (s[i - 2] == '*') {
									int j = 1;
									bool ch = false;
									while (!ch) {
										if (nums[i - j] != 0) {
											ch = true;
										}
										else {
											j++;
										}
									}
									mn[i] = nums[i] * nums[i - j];
									nums[i] = 0;
									nums[i - j] = 0;
								}
								if (s[i - 2] == '/') {
									int j = 1;
									bool ch = false;
									while (!ch) {
										if (nums[i - j] != 0) {
											ch = true;
										}
										else {
											j++;
										}
									}
									mn[i] = nums[i - j] / nums[i];
									nums[i] = 0;
									nums[i - j] = 0;
								}
							}
							if (prevch(s, i) && prevch(s, i - 1) && !prevch(s, i - 2) && !nextch(s, i) && (!per(s, i - 4) || !per(s, i - 3)) && s[i + 3] != '(') {
								if (s[i - 3] == '*' || s[i - 4] == '*') {
									int j = 1;
									bool ch = false;
									while (!ch) {
										if (nums[i - j] != 0) {
											ch = true;
										}
										else {
											j++;
										}
									}
									mn[i] = nums[i] * nums[i - j];
									nums[i] = 0;
									nums[i - j] = 0;
								}
								if (s[i - 3] == '/') {
									int j = 3;
									bool ch = false;
									while (!ch) {
										if (nums[i - j] != 0) {
											ch = true;
										}
										else {
											j++;
										}
									}
									mn[i] = nums[i - j] / nums[i];
									nums[i] = 0;
									nums[i - j] = 0;
								}
							}
						}
					}
					for (int i = 5; i < s->Length - 5; i++) {
						// Синус не у x
						if (s[i] == 'n' && s[i - 1] == 'i' && s[i - 2] == 's' && s[i - 3] != 'a')
						{
							if (s[i + 3] >= '0' && s[i + 3] <= '9') {
								int j = 1;
								bool ch = false;
								while (!ch) {
									if (nums[i + j] != 0) {
										ch = true;
									}
									else {
										j++;
									}
								}
								if (s[i + 2] == '-') {
									si[i] = (-1) * sinus(((pi * nums[i + j]) / 180));
									nums[i + j] = 0;
								}
								else {
									si[i] = sinus(((pi * nums[i + j]) / 180));
									nums[i + j] = 0;
								}
							}
							else {
								if (s[i + 3] == 'p' || s[i + 3] == 'i') {
									if (s[i + 2] == '-') {
										si[i] = (-1) * sinus(((pi * pi) / 180));
									}
									else {
										si[i] = sinus(((pi * pi) / 180));
									}
								}
							}
						}
						// Арксинус не у x
						if (s[i] == 'n' && s[i - 1] == 'i' && s[i - 2] == 's' && s[i - 3] == 'a')
						{
							if ((s[i + 2] >= '0' && s[i + 2] <= '9') || (s[i + 3] >= '0' && s[i + 3] <= '9')) {
								int j = 1;
								bool ch = false;
								while (!ch) {
									if (nums[i + j] != 0) {
										ch = true;
									}
									else {
										j++;
									}
								}
								asi[i] = asinus(nums[i + j]);
								nums[i + j] = 0;
							}
						}
						// Косинус не у x
						if (s[i] == 's' && s[i - 1] == 'o' && s[i - 2] == 'c' && s[i - 3] != 'a')
						{
							if (s[i + 3] >= '0' && s[i + 3] <= '9') {
								int j = 1;
								bool ch = false;
								while (!ch) {
									if (nums[i + j] != 0) {
										ch = true;
									}
									else {
										j++;
									}
								}
								if (s[i + 2] == '-') {
									cosin[i] = (-1) * cosinus(((pi * nums[i + j]) / 180));
									nums[i + j] = 0;
								}
								else {
									cosin[i] = cosinus(((pi * nums[i + j]) / 180));
									nums[i + j] = 0;
								}
							}
							else {
								if (s[i + 3] == 'p' || s[i + 3] == 'i') {
									if (s[i + 2] == '-') {
										si[i] = (-1) * cosinus(((pi * pi) / 180));
									}
									else {
										si[i] = cosinus(((pi * pi) / 180));
									}
								}
							}
						}
						// Арккосинус не у x
						if (s[i] == 's' && s[i - 1] == 'o' && s[i - 2] == 'c' && s[i - 3] == 'a')
						{
							if ((s[i + 2] >= '0' && s[i + 2] <= '9') || (s[i + 3] >= '0' && s[i + 3] <= '9')) {
								int j = 1;
								bool ch = false;
								while (!ch) {
									if (nums[i + j] != 0) {
										ch = true;
									}
									else {
										j++;
									}
								}
								acosin[i] = acosinus(nums[i + j]);
								nums[i + j] = 0;
							}
						}
						// Тангенс не у x
						if (s[i] == 'g' && s[i - 1] == 't' && s[i - 2] != 'a')
						{
							if (s[i + 3] >= '0' && s[i + 3] <= '9' || s[i + 2] >= '0' && s[i + 2] <= '9') {
								int j = 1;
								bool ch = false;
								while (!ch) {
									if (nums[i + j] != 0) {
										ch = true;
									}
									else {
										j++;
									}
								}
								if (s[i - 2] == '-') {
									tan[i] = (-1) * tangens(((pi * nums[i + j]) / 180));
									nums[i + j] = 0;
								}
								else {
									tan[i] = tangens(((pi * nums[i + j]) / 180));
									nums[i + j] = 0;
								}
							}
							else {
								if (s[i + 3] == 'p' || s[i + 3] == 'i') {
									if (s[i + 2] == '-') {
										si[i] = (-1) * tangens(((pi * pi) / 180));
									}
									else {
										si[i] = tangens(((pi * pi) / 180));
									}
								}
							}
						}
						// Арктангенс не у x
						if (s[i] == 'g' && s[i - 1] == 't' && s[i - 2] == 'a')
						{
							if ((s[i + 2] >= '0' && s[i + 2] <= '9') || (s[i + 3] >= '0' && s[i + 3] <= '9')) {
								int j = 1;
								bool ch = false;
								while (!ch) {
									if (nums[i + j] != 0) {
										ch = true;
									}
									else {
										j++;
									}
								}
								atan[i] = atangens(nums[i + j]);
								nums[i + j] = 0;
							}
						}

						// Логарифмы не у x
						if (s[i] == 'g' && s[i - 1] == 'o' && s[i - 2] == 'l' && s[i + 4] != 'x') {
							if (s[i + 2] >= '0' && s[i + 2] <= '9') { perem = nums[i + 2]; nums[i + 2] = 0; }
							else {
								if (s[i + 2] == 'e') {
									perem = exp;
								}
							}
							int j = 3;
							bool ch = false;
							while (!ch) {
								if (nums[i + j] != 0) {
									ch = true;
								}
								else {
									j++;
								}
							}
							if (s[i - 3] == '-') {
								logs[i] = (-1) * logar(perem, nums[i + j]);
								perem = 0;
								nums[i + j] = 0;
								nums[i + 2] = 0;
							}
							else {
								logs[i] = logar(perem, nums[i + j]);
								perem = 0;
								nums[i + j] = 0;
								nums[i + 2] = 0;
							}
						}
						// Поиск x
						if (s[i] == 'x') {
							if (s[i + 1] == '^' && s[i + 2] == '(' && s[i + 4] == ')') {
								switch (s[i + 3])
								{
								case '0':
									mx[0] = 0;
									nums[i + 3] = 0;
									if (s[i - 1] == '*') {
										int j = 1;
										bool ch = false;
										while (!ch) {
											if (nums[i - j] != 0) {
												ch = true;
											}
											else {
												j++;
											}
										}
										co[0] = nums[i - j];
										nums[i - j] = 0;
									}
									break;
								case '1':
									mx[1] = 1;
									nums[i + 3] = 0;
									if (s[i - 1] == '*') {
										int j = 1;
										bool ch = false;
										while (!ch) {
											if (nums[i - j] != 0) {
												ch = true;
											}
											else {
												j++;
											}
										}
										co[1] = nums[i - j];
										nums[i - j] = 0;
									}
									break;
								case '2':
									mx[2] = 2;
									nums[i + 3] = 0;
									if (s[i - 1] == '*') {
										int j = 1;
										bool ch = false;
										while (!ch) {
											if (nums[i - j] != 0) {
												ch = true;
											}
											else {
												j++;
											}
										}
										co[2] = nums[i - j];
										nums[i - j] = 0;
									}
									break;
								case '3':
									mx[3] = 3;
									nums[i + 3] = 0;
									if (s[i - 1] == '*') {
										int j = 1;
										bool ch = false;
										while (!ch) {
											if (nums[i - j] != 0) {
												ch = true;
											}
											else {
												j++;
											}
										}
										co[3] = nums[i - j];
										nums[i - j] = 0;
									}
									break;
								case '4':
									mx[4] = 4;
									nums[i + 3] = 0;
									if (s[i - 1] == '*') {
										int j = 1;
										bool ch = false;
										while (!ch) {
											if (nums[i - j] != 0) {
												ch = true;
											}
											else {
												j++;
											}
										}
										co[4] = nums[i - j];
										nums[i - j] = 0;
									}
									break;
								case '5':
									mx[5] = 5;
									nums[i + 3] = 0;
									if (s[i - 1] == '*') {
										int j = 1;
										bool ch = false;
										while (!ch) {
											if (nums[i - j] != 0) {
												ch = true;
											}
											else {
												j++;
											}
										}
										co[5] = nums[i - j];
										nums[i - j] = 0;
									}
									break;
								case '6':
									mx[6] = 6;
									nums[i + 3] = 0;
									if (s[i - 1] == '*') {
										int j = 1;
										bool ch = false;
										while (!ch) {
											if (nums[i - j] != 0) {
												ch = true;
											}
											else {
												j++;
											}
										}
										co[6] = nums[i - j];
										nums[i - j] = 0;
									}
									break;
								case '7':
									mx[7] = 7;
									nums[i + 3] = 0;
									if (s[i - 1] == '*') {
										int j = 1;
										bool ch = false;
										while (!ch) {
											if (nums[i - j] != 0) {
												ch = true;
											}
											else {
												j++;
											}
										}
										co[7] = nums[i - j];
										nums[i - j] = 0;
									}
									break;
								case '8':
									mx[8] = 8;
									nums[i + 3] = 0;
									if (s[i - 1] == '*') {
										int j = 1;
										bool ch = false;
										while (!ch) {
											if (nums[i - j] != 0) {
												ch = true;
											}
											else {
												j++;
											}
										}
										co[8] = nums[i - j];
										nums[i - j] = 0;
									}
									break;
								case '9':
									mx[9] = 9;
									nums[i + 3] = 0;
									if (s[i - 1] == '*') {
										int j = 1;
										bool ch = false;
										while (!ch) {
											if (nums[i - j] != 0) {
												ch = true;
											}
											else {
												j++;
											}
										}
										co[9] = nums[i - j];
										nums[i - j] = 0;
									}
									break;
								default:
									break;
								}
							}
							if (s[i - 4] == 'g' && s[i - 5] == 'o') {
								logf = true;
								int j = 1;
								bool ch = false;
								while (!ch) {
									if (nums[i - j] != 0) {
										ch = true;
									}
									else {
										j++;
									}
								}
								logfc = nums[i - j];
								nums[i - j] = 0;
							}
						}
					}
					// Подсчёт коеффициентов без X
					prom = 0;
					for (int i = 0; i < 100; i++) {
						prom = prom + nums[i] + mn[i] + si[i] + acosin[i] + cosin[i] + asi[i] + tan[i] + atan[i] + logs[i];
					}
					// Вычисление результата, если X под знаком логарифма
					if (logf) {
						Result = 0;
						while ((b - a) > e) {
							c = (a + b) / 2;
							if (((prom + logar(logfc, a) + co[9] * power(a, mx[9]) + co[8] * power(a, mx[8]) + co[7] * power(a, mx[7]) + co[6] * power(a, mx[6]) + co[5] * power(a, mx[5]) + co[4] * power(a, mx[4]) + co[3] * power(a, mx[3]) + co[2] * power(a, mx[2]) + co[1] * power(a, mx[1]) + co[0]) * (prom + logar(logfc, c) + co[9] * power(c, mx[9]) + co[8] * power(c, mx[8]) + co[7] * power(c, mx[7]) + co[6] * power(c, mx[6]) + co[5] * power(c, mx[5]) + co[4] * power(c, mx[4]) + co[3] * power(c, mx[3]) + co[2] * power(c, mx[2]) + co[1] * power(c, mx[1]) + co[0])) > 0) {
								a = c;
							}
							else {
								b = c;
							}
						}
					}
					// Вычисление результата, если X не под знаком логарифма
					if (!logf) {
						Result = 0;
						while ((b - a) > e) {
							c = (a + b) / 2;
							if (((prom + co[9] * power(a, mx[9]) + co[8] * power(a, mx[8]) + co[7] * power(a, mx[7]) + co[6] * power(a, mx[6]) + co[5] * power(a, mx[5]) + co[4] * power(a, mx[4]) + co[3] * power(a, mx[3]) + co[2] * power(a, mx[2]) + co[1] * power(a, mx[1]) + co[0]) * (prom + co[9] * power(c, mx[9]) + co[8] * power(c, mx[8]) + co[7] * power(c, mx[7]) + co[6] * power(c, mx[6]) + co[5] * power(c, mx[5]) + co[4] * power(c, mx[4]) + co[3] * power(c, mx[3]) + co[2] * power(c, mx[2]) + co[1] * power(c, mx[1]) + co[0])) > 0) {
								a = c;
							}
							else {
								b = c;
							}
						}
					}
					Result = System::Math::Round(c, ez);
					textBox4->Text = System::Convert::ToString(Result);
				

			}
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Пример записи для алгеброического уравнения:\n 1*x^(3)-27*x^(0)\nПример записи для трансцендентного уравнения:\n 15*4-sin(30)-2*x^(2)+log(2,4)");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox11->Text = "";
	textBox10->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
}
		// Функция защиты от неверного ввода
		   bool Protect() {
			for (int i = 0; i < textBox2->Text->Length; i++) {
				if ((textBox2->Text[i] >= '0') && (textBox2->Text[i] <= '9') || (textBox2->Text[i] == ',') || (textBox2->Text[i] == '-')) {}
				else { MessageBox::Show("Неверный ввод!\nПроверьте, правильно ли указано начало интервала"); return false; }
			}
			for (int i = 0; i < textBox3->Text->Length; i++) {
				if ((textBox3->Text[i] >= '0') && (textBox3->Text[i] <= '9') || (textBox3->Text[i] == ',') || (textBox3->Text[i] == '-')) {}
				else { MessageBox::Show("Неверный ввод!\nПроверьте, правильно ли указан конец интервала"); return false; }
			}
			for (int i = 0; i < textBox10->Text->Length; i++) {
				if ((textBox10->Text[i] >= '0') && (textBox10->Text[i] <= '9') || (textBox10->Text[i] == ',') || (textBox10->Text[i] == '-')) {}
				else { MessageBox::Show("Неверный ввод!\nПроверьте, правильно ли указана точность вычислений"); return false; }
			}
			return true;
		}

	private: System::Void listBox1_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e) {
	}
		   // Изменение окна, в зависимости от вида уравнения
	private: System::Void comboBox1_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e) {
		if (comboBox1->SelectedItem == "Алгеброическое уравнение") {
			label6->Text = "Алгеброическое уравнение";
			label1->Visible = true;
			label13->Visible = true;
			textBox11->Visible = true;
		}
		if (comboBox1->SelectedItem == "Трансцендентное уравнение") {
			label6->Text = "Трансцендентное уравнение";
			label1->Visible = true;
			label13->Visible = true;
			textBox11->Visible = true;
		}
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}