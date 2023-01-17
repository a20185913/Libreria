#pragma once


using namespace System;

namespace LpoopucployModel {
	public ref class Usuario {
	public:
		int codigo;
		String^ correo;
		String^ password;
		int rango;
	public:
		Usuario();
		Usuario(int codigo, String^ correo, String^ password, int rango);
	};
}