#pragma once
namespace LpoopucployController {

	using namespace System;
	using namespace LpoopucployModel;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	public ref class estadisticaGeneralController {
	private:
		SqlConnection^ objEstadisticaGeneral;
	public:
		estadisticaGeneralController();
		void AbrirConexion();
		void CerrarConexion();
	
		void actualizarGastosExtra(String^ MES, double NuevoGastosExtra);
		double obtenerGastosExtra(String^ MES);
	};
}
