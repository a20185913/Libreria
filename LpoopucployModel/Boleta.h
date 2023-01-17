#pragma once
#include "Producto.h"
#include "Cliente.h"
#include "Personal.h"
using namespace System;
using namespace System::Collections::Generic;

namespace LpoopucployModel {
	public ref class Boleta {
		public:
			int codigo;
			String^ FechaDeVenta;
			String^ HoraDeVenta;
			String^ moneda;
			String^ ModoDePago;
			String^ direccion;
			String^ telefono;
			String^ ruc;
			double VentalTotal;
			Cliente^ objCliente;
			Personal^ objPersonal;
			List<Producto^>^ listaProducto;
		public:
			Boleta();
			Boleta(int codigo, String^ FechaDeVenta, String^ HoraDeVenta, String^ moneda, String^ ModoDePago, String^ direccion,
				String^ telefono, String^ ruc, double VentalTotal,Cliente^ objCliente, Personal^ objPersonal,List<Producto^>^ listaProducto);
	};		
}