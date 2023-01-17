#pragma once

namespace LpoopucployController {

	using namespace System;
	using namespace LpoopucployModel;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	public ref class PersonalController {
	
	private:
		List<Personal^>^ listaPersonal;
		SqlConnection^ objConexion;
	public:
		PersonalController();
		void CerrarConexion();
		void Abrirconexion();



		String^ BuscarUsuario(int codigo);
		List<Personal^ >^ buscarPersonalxDNI(String^ DNI);
		List<Personal^>^ buscarPersonalAll();
		int cantidadpersonal();
		List<Personal^>^ buscarPersonalxnombre(String^ nombre);
		void agregarNuevoPersonal(Personal^ objNuevoPersonal);
		int validarCodigoPersonalExistente(int codigo);
		Personal^ buscarPersonalxCodigo(int codigoPersonalBuscado);
		void escribirArchivoPersonal(List<Personal^>^ listaPersonal);
		void eliminarPersonal(int codigoEliminar);


		/*SQL FUNCIONES*/
		void editarPersonal(Personal^ objPersonalEditar);
		double reporteGatosPersonal();

	};

}