#pragma once
using namespace System;

namespace LpoopucployModel {
	public ref class Membresia {
	public:
		int codigo;
		String^ nivel;
		String^ FechaInicio;
		String^ FechaFin;
	
	public:
		Membresia();
		Membresia(int codigo, String^ nivel,String^ FechaInicio,String^ FechaFin);
	};
}