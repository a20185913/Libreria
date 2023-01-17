#include "ProductoVendidoController.h"

using namespace LpoopucployController;
using namespace LpoopucployModel;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

ProductoVendidoController::ProductoVendidoController() {
	this->objconexion = gcnew SqlConnection();
}
void ProductoVendidoController::AbrirConexion() {
	this->objconexion->ConnectionString = "Server=200.16.7.140;DataBase=a20185913;User Id=a20185913;Password=M1VyhrC9OTxX";
	this->objconexion->Open();
}
void ProductoVendidoController::Cerrarconexion() {
	this->objconexion->Close();
}

List<reporteGananciaxDia^>^ ProductoVendidoController::generarReportexMes(String^ mes) {
	//List<ProductoVendido^>^ listaReporte = gcnew List<ProductoVendido^>();
	List<reporteGananciaxDia^>^ listaReporte = gcnew List<reporteGananciaxDia^>();
	int i = 0;
	double ventaTotalxDia = 0;
	AbrirConexion();
	
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objconexion;

	objSentencia->CommandText = "select * from ProductoVendido where FechaDeBoleta='" + mes +"';";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
			int cantidad = safe_cast<int>(objData[3]);
			double precio = safe_cast<double>(objData[4]);

			ventaTotalxDia = cantidad * precio + ventaTotalxDia;
	}
	reporteGananciaxDia^ objReporteGanancia = gcnew reporteGananciaxDia(1, ventaTotalxDia);
	listaReporte->Add(objReporteGanancia);
	i++;
	
	Cerrarconexion();
	return listaReporte;
}

double ProductoVendidoController::generarReporteComparacionMes(String^ mes) {
	double montoTotal = 0;
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objconexion;
	objSentencia->CommandText = "select * from ProductoVendido Where FechaDeBoleta like '%" + mes + "%';";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read())
	{
		int cantidad = safe_cast<int>(objData[3]);
		double precio = safe_cast<double>(objData[4]);

		montoTotal = cantidad * precio + montoTotal;
	}
	Cerrarconexion();
	return montoTotal;
}
void ProductoVendidoController::RegistraGasto(String^ mes, double gasto) {
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objconexion;
	objSentencia->CommandText = "insert into GastoProducto values('"+mes+"',"+gasto+");";
	objSentencia->ExecuteNonQuery();
	Cerrarconexion();
}
double ProductoVendidoController::GastoxMes(String^ mes) {
	double suma;
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objconexion;
	objSentencia->CommandText = "select * from GastoProducto where mes='"+mes+"';";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		double costo = safe_cast<double>(objData[1]);
		suma = suma + costo;
	}
	Cerrarconexion();
	return suma;
}