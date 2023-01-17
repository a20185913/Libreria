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
	/// Resumen de frmNuevoCliente
	/// </summary>
	public ref class frmNuevoCliente : public System::Windows::Forms::Form
	{
	public:
		frmNuevoCliente(void)
		{
			InitializeComponent();
			this->objMembresia = gcnew Membresia();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmNuevoCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: Membresia^ objMembresia;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(56, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(56, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Apellido Paterno";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(56, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Apellido Materno";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(56, 205);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"DNI:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(56, 236);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Dirección:";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(163, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 20);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(163, 101);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(163, 132);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(188, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(163, 165);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(188, 20);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(163, 202);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(188, 20);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(163, 236);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(188, 20);
			this->textBox6->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(81, 297);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoCliente::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(262, 297);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoCliente::button2_Click);
			// 
			// frmNuevoCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(427, 377);
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
			this->Name = L"frmNuevoCliente";
			this->Text = L"frmNuevoCliente";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if ( this->textBox2->Text == "" || this->textBox3->Text == "" || this->textBox4->Text == "" || this->textBox5->Text == "" || this->textBox6->Text == "") {
			MessageBox::Show("Datos incompletos");
		}
		else {
			int codigo ;
			String^ nombre = this->textBox2->Text;
			String^ apellp = this->textBox3->Text;
			String^ apellm = this->textBox4->Text;
			String^ dni = this->textBox5->Text;
			String^ direccion = this->textBox6->Text;
			String^ correo = "man@pucp";

			String^ tipoMembresia = "NINGUNA";
			String^ fechaInicio = "00/00/0000";
			String^ fechafin = "00/00/0000";
			
			ClienteController^ valida = gcnew ClienteController();
			if (valida->ValidarDni(dni)) {
				MessageBox::Show("cliente ya registrado (dni)");
			}
			else {
				/*Membresia^ objNuevaMembresis = gcnew Membresia(codigo, tipoMembresia, fechaInicio, fechafin);
				MembresiaController^ objMembresiaController = gcnew MembresiaController();
				int codigoMembresia=objMembresiaController->agregar(objNuevaMembresis);

				objMembresiaController->leermembresia();
				this->objMembresia = objMembresiaController->Buscarcodigo(codigo);


				Cliente^ objcli = gcnew Cliente(codigo, nombre, apellp, apellm, dni, direccion, correo, this->objMembresia);

				valida->Agregar(objcli);
				*/
				Membresia^ objNuevaMembresia = gcnew Membresia(1, tipoMembresia, fechaInicio, fechafin);
				MembresiaController^ objmembresiacontroller = gcnew MembresiaController();
				int codigomembresia = objmembresiacontroller->agregar(objNuevaMembresia);
				Membresia^ objmembresia = gcnew Membresia(codigomembresia, tipoMembresia, fechaInicio, fechafin);
				ClienteController^ objnuevocliente = gcnew ClienteController();
				Cliente^ objCliente = gcnew Cliente(codigo, nombre, apellp, apellm, dni, direccion, correo, objmembresia);
				objnuevocliente->Agregar(objCliente);
				MessageBox::Show("Se agrego exitosamente");
				this->Close();
			
			}
		}
			
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
