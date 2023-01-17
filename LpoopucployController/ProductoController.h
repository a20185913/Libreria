#pragma once


namespace LpoopucployController {

	using namespace System;
	using namespace LpoopucployModel;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	public ref class ProductoController {
		private:
			SqlConnection^ objProducto;
		public:
			ProductoController();
			void AbrirConexion();
			void CerrarConexion();
			void Remix(List<Boceto^>^ lista);
			double costoProducto();
			List<Producto^>^ BuscarProductoVendido(int codigo);
			List<Producto^>^ BuscarProductoxNombre(String^ nombre);
			List<Producto^>^ BuscarCantidad();// RETORNA LISTA DE PRODUCTOS CON LA CANTIDAD MENOR O IGUAL A 100
			List<Producto^>^ BuscarProductoxNombrev(String^ nombre,int codigo);
			List<Producto^>^ BuscarProductoAll();
			int  BuscarProductoxCantv(String^ nombre);
			Producto^ BuscaxCodigo(int codigore);
			void ActualizoProducto(Producto^ objproducto);
			void EscribirArchivo(List<Producto^>^ ListaProducto);
			void EliminarProducto(int codigo);
			void AgregarProducto(Producto^ objproducto);
			Producto^ Buscar(String^ nombre);
			int Validar(String^ nombre);
			int valida(int codigo);
	};
}
