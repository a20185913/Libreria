#include "CompraDeMercaderiaController.h"
using namespace LpoopucployController;
using namespace System::IO;
using namespace System::Collections::Generic;

CompraDeMercaderiaController::CompraDeMercaderiaController() {
	this->objMercaderia = gcnew SqlConnection();
}
/*void CompraDeMercaderiaController::AgregarProducto(CompraDeMercaderia^ objcomprapro) {
	List<CompraDeMercaderia^>^ ListaProducto = BuscarProductoAll();
	ListaProducto->Add(objcomprapro);
	array<String^>^ LineasArchivo = gcnew array<String^>(ListaProducto->Count);
	for (int i = 0; i < ListaProducto->Count; i++) {
		CompraDeMercaderia^ objProductos = ListaProducto[i];
		LineasArchivo[i] = objProductos->codigo + ";" + objProductos->tipo + ";" + objProductos->fecha + ";" + objProductos->hora + ";" + objProductos->estado;
	}
	File::WriteAllLines("CompraDeMercaderia.txt", LineasArchivo);
}
List<CompraDeMercaderia^>^ CompraDeMercaderiaController::BuscarProductoAll() {
	List<CompraDeMercaderia^>^ ListaRetorna = gcnew List<CompraDeMercaderia^>();
	array<String^>^ Lineas = File::ReadAllLines("CompraDeMercaderia.txt");
	String^ Separador = ";";
	for each (String ^ LineaProducto in Lineas) {
		array<String^>^ Datos = LineaProducto->Split(Separador->ToCharArray());
		int Codigo = Convert::ToInt32(Datos[0]);
		String^ descripcion = Datos[1];
		String^ fecha = Datos[2];
		String^ hora = Datos[3];
		String^ estado = Datos[4];
		CompraDeMercaderia^ objProducto = gcnew CompraDeMercaderia(Codigo, descripcion, fecha, hora, estado);
		ListaRetorna->Add(objProducto);
	}
	return ListaRetorna;
}
List<CompraDeMercaderia^>^ CompraDeMercaderiaController::BuscarProductoestado(String^ estado) {
	List<CompraDeMercaderia^>^ ListaRetorna = gcnew List<CompraDeMercaderia^>();
	array<String^>^ Lineas = File::ReadAllLines("CompraDeMercaderia.txt");
	String^ Separador = ";";
	for each (String ^ LineaProducto in Lineas) {
		array<String^>^ Datos = LineaProducto->Split(Separador->ToCharArray());
		int Codigo = Convert::ToInt32(Datos[0]);
		String^ descripcion = Datos[1];
		String^ fecha = Datos[2];
		String^ hora = Datos[3];
		String^ estadop = Datos[4];
		if (estadop ==estado) {
			CompraDeMercaderia^ objProducto = gcnew CompraDeMercaderia(Codigo, descripcion, fecha, hora, estadop);
			ListaRetorna->Add(objProducto);
		}	
	}
	return ListaRetorna;
}
CompraDeMercaderia^ CompraDeMercaderiaController::BuscarDescripcion(String^ descripcion) {
	CompraDeMercaderia^ objProducto = gcnew CompraDeMercaderia();
	array<String^>^ Lineas = File::ReadAllLines("CompraDeMercaderia.txt");
	String^ Separador = ";";
	for each (String ^ LineaProducto in Lineas) {
		array<String^>^ Datos = LineaProducto->Split(Separador->ToCharArray());
		int Codigo = Convert::ToInt32(Datos[0]);
		String^ descripcionp = Datos[1];
		String^ fecha = Datos[2];
		String^ hora = Datos[3];
		String^ estado = Datos[4];
		if (descripcionp == descripcion) {
			objProducto = gcnew CompraDeMercaderia(Codigo, descripcionp, fecha, hora, estado);
		}
	}
	return objProducto;

}
void CompraDeMercaderiaController::actualizar(CompraDeMercaderia^ objcomprapro, CompraDeMercaderia^ nuevo) {
	List<CompraDeMercaderia^>^ ListaProducto = BuscarProductoAll();
	for (int i = 0; i < ListaProducto->Count; i++) {
		CompraDeMercaderia^ objProduc = ListaProducto[i];
		if (objProduc == objcomprapro) {
			ListaProducto[i]->codigo = nuevo->codigo;
			ListaProducto[i]->tipo = nuevo->tipo;
			ListaProducto[i]->fecha = nuevo->fecha;
			ListaProducto[i]->hora = nuevo->hora;
			ListaProducto[i]->estado = nuevo->estado;
			break;
		}
	}
	EscribirArchivo(ListaProducto);
}
void CompraDeMercaderiaController::EscribirArchivo(List<CompraDeMercaderia^>^ ListaProducto) {
	array<String^>^ LineasArchivo = gcnew array<String^>(ListaProducto->Count);
	for (int i = 0; i < ListaProducto->Count; i++) {
		CompraDeMercaderia^ objProductos = ListaProducto[i];
		LineasArchivo[i] = objProductos->codigo + ";" + objProductos->tipo + ";" + objProductos->fecha + ";" + objProductos->hora + ";" + objProductos->estado;;

	}
	File::WriteAllLines("CompraDeMercaderia.txt", LineasArchivo);
}
void CompraDeMercaderiaController::Eliminar(CompraDeMercaderia^ objcompra) {
	List<CompraDeMercaderia^>^ ListaProducto = BuscarProductoAll();
	for (int i = 0; i < ListaProducto->Count; i++) {
		CompraDeMercaderia^ objProducto = ListaProducto[i];
		if (objProducto == objcompra ) {
			ListaProducto->RemoveAt(i);
			break;
		}
	}
	EscribirArchivo(ListaProducto);

}*/


