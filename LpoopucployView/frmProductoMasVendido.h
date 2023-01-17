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
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmProductoMasVendido
	/// </summary>
	public ref class frmProductoMasVendido : public System::Windows::Forms::Form
	{
	public:
		frmProductoMasVendido(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmProductoMasVendido()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(25, 5);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(446, 300);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// frmProductoMasVendido
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(554, 317);
			this->Controls->Add(this->chart1);
			this->Name = L"frmProductoMasVendido";
			this->Text = L"frmProductoMasVendido";
			this->Load += gcnew System::EventHandler(this, &frmProductoMasVendido::frmProductoMasVendido_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmProductoMasVendido_Load(System::Object^ sender, System::EventArgs^ e) {
		BoletaController^ busqueda = gcnew BoletaController();
		List<Boleta^>^ objboleta = busqueda->Buscarall();
		ProductoController^ funcion = gcnew ProductoController();
		List<Producto^>^ lista = gcnew List<Producto^>();
		int y = 1;
		for (int i = 0; i < objboleta->Count; i++) {
			List<Producto^>^ mostar = funcion->BuscarProductoVendido(objboleta[i]->codigo);
			for (int j = 0; j < mostar->Count; j++) {
					for (int t = 0; t < lista->Count; t++) {
						if (lista[t]->nombre == mostar[j]->nombre) {
							lista[t]->cantidad = lista[t]->cantidad + mostar[j]->cantidad;
							y = 0;
						}
						else {
							y = 1;
						}
					}
					if (y) {
						lista->Add(mostar[j]);
					}

			}
		}
		ProductoController^ ProductoMv = gcnew  ProductoController();
		int mayor1 = 0;
		int mayor2 = 0;
		int mayor3 = 0;
		int mayor4 = 0;
		int j = 0;
		String^ nombrePrimero;
		String^ nombresegundo;
		String^ nombretercero;
		String^ nombrecuarto;
		
		while (j < 4) {
			for (int i = 0; lista->Count > i; i++) {
				int cantidad = lista[i]->cantidad;


				if (j == 0) {
					if (cantidad>mayor1) {
						mayor1 = cantidad;
						nombrePrimero = lista[i]->nombre;
					}
				}
				else if (j == 1) {
					if (cantidad < mayor1 && cantidad>mayor2) {
						mayor2 = cantidad;
						nombresegundo = lista[i]->nombre;
					}
				}
				else if (j == 2) {
					if (cantidad < mayor1 && cantidad<mayor2 && cantidad>mayor3) {
						mayor3 = cantidad;
						nombretercero= lista[i]->nombre;
					}
				}
				else if (j == 3) {
					if (cantidad < mayor1 && cantidad<mayor2 && cantidad<mayor3 && cantidad>mayor4) {
						mayor4 = cantidad;
						nombrecuarto = lista[i]->nombre;
					}
				}
				
				
			}
			j++;
		}
		
		chart1->Palette = ChartColorPalette::Grayscale;

		chart1->Titles->Add("Productos mas vendidos");

		chart1->Series->Add(nombrePrimero)->Points->Add(mayor1)->Label = Convert::ToString(mayor1);
		if (mayor2 > 0) {
			chart1->Series->Add(nombresegundo)->Points->Add(mayor2)->Label = Convert::ToString(mayor2);
		}
		if (mayor3 > 0) {
			chart1->Series->Add(nombretercero)->Points->Add(mayor3)->Label = Convert::ToString(mayor3);
		}
		/*if (mayor4>0) {
			chart1->Series->Add(nombrecuarto)->Points->Add(mayor4)->Label = Convert::ToString(mayor4);
		}*/
		

	}
	};
}
