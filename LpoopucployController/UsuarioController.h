#pragma once

namespace LpoopucployController {
	
	using namespace System;
	using namespace LpoopucployModel;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	public ref class UsuarioController {
		private:
			SqlConnection^ objConexion;
		private:
			List<Usuario^>^ listaUsuarios;
		public:
			UsuarioController();//
			void Cerrarconexion();
			void Abrirconexion();
			void validarUsuarioYrango(String^ correo, String^ password,int *validarUsuario,int *rango);//
			int validar(String^ correo, String^ password);
			int validarnivel(String^ correo,String^ password);
			void LeerUsuarioDesdeArchivo();

			void escribirArchivoUsuario(List<Usuario^>^ listaUsuario);
			Usuario^ ObtenerUsuarioxCodigo(int codigo);

			List<Usuario^>^ buscarUsuarioAll();
			int agregarNuevoUsuario(Usuario^ objNuevoUsuario);
			void EliminarUsuario(int codigoEliminar);




			void GrabarUsuarioContra(int codigo, String^ correo, String^ contra);
			List<Usuario^>^ BuscarUsuaarioAll();
			void EscribirArchivo(List<Usuario^>^ ListaUsuario);
			int BuscarCodigo(String^ correo,String^ password);
			Usuario^ BuscarUsuario(int codigo);
			int GastoPersonal();
	};

}

