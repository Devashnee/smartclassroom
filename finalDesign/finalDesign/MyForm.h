#pragma once

namespace finalDesign {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  name;

	private: System::Windows::Forms::TextBox^  surname;

	private: System::Windows::Forms::TextBox^  email;

	private: System::Windows::Forms::TextBox^  dob;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  cell_number;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  student_number;
	private: System::Windows::Forms::Label^  label6;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->surname = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->dob = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cell_number = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->student_number = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(38, 189);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"SAVE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(104, 25);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(100, 20);
			this->name->TabIndex = 1;
			// 
			// surname
			// 
			this->surname->Location = System::Drawing::Point(104, 51);
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(100, 20);
			this->surname->TabIndex = 2;
			// 
			// email
			// 
			this->email->Location = System::Drawing::Point(104, 77);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(100, 20);
			this->email->TabIndex = 3;
			// 
			// dob
			// 
			this->dob->Location = System::Drawing::Point(104, 103);
			this->dob->Name = L"dob";
			this->dob->Size = System::Drawing::Size(100, 20);
			this->dob->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Name ";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Surname";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"date of birth";
			// 
			// cell_number
			// 
			this->cell_number->Location = System::Drawing::Point(104, 129);
			this->cell_number->Name = L"cell_number";
			this->cell_number->Size = System::Drawing::Size(100, 20);
			this->cell_number->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(31, 132);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"cell number ";
			// 
			// student_number
			// 
			this->student_number->Location = System::Drawing::Point(104, -1);
			this->student_number->Name = L"student_number";
			this->student_number->Size = System::Drawing::Size(100, 20);
			this->student_number->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(35, 2);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"student_num";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->student_number);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cell_number);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dob);
			this->Controls->Add(this->email);
			this->Controls->Add(this->surname);
			this->Controls->Add(this->name);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"UserInterface";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//MessageBox::Show("hellos");

		String^ constring = L" datasource = localhost;port=3306;username=root;password=password@0105";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into design3.student (idstudent,name,surname,email,date_of_birth,cell_num) values('" + this->student_number->Text + "','" + this->name->Text + "','" + this->surname->Text + "','" + this->email->Text + "','" + this->dob->Text + "','" + this->cell_number->Text + "');", conDataBase);
		MySqlDataReader^myReader;
		try{
			conDataBase->Open();
			myReader = cmdDataBase -> ExecuteReader();
			while (myReader-> Read())
			{
				//textBox1->Text += (myReader->GetInt32(0));
			}
		}
		catch (Exception^ex){
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
