#pragma once
#include "frmVerBoleta.h"
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
	/// Resumen de frmTotalBoletasRealizadas
	/// </summary>
	public ref class frmTotalBoletasRealizadas : public System::Windows::Forms::Form
	{
	public:
		frmTotalBoletasRealizadas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmTotalBoletasRealizadas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(70, 121);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(543, 230);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nro Boleta";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Emplead(a)";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Cliente";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Fecha";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Venta Total";
			this->Column5->Name = L"Column5";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(70, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Fecha:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(136, 71);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(276, 409);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 36);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Ver Boleta";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmTotalBoletasRealizadas::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(398, 66);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 25);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmTotalBoletasRealizadas::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(462, 377);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"TOTAL:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(513, 374);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 8;
			// 
			// frmTotalBoletasRealizadas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(701, 477);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmTotalBoletasRealizadas";
			this->Text = L"frmTotalBoletasRealizadas";
			this->Load += gcnew System::EventHandler(this, &frmTotalBoletasRealizadas::frmTotalBoletasRealizadas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmTotalBoletasRealizadas_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	BoletaController^ buscar = gcnew BoletaController();
	List<Boleta^>^ lista =buscar->Buscarxfecha(this->dateTimePicker1->Text);
	mostarGrilla(lista);
	int total = 0;
	for (int i = 0; i < lista->Count; i++) {
		total = total + lista[i]->VentalTotal;
	}
	this->textBox1->Text = Convert::ToString(total);
}
	public: void mostarGrilla(List<Boleta^>^ lista) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < lista->Count; i++) {
			Boleta^ objBoleta = lista[i];
			array<String^>^ fila = gcnew array<String^>(5);
			fila[0] = Convert::ToString(objBoleta->codigo);
			fila[1] = objBoleta->objPersonal->nombre + " " + objBoleta->objPersonal->ApellidoPaterno + " " + objBoleta->objPersonal->ApellidoMaterno;
			fila[2] = objBoleta->objCliente->nombre + " " + objBoleta->objCliente->ApellidoPaterno + " " + objBoleta->objCliente->ApellidoMaterno;
			fila[3] = objBoleta->FechaDeVenta;
			fila[4] = Convert::ToString(objBoleta->VentalTotal);
			this->dataGridView1->Rows->Add(fila);
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int fila = this->dataGridView1->SelectedRows[0]->Index;
	int codigo = Convert::ToInt32(this->dataGridView1->Rows[fila]->Cells[0]->Value->ToString());
	frmVerBoleta^ ventana = gcnew frmVerBoleta(codigo);
	ventana->ShowDialog();
}
};
}
