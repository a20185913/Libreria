#pragma once

namespace LpoopucployController {

	using namespace System;
	using namespace LpoopucployModel;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	public ref class MembresiaController {
	private:
		SqlConnection^ objConexion;
	private:
		List<Membresia^>^ listaMembresia;

	public:
		MembresiaController();
		void Cerrarconexion();
		void Abrirconexion();
		void leermembresia();
		List<Membresia^>^ Buscarall();
		Membresia^ Buscarcodigo(int codigo);
		void eliminar(int codigo);
		void escribir(List<Membresia^>^ lista);
		/*devuelvde codigoagregado*/
		int agregar(Membresia^ objMembresia);
		void editar(Membresia^ objMembresia);
		int Cantidad(String^ nivel);
	};

}
