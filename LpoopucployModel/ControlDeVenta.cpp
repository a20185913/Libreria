#include "ControlDeVenta.h"

using namespace LpoopucployModel;

ControlDeVenta::ControlDeVenta() {

}

ControlDeVenta::ControlDeVenta(int codigo,
	double ingresos,
	double gastos,
	double inversion,
	int CantidadDeVentas,
	List<Boleta^>^ listaBoletas,
	List<Inventario^>^ listaInventario)
{
	this->codigo = codigo;
	this->ingresos = ingresos;
	this->gastos = gastos;
	this->inversion = inversion;
	this->CantidadDeVentas = CantidadDeVentas;
	this->listaBoletas = listaBoletas;
}