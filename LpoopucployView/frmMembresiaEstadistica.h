#pragma once

namespace LpoopucployView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace LpoopucployController;
	using namespace LpoopucployModel;

	/// <summary>
	/// Resumen de frmMembresiaEstadistica
	/// </summary>
	public ref class frmMembresiaEstadistica : public System::Windows::Forms::Form
	{
	public:
		frmMembresiaEstadistica(void)
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
		~frmMembresiaEstadistica()
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
			this->chart1->Location = System::Drawing::Point(12, 22);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Niveles";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(524, 300);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->UseWaitCursor = true;
			// 
			// frmMembresiaEstadistica
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(601, 355);
			this->Controls->Add(this->chart1);
			this->Name = L"frmMembresiaEstadistica";
			this->Text = L"frmMembresiaEstadistica";
			this->TopMost = true;
			this->UseWaitCursor = true;
			this->Load += gcnew System::EventHandler(this, &frmMembresiaEstadistica::frmMembresiaEstadistica_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmMembresiaEstadistica_Load(System::Object^ sender, System::EventArgs^ e) {
		MembresiaController^ funcion = gcnew MembresiaController();
		int primer = funcion->Cantidad("NINGUNA");
		int segundo = funcion->Cantidad("PUCPLOYBASIC");
		int tercero = funcion->Cantidad("PUCPLOYSTANDARD");
		int cuarto = funcion->Cantidad("PUCPLOYPREMIUM");	
		chart1->Palette = ChartColorPalette::BrightPastel;

		chart1->Titles->Add("Estadistica de membresias afiliadas de clientes");

		chart1->Series->Add("NINGUNA")->Points->Add(primer)->Label = "NINGUNA";
		chart1->Series->Add("PUCPLOYBASIC")->Points->Add(segundo)->Label = "BASIC";
		chart1->Series->Add("PUCPLOYSTANDARD")->Points->Add(tercero)->Label = "STANDARD";
		chart1->Series->Add("PUCPLOYPREMIUM")->Points->Add(cuarto)->Label = "PREMIUM";

	}
	};
}
