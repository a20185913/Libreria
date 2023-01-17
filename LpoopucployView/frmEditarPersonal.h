#pragma once

namespace LpoopucployView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace LpoopucployModel;
	using namespace LpoopucployController;
	/// <summary>
	/// Resumen de frmEditarPersonal
	/// </summary>
	public ref class frmEditarPersonal : public System::Windows::Forms::Form
	{
	public:
		frmEditarPersonal(void)
		{
			InitializeComponent();
			this->objUsuario = gcnew Usuario();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmEditarPersonal(PersonalController^ objPersonalControllerint, int codigoPersonalEditar)
		{
			InitializeComponent();
			this->objPersonalController = objPersonalController;
			this->codigoPersonalEditar = codigoPersonalEditar;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarPersonal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button2;
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
	private: int codigoPersonalEditar;
	private: PersonalController^ objPersonalController;
	private: Usuario^ objUsuario;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label12;
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
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
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"GERENTE", L"VENDEDOR" });
			this->comboBox1->Location = System::Drawing::Point(172, 429);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(188, 21);
			this->comboBox1->TabIndex = 57;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(68, 429);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 13);
			this->label10->TabIndex = 56;
			this->label10->Text = L"Rango:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(172, 400);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(188, 20);
			this->textBox8->TabIndex = 55;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(172, 373);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(188, 20);
			this->textBox7->TabIndex = 54;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(68, 403);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 13);
			this->label9->TabIndex = 53;
			this->label9->Text = L"Password:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(68, 376);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 13);
			this->label7->TabIndex = 52;
			this->label7->Text = L"Correo:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(65, 345);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 13);
			this->label8->TabIndex = 51;
			this->label8->Text = L"Usuario:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(271, 495);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 50;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarPersonal::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(90, 495);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 49;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarPersonal::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(172, 222);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(188, 20);
			this->textBox6->TabIndex = 48;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(172, 188);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(188, 20);
			this->textBox5->TabIndex = 47;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(172, 151);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(188, 20);
			this->textBox4->TabIndex = 46;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(172, 118);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(188, 20);
			this->textBox3->TabIndex = 45;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(172, 87);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 20);
			this->textBox2->TabIndex = 44;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(172, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 20);
			this->textBox1->TabIndex = 43;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(65, 222);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 42;
			this->label6->Text = L"Dirección:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(65, 191);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 41;
			this->label5->Text = L"DNI:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(65, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 13);
			this->label4->TabIndex = 40;
			this->label4->Text = L"Apellido Materno";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(65, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 13);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Apellido Paterno";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(65, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Nombre:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Código";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(172, 252);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(188, 20);
			this->textBox9->TabIndex = 58;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(65, 255);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 13);
			this->label11->TabIndex = 59;
			this->label11->Text = L"Nro Telefono:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(172, 287);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(188, 20);
			this->textBox10->TabIndex = 60;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(65, 290);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 13);
			this->label12->TabIndex = 61;
			this->label12->Text = L"Edad:";
			// 
			// frmEditarPersonal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(447, 584);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
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
			this->Name = L"frmEditarPersonal";
			this->Text = L"frmEditarPersonal";
			this->Load += gcnew System::EventHandler(this, &frmEditarPersonal::frmEditarPersonal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int rangoPersonalInt = 2;
		int codigoPersonal = Convert::ToInt32(this->textBox1->Text);
		String^ nombrePersonal = this->textBox2->Text;
		String^ apellidoPaternoPersonal = this->textBox3->Text;
		String^ apellidoMaternoPersonal = this->textBox4->Text;
		String^ dniPersonal = this->textBox5->Text;
		String^ direccionPersonal = this->textBox6->Text;
		String^ numeroTelefonoPersonal = this->textBox9->Text;
		String^ edadPersonal = this->textBox10->Text;

		String^ correoPersonal = this->textBox7->Text;
		String^ passwordPersonal = this->textBox8->Text;
		String^ rangoPersonal = this->comboBox1->Text;

		if (rangoPersonal == "GERENTE") {
			rangoPersonalInt = 1;
		}

		PersonalController^ objPersonalController = gcnew PersonalController();
		Personal^ objPersonal = objPersonalController->buscarPersonalxCodigo(codigoPersonal);

		//UsuarioController^ objUsuarioController = gcnew UsuarioController();
		Usuario^ objNuevoUsuario = gcnew Usuario(objPersonal->objUsuario->codigo, correoPersonal, passwordPersonal, rangoPersonalInt);
		//objUsuarioController->EliminarUsuario(codigoPersonal);
		//objUsuarioController->agregarNuevoUsuario(objNuevoUsuario);

		//this->objUsuario = objUsuarioController->ObtenerUsuarioxCodigo(codigoPersonal);
		Personal^ objNuevoPersonal = gcnew Personal(codigoPersonal, nombrePersonal, apellidoPaternoPersonal,
			apellidoMaternoPersonal, dniPersonal, direccionPersonal, numeroTelefonoPersonal, edadPersonal, objNuevoUsuario);

		//this->objPersonalController->eliminarPersonal(codigoPersonal);
		//this->objPersonalController->agregarNuevoPersonal(objNuevoPersonal);

		objPersonalController->editarPersonal(objNuevoPersonal);
		MessageBox::Show("El personal ha sido actualizado exitosamente");
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void frmEditarPersonal_Load(System::Object^ sender, System::EventArgs^ e) {
	PersonalController^ objPersonalController = gcnew PersonalController();
	Personal^ objPersonal = objPersonalController->buscarPersonalxCodigo(this->codigoPersonalEditar);

	this->textBox1->Text = Convert::ToString(objPersonal->codigo);
	this->textBox2->Text = objPersonal->nombre;
	this->textBox3->Text = objPersonal->ApellidoPaterno;
	this->textBox4->Text = objPersonal->ApellidoMaterno;
	this->textBox5->Text = objPersonal->dni;
	this->textBox6->Text = objPersonal->direccion;
	this->textBox7->Text = objPersonal->objUsuario->correo;
	this->textBox8->Text = objPersonal->objUsuario->password;
	this->textBox9->Text = objPersonal->NumeroDeTelefono;
	this->textBox10->Text = objPersonal->edad;

	if (objPersonal->objUsuario->rango == 1) {
		this->comboBox1->Text = "GERENTE";
	}
	else if (objPersonal->objUsuario->rango == 2)
	{
		this->comboBox1->Text = "VENDEDOR";
	}
}
};
}
