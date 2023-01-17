#pragma once
#include "Usuario.h"
using namespace System;

namespace LpoopucployModel {
	public ref class Personal {
		public:
			int codigo;
			String^ nombre;
			String^ ApellidoPaterno;
			String^ ApellidoMaterno;
			String^ dni;
			String^ direccion;
			String^ NumeroDeTelefono;
			String^ edad;
			Usuario^ objUsuario;
		public:
			Personal();
			Personal(int codigo, String^ nombre,String^ ApellidoPaterno, String^ ApellidoMaterno, String^ dni, String^ direccion, String^ NumeroDeTelefono, String^ edad, Usuario^ objUsuario);
	};
}