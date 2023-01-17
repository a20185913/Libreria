#pragma once
#include "frmListaBoletasIndividuales.h"
#include "frmTotalBoletasRealizadas.h"
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
	/// Resumen de frmVentasRealizadas
	/// </summary>
	public ref class frmVentasRealizadas : public System::Windows::Forms::Form
	{
	public:
		frmVentasRealizadas(void)
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
		~frmVentasRealizadas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(66, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Criterios de busqueda:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column4,
					this->Column1, this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(39, 168);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(630, 234);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"codigo";
			this->Column4->Name = L"Column4";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"NOMBRE";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"APELLIDO PATERNO";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 200;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"APELLIDO MATERNO";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 200;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(66, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(130, 90);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 20);
			this->textBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(278, 432);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 40);
			this->button1->TabIndex = 4;
			this->button1->Text = L"VER BOLETAS";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmVentasRealizadas::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(531, 76);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 40);
			this->button2->TabIndex = 5;
			this->button2->Text = L"PUCPLOYBOLETAS";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmVentasRealizadas::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(528, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Todas las boletas:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(310, 90);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmVentasRealizadas::button3_Click);
			// 
			// frmVentasRealizadas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(711, 514);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"frmVentasRealizadas";
			this->Text = L"frmVentasRealizadas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = this->textBox1->Text;
		PersonalController^ buscar = gcnew PersonalController();
		List<Personal^>^ lista = buscar->buscarPersonalxnombre(nombre);
		mostrarGrilla(lista);
	}
		   public: void mostrarGrilla(List<Personal^>^ lista) {
			   this->dataGridView1->Rows->Clear();
			   for (int i = 0; i < lista->Count; i++) {
				   Personal^ objPersonal = lista[i];
				   array<String^>^ fila = gcnew array<String^>(4);
				   fila[0] = Convert::ToString(objPersonal->codigo);
				   fila[1] = objPersonal->nombre;
				   fila[2] = objPersonal->ApellidoPaterno;
				   fila[3] = objPersonal->ApellidoMaterno;
				   this->dataGridView1->Rows->Add(fila);
			   }
		   }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int fila = this->dataGridView1->SelectedRows[0]->Index;
	int codigo = Convert::ToInt32(this->dataGridView1->Rows[fila]->Cells[0]->Value->ToString());
	frmListaBoletasIndividuales^ ventana = gcnew frmListaBoletasIndividuales(codigo);
	ventana->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmTotalBoletasRealizadas^ ventana = gcnew frmTotalBoletasRealizadas();
	ventana->ShowDialog();
}
};
}
