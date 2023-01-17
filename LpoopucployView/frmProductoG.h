#pragma once
#include"frmNuevoProducto.h"
#include "frmEditarProducto.h"
namespace LpoopucployView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace LpoopucployController;
	using namespace LpoopucployModel;
	/// <summary>
	/// Resumen de frmProductoG
	/// </summary>
	public ref class frmProductoG : public System::Windows::Forms::Form
	{
	public:
		frmProductoG(void)
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
		~frmProductoG()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	public: Producto^ objProducto;
	private: System::Windows::Forms::Button^ Modificar;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmProductoG::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Modificar = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Criterio de Busqueda :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre: ";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Info;
			this->textBox1->Location = System::Drawing::Point(38, 124);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(221, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(321, 121);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmProductoG::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(27, 187);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(643, 351);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmProductoG::dataGridView1_CellClick);
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmProductoG::dataGridView1_CellDoubleClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"codigo";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio de Venta";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Marca";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Cantidad";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Precio de Compra";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Modificar
			// 
			this->Modificar->Location = System::Drawing::Point(278, 553);
			this->Modificar->Name = L"Modificar";
			this->Modificar->Size = System::Drawing::Size(75, 23);
			this->Modificar->TabIndex = 5;
			this->Modificar->Text = L"Modificar";
			this->Modificar->UseVisualStyleBackColor = true;
			this->Modificar->Click += gcnew System::EventHandler(this, &frmProductoG::Modificar_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(108, 553);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmProductoG::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(466, 553);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmProductoG::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(494, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(176, 137);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// frmProductoG
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(694, 607);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Modificar);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmProductoG";
			this->Text = L"frmProductoG";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ NombreProducto = this->textBox1->Text;
		ProductoController^ objProductocontroller = gcnew ProductoController();
		List<Producto^>^ listaproducto = objProductocontroller->BuscarProductoxNombre(NombreProducto);
		mostrarGrilla(listaproducto);
	}

		   public: void mostrarGrilla(List<Producto^>^ listaproducto) {
			   this->dataGridView1->Rows->Clear();
			   for (int i = 0; i < listaproducto->Count; i++) {
				   Producto^ objProducto = listaproducto[i];
				   array<String^>^ fila = gcnew array<String^>(6);
				   fila[0] = Convert::ToString(objProducto->codigo);
				   fila[1] = objProducto->nombre;
				   fila[2] = Convert::ToString(objProducto->PrecioDeVenta);
				   fila[3] = objProducto->marca;
				   fila[4] = Convert::ToString(objProducto->cantidad);
				   fila[5] = Convert::ToString(objProducto->PrecioDeCompra);
				   this->dataGridView1->Rows->Add(fila);
			   }
		   }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevoProducto^ ventanaNuevo = gcnew frmNuevoProducto();
	ventanaNuevo->ShowDialog();
	ProductoController^ objproductoController = gcnew ProductoController();
	List<Producto^>^ listapro = objproductoController->BuscarProductoAll();
	mostrarGrilla(listapro);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaselecion = this->dataGridView1->SelectedRows[0]->Index;
	int codigoproducto = Convert::ToInt32(this->dataGridView1->Rows[filaselecion]->Cells[0]->Value->ToString());
	ProductoController^ objcontrol = gcnew ProductoController();
	objcontrol->EliminarProducto(codigoproducto);
	MessageBox::Show("El producot fue eliminado exitosamente");
	List<Producto^>^ listaproducto = objcontrol->BuscarProductoAll();
	mostrarGrilla(listaproducto);
}
private: System::Void Modificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaselecion = this->dataGridView1->SelectedRows[0]->Index;
	int codigoproducto = Convert::ToInt32(this->dataGridView1->Rows[filaselecion]->Cells[0]->Value->ToString());
	frmEditarProducto^ ventanaedita = gcnew frmEditarProducto(codigoproducto);
	ventanaedita->ShowDialog();
	ProductoController^ objcontrol = gcnew ProductoController();
	List<Producto^>^ listaproducto = objcontrol->BuscarProductoAll();
	mostrarGrilla(listaproducto);
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int fila = e->RowIndex;
	if (fila != -1) {
		dataGridView1->CurrentRow->Selected = true;
	}
}
private: System::Void dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int fila = e->RowIndex;
	int filaSeleccionada, codigoProducto;
	if (fila != -1) {
		dataGridView1->CurrentRow->Selected = true;
		filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		codigoProducto = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		ProductoController^ objProductoController = gcnew ProductoController();
		objProducto = objProductoController->BuscaxCodigo(codigoProducto);
		this->Close();
	}
}
};
}
