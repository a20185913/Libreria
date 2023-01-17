#include "ProductoVendido.h"

using namespace LpoopucployModel;

ProductoVendido::ProductoVendido() {

}
ProductoVendido::ProductoVendido(int codigoBoleta,
	String^ FechaDeBoleta,
	String^ nombre,
	String^ cantidad,
	double PrecioUnitario) {
	
	
	this->codigoBoleta = codigoBoleta;
	this->FechaDeBoleta = FechaDeBoleta;
	this->nombre = nombre;
	this->cantidad = cantidad;
	this->PrecioUnitario = PrecioUnitario;
}