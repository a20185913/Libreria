#pragma once
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
	/// Resumen de frmEditarPedido
	/// </summary>
	public ref class frmEditarPedido : public System::Windows::Forms::Form
	{
	public:
		frmEditarPedido(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEditarPedido(int codigoPedido)
		{
			InitializeComponent();
			this->codigoPedido = codigoPedido;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarPedido()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







	private: int codigoPedido;
	public: CompraDeMercaderia^ dato;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	public:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(169, 109);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(96, 20);
			this->numericUpDown1->TabIndex = 56;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(111, 111);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 55;
			this->label1->Text = L"Cantidad:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(427, 64);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 54;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmEditarPedido::button3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(169, 66);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(196, 20);
			this->textBox4->TabIndex = 53;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(111, 69);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 52;
			this->label7->Text = L"Nombre";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(111, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 13);
			this->label6->TabIndex = 51;
			this->label6->Text = L"Producto:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(384, 218);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 50;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarPedido::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(171, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 49;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarPedido::button1_Click_1);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(398, 105);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(104, 20);
			this->dateTimePicker1->TabIndex = 48;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ENTREGADO", L"PENDIENTE" });
			this->comboBox1->Location = System::Drawing::Point(381, 152);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 47;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(323, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 46;
			this->label3->Text = L"Estado:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(289, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 13);
			this->label2->TabIndex = 45;
			this->label2->Text = L"Fecha de entrega:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(193, 153);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(94, 20);
			this->textBox1->TabIndex = 58;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(108, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 13);
			this->label4->TabIndex = 57;
			this->label4->Text = L"Precio Unitario:";
			// 
			// frmEditarPedido
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(652, 298);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"frmEditarPedido";
			this->Text = L"frmEditarPedido";
			this->Load += gcnew System::EventHandler(this, &frmEditarPedido::frmEditarPedido_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void frmEditarPedido_Load(System::Object^ sender, System::EventArgs^ e) {
	CompraDeMercaderiaController^ funcion = gcnew CompraDeMercaderiaController;
	CompraDeMercaderia^ objPedidoEncontrado = funcion->BuscarPedidoxCodigo(this->codigoPedido);
	this->textBox4->Text = objPedidoEncontrado->productoNombre;
	this->numericUpDown1->Text = Convert::ToString(objPedidoEncontrado->cantidad);
	this->dateTimePicker1->Text = objPedidoEncontrado->fecha;
	this->comboBox1->Text = objPedidoEncontrado->estado;
	this->textBox1->Text = Convert::ToString(objPedidoEncontrado->precioUnitario);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	frmProductoG^ ventanaProducto = gcnew frmProductoG();
	ventanaProducto->ShowDialog();
	this->textBox4->Text = ventanaProducto->objProducto->nombre + " " + ventanaProducto->objProducto->marca;
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	if (this->textBox4->Text == "" || this->comboBox1->Text == "" || this->numericUpDown1->Text == ""
		|| this->dateTimePicker1->Text == "" || this->textBox1->Text == "") {
		MessageBox::Show("Falta ingresar datos");
	}
	else {
		String^ productoNombre = this->textBox4->Text;
		int cantidad = Convert::ToInt32(this->numericUpDown1->Text);
		double precioUnitario = Convert::ToDouble(this->textBox1->Text);
		String^ fecha = this->dateTimePicker1->Text;
		String^ estado = this->comboBox1->Text;

		CompraDeMercaderia^ objPedidoEditar = gcnew CompraDeMercaderia(this->codigoPedido,
			productoNombre, cantidad,precioUnitario, fecha, estado);

		CompraDeMercaderiaController^ objCompraDeMercaderiaController = gcnew CompraDeMercaderiaController();
		objCompraDeMercaderiaController->actualizarPedido(objPedidoEditar);
		MessageBox::Show("La información ha sido actualizada");
		this->Close();
	}
}
};
}
