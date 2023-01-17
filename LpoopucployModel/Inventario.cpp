#include "Inventario.h"

using namespace LpoopucployModel;

Inventario::Inventario() {

}
Inventario::Inventario(int codigo, String^ fecha, String^ hora, List<Producto^>^ listaProducto, List<CompraDeMercaderia^>^ listaCompraDeMercaderia) {
	this->codigo = codigo;
	this->fecha = fecha;
	this->hora = hora;
	this->listaProducto = listaProducto;
	this->listaCompraDeMercaderia = listaCompraDeMercaderia;
}