#pragma once
#include "Membresia.h"

using namespace System;

namespace LpoopucployModel {
	public ref class Cliente {
	public:
		int codigo;
		String^ nombre;
		String^ ApellidoPaterno;
		String^ ApellidoMaterno;
		String^ dni;
		String^ direccion;
		String^ correo;
		Membresia^ objMembresia;
	public:
		Cliente();
		Cliente(int codigo, String^ nombre, String^ ApellidoPaterno, String^  ApellidoMaterno, String^ dni, String^ direccion, String^ correo, Membresia^ objMembresia);
	};
}