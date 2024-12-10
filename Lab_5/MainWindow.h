#pragma once



namespace Lab5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::SqlClient;
	using namespace System::Windows::Forms::DataVisualization;
	using namespace Lab5;

	/// <summary>
	/// ������ ��� MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		SqlConnection^ connection;
		MainWindow(SqlConnection^ connection) {
			this->connection = connection;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::TextBox^ SubjectName_text;


	private: System::Windows::Forms::Button^ SubjectAdd_button;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Exit_button;
	private: System::Windows::Forms::Button^ StudentTableChoice_button;
	private: System::Windows::Forms::TextBox^ StudentName_Table;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ComboBox^ GradeBox_text;
	private: System::Windows::Forms::Button^ refresh_Click;
	private: System::Windows::Forms::TextBox^ SubjectName_txt_Search;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ subjectName_Search_but;
	private: System::Windows::Forms::Button^ Delete_but;
	private: System::Windows::Forms::TextBox^ Id_txt_delete;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ AvrgRating_label;




	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SubjectName_text = (gcnew System::Windows::Forms::TextBox());
			this->SubjectAdd_button = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Exit_button = (gcnew System::Windows::Forms::Button());
			this->StudentTableChoice_button = (gcnew System::Windows::Forms::Button());
			this->StudentName_Table = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->GradeBox_text = (gcnew System::Windows::Forms::ComboBox());
			this->refresh_Click = (gcnew System::Windows::Forms::Button());
			this->SubjectName_txt_Search = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->subjectName_Search_but = (gcnew System::Windows::Forms::Button());
			this->Delete_but = (gcnew System::Windows::Forms::Button());
			this->Id_txt_delete = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->AvrgRating_label = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// SubjectName_text
			// 
			this->SubjectName_text->Location = System::Drawing::Point(12, 79);
			this->SubjectName_text->Name = L"SubjectName_text";
			this->SubjectName_text->Size = System::Drawing::Size(100, 22);
			this->SubjectName_text->TabIndex = 9;
			// 
			// SubjectAdd_button
			// 
			this->SubjectAdd_button->Location = System::Drawing::Point(12, 135);
			this->SubjectAdd_button->Name = L"SubjectAdd_button";
			this->SubjectAdd_button->Size = System::Drawing::Size(100, 23);
			this->SubjectAdd_button->TabIndex = 11;
			this->SubjectAdd_button->Text = L"Add";
			this->SubjectAdd_button->UseVisualStyleBackColor = true;
			this->SubjectAdd_button->Click += gcnew System::EventHandler(this, &MainWindow::SubjectAdd_button_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(118, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"SubjectName";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(139, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Grade";
			// 
			// Exit_button
			// 
			this->Exit_button->Location = System::Drawing::Point(840, 12);
			this->Exit_button->Name = L"Exit_button";
			this->Exit_button->Size = System::Drawing::Size(75, 23);
			this->Exit_button->TabIndex = 4;
			this->Exit_button->Text = L"Exit";
			this->Exit_button->UseVisualStyleBackColor = true;
			this->Exit_button->Click += gcnew System::EventHandler(this, &MainWindow::Exit_button_Click);
			// 
			// StudentTableChoice_button
			// 
			this->StudentTableChoice_button->Location = System::Drawing::Point(143, 11);
			this->StudentTableChoice_button->Name = L"StudentTableChoice_button";
			this->StudentTableChoice_button->Size = System::Drawing::Size(75, 23);
			this->StudentTableChoice_button->TabIndex = 3;
			this->StudentTableChoice_button->Text = L"Choice";
			this->StudentTableChoice_button->UseVisualStyleBackColor = true;
			this->StudentTableChoice_button->Click += gcnew System::EventHandler(this, &MainWindow::StudentTableChoice_button_Click);
			// 
			// StudentName_Table
			// 
			this->StudentName_Table->Location = System::Drawing::Point(12, 12);
			this->StudentName_Table->Name = L"StudentName_Table";
			this->StudentName_Table->Size = System::Drawing::Size(125, 22);
			this->StudentName_Table->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(438, 45);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(477, 569);
			this->dataGridView1->TabIndex = 14;
			// 
			// GradeBox_text
			// 
			this->GradeBox_text->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->GradeBox_text->FormattingEnabled = true;
			this->GradeBox_text->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2", L"3", L"4", L"5" });
			this->GradeBox_text->Location = System::Drawing::Point(12, 108);
			this->GradeBox_text->Name = L"GradeBox_text";
			this->GradeBox_text->Size = System::Drawing::Size(121, 21);
			this->GradeBox_text->TabIndex = 15;
			this->GradeBox_text->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::GradeBox_text_SelectedIndexChanged);
			// 
			// refresh_Click
			// 
			this->refresh_Click->Location = System::Drawing::Point(759, 12);
			this->refresh_Click->Name = L"refresh_Click";
			this->refresh_Click->Size = System::Drawing::Size(75, 23);
			this->refresh_Click->TabIndex = 16;
			this->refresh_Click->Text = L"refresh";
			this->refresh_Click->UseVisualStyleBackColor = true;
			this->refresh_Click->Click += gcnew System::EventHandler(this, &MainWindow::refresh_Click_Click);
			// 
			// SubjectName_txt_Search
			// 
			this->SubjectName_txt_Search->Location = System::Drawing::Point(12, 200);
			this->SubjectName_txt_Search->Name = L"SubjectName_txt_Search";
			this->SubjectName_txt_Search->Size = System::Drawing::Size(100, 22);
			this->SubjectName_txt_Search->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(118, 203);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"SubjectName";
			// 
			// subjectName_Search_but
			// 
			this->subjectName_Search_but->Location = System::Drawing::Point(12, 228);
			this->subjectName_Search_but->Name = L"subjectName_Search_but";
			this->subjectName_Search_but->Size = System::Drawing::Size(75, 23);
			this->subjectName_Search_but->TabIndex = 19;
			this->subjectName_Search_but->Text = L"Search";
			this->subjectName_Search_but->UseVisualStyleBackColor = true;
			this->subjectName_Search_but->Click += gcnew System::EventHandler(this, &MainWindow::subjectName_Search_but_Click);
			// 
			// Delete_but
			// 
			this->Delete_but->Location = System::Drawing::Point(12, 310);
			this->Delete_but->Name = L"Delete_but";
			this->Delete_but->Size = System::Drawing::Size(75, 23);
			this->Delete_but->TabIndex = 20;
			this->Delete_but->Text = L"Delete";
			this->Delete_but->UseVisualStyleBackColor = true;
			this->Delete_but->Click += gcnew System::EventHandler(this, &MainWindow::Delete_but_Click);
			// 
			// Id_txt_delete
			// 
			this->Id_txt_delete->Location = System::Drawing::Point(12, 282);
			this->Id_txt_delete->Name = L"Id_txt_delete";
			this->Id_txt_delete->Size = System::Drawing::Size(100, 22);
			this->Id_txt_delete->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(118, 285);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"ID";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(438, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 13);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Average rating";
			// 
			// AvrgRating_label
			// 
			this->AvrgRating_label->AutoSize = true;
			this->AvrgRating_label->Location = System::Drawing::Point(526, 22);
			this->AvrgRating_label->Name = L"AvrgRating_label";
			this->AvrgRating_label->Size = System::Drawing::Size(13, 13);
			this->AvrgRating_label->TabIndex = 24;
			this->AvrgRating_label->Text = L"0";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(927, 626);
			this->Controls->Add(this->AvrgRating_label);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Id_txt_delete);
			this->Controls->Add(this->Delete_but);
			this->Controls->Add(this->subjectName_Search_but);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SubjectName_txt_Search);
			this->Controls->Add(this->refresh_Click);
			this->Controls->Add(this->GradeBox_text);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->SubjectAdd_button);
			this->Controls->Add(this->SubjectName_text);
			this->Controls->Add(this->Exit_button);
			this->Controls->Add(this->StudentTableChoice_button);
			this->Controls->Add(this->StudentName_Table);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	   // ����� ��� ��������� �������� ��������� ����
	private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void StudentTableChoice_button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ tableName = StudentName_Table->Text;
		try {
			// ���������, ���������� �� �������
			String^ checkTableQuery = "IF NOT EXISTS (SELECT * FROM INFORMATION_SCHEMA.TABLES WHERE TABLE_NAME = @tableName) "
				"CREATE TABLE " + tableName + " (ID INT PRIMARY KEY, SubjectName NVARCHAR(100), Grade NVARCHAR(50));";

			SqlCommand^ command = gcnew SqlCommand(checkTableQuery, connection);
			command->Parameters->AddWithValue("@tableName", tableName);

			// ��������� ������
			command->ExecuteNonQuery();
			MessageBox::Show("������� " + tableName + " ���� ������� ������� ��� ��� ����������.");

			// ������ ��������� DataGridView ������� �� �������
			String^ selectQuery = "SELECT * FROM " + tableName;
			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(selectQuery, connection);
			DataTable^ dataTable = gcnew DataTable();

			// ��������� DataTable
			dataAdapter->Fill(dataTable);

			// ����������� DataTable � DataGridView
			dataGridView1->DataSource = dataTable;
		}
		catch (Exception^ ex) {
			MessageBox::Show("������: " + ex->Message);
		}
	}

		   // ���������� ����������
	private: System::Void Exit_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void SubjectAdd_button_Click(System::Object^ sender, System::EventArgs^ e) {
		// �������� �������� �� ��������� �����
		String^ subjectName = SubjectName_text->Text;
		String^ grade = GradeBox_text->Text;
		try {
			// �������� ��� ������� �� ComboBox
			String^ tableName = StudentName_Table->Text;

			// ������� ������ ��� �������� ������������� ������ � ����� SubjectName
			String^ checkQuery = "SELECT COUNT(*) FROM " + tableName + " WHERE SubjectName = @SubjectName";
			SqlCommand^ checkCommand = gcnew SqlCommand(checkQuery, connection);
			checkCommand->Parameters->AddWithValue("@SubjectName", subjectName);

			// ��������� ������
			int count = (int)checkCommand->ExecuteScalar();

			if (count > 0) {
				// ���� ������ � ����� SubjectName ����������, ��������� Grade
				String^ updateQuery = "UPDATE " + tableName + " SET Grade = @Grade WHERE SubjectName = @SubjectName";
				SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, connection);
				updateCommand->Parameters->AddWithValue("@SubjectName", subjectName);
				updateCommand->Parameters->AddWithValue("@Grade", grade);

				// ��������� ����������
				updateCommand->ExecuteNonQuery();
				MessageBox::Show("������ ������� ���������.");
			}
			else {
				// ���� ������ � ����� SubjectName ���, ��������� ����� ������
				String^ insertQuery = "INSERT INTO " + tableName + " (SubjectName, Grade) VALUES (@SubjectName, @Grade)";
				SqlCommand^ insertCommand = gcnew SqlCommand(insertQuery, connection);
				insertCommand->Parameters->AddWithValue("@SubjectName", subjectName);
				insertCommand->Parameters->AddWithValue("@Grade", grade);

				// ��������� �������
				insertCommand->ExecuteNonQuery();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("������: " + ex->Message);
		}
		RefreshDataGridView(dataGridView1);
	}


	private: System::Void GradeBox_text_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}

