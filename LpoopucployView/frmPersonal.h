#pragma once
#include "frmNuevoPersonal.h"
#include "frmEditarPersonal.h"
namespace LpoopucployView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace LpoopucployController;
	using namespace System::Collections::Generic;
	using namespace LpoopucployModel;

	/// <summary>
	/// Resumen de frmPersonal
	/// </summary>
	public ref class frmPersonal : public System::Windows::Forms::Form
	{
	public:
		frmPersonal(void)
		{
			InitializeComponent();
			this->objPersonalController = gcnew PersonalController();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPersonal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ Modificar;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: PersonalController^ objPersonalController;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
































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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Modificar = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(847, 489);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmPersonal::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(489, 489);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPersonal::button2_Click);
			// 
			// Modificar
			// 
			this->Modificar->Location = System::Drawing::Point(659, 489);
			this->Modificar->Name = L"Modificar";
			this->Modificar->Size = System::Drawing::Size(75, 23);
			this->Modificar->TabIndex = 18;
			this->Modificar->Text = L"Modificar";
			this->Modificar->UseVisualStyleBackColor = true;
			this->Modificar->Click += gcnew System::EventHandler(this, &frmPersonal::Modificar_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column9,
					this->Column10, this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1->Location = System::Drawing::Point(68, 159);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1392, 299);
			this->dataGridView1->TabIndex = 17;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmPersonal::dataGridView1_CellClick);
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"CODIGO";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"RANGO";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"NOMBRE";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"APELLIDO PATERNO";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 200;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"APELLIDO MATERNO";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 200;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"DNI";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"DIRECCIÓN";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 200;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"NUMERO DE TELÉFONO";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"CORREO";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 150;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"CONTRASEÑA";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(360, 93);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPersonal::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(164, 93);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(157, 20);
			this->textBox1->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(68, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"DNI:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Criterios de Busqueda:";
			// 
			// frmPersonal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1502, 544);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Modificar);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmPersonal";
			this->Text = L"frmPersonal";
			this->Load += gcnew System::EventHandler(this, &frmPersonal::frmPersonal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int fila = e->RowIndex;
		if (fila != -1) {
			dataGridView1->CurrentRow->Selected = true;
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ dni = this->textBox1->Text;
	/*if (dni == "") {
		PersonalController^ objPersonalController = gcnew PersonalController();
		List<Personal^>^ listaPersonal = objPersonalController->buscarPersonalAll();
		mostrarGrilla(listaPersonal);
	}
	else {
		PersonalController^ objPersonalController = gcnew PersonalController();
		List<Personal^>^ listaPersonal = objPersonalController->buscarPersonalxDNI(dni);
		mostrarGrilla(listaPersonal);
	}*/

	PersonalController^ objPersonalController = gcnew PersonalController();
	List<Personal^>^ listaPersonal = objPersonalController->buscarPersonalxDNI(dni);
	mostrarGrilla(listaPersonal);
}

	public: void mostrarGrilla(List<Personal^>^ listaPersonal) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaPersonal->Count; i++) {
			Personal^ objPersonal = listaPersonal[i];
			array<String^>^ fila = gcnew array<String^>(10);

			fila[0] = Convert::ToString(objPersonal->codigo);
			int rango = objPersonal->objUsuario->rango;
			if (rango == 1) {
				fila[1] = "GERENTE";
			}
			else if (rango == 2) {
				fila[1] = "VENDEDOR";
			}

			fila[2] = objPersonal->nombre;
			fila[3] = objPersonal->ApellidoPaterno;
			fila[4] = objPersonal->ApellidoMaterno;
			fila[5] = objPersonal->dni;
			fila[6] = objPersonal->direccion;
			fila[7] = objPersonal->NumeroDeTelefono;
			fila[8] = objPersonal->objUsuario->correo;
			fila[9] = objPersonal->objUsuario->password;
			this->dataGridView1->Rows->Add(fila);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevoPersonal^ ventanaNuevoPersonal = gcnew frmNuevoPersonal();
	ventanaNuevoPersonal->ShowDialog();
	PersonalController^ objPersonalController = gcnew PersonalController();
	List<Personal^>^ listaPersonal = objPersonalController->buscarPersonalAll();
	mostrarGrilla(listaPersonal);

}
private: System::Void Modificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoPersonalEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

	frmEditarPersonal^ ventanaEditarPersonal = gcnew frmEditarPersonal(this->objPersonalController, codigoPersonalEditar);
	ventanaEditarPersonal->ShowDialog();


	List<Personal^>^ listaPersonal = objPersonalController->buscarPersonalAll();
	mostrarGrilla(listaPersonal);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoPersonalEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

	PersonalController^ objPersonalController = gcnew PersonalController();
	
	/*UsuarioController^ objUsuarioController = gcnew UsuarioController();
	objUsuarioController->EliminarUsuario(codigoPersonalEliminar);
	objPersonalController->eliminarPersonal(codigoPersonalEliminar);
	*/
	
	objPersonalController->eliminarPersonal(codigoPersonalEliminar);
	MessageBox::Show("El personal ha sido eliminado exitosamente");
	
	List<Personal^>^ listaPersonal = objPersonalController->buscarPersonalAll();
	mostrarGrilla(listaPersonal);
}
private: System::Void frmPersonal_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
