#pragma once
#include "frmNuevoCliente.h"
#include "frmEditarCliente.h"

namespace LpoopucployView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace LpoopucployController;
	using namespace LpoopucployModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmCliente
	/// </summary>
	public ref class frmCliente : public System::Windows::Forms::Form
	{
	public:
		frmCliente(void)
		{
			InitializeComponent();
			this->objClienteController = gcnew ClienteController();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ Modificar;
	private: ClienteController^ objClienteController;









	public: Cliente^ objCliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmCliente::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Modificar = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(493, 101);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmCliente::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Info;
			this->textBox1->Location = System::Drawing::Point(283, 104);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(157, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmCliente::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(207, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"DNI:";
			this->label2->Click += gcnew System::EventHandler(this, &frmCliente::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(204, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Criterios de Busqueda:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column9,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1->Location = System::Drawing::Point(81, 160);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1142, 244);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmCliente::dataGridView1_CellClick);
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmCliente::dataGridView1_CellDoubleClick);
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"CODIGO";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
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
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"APELLIDO MATERNO";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
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
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"MEMBRESÍA";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"FECHA INICIO";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 200;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"FECHA FIN";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 200;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(723, 444);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmCliente::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(365, 444);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmCliente::button2_Click);
			// 
			// Modificar
			// 
			this->Modificar->Location = System::Drawing::Point(535, 444);
			this->Modificar->Name = L"Modificar";
			this->Modificar->Size = System::Drawing::Size(75, 23);
			this->Modificar->TabIndex = 10;
			this->Modificar->Text = L"Modificar";
			this->Modificar->UseVisualStyleBackColor = true;
			this->Modificar->Click += gcnew System::EventHandler(this, &frmCliente::Modificar_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(81, 45);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(103, 94);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// frmCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1308, 514);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Modificar);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmCliente";
			this->Text = L"frmCliente";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ dni =this->textBox1->Text;
	ClienteController^ objClienteController = gcnew ClienteController();
	if (dni == "") {
		List<Cliente^>^ lista = objClienteController->Buscarall();
		mostrarGrilla(lista);
	}
	else {
		List<Cliente^>^ lista = objClienteController->BuscarCliente(dni);
		mostrarGrilla(lista);
	}
	

}
	   public: void mostrarGrilla(List<Cliente^>^ lista) {
		   this->dataGridView1->Rows->Clear();
		   for (int i = 0; i < lista->Count; i++) {
			   Cliente^ objCliente = lista[i];
			   array<String^>^ fila = gcnew array<String^> (9);
			   fila[0] = Convert::ToString(objCliente->codigo);
			   fila[1] = objCliente->nombre;
			   fila[2] = objCliente->ApellidoPaterno;
			   fila[3] = objCliente->ApellidoMaterno;
			   fila[4] = objCliente->dni;
			   fila[5] = objCliente->direccion;
			   fila[6] = objCliente->objMembresia->nivel;
			   fila[7] = objCliente->objMembresia->FechaInicio;
			   fila[8] = objCliente->objMembresia->FechaFin;
			   this->dataGridView1->Rows->Add(fila);
		   }
	   }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevoCliente^ ventana = gcnew frmNuevoCliente();
	ventana->ShowDialog();
	ClienteController^ objClienteController = gcnew ClienteController();
	List<Cliente^>^ lista = objClienteController->Buscarall();
	mostrarGrilla(lista);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSelecionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ dni = this->dataGridView1->Rows[filaSelecionada]->Cells[4]->Value->ToString();
	int codigo = Convert::ToInt32(this->dataGridView1->Rows[filaSelecionada]->Cells[0]->Value->ToString());
	ClienteController^ objeliminar = gcnew ClienteController();
	MembresiaController^ objMembresiaController = gcnew MembresiaController();
	List<Cliente^>^ cliente = objeliminar->BuscarCliente(dni);
	Cliente^ Clientes = cliente[0];
	objeliminar->Eliminar(dni);
	objMembresiaController->eliminar(Clientes->objMembresia->codigo);
	MessageBox::Show("El cliente ha sido eliminado exitosamente");
	List<Cliente^>^ listacliente = objeliminar->Buscarall();
	mostrarGrilla(listacliente);

}
private: System::Void Modificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSelecionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ dni = this->dataGridView1->Rows[filaSelecionada]->Cells[4]->Value->ToString();
	frmEditarCliente^ ventana = gcnew frmEditarCliente(this->objClienteController,dni);
	ventana->ShowDialog();
	List<Cliente^>^ lista = objClienteController->Buscarall();
	mostrarGrilla(lista);

}
private: System::Void dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	int fila = e->RowIndex;
	int filaSeleccionada,codigoCliente;
	if (fila != -1) {
		dataGridView1->CurrentRow->Selected = true;
		filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		codigoCliente = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		ClienteController^ objClienteController = gcnew ClienteController();
		objCliente = objClienteController->buscarClientexCodigo(codigoCliente);
		if (objCliente == nullptr) {
			MessageBox::Show("El cliente no existe");
		}
		this->Close();
	}
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int fila = e->RowIndex;
	if (fila != -1) {
		dataGridView1->CurrentRow->Selected = true;
	}
}
};
}
