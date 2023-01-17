#pragma once

namespace LpoopucployModel {
	using namespace System;

	public ref class Boceto {
		public:
			String^ cantidad;
			String^ nombre;
			String^ PrecioUnitario;
			String^ Importe;
		public:
			Boceto();
			Boceto(String^ cantidad,String^ nombre,String^ PrecioUnitario,String^ Importe);
	};
}