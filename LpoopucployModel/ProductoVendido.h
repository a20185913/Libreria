#pragma once

namespace LpoopucployModel {
	using namespace System;

	public ref class ProductoVendido {
	public:
		int codigoBoleta;
		String^ FechaDeBoleta;
		String^ nombre;
		String^ cantidad;
		double PrecioUnitario;
	
	public:
		ProductoVendido();
		ProductoVendido(int codigoBoleta,
		String^ FechaDeBoleta,
		String^ nombre,
		String^ cantidad,
		double PrecioUnitario);
	};
}