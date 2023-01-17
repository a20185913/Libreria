#pragma once
#include "frmProductoG.h"
#include "frmEstadisticas.h"
#include "frmMercaderia.h"
#include "frmMembresiaEstadistica.h"
#include "frmComparacionMes.h"
#include "frmProductoMasVendido.h"
#include "frmPersonal.h"
#include "frmCliente.h"
#include "frmRealizarVenta.h"
#include "frmVentasRealizadas.h"
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
	/// Resumen de frmPrincipalGerente
	/// </summary>
	public ref class frmPrincipalGerente : public System::Windows::Forms::Form
	{
	public:
		frmPrincipalGerente(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmPrincipalGerente(int codigo)
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
		~frmPrincipalGerente()
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
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: int codigo;

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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(75, 47);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(473, 63);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ESTADISTICAS";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmPrincipalGerente::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(75, 138);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 58);
			this->button2->TabIndex = 1;
			this->button2->Text = L"REALIZAR VENTA";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmPrincipalGerente::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::YellowGreen;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(245, 138);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(138, 58);
			this->button3->TabIndex = 2;
			this->button3->Text = L"VENTAS REALIZADAS";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &frmPrincipalGerente::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(75, 210);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(138, 58);
			this->button4->TabIndex = 3;
			this->button4->Text = L"CLIENTES";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &frmPrincipalGerente::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Highlight;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(245, 211);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(138, 58);
			this->button5->TabIndex = 4;
			this->button5->Text = L"PRODUCTOS";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &frmPrincipalGerente::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::RoyalBlue;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(75, 285);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(138, 59);
			this->button6->TabIndex = 5;
			this->button6->Text = L"PERSONAL";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &frmPrincipalGerente::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Cyan;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(245, 286);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(138, 59);
			this->button7->TabIndex = 6;
			this->button7->Text = L"MERCADERÍA";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &frmPrincipalGerente::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Gold;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(410, 138);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(138, 58);
			this->button8->TabIndex = 7;
			this->button8->Text = L"MEMBRESÍA";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &frmPrincipalGerente::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Turquoise;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button9->Location = System::Drawing::Point(410, 211);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(138, 59);
			this->button9->TabIndex = 8;
			this->button9->Text = L"COMPARACIÓN POR MES";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &frmPrincipalGerente::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::MediumPurple;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(410, 286);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(138, 59);
			this->button10->TabIndex = 9;
			this->button10->Text = L"PRODUCTO MÁS VENDIDOS";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &frmPrincipalGerente::button10_Click);
			// 
			// frmPrincipalGerente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 385);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmPrincipalGerente";
			this->Text = L"frmPrincipalGerente";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &frmPrincipalGerente::frmPrincipalGerente_FormClosed);
			this->Load += gcnew System::EventHandler(this, &frmPrincipalGerente::frmPrincipalGerente_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmEstadisticas^ ventana = gcnew frmEstadisticas();
		ventana->ShowDialog();

	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	frmCliente^ ventana = gcnew frmCliente();
	ventana->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	frmVentasRealizadas^ ventana = gcnew frmVentasRealizadas();
	ventana->ShowDialog();
}
private: System::Void frmPrincipalGerente_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void frmPrincipalGerente_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	frmProductoG^ ventanaProducto = gcnew frmProductoG();
	ventanaProducto->ShowDialog();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMercaderia^ ventana = gcnew frmMercaderia();
	ventana->ShowDialog();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMembresiaEstadistica^ ventana = gcnew frmMembresiaEstadistica();
	ventana->ShowDialog();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	frmComparacionMes^ vetana = gcnew frmComparacionMes();
	vetana->ShowDialog();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	frmProductoMasVendido^ ventana = gcnew frmProductoMasVendido();
	ventana->ShowDialog();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	frmPersonal^ ventana = gcnew frmPersonal();
	ventana->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	frmRealizarVenta^ ventana = gcnew frmRealizarVenta(this->codigo);
	ventana->ShowDialog();
}
};
}