private: void RefreshDataGridView(DataGridView^ dataGridView)
{
	try
	{
		// �������� ��� ������� �� ���������� ����
		String^ tableName = StudentName_Table->Text;

		// ���������, ��� ��� ������� �� ������
		if (String::IsNullOrWhiteSpace(tableName))
		{
			MessageBox::Show("��� ������� �� ����� ���� ������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// SQL ������ ��� ������� ������ �� �������
		String^ query = "SELECT ID, SubjectName, Grade FROM " + tableName;

		SqlDataAdapter^ sqlDataAdapter = gcnew SqlDataAdapter(query, connection);

		DataTable^ dataTable = gcnew DataTable();

		// ���������� DataTable � ������������ �������
		sqlDataAdapter->Fill(dataTable);

		// ������������� DataSource ��� DataGridView
		dataGridView->DataSource = dataTable;

		// ������������ ������� �������� ������� Grade
		double total = 0;
		int count = 0;

		for each (DataRow ^ row in dataTable->Rows)
		{
			String^ gradeStr = row["Grade"]->ToString();
			double grade;

			// ����������� �������� Grade � �����
			if (Double::TryParse(gradeStr, grade))
			{
				total += grade;
				count++;
			}
		}

		double average = (count > 0) ? total / count : 0;

		// ������� ������� �������� � AvrgRating_label
		AvrgRating_label->Text = average.ToString("F2");
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("��������� ������: " + ex->Message, "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}



	private: System::Void refresh_Click_Click(System::Object^ sender, System::EventArgs^ e) {
		RefreshDataGridView(dataGridView1);
	}
	private: System::Void subjectName_Search_but_Click(System::Object^ sender, System::EventArgs^ e) {
		// �������� �������� �� ���������� ����
		String^ subjectName = SubjectName_txt_Search->Text;
		try {
			// ���������, ��� ��� ������� � SubjectName �� ������
			if (String::IsNullOrWhiteSpace(StudentName_Table->Text)) {
				MessageBox::Show("����������, ������� ��� �������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (String::IsNullOrWhiteSpace(subjectName)) {
				MessageBox::Show("����������, ������� �������� �������� ��� ������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// �������� ��� ������� �� TextBox
			String^ tableName = StudentName_Table->Text;

			// ������� SQL-������ ��� ������ �������
			String^ searchQuery = "SELECT ID, SubjectName, Grade FROM " + tableName + " WHERE SubjectName = @SubjectName";

			SqlDataAdapter^ sqlDataAdapter = gcnew SqlDataAdapter(searchQuery, connection);
			sqlDataAdapter->SelectCommand->Parameters->AddWithValue("@SubjectName", subjectName);

			DataTable^ dataTable = gcnew DataTable();

			// ��������� DataTable � ������������ ������
			sqlDataAdapter->Fill(dataTable);

			// ������������� DataSource ��� DataGridView1
			dataGridView1->DataSource = dataTable;

			// ���������, ������� �� ������
			if (dataTable->Rows->Count == 0) {
				MessageBox::Show("������ � ��������� ��������� �������� �� �������.", "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("��������� ������: " + ex->Message, "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		RefreshDataGridView(dataGridView1);
	}

	private: System::Void Delete_but_Click(System::Object^ sender, System::EventArgs^ e) {
		// �������� �������� ID �� ���������� ����
		String^ idToDelete = Id_txt_delete->Text;

		try {
			// ���������, ��� ��� ������� � ID �� ������
			if (String::IsNullOrWhiteSpace(StudentName_Table->Text)) {
				MessageBox::Show("����������, ������� ��� �������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (String::IsNullOrWhiteSpace(idToDelete)) {
				MessageBox::Show("����������, ������� ID ��� ��������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// ����������� ID � �����
			int id;
			if (!Int32::TryParse(idToDelete, id)) {
				MessageBox::Show("ID ������ ���� ������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// �������� ��� ������� �� TextBox
			String^ tableName = StudentName_Table->Text;

			// ������� SQL-������ ��� �������� ������
			String^ deleteQuery = "DELETE FROM " + tableName + " WHERE ID = @ID";

			SqlCommand^ command = gcnew SqlCommand(deleteQuery, connection);
			command->Parameters->AddWithValue("@ID", id);
			// ��������� ������
			int rowsAffected = command->ExecuteNonQuery();

			// ��������� ��������� ����������
			if (rowsAffected > 0) {
				MessageBox::Show("������ ������� �������.", "�����", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("������ � ��������� ID �� �������.", "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("��������� ������: " + ex->Message, "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		RefreshDataGridView(dataGridView1);
	}

};

}
