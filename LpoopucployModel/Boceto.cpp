#include "Boceto.h"

using namespace LpoopucployModel;

Boceto::Boceto() {

}
Boceto::Boceto(String^ cantidad, String^ nombre, String^ PrecioUnitario, String^ Importe) {
	this->cantidad = cantidad;
	this->nombre = nombre;
	this->PrecioUnitario = PrecioUnitario;
	this->Importe = Importe;
}