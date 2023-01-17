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
	/// Resumen de frmEditarCliente
	/// </summary>
	public ref class frmEditarCliente : public System::Windows::Forms::Form
	{
	public:
		frmEditarCliente(void)
		{
			InitializeComponent();
			this->objMembresia = gcnew Membresia();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEditarCliente(ClienteController^ objClienteController,String^ dni)
		{
			InitializeComponent();
			this->objClienteController = objClienteController;
			this->dni = dni;
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: ClienteController^ objClienteController;
	private: Membresia^ objMembresia;
	private: String^ dni;
	public: int codigomen;
	private: System::Windows::Forms::Label^ label8;
	public:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(294, 398);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarCliente::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(113, 398);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarCliente::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(202, 238);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(188, 20);
			this->textBox6->TabIndex = 26;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(202, 204);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(188, 20);
			this->textBox5->TabIndex = 25;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(202, 167);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(188, 20);
			this->textBox4->TabIndex = 24;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(202, 134);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(188, 20);
			this->textBox3->TabIndex = 23;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(202, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 20);
			this->textBox2->TabIndex = 22;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(202, 67);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 20);
			this->textBox1->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(95, 238);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Dirección:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(95, 207);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"DNI:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(95, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Apellido Materno";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(95, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Apellido Paterno";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(95, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Nombre:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(95, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Código";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(95, 273);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 13);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Membresía:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"NINGUNA", L"PUCPLOYBASIC", L"PUCPLOYSTANDARD",
					L"PUCPLOYPREMIUM"
			});
			this->comboBox1->Location = System::Drawing::Point(202, 270);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(188, 21);
			this->comboBox1->TabIndex = 30;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(95, 314);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 13);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Fecha Inicio:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(95, 346);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 13);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Fecha Fin:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(202, 314);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(195, 20);
			this->dateTimePicker1->TabIndex = 33;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->Location = System::Drawing::Point(202, 346);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(195, 20);
			this->dateTimePicker2->TabIndex = 34;
			// 
			// frmEditarCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(499, 506);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmEditarCliente";
			this->Text = L"frmEditarCliente";
			this->Load += gcnew System::EventHandler(this, &frmEditarCliente::frmEditarCliente_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmEditarCliente_Load(System::Object^ sender, System::EventArgs^ e) {
		ClienteController^ objClienteController = gcnew ClienteController();
		List<Cliente^>^ aun = objClienteController->BuscarCliente(this->dni);
		Cliente^ objCliente = aun[0];

		this->textBox1->Text = Convert::ToString(objCliente->codigo);
		this->textBox2->Text = objCliente->nombre;
		this->textBox3->Text = objCliente->ApellidoPaterno;
		this->textBox4->Text = objCliente->ApellidoMaterno;
		this->textBox5->Text = objCliente->dni;
		this->textBox6->Text = objCliente->direccion;
		String^ nivel = objCliente->objMembresia->nivel;
		this->comboBox1->Text = nivel;
		if (objCliente->objMembresia->FechaInicio == "00/00/0000" && objCliente->objMembresia->FechaFin == "00/00/0000") {

		}
		else {
			this->dateTimePicker1->Text = objCliente->objMembresia->FechaInicio;
			this->dateTimePicker2->Text = objCliente->objMembresia->FechaFin;
		}
		

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int codigo = Convert::ToInt32(this->textBox1->Text);
	if (this->textBox2->Text == "" || this->textBox3->Text == "" || this->textBox4->Text == "" || this->textBox5->Text == "" || this->textBox6->Text == "" || this->comboBox1->Text == "") {
		MessageBox::Show("datos incompletos");
	}
	else {
		
		String^ nombre = this->textBox2->Text;
		String^ apellp = this->textBox3->Text;
		String^ apellm = this->textBox4->Text;
		String^ dni = this->textBox5->Text;
		String^ direccion = this->textBox6->Text;
		String^ correo = "man@pucp";
		String^ nivel = this->comboBox1->Text;
		String^ fechaInicio = this->dateTimePicker1->Text;
		String^ fechaFin = this->dateTimePicker2->Text;
		MembresiaController^ Funcion = gcnew MembresiaController();
		List<Cliente^>^ aun = objClienteController->BuscarCliente(this->dni);
		Cliente^ objCliente = aun[0];
		Membresia^ objMembresia = gcnew Membresia(objCliente->objMembresia->codigo, nivel, fechaInicio, fechaFin);
		Funcion->editar(objMembresia);
		ClienteController^ funcion = gcnew ClienteController();
		Cliente^ nuevo = gcnew Cliente(codigo, nombre, apellp, apellm, dni, direccion, correo, objMembresia);
		funcion->editar(nuevo);

		MessageBox::Show("el cliente ha sido actualizado exitosamente");
		this->Close();
	}
	


	/*MembresiaController^ objMembresiaController = gcnew MembresiaController();
	Membresia^ objnuevoMembresia = gcnew Membresia(codigo,nivel,fechaInicio,fechaFin);
	
	objMembresiaController->eliminar(codigo);
	objMembresiaController->agregar(objnuevoMembresia);

	this->objMembresia = objMembresiaController->Buscarcodigo(codigo);

	ClienteController^ objClienteController = gcnew ClienteController();
	Cliente^ objNuevocliente = gcnew Cliente(codigo, nombre,apellp,apellm,dni,direccion,correo,this->objMembresia);

	this->objClienteController->Eliminar(dni);
	this->objClienteController->Agregar(objNuevocliente);*/
	
}
};
}
