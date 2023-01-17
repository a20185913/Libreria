#pragma once

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
	/// Resumen de frmVerBoleta
	/// </summary>
	public ref class frmVerBoleta : public System::Windows::Forms::Form
	{
	public:
		frmVerBoleta(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmVerBoleta(int codigo)
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
		~frmVerBoleta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: int codigo;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label19;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(315, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PUCPLOY";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(320, 209);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nro. Boleta:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(117, 312);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Cliente:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(117, 342);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"DNI:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(119, 711);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Total:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(119, 658);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Fecha:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(119, 685);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Descuento(%)";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(446, 209);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(208, 309);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(270, 20);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(208, 342);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(270, 20);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(244, 711);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(238, 20);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(244, 658);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(238, 20);
			this->textBox6->TabIndex = 13;
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(244, 685);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(238, 20);
			this->textBox7->TabIndex = 14;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(120, 452);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(443, 177);
			this->dataGridView1->TabIndex = 15;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Cantidad";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Porducto";
			this->Column2->Name = L"Column2";
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
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(117, 376);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Membresía:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(320, 140);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"RUC:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(443, 140);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(79, 13);
			this->label11->TabIndex = 18;
			this->label11->Text = L"256759133256";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(117, 412);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 13);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Moneda:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(205, 412);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(42, 13);
			this->label13->TabIndex = 20;
			this->label13->Text = L"SOLES";
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(208, 376);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(270, 20);
			this->textBox8->TabIndex = 21;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(320, 162);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(55, 13);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Dirección:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(443, 162);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(203, 13);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Av. Universitaria 1801, San Miguel 15088";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(320, 184);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(52, 13);
			this->label16->TabIndex = 24;
			this->label16->Text = L"Teléfono:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(443, 184);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(49, 13);
			this->label17->TabIndex = 25;
			this->label17->Text = L"1238954";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(239, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(206, 25);
			this->label2->TabIndex = 26;
			this->label2->Text = L"BOLETA DE VENTA";
			this->label2->Click += gcnew System::EventHandler(this, &frmVerBoleta::label2_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(117, 274);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(63, 13);
			this->label18->TabIndex = 27;
			this->label18->Text = L"Emplead(a):";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(208, 274);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(270, 20);
			this->textBox1->TabIndex = 28;
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(244, 737);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(238, 20);
			this->textBox9->TabIndex = 30;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(119, 737);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(97, 13);
			this->label19->TabIndex = 29;
			this->label19->Text = L"Total/cDescuento:";
			// 
			// frmVerBoleta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(742, 770);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"frmVerBoleta";
			this->Text = L"frmVerBoleta";
			this->Load += gcnew System::EventHandler(this, &frmVerBoleta::frmVerBoleta_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmVerBoleta_Load(System::Object^ sender, System::EventArgs^ e) {
		BoletaController^ buscar = gcnew BoletaController();
		List<Boleta^>^ lista = buscar->Buscarxcodigo(this -> codigo);
		Boleta^ objBoleta = lista[0];
		this->textBox2->Text =Convert::ToString( this ->codigo);
		this->textBox1->Text =objBoleta->objPersonal->nombre+" "+ objBoleta->objPersonal->ApellidoPaterno+" "+objBoleta->objPersonal->ApellidoMaterno;
		this->textBox3->Text = objBoleta->objCliente->nombre + " " + objBoleta->objCliente->ApellidoPaterno + " " + objBoleta->objCliente->ApellidoMaterno;
		this->textBox4->Text = objBoleta->objCliente->dni;
		this->textBox6->Text = objBoleta->FechaDeVenta;
		this->textBox8->Text = objBoleta->telefono;
		this->textBox9->Text = Convert::ToString (objBoleta->VentalTotal);

		double descuento,precio,total= objBoleta->VentalTotal;
		if (objBoleta->telefono == "PUCPLOYPREMIUM") {
			descuento = 10;
			precio = total*(100 / (100 - descuento));
			this->textBox7->Text = Convert::ToString(descuento);
			this->textBox5->Text = Convert::ToString(precio);
		}
		else if (objBoleta->telefono == "PUCPLOYSTANDARD") {
			descuento = 7;
			precio = total * (100 / (100 - descuento));
			this->textBox7->Text = Convert::ToString(descuento);
			this->textBox5->Text = Convert::ToString(precio);
		}
		else if (objBoleta->telefono == "PUCPLOYBASIC") {
			descuento = 5;
			precio = total * (100 / (100 - descuento));
			this->textBox7->Text = Convert::ToString(descuento);
			this->textBox5->Text = Convert::ToString(precio);
		}
		else {
			descuento = 0;
			precio = total * (100 / (100 - descuento));
			this->textBox7->Text = Convert::ToString(descuento);
			this->textBox5->Text = Convert::ToString(precio);
		}
		ProductoController^ bucaproducto = gcnew ProductoController();
		List<Producto^>^ listaProducto = bucaproducto->BuscarProductoVendido(this->codigo);
		mostrarGrilla(listaProducto);
	}
		public: void mostrarGrilla(List<Producto^>^ listaProducto) {
			this->dataGridView1->Rows->Clear();
			for (int i = 0; i < listaProducto->Count; i++) {
				Producto^ objProducto = listaProducto[i];
				array<String^>^ fila = gcnew array<String^>(4);
				fila[0] = Convert::ToString(objProducto->cantidad);
				fila[1] = objProducto->nombre;
				fila[2] = Convert::ToString(objProducto->PrecioDeVenta);
				fila[3] = Convert::ToString(objProducto->cantidad*objProducto->PrecioDeVenta);
				this->dataGridView1->Rows->Add(fila);

			}
		}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
