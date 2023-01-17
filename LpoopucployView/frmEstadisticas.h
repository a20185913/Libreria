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
	/// Resumen de frmEstadisticas
	/// </summary>
	public ref class frmEstadisticas : public System::Windows::Forms::Form
	{
	public:
		frmEstadisticas(void)
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
		~frmEstadisticas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	public: int cuenta;
	public: int marca;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmEstadisticas::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(179, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"GASTOS PERSONAL:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(179, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"GASTOS EXTRAS:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(179, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"GANANCIA:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(179, 99);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"INGRESO BRUTO:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(179, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"GASTOS EN ARTICULOS";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(179, 72);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"MES:";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::Info;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"ENERO", L"FEBRERO", L"MARZO", L"ABRIL", L"MAYO",
					L"JUNIO", L"JULIO", L"AGOSTO", L"SETIEMBRE", L"OCTUBRE", L"NOVIEMBRE", L"DICIEMBRE"
			});
			this->comboBox1->Location = System::Drawing::Point(347, 69);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Info;
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(347, 122);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Info;
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(347, 148);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Info;
			this->textBox4->Location = System::Drawing::Point(347, 174);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 20);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Info;
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(347, 96);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(121, 20);
			this->textBox5->TabIndex = 13;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Info;
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(347, 200);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 14;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(29, 250);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(992, 364);
			this->chart1->TabIndex = 15;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(521, 177);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEstadisticas::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(521, 72);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEstadisticas::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(726, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(201, 182);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// frmEstadisticas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1104, 649);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Name = L"frmEstadisticas";
			this->Text = L"frmEstadisticas";
			this->Load += gcnew System::EventHandler(this, &frmEstadisticas::frmEstadisticas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmEstadisticas_Load(System::Object^ sender, System::EventArgs^ e) {
		marca = 4;
		/*if (this->comboBox1->Text == "") {
			String^ mes = "ENERO";
			BoletaController^ funcion = gcnew BoletaController();
			int ingreso = funcion->Ingreso(mes);
			ControlDeVentaController^ gasto = gcnew ControlDeVentaController();
			int GastoA = gasto->GastoArticulo(mes);
			UsuarioController^ personal = gcnew UsuarioController();
			int GastoP = personal->GastoPersonal();
			String^ IngresoBruto = Convert::ToString(ingreso);
			String^ GastosArticulo = Convert::ToString(GastoA);
			String^ GastoPersonal = Convert::ToString(GastoP);
			String^ GastoExtra = "";
			int ganancia = ingreso - GastoA - GastoP;
			String^ Ganacia = Convert::ToString(ganancia);
			this->textBox5->Text = IngresoBruto;
			this->textBox2->Text = GastosArticulo;
			this->textBox3->Text = GastoPersonal;
			this->textBox4->Text = GastoExtra;
			this->textBox1->Text = Ganacia;

			chart1->Palette = ChartColorPalette::Chocolate;

			chart1->Titles->Add("Gestion de Gastos");

			chart1->Series->Add("Ingreso Bruto")->Points->Add(ingreso)->Label = IngresoBruto;
			chart1->Series->Add("Gasto Articulo")->Points->Add(GastoA)->Label = GastosArticulo;
			chart1->Series->Add("Gasto Personal")->Points->Add(GastoP)->Label = GastoPersonal;
			chart1->Series->Add("Ganancia")->Points->Add(ganancia)->Label = Ganacia;
		}
		else {
			BoletaController^ funcion = gcnew BoletaController();
			int ingreso = funcion->Ingreso(this->comboBox1->Text);
			ControlDeVentaController^ gasto = gcnew ControlDeVentaController();
			int GastoA = gasto->GastoArticulo(this->comboBox1->Text);
			UsuarioController^ personal = gcnew UsuarioController();
			int GastoP = personal->GastoPersonal();
			String^ IngresoBruto = Convert::ToString(ingreso);
			String^ GastosArticulo = Convert::ToString(GastoA);
			String^ GastoPersonal = Convert::ToString(GastoP);
			String^ GastoExtra = "";
			int ganancia = ingreso - GastoA - GastoP;
			String^ Ganacia = Convert::ToString(ganancia);
			this->textBox5->Text = IngresoBruto;
			this->textBox2->Text = GastosArticulo;
			this->textBox3->Text = GastoPersonal;
			this->textBox4->Text = GastoExtra;
			this->textBox1->Text = Ganacia;

			chart1->Palette = ChartColorPalette::Chocolate;

			chart1->Titles->Add("Gestion de Gastos");

			chart1->Series->Add("Ingreso Bruto")->Points->Add(ingreso)->Label = IngresoBruto;
			chart1->Series->Add("Gasto Articulo")->Points->Add(GastoA)->Label = GastosArticulo;
			chart1->Series->Add("Gasto Personal")->Points->Add(GastoP)->Label = GastoPersonal;
			chart1->Series->Add("Ganancia")->Points->Add(ganancia)->Label = Ganacia;

		}
		chart2->Titles->Add("Gestion de Gastos");
		
		*/
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox1->Text == "") {
		MessageBox::Show("Ingrese un mes");
	}else{
		double nuevoGastoExtra = Convert::ToDouble(this->textBox4->Text);
		estadisticaGeneralController^ objestadisticaGeneralController = gcnew estadisticaGeneralController();
		objestadisticaGeneralController->actualizarGastosExtra(this->comboBox1->Text, nuevoGastoExtra);
		double gastosExtra = objestadisticaGeneralController->obtenerGastosExtra(this->comboBox1->Text);
		this->textBox4->Text = Convert::ToString(gastosExtra);
	}

		
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int ingresoBruto = 0;
	if (this->comboBox1->Text == "") {
		MessageBox::Show("Ingrese un mes");
	}
	else {
		this->chart1->Series["Series1"]->Points->Clear();
		int i = 0;
		List<reporteGananciaxDia^>^ listaReporte;
		String^ formatoCorrectoMes = formatoBuscarMes(this->comboBox1->Text);
		ProductoVendidoController^ objProductoVendidoController = gcnew ProductoVendidoController();
		CompraDeMercaderiaController^ objCompraDeMercaderiaController = gcnew CompraDeMercaderiaController();
		PersonalController^ objPersonalController = gcnew PersonalController();
		estadisticaGeneralController^ objestadisticaGeneralController = gcnew estadisticaGeneralController();

		double gastosPersonal = objPersonalController->reporteGatosPersonal();
		double gastosArticulos = objCompraDeMercaderiaController->reporteGatosArticulos(formatoCorrectoMes);
		double gastosExtra = objestadisticaGeneralController->obtenerGastosExtra(this->comboBox1->Text);
		this->textBox3->Text = Convert::ToString(gastosPersonal);
		this->textBox2->Text = Convert::ToString(gastosArticulos);
		this->textBox4->Text = Convert::ToString(gastosExtra);
		while (i <= 30) {
			String^ diaNum = Convert::ToString(i+1);
			if (i <= 8) {
				String^ mes = "0" + diaNum + "/" + formatoCorrectoMes;
				listaReporte = objProductoVendidoController->generarReportexMes(mes);
				this->chart1->Series["Series1"]->Points->Add(listaReporte[0]->totalGenerado);
				this->chart1->Series["Series1"]->Points[i]->AxisLabel = diaNum;
				this->chart1->Series["Series1"]->Points[i]->LegendText = diaNum;
				this->chart1->Series["Series1"]->Points[i]->Label = Convert::ToString(listaReporte[0]->totalGenerado);
			}
			else {
				String^ mes = diaNum + "/" + formatoCorrectoMes;
				listaReporte = objProductoVendidoController->generarReportexMes(mes);
				this->chart1->Series["Series1"]->Points->Add(listaReporte[0]->totalGenerado);
				this->chart1->Series["Series1"]->Points[i]->AxisLabel = diaNum;
				this->chart1->Series["Series1"]->Points[i]->LegendText = diaNum;
				this->chart1->Series["Series1"]->Points[i]->Label = Convert::ToString(listaReporte[0]->totalGenerado);
			}
			ingresoBruto = ingresoBruto + listaReporte[0]->totalGenerado;
			i++;
		}
		
		this->textBox5->Text = Convert::ToString(ingresoBruto);
		this->textBox1->Text = Convert::ToString(ingresoBruto - gastosArticulos - gastosExtra - gastosPersonal);
	
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
