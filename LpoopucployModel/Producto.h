#pragma once

using namespace System;

namespace LpoopucployModel {
	public ref class Producto {
	public:
		int codigo;
		String^ nombre;
		double PrecioDeVenta;
		String^ marca;
		int cantidad;
		double PrecioDeCompra;
	public:
		Producto();
		Producto(int codigo, String^ nombre ,double PrecioDeVenta, String^ marca, int cantidad, double PrecioDeCompra);

	};
}
