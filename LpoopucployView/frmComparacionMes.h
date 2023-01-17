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

	/// <summary>
	/// Resumen de frmComparacionMes
	/// </summary>
	public ref class frmComparacionMes : public System::Windows::Forms::Form
	{
	public:
		frmComparacionMes(void)
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
		~frmComparacionMes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button1;
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
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
			series1->Name = L"Meses";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(460, 300);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &frmComparacionMes::chart1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"ENERO", L"FEBRERO", L"MARZO", L"ABRIL", L"MAYO",
					L"JUNIO", L"JULIO", L"AGOSTO", L"SETIEMBRE", L"OCTUBRE", L"NOVIEMBRE", L"DICIEMBRE"
			});
			this->comboBox1->Location = System::Drawing::Point(516, 48);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(147, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"ENERO", L"FEBRERO", L"MARZO", L"ABRIL", L"MAYO",
					L"JUNIO", L"JULIO", L"AGOSTO", L"SETIEMBRE", L"OCTUBRE", L"NOVIEMBRE", L"DICIEMBRE"
			});
			this->comboBox2->Location = System::Drawing::Point(513, 110);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(150, 21);
			this->comboBox2->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(526, 161);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 26);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmComparacionMes::button1_Click);
			// 
			// frmComparacionMes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(695, 339);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->chart1);
			this->Name = L"frmComparacionMes";
			this->Text = L"frmComparacionMes";
			this->Load += gcnew System::EventHandler(this, &frmComparacionMes::frmComparacionMes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmComparacionMes_Load(System::Object^ sender, System::EventArgs^ e) {
		chart1->Titles->Add("Grafica de comparacion de gananacias de dos meses");
		/*BoletaController^ funcion = gcnew BoletaController();
		int ganancia1 = funcion->Ingreso("ENERO");
		int ganancia2 = funcion->Ingreso("FEBRERO");

		chart1->Palette = ChartColorPalette::Grayscale;

		chart1->Titles->Add("Comparacion de meses");

		chart1->Series->Add("ENERO")->Points->Add(ganancia1)->Label = Convert::ToString(ganancia1);
		chart1->Series->Add("FEBRERO")->Points->Add(ganancia2)->Label = Convert::ToString(ganancia2);*/
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox1->Text == "" || this->comboBox2->Text == "") {
		MessageBox::Show("Ingresar meses");
	}
	else {
		if (this->comboBox2->Text == this->comboBox1->Text) {
			MessageBox::Show("No se pueden compara meses iguales");
		}
		else {
			this->chart1->Series["Meses"]->Points->Clear();
			String^ mes1 = this->comboBox1->Text;
			String^ mes2 = this->comboBox2->Text;
			
			String^ formatoMes1 = formatoBuscarMes(mes1);
			String^ formatoMes2 = formatoBuscarMes(mes2);

			ProductoVendidoController^ objProductoVendidoController = gcnew ProductoVendidoController();

			double montoMes1 = objProductoVendidoController->generarReporteComparacionMes(formatoMes1);
			double montoMes2 = objProductoVendidoController->generarReporteComparacionMes(formatoMes2);

			this->chart1->Series["Meses"]->Points->Add(montoMes1);
			this->chart1->Series["Meses"]->Points->Add(montoMes2);

			this->chart1->Series["Meses"]->Points[0]->AxisLabel = mes1;
			this->chart1->Series["Meses"]->Points[0]->LegendText = mes1;
			this->chart1->Series["Meses"]->Points[0]->Label = Convert::ToString(montoMes1);

			this->chart1->Series["Meses"]->Points[1]->AxisLabel = mes2;
			this->chart1->Series["Meses"]->Points[1]->LegendText = mes2;
			this->chart1->Series["Meses"]->Points[1]->Label = Convert::ToString(montoMes2);

			/*chart1->Series->RemoveAt(1);
			chart1->Series->RemoveAt(1);
			BoletaController^ funcion = gcnew BoletaController();
			int ganancia1 = funcion->Ingreso(mes1);
			int ganancia2 = funcion->Ingreso(mes2);

			chart1->Palette = ChartColorPalette::Grayscale;

			chart1->Series->Add(mes1)->Points->Add(ganancia1)->Label = Convert::ToString(ganancia1);
			chart1->Series->Add(mes2)->Points->Add(ganancia2)->Label = Convert::ToString(ganancia2);*/


		}
	}
}
	   public: String^ formatoBuscarMes(String^ MES) {
		   String^ formatoCorrectoMes;
		   if (MES == "ENERO") {
			   formatoCorrectoMes = "01/2022";
		   }
		   else if (MES == "FEBRERO") {
			   formatoCorrectoMes = "02/2022";
		   }
		   else if (MES == "MARZO") {
			   formatoCorrectoMes = "03/2022";
		   }
		   else if (MES == "ABRIL") {
			   formatoCorrectoMes = "04/2022";
		   }
		   else if (MES == "MAYO") {
			   formatoCorrectoMes = "05/2022";
		   }
		   else if (MES == "JUNIO") {
			   formatoCorrectoMes = "06/2022";
		   }
		   else if (MES == "JULIO") {
			   formatoCorrectoMes = "07/2022";
		   }
		   else if (MES == "AGOSTO") {
			   formatoCorrectoMes = "08/2022";
		   }
		   else if (MES == "SETIEMBRE") {
			   formatoCorrectoMes = "09/2022";
		   }
		   else if (MES == "OCTUBRE") {
			   formatoCorrectoMes = "10/2022";
		   }
		   else if (MES == "NOVIEMBRE") {
			   formatoCorrectoMes = "11/2022";
		   }
		   else if (MES == "DICIEMBRE") {
			   formatoCorrectoMes = "12/2022";
		   }
		   return formatoCorrectoMes;
	   }
};
}
