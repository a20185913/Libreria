#pragma once
#include "frmProducto.h"
#include "frmEditarUsuario.h"
#include "frmCliente.h"
#include "frmRealizarVenta.h"
#include "frmEstadistica.h"
namespace LpoopucployView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrincipalVendedor
	/// </summary>
	public ref class frmPrincipalVendedor : public System::Windows::Forms::Form
	{
	public:
		frmPrincipalVendedor(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmPrincipalVendedor(int codigo) {

			InitializeComponent();
			this->codigo = codigo;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPrincipalVendedor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;


	private: int codigo;
	private: System::Windows::Forms::Button^ button5;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(138, 76);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(289, 73);
			this->button1->TabIndex = 0;
			this->button1->Text = L"REALIZAR VENTA";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmPrincipalVendedor::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(138, 176);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(289, 73);
			this->button2->TabIndex = 1;
			this->button2->Text = L"CLIENTES";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmPrincipalVendedor::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Highlight;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(138, 279);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(289, 73);
			this->button3->TabIndex = 2;
			this->button3->Text = L"PRODUCTO";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &frmPrincipalVendedor::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Goldenrod;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(423, 27);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(135, 34);
			this->button4->TabIndex = 3;
			this->button4->Text = L"EDITAR USUARIO";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &frmPrincipalVendedor::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(138, 375);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(289, 73);
			this->button5->TabIndex = 4;
			this->button5->Text = L"ESTADISTICA";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &frmPrincipalVendedor::button5_Click);
			// 
			// frmPrincipalVendedor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(589, 508);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmPrincipalVendedor";
			this->Text = L"frmPrincipalVendedor";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &frmPrincipalVendedor::frmPrincipalVendedor_FormClosed);
			this->Load += gcnew System::EventHandler(this, &frmPrincipalVendedor::frmPrincipalVendedor_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmPrincipalVendedor_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmPrincipalVendedor_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		frmProducto^ VentanaProducto = gcnew frmProducto();
		VentanaProducto->ShowDialog();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		frmEditarUsuario^ VentanaEditaUsuario = gcnew frmEditarUsuario(this->codigo);
		VentanaEditaUsuario->ShowDialog();

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmCliente^ ventanacliente = gcnew frmCliente();
	ventanacliente->ShowDialog();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmRealizarVenta^ ventanafe = gcnew frmRealizarVenta(this->codigo);
	ventanafe->ShowDialog();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	frmEstadistica^ ventanae = gcnew frmEstadistica(this->codigo);
	ventanae->ShowDialog();
}
};
}
