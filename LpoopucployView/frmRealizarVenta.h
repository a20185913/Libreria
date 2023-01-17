#pragma once
#include "frmProducto.h"
#include "frmCliente.h"
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
	/// Resumen de frmRealizarVenta
	/// </summary>
	public ref class frmRealizarVenta : public System::Windows::Forms::Form
	{
	public:
		frmRealizarVenta(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmRealizarVenta(int codigo)
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
		~frmRealizarVenta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button1;

	private: int codigo;
	public: List<Boceto^>^ lista = gcnew List<Boceto^>();
	public: int NumeroBoleta = NumeroBoleta +1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	public:
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(89, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Fecha de Venta:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(89, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Emplead(a):";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(92, 99);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmRealizarVenta::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(89, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Cliente:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(167, 134);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmRealizarVenta::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(89, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"DNI:";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(147, 169);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(196, 20);
			this->textBox2->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(89, 207);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Nombre:";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(147, 207);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(196, 20);
			this->textBox3->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(89, 250);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Producto:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(89, 279);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Nombre";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(454, 316);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Cantidad:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(89, 316);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(38, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Stock:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(260, 317);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(86, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Precio de Venta:";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(147, 276);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(196, 20);
			this->textBox4->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(147, 314);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(65, 20);
			this->textBox5->TabIndex = 16;
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(352, 314);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(65, 20);
			this->textBox6->TabIndex = 17;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(512, 274);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Agregar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmRealizarVenta::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(92, 362);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(517, 181);
			this->dataGridView1->TabIndex = 20;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Cantidad";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 175;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio Unitario";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Importe";
			this->Column4->Name = L"Column4";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(328, 589);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Eliminar item";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmRealizarVenta::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(429, 589);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Procesar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmRealizarVenta::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(534, 589);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Cancelar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmRealizarVenta::button6_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(182, 35);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(106, 20);
			this->dateTimePicker1->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(89, 567);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Total:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(189, 564);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(113, 20);
			this->textBox7->TabIndex = 26;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(373, 210);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(63, 13);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Membresía:";
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(442, 207);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(196, 20);
			this->textBox8->TabIndex = 28;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(189, 592);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(113, 20);
			this->textBox9->TabIndex = 30;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(90, 592);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(62, 13);
			this->label13->TabIndex = 29;
			this->label13->Text = L"Descuento:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(189, 616);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(113, 20);
			this->textBox10->TabIndex = 32;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(89, 619);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(94, 13);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Total/cDescuento";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(532, 35);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(106, 13);
			this->label15->TabIndex = 33;
			this->label15->Text = L"BOLETA DE VENTA";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(509, 70);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(33, 13);
			this->label16->TabIndex = 34;
			this->label16->Text = L"RUC:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(509, 106);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(75, 13);
			this->label17->TabIndex = 35;
			this->label17->Text = L"Nro de Boleta:";
			// 
			// textBox11
			// 
			this->textBox11->Enabled = false;
			this->textBox11->Location = System::Drawing::Point(590, 103);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(105, 20);
			this->textBox11->TabIndex = 36;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(587, 70);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(79, 13);
			this->label18->TabIndex = 37;
			this->label18->Text = L"256759133256";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(376, 274);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 38;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmRealizarVenta::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(512, 314);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(96, 20);
			this->numericUpDown1->TabIndex = 39;
			// 
			// frmRealizarVenta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(771, 662);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmRealizarVenta";
			this->Text = L"frmRealizarVenta";
			this->Load += gcnew System::EventHandler(this, &frmRealizarVenta::frmRealizarVenta_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmRealizarVenta_Load(System::Object^ sender, System::EventArgs^ e) {
		/**/
		PersonalController^ objPersonalController = gcnew PersonalController();
		Personal^ objPersonal = objPersonalController->buscarPersonalxCodigo(this->codigo);
		this->textBox1->Text = objPersonal->nombre + " " + objPersonal->ApellidoPaterno + " " + objPersonal->ApellidoMaterno;

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmCliente^ ventanaCliente = gcnew frmCliente();
	ventanaCliente->ShowDialog();
	if (ventanaCliente->objCliente != nullptr) {
		this->textBox2->Text = ventanaCliente->objCliente->dni;
		this->textBox3->Text = ventanaCliente->objCliente->nombre + " " + ventanaCliente->objCliente->ApellidoPaterno + " " + ventanaCliente->objCliente->ApellidoMaterno;
		this->textBox8->Text = ventanaCliente->objCliente->objMembresia->nivel;
	}
	

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmProducto^ ventanaProducto = gcnew frmProducto();
	
	ventanaProducto->ShowDialog();
	
	this->textBox4->Text = ventanaProducto->objProducto->nombre;
	this->textBox5->Text = Convert::ToString(ventanaProducto->objProducto->cantidad);
	this->textBox6->Text = Convert::ToString(ventanaProducto->objProducto->PrecioDeVenta);

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ CantidadCompra = this->numericUpDown1->Text;
	int por = Convert::ToInt32(CantidadCompra);
	if (Convert::ToInt32(this->textBox5->Text)  >= por ) {
		String^ nombre = this->textBox4->Text;
		String^ PrecioUnitario = this->textBox6->Text;
		double numer = Convert::ToDouble(PrecioUnitario);
		String^ Importe = Convert::ToString(numer * por);
		Boceto^ objBoceto = gcnew Boceto(CantidadCompra, nombre, PrecioUnitario, Importe);

		lista->Add(objBoceto);
		mostarGrilla(lista);
		double suma = 0;
		for (int j = 0; j < lista->Count; j++) {
			Boceto^ objBoceto = lista[j];
			double impor = Convert::ToDouble(objBoceto->Importe);
			suma = suma + impor;
		}
		this->textBox7->Text = Convert::ToString(suma);
		String^ dni = this->textBox2->Text;
		ClienteController^ buscar = gcnew ClienteController();
		List<Cliente^>^ li = buscar->BuscarCliente(dni);
		if (li[0]->objMembresia->nivel == "PUCPLOYPREMIUM") {
			double descuento = 10;
			this->textBox9->Text = Convert::ToString(descuento);
			double total = suma - (descuento / 100) * suma;
			this->textBox10->Text = Convert::ToString(total);

		}
		else if (li[0]->objMembresia->nivel == "PUCPLOYSTANDARD") {
			double descuento = 7;
			this->textBox9->Text = Convert::ToString(descuento);
			double total = suma - (descuento / 100) * suma;
			this->textBox10->Text = Convert::ToString(total);

		}
		else if (li[0]->objMembresia->nivel == "PUCPLOYBASIC") {
			double descuento = 5;
			this->textBox9->Text = Convert::ToString(descuento);
			double total = suma - (descuento / 100) * suma;
			this->textBox10->Text = Convert::ToString(total);
		}
		else {
			double descuento = 0;
			this->textBox9->Text = Convert::ToString(descuento);
			double total = suma - (descuento / 100) * suma;
			this->textBox10->Text = Convert::ToString(total);
		}
	}
	else {
		MessageBox::Show("No hay sufuciente stock");
	}
	
	
}
	public: void  mostarGrilla(List<Boceto^>^ lista){
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < lista->Count; i++) {
			Boceto^ objBoceto = lista[i];
			array<String^>^ fila = gcnew array<String^>(4);
			fila[0] = objBoceto->cantidad;
			fila[1] = objBoceto->nombre;
			fila[2] = objBoceto->PrecioUnitario;
			fila[3] = objBoceto->Importe;
			this->dataGridView1->Rows->Add(fila);
		}

	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaseleccionada  = this->dataGridView1->SelectedRows[0]->Index;
	String^ nombree = this->dataGridView1->Rows[filaseleccionada]->Cells[1]->Value->ToString();
	for (int j = 0; j < lista->Count; j++) {
		Boceto^ objBoceto = lista[j];
		if (objBoceto->nombre == nombree) {
			lista->RemoveAt(j);
			break;
		}
	}
	mostarGrilla(lista);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	BoletaController^ agregar = gcnew BoletaController();
	ClienteController^ buscar = gcnew ClienteController();
	 List<Cliente^>^ aun = buscar->BuscarCliente(this->textBox2->Text);
	 Cliente^ objCliente = aun [0];
	 ProductoController^ objControl = gcnew  ProductoController();
	 List<Producto^>^ objProducto = gcnew List<Producto^>();
	PersonalController^ objPersonalController = gcnew PersonalController();
	Personal^ objPersonal = objPersonalController->buscarPersonalxCodigo(this->codigo);
	Boleta^ objBoleta = gcnew Boleta(NumeroBoleta,this->dateTimePicker1->Text, "8horas", "Soles", "cajero", "principal",this->textBox8->Text, "256759133256", Convert::ToDouble(this->textBox10->Text), objCliente,objPersonal, objProducto);
	agregar->RegistrarBoleta(objBoleta,lista);
	ProductoController^ actualizar = gcnew ProductoController();
	actualizar->Remix(lista);
	MessageBox::Show("Boleta Procesada");
	NumeroBoleta = NumeroBoleta + 1;
	this->Close();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
