#pragma once
#include<iostream>
#include <vector>
#include "string.h"
#include <msclr\marshal_cppstd.h>



namespace WindowsFormLicensePlate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	
	extern std::vector <std::string> number_plate;
	/// <summary>
	/// Summary for MyFormDataBase
	/// </summary>
	public ref class MyFormDataBase : public System::Windows::Forms::Form
	{
	public:
		MyFormDataBase(void)
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
		~MyFormDataBase()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::TextBox^  textBox5;

	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label7;

	private: System::ComponentModel::IContainer^  components;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 29);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DataBase URL:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(148, 30);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(298, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"127.0.0.1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 69);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"User Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(239, 69);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(115, 69);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(118, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"root";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(328, 70);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = 'X';
			this->textBox3->Size = System::Drawing::Size(118, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(464, 30);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 56);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Connect";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormDataBase::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(299, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormDataBase::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(380, 104);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormDataBase::button3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(64, 107);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(199, 20);
			this->textBox4->TabIndex = 10;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(23, 185);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(556, 255);
			this->dataGridView1->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(64, 133);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(199, 20);
			this->textBox5->TabIndex = 12;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(64, 159);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(199, 20);
			this->textBox7->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Plate";
			this->label4->Click += gcnew System::EventHandler(this, &MyFormDataBase::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 136);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Model";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 162);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Year";
			this->label7->Click += gcnew System::EventHandler(this, &MyFormDataBase::label7_Click);
			// 
			// MyFormDataBase
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(607, 452);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyFormDataBase";
			this->Text = L"MyFormDataBase";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
		
		
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
			String^ urlDB = textBox1->Text;
			String^ userDB = textBox2->Text;
			String^ passwdDB = textBox3->Text;
			String^ constr = "Server=" + urlDB + ";Uid=" + userDB + ";Pwd=" + passwdDB + ";";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("CREATE DATABASE IF NOT EXISTS `license_plates`", con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			con->Close();

			String^ constr2 = "Server=" + urlDB + ";Uid=" + userDB + ";Pwd=" + passwdDB + ";Database=license_plates";
			MySqlConnection^ con2 = gcnew MySqlConnection(constr2);
			MySqlCommand^ cmd2 = gcnew MySqlCommand("CREATE TABLE IF NOT EXISTS `cars` (`ID` int(10) NOT NULL AUTO_INCREMENT,`plate` varchar(10) COLLATE utf8_polish_ci NOT NULL,`model` varchar(50) COLLATE utf8_polish_ci NOT NULL,`year` int(4) NOT NULL,PRIMARY KEY(`ID`),UNIQUE KEY `plate` (`plate`)) ENGINE = InnoDB AUTO_INCREMENT = 7 DEFAULT CHARSET = utf8 COLLATE = utf8_polish_ci", con2);
			con2->Open();
			MySqlDataReader^ dr2 = cmd2->ExecuteReader();
			con2->Close();

			String^ constr3 = "Server=" + urlDB + ";Uid=" + userDB + ";Pwd=" + passwdDB + ";Database=license_plates";
			MySqlConnection^ con3 = gcnew MySqlConnection(constr3);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select `plate`, `model`, `year` from `cars`", con3);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;

			number_plate.clear();
			for (int i = 0; i < dt->Rows->Count; i++) {
				String^ s = dataGridView1->Rows[i]->Cells[0]->Value->ToString();
				number_plate.push_back(msclr::interop::marshal_as<std::string>(s));
			}
				
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		String^ urlDB = textBox1->Text;
		String^ userDB = textBox2->Text;
		String^ passwdDB = textBox3->Text;
		String^ constr = "Server=" + urlDB + ";Uid=" + userDB + ";Pwd=" + passwdDB + ";Database=license_plates";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		String^ plate = textBox4->Text;
		String^ model = textBox5->Text;
		String^ year = textBox7->Text;

		MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO `cars` (`plate`, `model`, `year`) VALUES ('" + plate + "','" + model + "','" + year + "')", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		MessageBox::Show("Plate was added");
		con->Close();

		String^ constr2 = "Server=" + urlDB + ";Uid=" + userDB + ";Pwd=" + passwdDB + ";Database=license_plates";
		MySqlConnection^ con2 = gcnew MySqlConnection(constr2);
		MySqlCommand^ cmd2 = gcnew MySqlCommand("UPDATE `cars` SET `plate` = REPLACE(`plate`, ' ', '')", con2);
		MySqlDataReader^ dr2;
		con2->Open();
		dr2 = cmd2->ExecuteReader();
		con2->Close();

		String^ constr3 = "Server=" + urlDB + ";Uid=" + userDB + ";Pwd=" + passwdDB + ";Database=license_plates";
		MySqlConnection^ con3 = gcnew MySqlConnection(constr3);
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select `plate`, `model`, `year` from `cars`", con3);
		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);
		bindingSource1->DataSource = dt;
		dataGridView1->DataSource = bindingSource1;

		number_plate.clear();
		for (int i = 0; i < dt->Rows->Count; i++) {
			String^ s = dataGridView1->Rows[i]->Cells[0]->Value->ToString();
			number_plate.push_back(msclr::interop::marshal_as<std::string>(s));
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		String^ urlDB = textBox1->Text;
		String^ userDB = textBox2->Text;
		String^ passwdDB = textBox3->Text;
		String^ constr = "Server=" + urlDB + ";Uid=" + userDB + ";Pwd=" + passwdDB + ";Database=license_plates";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		String^ plate = textBox4->Text;
		MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM `cars` WHERE `plate`='"+plate+"'", con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("Plate was deleted");
		con->Close();

		String^ constr2 = "Server=" + urlDB + ";Uid=" + userDB + ";Pwd=" + passwdDB + ";Database=license_plates";
		MySqlConnection^ con2 = gcnew MySqlConnection(constr2);
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select `plate`, `model`, `year` from `cars`", con2);
		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);
		bindingSource1->DataSource = dt;
		dataGridView1->DataSource = bindingSource1;

		number_plate.clear();
		for (int i = 0; i < dt->Rows->Count; i++) {
		
			String^ s = dataGridView1->Rows[i]->Cells[0]->Value->ToString();
			number_plate.push_back(msclr::interop::marshal_as<std::string>(s));
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
