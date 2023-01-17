#pragma once

namespace LpoopucployView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace LpoopucployController;
	using namespace LpoopucployModel;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Resumen de frmEstadistica
	/// </summary>
	public ref class frmEstadistica : public System::Windows::Forms::Form
	{
	public:
		frmEstadistica(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEstadistica(int codigo)
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
		~frmEstadistica()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: int codigo;
	protected:

	public: int cuenta;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Producto";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(415, 300);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(457, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre de Producto : ";
			this->label1->Click += gcnew System::EventHandler(this, &frmEstadistica::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(460, 61);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(136, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(460, 104);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEstadistica::button1_Click);
			// 
			// frmEstadistica
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(637, 338);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart1);
			this->Name = L"frmEstadistica";
			this->Text = L"frmEstadistica";
			this->Load += gcnew System::EventHandler(this, &frmEstadistica::frmEstadistica_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmEstadistica_Load(System::Object^ sender, System::EventArgs^ e) {
		BoletaController^ busqueda = gcnew BoletaController();
		List<Boleta^>^ objboleta = busqueda->buscarxpersonal(this->codigo);
		ProductoController^ funcion = gcnew ProductoController();
		List<Producto^>^ lista = gcnew List<Producto^>();
		for (int i = 0; i < objboleta->Count; i++) {
			List<Producto^>^ mostar = funcion->BuscarProductoVendido(objboleta[i]->codigo);
			for (int j = 0; j < mostar->Count; j++) {
				if (mostar[j]->nombre->Contains("lapiz")) {
					lista->Add(mostar[j]);
				}
			}
		}
		
			/*funcion->BuscarProductoxNombrev("lapiz", this->codigo); */

		chart1->Palette = ChartColorPalette::Chocolate;

		chart1->Titles->Add("Cantidad de producto Vendido");
		cuenta = lista->Count;
		for (int i = 0; i <lista->Count; i++) {
			chart1->Series->Add(lista[i]->nombre)->Points->Add(lista[i]->cantidad)->Label = lista[i]->marca;

		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text == "") {
		MessageBox::Show("Escribir nombre del producto");
	}
	else {
		for (int i = 0; i < cuenta; i++) {
			chart1->Series->RemoveAt(1);
		}
		BoletaController^ busqueda = gcnew BoletaController();
		List<Boleta^>^ objboleta = busqueda->buscarxpersonal(this->codigo);
		ProductoController^ funcion = gcnew ProductoController();
		List<Producto^>^ lista = gcnew List<Producto^>();
		int y = 1;
		for (int i = 0; i < objboleta->Count; i++) {
			List<Producto^>^ mostar = funcion->BuscarProductoVendido(objboleta[i]->codigo);
			for (int j = 0; j < mostar->Count; j++) {
				if (mostar[j]->nombre->Contains(this->textBox1->Text)) {
					for (int t = 0; t < lista->Count; t++) {
						if (lista[t]->nombre == mostar[j]->nombre) {
							lista[t]->cantidad= lista[t]->cantidad + mostar[j]->cantidad;
							y = 0;
						}
						else {
							y=1;
						}
					}
					if (y) {
						lista->Add(mostar[j]);
					}
				}
			}
		}
		chart1->Palette = ChartColorPalette::Chocolate;
		cuenta = lista->Count;
		for (int i = 0; i < lista->Count; i++) {
			chart1->Series->Add(lista[i]->nombre)->Points->Add(lista[i]->cantidad)->Label = Convert::ToString(lista[i]->cantidad);

		}
	}
	
}
};
}