void CompraDeMercaderiaController::CerrarConexion() {
	this->objMercaderia->Close();
}
void CompraDeMercaderiaController::AbrirConexion() {
	this->objMercaderia->ConnectionString = "Server=200.16.7.140;DataBase=a20185913;User Id=a20185913;Password=M1VyhrC9OTxX";
	this->objMercaderia->Open();
}

void CompraDeMercaderiaController::registrarPedido(String^ nombreProducto, int cantidad, double precioUnitario, String^ fecha, String^ estado) {
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objMercaderia;
	objSentencia->CommandText = "insert into CompraDeMercaderia(productoNombre,cantidad,precioUnitario,fecha,estado) values('" +
		nombreProducto + "'," + cantidad + "," + precioUnitario + ",'" + fecha + "','" + estado + "');";
	objSentencia->ExecuteNonQuery();
	CerrarConexion();
}

List<CompraDeMercaderia^>^ CompraDeMercaderiaController::BuscarProductoxEstadoyFecha(String^ estado, String^ fecha) {
	AbrirConexion();
	List<CompraDeMercaderia^>^ listaPedidosEncontrados = gcnew List < CompraDeMercaderia^>();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objMercaderia;
	objSentencia->CommandText = "select * from CompraDeMercaderia where fecha like '%" + fecha + "%' and estado like '%" + estado + "%';";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ productoNombre = safe_cast<String^>(objData[1]);
		int cantidad = safe_cast<int>(objData[2]);
		double precioUnitario = safe_cast<double>(objData[3]);
		String^ fecha = safe_cast<String^>(objData[4]);
		String^ estado = safe_cast<String^>(objData[5]);
		CompraDeMercaderia^ objMercaderia = gcnew CompraDeMercaderia(codigo, productoNombre, cantidad, precioUnitario, fecha, estado);
		listaPedidosEncontrados->Add(objMercaderia);
	}
	CerrarConexion();

	return listaPedidosEncontrados;
}


CompraDeMercaderia^ CompraDeMercaderiaController::BuscarPedidoxCodigo(int codigoPedido) {
	CompraDeMercaderia^ objPedidoEncontrado = nullptr;
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objMercaderia;
	//select * from CompraDeMercaderia where codigo=1;
	objSentencia->CommandText = "select * from CompraDeMercaderia where codigo=" + codigoPedido + ";";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ productoNombre = safe_cast<String^>(objData[1]);
		int cantidad = safe_cast<int>(objData[2]);
		double precioUnitario = safe_cast<double>(objData[3]);
		String^ fecha = safe_cast<String^>(objData[4]);
		String^ estado = safe_cast<String^>(objData[5]);
		objPedidoEncontrado = gcnew CompraDeMercaderia(codigo, productoNombre, cantidad, precioUnitario,fecha, estado);
	}
	CerrarConexion();
	return objPedidoEncontrado;
}

void CompraDeMercaderiaController::actualizarPedido(CompraDeMercaderia^ objPedidoEditar) {
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objMercaderia;
	objSentencia->CommandText = "UPDATE CompraDeMercaderia SET productoNombre='" +
		objPedidoEditar->productoNombre + "', cantidad=" + objPedidoEditar->cantidad + ", precioUnitario="+ objPedidoEditar->precioUnitario + ", fecha='" +
		objPedidoEditar->fecha + "', estado='" + objPedidoEditar->estado + "' where codigo=" + objPedidoEditar->codigo + ";";
	objSentencia->ExecuteNonQuery();
	CerrarConexion();
}

void CompraDeMercaderiaController::EliminarPedido(int codigoPedido) {
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objMercaderia;
	objSentencia->CommandText = "delete from CompraDeMercaderia where codigo=" + codigoPedido + ";";
	objSentencia->ExecuteNonQuery();
	CerrarConexion();
}

double CompraDeMercaderiaController::reporteGatosArticulos(String^ mes) {
	double gastosArticulos = 0;
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objMercaderia;
	objSentencia->CommandText = "select * from CompraDeMercaderia where fecha like '%" + mes + "%';";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int cantidad = safe_cast<int>(objData[2]);
		double precioUnitario = safe_cast<double>(objData[3]);
		
		gastosArticulos = gastosArticulos + cantidad * precioUnitario;
	}
	CerrarConexion();
	return gastosArticulos;
}