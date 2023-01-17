#include "Boleta.h"

using namespace LpoopucployModel;

Boleta::Boleta() {}

Boleta::Boleta(int codigo, String^ FechaDeVenta, String^ HoraDeVenta, String^ moneda, String^ ModoDePago, String^ direccion,
	String^ telefono, String^ ruc, double VentalTotal,Cliente^ objCliente, Personal^ objPersonal,List<Producto^>^ listaProducto) {

		this->codigo = codigo;
		this->FechaDeVenta = FechaDeVenta;
		this->HoraDeVenta = HoraDeVenta;
		this->moneda = moneda;
		this->ModoDePago = ModoDePago;
		this->direccion = direccion;
		this->telefono = telefono;
		this->ruc = ruc;
		this->VentalTotal = VentalTotal;
		this->objCliente = objCliente;
		this->objPersonal = objPersonal;
		this->listaProducto = listaProducto;
}