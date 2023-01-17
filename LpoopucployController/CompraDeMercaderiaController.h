#pragma once

namespace LpoopucployController {
	using namespace System;
	using namespace LpoopucployModel;
	using namespace System::Collections::Generic;
	using namespace System::Data::SqlClient;
	public ref class CompraDeMercaderiaController {
		
		private:
			SqlConnection^ objMercaderia;
		public:
			CompraDeMercaderiaController();
			/*void AgregarProducto(CompraDeMercaderia^ objcomprapro);
			List<CompraDeMercaderia^>^ BuscarProductoAll();
			List<CompraDeMercaderia^>^ BuscarProductoestado(String^ estado);
			CompraDeMercaderia^ BuscarDescripcion(String^ descripcion);
			void actualizar(CompraDeMercaderia^ objcomprapro, CompraDeMercaderia^ nuevo);
			void EscribirArchivo(List<CompraDeMercaderia^>^ ListaProducto);
			void Eliminar(CompraDeMercaderia^ objcompra);*/

			/*SQL FUNCIONES*/
			void CerrarConexion();
			void AbrirConexion();
			void registrarPedido(String^ nombreProducto, int cantidad, double precioUnitario,String^ fecha, String^ estado);
			List<CompraDeMercaderia^>^ BuscarProductoxEstadoyFecha(String^ estado, String^ fecha);
			CompraDeMercaderia^ BuscarPedidoxCodigo(int codigoPedido);
			void actualizarPedido(CompraDeMercaderia^ objPedidoEditar);
			void EliminarPedido(int codigoPedido);
			double reporteGatosArticulos(String^ mes);

	};
}
