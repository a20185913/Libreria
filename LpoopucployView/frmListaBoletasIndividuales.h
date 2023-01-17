#pragma once
#include"frmVerBoleta.h"
namespace LpoopucployView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace LpoopucployController;
	using namespace LpoopucployModel;

	/// <summary>
	/// Resumen de frmListaBoletasIndividuales
	/// </summary>
	public ref class frmListaBoletasIndividuales : public System::Windows::Forms::Form
	{
	public:
		frmListaBoletasIndividuales(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmListaBoletasIndividuales(int codigo)
		{
			InitializeComponent();
			this->codigo = codigo;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmListaBoletasIndividuales()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;
	private: int codigo;
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(83, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre Vendedor:";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(197, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(206, 20);
			this->textBox1->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(86, 155);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(339, 374);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmListaBoletasIndividuales::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"NUMERO BOLETA";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"FECHA";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"VENTA TOTAL";
			this->Column3->Name = L"Column3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(84, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Fecha:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(197, 88);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(206, 20);
			this->dateTimePicker1->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(126, 586);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 34);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Ver Boleta";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmListaBoletasIndividuales::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(268, 586);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 34);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Eliminar Boleta";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmListaBoletasIndividuales::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(84, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Nro Boleta:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(197, 115);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(206, 20);
			this->textBox3->TabIndex = 10;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(430, 115);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmListaBoletasIndividuales::button3_Click);
			// 
			// frmListaBoletasIndividuales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(581, 634);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"frmListaBoletasIndividuales";
			this->Text = L"frmListaBoletasIndividuales";
			this->Load += gcnew System::EventHandler(this, &frmListaBoletasIndividuales::frmListaBoletasIndividuales_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void frmListaBoletasIndividuales_Load(System::Object^ sender, System::EventArgs^ e) {
	PersonalController^ Buscar = gcnew PersonalController();
	Personal^ objPersonal = Buscar->buscarPersonalxCodigo(this->codigo);
	this->textBox1->Text = objPersonal->nombre + " " + objPersonal->ApellidoPaterno + " " + objPersonal->ApellidoMaterno;

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ tiempo =  this->dateTimePicker1->Text;
	if (this->textBox3->Text == "") {
		BoletaController^ buscar = gcnew BoletaController();
		List<Boleta^>^ lista = buscar->Buscarxdos(tiempo, this->codigo);
		mostrarGrilla(lista);
	}
	else {
		int codigo = Convert::ToInt32(this->textBox3->Text);
		BoletaController^ buscar = gcnew BoletaController();
		List<Boleta^>^ lista = buscar->Buscarxcodigo(codigo);
		mostrarGrilla(lista);

	}
}
	   public: void mostrarGrilla(List<Boleta^>^ lista) {
		   this->dataGridView1->Rows->Clear();
		   for (int i = 0; i < lista->Count; i++) {
			   Boleta^ objBoleta = lista[i];
			   array<String^>^ fila = gcnew array<String^>(3);
			   fila[0] = Convert::ToString(objBoleta->codigo);
			   fila[1] = objBoleta->FechaDeVenta;
			   fila[2] = Convert::ToString(objBoleta->VentalTotal);
			   this->dataGridView1->Rows->Add(fila);
		   }

	   }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int fila=this->dataGridView1->SelectedRows[0]->Index;
	int codigob=Convert::ToInt32(this->dataGridView1->Rows[fila]->Cells[0]->Value->ToString());
	BoletaController^ eliminar = gcnew 	BoletaController();
	eliminar->eliminar(codigob);
	MessageBox::Show("Boleta Eliminada exitosamente");
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int fila = this->dataGridView1->SelectedRows[0]->Index;
	int codigob = Convert::ToInt32(this->dataGridView1->Rows[fila]->Cells[0]->Value->ToString());
	frmVerBoleta^ ventana = gcnew frmVerBoleta(codigob);
	ventana->ShowDialog();
}
};
}
