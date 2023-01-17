#pragma once
namespace LpoopucployController {
	using namespace System;
	using namespace LpoopucployModel;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	public ref class ProductoVendidoController {
	private:
		SqlConnection^ objconexion;
	public:
		ProductoVendidoController();
		void AbrirConexion();
		void Cerrarconexion();

		List<reporteGananciaxDia^>^ generarReportexMes(String^ mes);
		double generarReporteComparacionMes(String^ mes);
		void RegistraGasto(String^ mes, double gasto);
		double GastoxMes(String^ mes);
	};
}