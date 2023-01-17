#include "ControlDeVentaController.h"

using namespace LpoopucployController;
using namespace LpoopucployModel;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

ControlDeVentaController::ControlDeVentaController() {

}
int ControlDeVentaController::GastoArticulo(String^ mes) {
	int gasto;
	array<String^>^ Lineas = File::ReadAllLines("ControlVenta.txt");
	String^ Separador = ";";
	int sumador;
	for each (String ^ LineaProducto in Lineas) {
		array<String^>^ Datos = LineaProducto->Split(Separador->ToCharArray());
		sumador = Convert::ToInt32(Datos[2]);
		String^ dias = Datos[7];
		if(dias == mes) {
			gasto = gasto + sumador;
		}
	}
	return gasto;
}