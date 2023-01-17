#include "Producto.h"

using namespace LpoopucployModel;

Producto::Producto() {

}
Producto::Producto(int codigo, String^ nombre, double PrecioDeVenta, String^ marca, int cantidad, double PrecioDeCompra) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->PrecioDeVenta = PrecioDeVenta;
	this->marca = marca;
	this->cantidad = cantidad;
	this->PrecioDeCompra = PrecioDeCompra;
}