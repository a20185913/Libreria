#include "estadisticaGeneralController.h"

using namespace LpoopucployController;
using namespace System::IO;
using namespace System::Collections::Generic;

estadisticaGeneralController::estadisticaGeneralController() {
	this->objEstadisticaGeneral = gcnew SqlConnection();
}
void estadisticaGeneralController::CerrarConexion() {
	this->objEstadisticaGeneral->Close();
}
void estadisticaGeneralController::AbrirConexion() {
	this->objEstadisticaGeneral->ConnectionString = "Server=200.16.7.140;DataBase=a20185913;User Id=a20185913;Password=M1VyhrC9OTxX";
	this->objEstadisticaGeneral->Open();
}

void estadisticaGeneralController::actualizarGastosExtra(String^ MES,double nuevoGastosExtra) {
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objEstadisticaGeneral;
	objSentencia->CommandText = "UPDATE estadisticaGeneral SET gastosExtra=" + nuevoGastosExtra + " where MES='" + MES + "';";
	objSentencia->ExecuteNonQuery();
	CerrarConexion();
}
double estadisticaGeneralController::obtenerGastosExtra(String^ MES) {
	double gastosExtra;
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objEstadisticaGeneral;
	objSentencia->CommandText = "SELECT * FROM estadisticaGeneral where MES='" + MES + "';";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read())
	{	
		gastosExtra = safe_cast<double>(objData[1]);
	}
	CerrarConexion();
	return gastosExtra;
}