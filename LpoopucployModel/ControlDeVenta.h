#pragma once
#include "Boleta.h"
#include "Inventario.h"

using namespace System;
using namespace System::Collections::Generic;

namespace LpoopucployModel {
	public ref class ControlDeVenta {
		public:
			int codigo;
			double ingresos;
			double gastos;
			double inversion;
			int CantidadDeVentas;
			List<Boleta^>^ listaBoletas;
			List<Inventario^>^ listaInventario;
		public:
			ControlDeVenta();
			ControlDeVenta(int codigo,
			double ingresos,
			double gastos,
			double inversion,
			int CantidadDeVentas,
			List<Boleta^>^ listaBoletas,
			List<Inventario^>^ listaInventario);
	};




}