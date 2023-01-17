#pragma once
#include "frmRegistrarPedido.h"
#include "frmEditarPedido.h"
#include "frmNuevoProducto.h"
#include "frmEditarProducto.h"
#include "frmProductoG.h"
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
	/// Resumen de frmMercaderia
	/// </summary>
	public ref class frmMercaderia : public System::Windows::Forms::Form
	{
	public:
		frmMercaderia(void)
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
		~frmMercaderia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Button^ button4;





	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMercaderia::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(76, 483);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 30);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Registrar Pedido";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMercaderia::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column6, this->Column7, this->Column8, this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(55, 164);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(843, 284);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMercaderia::dataGridView1_CellClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"CÓDIGO";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"PRODUCTO";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 300;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"CANTIDAD";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"PRECIO UNITARIO";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"FECHA";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"ESTADO";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column4,
					this->Column5
			});
			this->dataGridView2->Location = System::Drawing::Point(925, 164);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(344, 284);
			this->dataGridView2->TabIndex = 7;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"NOMBRE";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 200;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"CANTIDAD";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(922, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Productos con bajo STOCK:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Criterios de búsqueda:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(350, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Estado:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(51, 128);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Fecha:";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::Info;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ENTREGADO", L"PENDIENTE" });
			this->comboBox1->Location = System::Drawing::Point(399, 124);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 12;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarForeColor = System::Drawing::SystemColors::Info;
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::SystemColors::Info;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(118, 125);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(566, 123);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMercaderia::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(745, 483);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 30);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Registrar producto";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMercaderia::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(312, 483);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(153, 30);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Editar Pedido";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMercaderia::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(533, 483);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(153, 30);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Eliminar Pedido";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmMercaderia::button5_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(698, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(146, 122);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// frmMercaderia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1320, 606);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"frmMercaderia";
			this->Text = L"frmMercaderia";
			this->Load += gcnew System::EventHandler(this, &frmMercaderia::frmMercaderia_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmRegistrarPedido^ ventana = gcnew frmRegistrarPedido();
		ventana->ShowDialog();
		CompraDeMercaderiaController^ objCompraDeMercaderiaController = gcnew CompraDeMercaderiaController();
		String^ fecha = this->dateTimePicker1->Text;
		String^ estado = this->comboBox1->Text;
		List<CompraDeMercaderia^>^ listaPedidosEncontrados = objCompraDeMercaderiaController->BuscarProductoxEstadoyFecha(estado, fecha);
		mostrarGrilla(listaPedidosEncontrados);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	CompraDeMercaderiaController^ objCompraDeMercaderiaController = gcnew CompraDeMercaderiaController();
	String^ fecha = this->dateTimePicker1->Text;
	String^ estado = this->comboBox1->Text;
	List<CompraDeMercaderia^>^ listaPedidosEncontrados = objCompraDeMercaderiaController->BuscarProductoxEstadoyFecha(estado, fecha);
	mostrarGrilla(listaPedidosEncontrados);

}
	  
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaselecion = this->dataGridView1->SelectedRows[0]->Index;
	int codigoPedido = Convert::ToInt32(this->dataGridView1->Rows[filaselecion]->Cells[0]->Value->ToString());
	frmEditarPedido^ ventana = gcnew frmEditarPedido(codigoPedido);
	ventana->ShowDialog();

	CompraDeMercaderiaController^ objCompraDeMercaderiaController = gcnew CompraDeMercaderiaController();
	String^ fecha = this->dateTimePicker1->Text;
	String^ estado = this->comboBox1->Text;
	List<CompraDeMercaderia^>^ listaPedidosEncontrados = objCompraDeMercaderiaController->BuscarProductoxEstadoyFecha(estado, fecha);
	mostrarGrilla(listaPedidosEncontrados);

}
private: System::Void frmMercaderia_Load(System::Object^ sender, System::EventArgs^ e) {
	ProductoController^ objProductoController = gcnew ProductoController();
	List<Producto^>^ listaProductosEncontrados = objProductoController->BuscarCantidad();
	mostrarGrilla1(listaProductosEncontrados);

	CompraDeMercaderiaController^ objCompraDeMercaderiaController = gcnew CompraDeMercaderiaController();
	String^ fecha = this->dateTimePicker1->Text;
	String^ estado = this->comboBox1->Text;
	List<CompraDeMercaderia^>^ listaPedidosEncontrados = objCompraDeMercaderiaController->BuscarProductoxEstadoyFecha(estado, fecha);
	mostrarGrilla(listaPedidosEncontrados);

}
		public: void mostrarGrilla1(List<Producto^>^ listaproducto) {
			this->dataGridView2->Rows->Clear();
			for (int i = 0; i < listaproducto->Count; i++) {
				Producto^ objProducto = listaproducto[i];
				array<String^>^ fila = gcnew array<String^>(6);
				fila[0] = objProducto->nombre + " " + objProducto->marca;
				fila[1] = Convert::ToString(objProducto->cantidad);

				this->dataGridView2->Rows->Add(fila);
			}
		}

		public: void mostrarGrilla(List<CompraDeMercaderia^>^ listaPedidos) {
			this->dataGridView1->Rows->Clear();
			for (int i = 0; i < listaPedidos->Count; i++) {
				CompraDeMercaderia^ objPedido = listaPedidos[i];
				array<String^>^ fila = gcnew array<String^>(6);
				fila[0] = Convert::ToString(objPedido->codigo);
				fila[1] = objPedido->productoNombre;
				fila[2] = Convert::ToString(objPedido->cantidad);
				fila[3] = Convert::ToString(objPedido->precioUnitario);
				fila[4] = objPedido->fecha;
				fila[5] = objPedido->estado;
				this->dataGridView1->Rows->Add(fila);
			}
		}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	frmProductoG^ ventanaProductoG = gcnew frmProductoG();
	ventanaProductoG->ShowDialog();
	ProductoController^ objProductoController = gcnew ProductoController();
	List<Producto^>^ listaProductosEncontrados = objProductoController->BuscarCantidad();
	mostrarGrilla1(listaProductosEncontrados);


	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {

	int filaselecion = this->dataGridView1->SelectedRows[0]->Index;
	int codigoPedido = Convert::ToInt32(this->dataGridView1->Rows[filaselecion]->Cells[0]->Value->ToString());
	CompraDeMercaderiaController^ objCompraDeMercaderiaController = gcnew CompraDeMercaderiaController();
	objCompraDeMercaderiaController->EliminarPedido(codigoPedido);

	MessageBox::Show("El pedido ha sido eliminado con éxito");
	String^ fecha = this->dateTimePicker1->Text;
	String^ estado = this->comboBox1->Text;
	List<CompraDeMercaderia^>^ listaPedidosEncontrados = objCompraDeMercaderiaController->BuscarProductoxEstadoyFecha(estado, fecha);
	mostrarGrilla(listaPedidosEncontrados);

}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int fila = e->RowIndex;
	if (fila != -1) {
		dataGridView1->CurrentRow->Selected = true;
	}
}
};
}
