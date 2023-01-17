#pragma once
namespace LpoopucployController {

	using namespace System;
	using namespace LpoopucployModel;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	public ref class ClienteController {
	
	private:
		SqlConnection^ objConexion;
	private:
		List<Cliente^>^ listaCliente;

	public:
		ClienteController();
		void CerrarConexion();
		void Abrirconexion();

		List<Cliente^>^ BuscarCliente(String^ dni);
		List<Cliente^>^ Buscarall();
		void Agregar(Cliente^ objcliente);
		void Eliminar(String^ dni);
		void EscribirArchivo(List<Cliente^>^ lista);
		int ValidarCodigo(int codigo);
		int ValidarDni(String^ dni);
		Cliente^ buscarClientexCodigo(int codigo);
		void editar(Cliente^ objCliente);
	};

}

