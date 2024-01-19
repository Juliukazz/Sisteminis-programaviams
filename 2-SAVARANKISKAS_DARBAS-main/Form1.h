#pragma once
#include <iostream>
#include <fstream>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	


	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void) 
		{
			InitializeComponent();
			studentInfoList = gcnew List<List<Object^>^>();
		}


	protected:
		
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private:
	System::Windows::Forms::ToolStripMenuItem^ failasToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ atidarytiToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ išsaugotiKaipToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ uždarytiToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ pagalbaToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ apieToolStripMenuItem;
	System::Windows::Forms::Label^ label1;
	System::Windows::Forms::TextBox^ textBox1;
	System::Windows::Forms::TextBox^ textBox2;

	System::Windows::Forms::Label^ label2;
	System::Windows::Forms::Label^ label3;
	System::Windows::Forms::Button^ button1;
	System::Windows::Forms::Button^ button2;
	System::Windows::Forms::Label^ label4;
	System::Windows::Forms::Label^ label5;
	System::Windows::Forms::ListBox^ listBox1;
	System::Windows::Forms::RadioButton^ radioButton1;
	System::Windows::Forms::RadioButton^ radioButton2;
	System::Windows::Forms::Button^ button3;
	System::Windows::Forms::Button^ button4;
	System::Windows::Forms::Label^ label6;
	System::Windows::Forms::TextBox^ textBox4;
	System::Windows::Forms::Button^ button5;
	System::Windows::Forms::Button^ button6;
	System::Windows::Forms::Button^ button7;
	System::Windows::Forms::Button^ button8;


	private: System::Windows::Forms::TextBox^ textBox5;


	private: List<List<Object^>^>^ studentInfoList;


	private: double CalculateAverage(List<Object^>^ marks, int examMark) {
		if (marks->Count == 0) {
			return 0.0;
		}

		double sum = 0.0;
		for each (Object ^ mark in marks) {
			sum += Convert::ToInt32(mark);
		}

		double average = sum / marks->Count;

		average = (average + examMark) / 2;

		return average;
	}



	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void) 
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->failasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->atidarytiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->išsaugotiKaipToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uždarytiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pagalbaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->apieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			
			this->menuStrip1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->failasToolStripMenuItem,
					this->pagalbaToolStripMenuItem, this->apieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(640, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			
			this->failasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->atidarytiToolStripMenuItem,
					this->išsaugotiKaipToolStripMenuItem, this->uždarytiToolStripMenuItem
			});
			this->failasToolStripMenuItem->Name = L"failasToolStripMenuItem";
			this->failasToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->failasToolStripMenuItem->Text = L"Failas";
			
			this->atidarytiToolStripMenuItem->Name = L"atidarytiToolStripMenuItem";
			this->atidarytiToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->atidarytiToolStripMenuItem->Text = L"Atidaryti";
			this->atidarytiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::atidarytiToolStripMenuItem_Click);
			
			this->išsaugotiKaipToolStripMenuItem->Name = L"išsaugotiKaipToolStripMenuItem";
			this->išsaugotiKaipToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->išsaugotiKaipToolStripMenuItem->Text = L"Išsaugoti kaip";
			this->išsaugotiKaipToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::išsaugotiKaipToolStripMenuItem_Click);
			 
			this->uždarytiToolStripMenuItem->Name = L"uždarytiToolStripMenuItem";
			this->uždarytiToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->uždarytiToolStripMenuItem->Text = L"Uždaryti";
			this->uždarytiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::uždarytiToolStripMenuItem_Click);
			
			this->pagalbaToolStripMenuItem->Name = L"pagalbaToolStripMenuItem";
			this->pagalbaToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->pagalbaToolStripMenuItem->Text = L"Pagalba";
			
			this->apieToolStripMenuItem->Name = L"apieToolStripMenuItem";
			this->apieToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->apieToolStripMenuItem->Text = L"Apie";
			
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Vardas Pavardė";
			
			this->textBox1->Location = System::Drawing::Point(13, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(289, 20);
			this->textBox1->TabIndex = 2;
			
			this->textBox2->Location = System::Drawing::Point(308, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(236, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(308, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Pažymiai";
			
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(547, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Egzamino balas";
			
			this->button1->Location = System::Drawing::Point(13, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 30);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Įvesti";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			
			this->button2->Location = System::Drawing::Point(162, 72);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 30);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Atnaujinti";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(308, 72);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Pažymiai įvedami atsiriant tarpais";
			
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 122);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Esami studentai ir rezultatai";
			
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(13, 138);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(615, 134);
			this->listBox1->TabIndex = 11;
			
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(430, 115);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 17);
			this->radioButton1->TabIndex = 12;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Vidurkis";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(498, 115);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(66, 17);
			this->radioButton2->TabIndex = 13;
			this->radioButton2->Text = L"Mediana";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			
			this->button3->Location = System::Drawing::Point(13, 279);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(225, 35);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Kopijuoti visus";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			
			this->button4->Location = System::Drawing::Point(244, 279);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(225, 35);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Kopijuoti pažymėtą";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 373);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(218, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Laukelis kopijavimui, saugojimui ir pastaboms";
			
			this->textBox4->Location = System::Drawing::Point(19, 389);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(609, 226);
			this->textBox4->TabIndex = 17;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			
			this->button5->Location = System::Drawing::Point(19, 622);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(128, 23);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Atidaryti";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			
			this->button6->Location = System::Drawing::Point(153, 622);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(128, 23);
			this->button6->TabIndex = 19;
			this->button6->Text = L"Išsaugoti kaip";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			
			this->button7->Location = System::Drawing::Point(287, 622);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(128, 23);
			this->button7->TabIndex = 20;
			this->button7->Text = L"Spausdinti";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			
			this->button8->Location = System::Drawing::Point(531, 622);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(97, 23);
			this->button8->TabIndex = 21;
			this->button8->Text = L"Valyti";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			
			this->textBox5->Location = System::Drawing::Point(551, 45);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(36, 20);
			this->textBox5->TabIndex = 24;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 650);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();


		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (textBox1->Text == "" || textBox2->Text == "" || textBox5->Text == "") {
			throw gcnew System::Exception("Laukeliai yra tušti! Įveskite reikšmes į visus laukelius!");
		}
		else {
			List<Object^>^ marks = gcnew List<Object^>();
			array<String^>^ markStrings = textBox2->Text->Split(' ');
			for each (String ^ markString in markStrings) {
				marks->Add(Convert::ToInt32(markString));
			}

			double average = CalculateAverage(marks, Convert::ToInt32(textBox5->Text));
			String^ studentInfo = textBox1->Text + " Pažymiai: " + textBox2->Text + " Egzamino balas: " + textBox5->Text + " Vidurkis: " + average.ToString();

			studentInfoList->Add(marks);
			listBox1->Items->Add(studentInfo);

			textBox1->Text = "";
			textBox2->Text = "";
			textBox5->Text = "";
		}
	}
	catch (System::Exception^ ex) {
		MessageBox::Show(ex->Message, "KLAIDA!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


private: System::Void išsaugotiKaipToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();

	saveFileDialog1->Filter = "Teksto failai (*.txt)|*.txt|Visi failai (*.*)|*.*";
	saveFileDialog1->RestoreDirectory = true;

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{

	}
}


private: System::Void atidarytiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

	openFileDialog1->Filter = "Teksto failai (*.txt)|*.txt|Visi failai (*.*)|*.*";
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{

	}
}

private: System::Void uždarytiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Text = "";
	for (int i = 0; i < listBox1->Items->Count; i++) {
		textBox4->Text += listBox1->Items[i]->ToString() + " Vidurkis: " + CalculateAverage(studentInfoList[i], 0).ToString("F2") + "\r\n";
	}
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex != -1) {
		textBox4->Text = listBox1->SelectedItem->ToString() + " Vidurkis: " + CalculateAverage(studentInfoList[listBox1->SelectedIndex], 0).ToString("F2");
	}
	else {
		MessageBox::Show("Nepasirinktas joks studentas!", "KLAIDA!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

	openFileDialog1->Filter = "Teksto failai (*.txt)|*.txt|Visi failai (*.*)|*.*";
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();

	saveFileDialog1->Filter = "Teksto failai (*.txt)|*.txt|Visi failai (*.*)|*.*";
	saveFileDialog1->RestoreDirectory = true;

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Funkcija dar nebaigta!", "Klaida", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
	textBox4->Text = "";
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {}

private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {}

private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
};
}