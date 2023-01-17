#include "CompraDeMercaderia.h"

using namespace LpoopucployModel;

CompraDeMercaderia::CompraDeMercaderia() {

}
CompraDeMercaderia::CompraDeMercaderia(int codigo, String^ productoNombre, int cantidad, double precioUnitario, String^ fecha, String^ estado) {
	this->codigo = codigo;
	this->productoNombre = productoNombre;
	this->cantidad = cantidad;
	this->precioUnitario = precioUnitario;
	this->fecha = fecha;
	this->estado = estado;
}