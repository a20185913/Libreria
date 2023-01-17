#pragma once
#include "Producto.h"
#include "CompraDeMercaderia.h" 

using namespace System;
using namespace System::Collections::Generic;

namespace LpoopucployModel {
	public ref class Inventario {
	public:
		int codigo;
		String^ fecha;
		String^ hora;
		List<Producto^>^ listaProducto;
		List<CompraDeMercaderia^>^ listaCompraDeMercaderia;
	public:
		Inventario();
		Inventario(int codigo, String^ fecha, String^ hora, List<Producto^>^ listaProducto, List<CompraDeMercaderia^>^ listaCompraDeMercaderia);
	};
}