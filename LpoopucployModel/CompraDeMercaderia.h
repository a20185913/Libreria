#pragma once

using namespace System;

namespace LpoopucployModel {
	public ref class CompraDeMercaderia {
	public:
		int codigo;
		String^ productoNombre;
		int cantidad;
		double precioUnitario;
		String^ fecha;
		String^ estado;
	public:
		CompraDeMercaderia();
		CompraDeMercaderia(int codigo, String^ productoNombre, int cantidad, double precioUnitario,String^ fecha, String^ estado);
	};
}
