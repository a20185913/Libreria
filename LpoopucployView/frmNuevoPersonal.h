#pragma once

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
	/// Resumen de frmNuevoPersonal
	/// </summary>
	public ref class frmNuevoPersonal : public System::Windows::Forms::Form
	{
	public:
		frmNuevoPersonal(void)
		{
			InitializeComponent();
			this->objUsuario = gcnew Usuario();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmNuevoPersonal()
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
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: Usuario^ objUsuario;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox9;

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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(265, 499);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoPersonal::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(84, 499);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoPersonal::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(166, 220);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(188, 20);
			this->textBox6->TabIndex = 26;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(166, 186);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(188, 20);
			this->textBox5->TabIndex = 25;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(166, 149);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(188, 20);
			this->textBox4->TabIndex = 24;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(166, 116);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(188, 20);
			this->textBox3->TabIndex = 23;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(166, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 20);
			this->textBox2->TabIndex = 22;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(166, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 20);
			this->textBox1->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(59, 220);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Dirección:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(59, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"DNI:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(59, 152);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Apellido Materno";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Apellido Paterno";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Nombre:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Código";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(59, 341);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 13);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Creación Usuario:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(62, 380);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 13);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Correo:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(62, 407);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 13);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Password:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(166, 377);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(188, 20);
			this->textBox7->TabIndex = 33;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(166, 404);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(188, 20);
			this->textBox8->TabIndex = 34;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(62, 433);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 13);
			this->label10->TabIndex = 35;
			this->label10->Text = L"Rango:";
			this->label10->Click += gcnew System::EventHandler(this, &frmNuevoPersonal::label10_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"GERENTE", L"VENDEDOR" });
			this->comboBox1->Location = System::Drawing::Point(166, 433);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(188, 21);
			this->comboBox1->TabIndex = 36;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(59, 294);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 13);
			this->label12->TabIndex = 65;
			this->label12->Text = L"Edad:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(166, 291);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(188, 20);
			this->textBox10->TabIndex = 64;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(59, 259);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 13);
			this->label11->TabIndex = 63;
			this->label11->Text = L"Nro Telefono:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(166, 256);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(188, 20);
			this->textBox9->TabIndex = 62;
			// 
			// frmNuevoPersonal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(441, 591);
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
			this->Name = L"frmNuevoPersonal";
			this->Text = L"frmNuevoPersonal";
			this->Load += gcnew System::EventHandler(this, &frmNuevoPersonal::frmNuevoPersonal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int espaciosBlancos = 0, validacionArroba = 0;
	int rangoPersonalInt = 2;
	//codigoExiste;
	int codigoPersonal;
	String^ nombrePersonal = this->textBox2->Text;
	String^ apellidoPaternoPersonal = this->textBox3->Text;
	String^ apellidoMaternoPersonal = this->textBox4->Text;
	String^ dniPersonal = this->textBox5->Text;
	String^ direccioPersonal = this->textBox6->Text;
	String^ numeroTelefonoPersonal = this->textBox9->Text;
	String^ edadPersonal = this->textBox10->Text;

	String^ correoPersonal = this->textBox7->Text;
	String^ passwordPersonal = this->textBox8->Text;
	String^ rangoPersonal = this->comboBox1->Text;


	if (nombrePersonal == "" || apellidoPaternoPersonal == "" ||
		apellidoMaternoPersonal == "" || dniPersonal == "" || direccioPersonal == "" ||
		correoPersonal == "" || passwordPersonal == "" || rangoPersonal == "") {
		MessageBox::Show("ERROR, Debe completar todos los datos");
	}
	else {
		codigoPersonal = 0;
		espaciosBlancos = 1;
	}

	if (rangoPersonal == "GERENTE") {
		rangoPersonalInt = 1;
	}

	if (correoPersonal->Contains("@")) {
		validacionArroba = 1;
	}
	else {
		MessageBox::Show("ERROR, Correo inválido");
	}

	PersonalController^ objPersonalController = gcnew PersonalController();
	//codigoExiste = objPersonalController->validarCodigoPersonalExistente(codigoPersonal);

	//if (codigoExiste) {
		//MessageBox::Show("ERROR, el código ingresado ya existe");
	//}


	if (validacionArroba && espaciosBlancos /* && !(codigoExiste)*/) {

		//UsuarioController^ objUsuarioController = gcnew UsuarioController();
		
		Usuario^ objNuevoUsuario = gcnew Usuario(codigoPersonal, correoPersonal, passwordPersonal, rangoPersonalInt);
		
		/*objUsuarioController->agregarNuevoUsuario(objNuevoUsuario);

		objUsuarioController->LeerUsuarioDesdeArchivo();

		this->objUsuario = objUsuarioController->ObtenerUsuarioxCodigo(codigoPersonal);*/

		Personal^ objNuevoPersonal = gcnew Personal(codigoPersonal, nombrePersonal, apellidoPaternoPersonal, apellidoMaternoPersonal,
			dniPersonal, direccioPersonal, numeroTelefonoPersonal, edadPersonal, objNuevoUsuario);

		objPersonalController->agregarNuevoPersonal(objNuevoPersonal);

		MessageBox::Show("El nuevo personal ha sido agregado con éxito");
		
		this->Close();
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void frmNuevoPersonal_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
