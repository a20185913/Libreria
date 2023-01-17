#include "ProductoController.h"

using namespace LpoopucployController;
using namespace System::IO;
using namespace System::Collections::Generic;

ProductoController::ProductoController() {
	this->objProducto = gcnew SqlConnection();
}
void ProductoController::CerrarConexion() {
	this->objProducto->Close();
}
void ProductoController::AbrirConexion() {
	this->objProducto->ConnectionString = "Server=200.16.7.140;DataBase=a20185913;User Id=a20185913;Password=M1VyhrC9OTxX";
	this->objProducto->Open();
}


List<Producto^>^ ProductoController::BuscarProductoxNombre(String^ nombre) {
	/*List<Producto^>^ ListaRetorna = gcnew List<Producto^>();
	array<String^>^ Lineas = File::ReadAllLines("Producto.txt");
	String^ Separador = ";";
	for each (String ^ LineaProducto in Lineas) {
		array<String^>^ Datos = LineaProducto->Split(Separador->ToCharArray());
		int Codigo = Convert::ToInt32(Datos[0]);
		String^ Nombre = Datos[1];
		double PrecioDeVenta = Convert::ToDouble(Datos[2]);
		String^ Marca = Datos[3];
		int Cantidad = Convert::ToInt32(Datos[4]);
		double PrecioDeCompra = Convert::ToDouble(Datos[5]);
		if (Nombre->Contains(nombre)) {
			Producto^ objProducto = gcnew Producto(Codigo, Nombre, PrecioDeVenta, Marca, Cantidad, PrecioDeCompra);
			ListaRetorna->Add(objProducto);
		}
	}
	return ListaRetorna;*/
	AbrirConexion();
	List<Producto^>^ ListaRetorna = gcnew List<Producto^>();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objProducto;
	objSentencia->CommandText = "select * from Producto Where nombre like '%" + nombre + "%';";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombrep = safe_cast<String^>(objData[1]);
		double precioventa = safe_cast<double>(objData[2]);
		String^ marca = safe_cast<String^>(objData[3]);
		int cantidad = safe_cast<int>(objData[4]);
		double preciocompra = safe_cast<double>(objData[5]);
		Producto^ objProducto = gcnew Producto(codigo, nombrep, precioventa, marca, cantidad, preciocompra);
		ListaRetorna->Add(objProducto);
	}
	CerrarConexion();
	return ListaRetorna;
}
List<Producto^>^ ProductoController::BuscarProductoxNombrev(String^ nombre,int codigo) {
	List<Producto^>^ ListaRetorna = gcnew List<Producto^>();
	array<String^>^ Lineas = File::ReadAllLines("Productov.txt");
	String^ Separador = ";";
	for each (String ^ LineaProducto in Lineas) {
		array<String^>^ Datos = LineaProducto->Split(Separador->ToCharArray());
		int Codigo = Convert::ToInt32(Datos[0]);
		String^ Nombre = Datos[1];
		double PrecioDeVenta = Convert::ToDouble(Datos[2]);
		String^ Marca = Datos[3];
		int Cantidad = Convert::ToInt32(Datos[4]);
		double PrecioDeCompra = Convert::ToDouble(Datos[5]);
		if (Nombre->Contains(nombre)) {
			Producto^ objProducto = gcnew Producto(Codigo, Nombre, PrecioDeVenta, Marca, Cantidad, PrecioDeCompra);
			ListaRetorna->Add(objProducto);
		}
	}
	return ListaRetorna;
}
Producto^ ProductoController::BuscaxCodigo(int codigore) {
	/*Producto^ objProducto = nullptr;
	array<String^>^ Lineas = File::ReadAllLines("Producto.txt");
	String^ Separador = ";";
	for each (String ^ LineaProducto in Lineas) {
		array<String^>^ Datos = LineaProducto->Split(Separador->ToCharArray());
		int Codigo = Convert::ToInt32(Datos[0]);
		String^ Nombre = Datos[1];
		double PrecioDeVenta = Convert::ToDouble(Datos[2]);
		String^ Marca = Datos[3];
		int Cantidad = Convert::ToInt32(Datos[4]);
		double PrecioDeCompra = Convert::ToDouble(Datos[5]);
		if (Codigo == codigore) {
			objProducto = gcnew Producto(Codigo, Nombre, PrecioDeVenta, Marca, Cantidad, PrecioDeCompra);
			break;
		}
	}
	return objProducto;*/
	AbrirConexion();
	Producto^ objProducto = gcnew	Producto();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objProducto;
	objSentencia->CommandText = "select * from Producto Where codigo=" + codigore+";";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombrep = safe_cast<String^>(objData[1]);
		double precioventa = safe_cast<double>(objData[2]);
		String^ marca = safe_cast<String^>(objData[3]);
		int cantidad = safe_cast<int>(objData[4]);
		double preciocompra = safe_cast<double>(objData[5]);
		objProducto = gcnew Producto(codigo, nombrep, precioventa, marca, cantidad, preciocompra);
	}
	CerrarConexion();
	return objProducto;
}
List<Producto^>^ ProductoController::BuscarProductoAll() {
	/*List<Producto^>^ ListaRetorna = gcnew List<Producto^>();
	array<String^>^ Lineas = File::ReadAllLines("Producto.txt");
	String^ Separador = ";";
	for each (String ^ LineaProducto in Lineas) {
		array<String^>^ Datos = LineaProducto->Split(Separador->ToCharArray());
		int Codigo = Convert::ToInt32(Datos[0]);
		String^ Nombre = Datos[1];
		double PrecioDeVenta = Convert::ToDouble(Datos[2]);
		String^ Marca = Datos[3];
		int Cantidad = Convert::ToInt32(Datos[4]);
		double PrecioDeCompra = Convert::ToDouble(Datos[5]);
		Producto^ objProducto = gcnew Producto(Codigo, Nombre, PrecioDeVenta, Marca, Cantidad, PrecioDeCompra);
		ListaRetorna->Add(objProducto);
	}
	return ListaRetorna;*/
	AbrirConexion();
	List<Producto^>^ ListaRetorna = gcnew List<Producto^>();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objProducto;
	objSentencia->CommandText = "select * from Producto Where nombre like '%%';";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombrep = safe_cast<String^>(objData[1]);
		double precioventa = safe_cast<double>(objData[2]);
		String^ marca = safe_cast<String^>(objData[3]);
		int cantidad = safe_cast<int>(objData[4]);
		double preciocompra = safe_cast<double>(objData[5]);
		Producto^ objProducto = gcnew Producto(codigo, nombrep, precioventa, marca, cantidad, preciocompra);
		ListaRetorna->Add(objProducto);
	}
	CerrarConexion();
	return ListaRetorna;
}
void  ProductoController::ActualizoProducto(Producto^ objproducto) {
	/*List<Producto^>^ ListaProducto = BuscarProductoAll();
	for (int i = 0; i < ListaProducto->Count; i++) {
		Producto^ objProduc = ListaProducto[i];
		if (objProduc->codigo == objProducto->codigo) {
			ListaProducto[i]->nombre = objProducto->nombre;
			ListaProducto[i]->PrecioDeVenta = objProducto->PrecioDeVenta;
			ListaProducto[i]-> marca = objProducto->marca;
			ListaProducto[i]-> cantidad = objProducto-> cantidad;
			ListaProducto[i]-> PrecioDeCompra = objProducto-> PrecioDeCompra;
			break;
		}
	}
	EscribirArchivo(ListaProducto);*/
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objProducto;
	objSentencia->CommandText = "UPDATE Producto SET nombre='" + objproducto->nombre + "',PrecioDeVenta=" + objproducto->PrecioDeVenta + ",marca='" + objproducto->marca + "',cantidad=" + objproducto->cantidad + ",PrecioDeCompra=" + objproducto->PrecioDeCompra + " where codigo="+objproducto->codigo;
	objSentencia->ExecuteNonQuery();
	CerrarConexion();
}
void ProductoController::EscribirArchivo(List<Producto^>^ ListaProducto) {
	array<String^>^ LineasArchivo = gcnew array<String^>(ListaProducto->Count);
	for (int i = 0; i < ListaProducto->Count; i++) {
		Producto^ objProducto = ListaProducto[i];
		LineasArchivo[i] = objProducto->codigo + ";" + objProducto->nombre + ";" + objProducto->PrecioDeVenta + ";" + objProducto->marca + ";" + objProducto->cantidad + ";" + objProducto->PrecioDeCompra;

	}
	File::WriteAllLines("Producto.txt", LineasArchivo);
}
void ProductoController::EliminarProducto(int codigo) {
	/*List<Producto^>^ ListaProducto = BuscarProductoAll();
	for (int i = 0; i < ListaProducto->Count; i++) {
		Producto^ objProducto = ListaProducto[i];
		if (objProducto->codigo == codigo) {
			ListaProducto->RemoveAt(i);
			break;
		}
	}
	EscribirArchivo(ListaProducto);*/
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objProducto;
	objSentencia->CommandText = "delete from Producto Where codigo=" + codigo + ";";
	objSentencia->ExecuteNonQuery();
	CerrarConexion();
}

void ProductoController::AgregarProducto(Producto^ objproducto) {
	/*List<Producto^>^ ListaProducto = BuscarProductoAll();
	ListaProducto->Add(objProducto);
	array<String^>^ LineasArchivo = gcnew array<String^>(ListaProducto->Count);
	for (int i = 0; i < ListaProducto->Count; i++) {
		Producto^ objProductos = ListaProducto[i];
		LineasArchivo[i] = objProductos->codigo + ";" + objProductos->nombre + ";" + objProductos->PrecioDeVenta + ";" + objProductos->marca + ";" + objProductos->cantidad + ";" + objProductos->PrecioDeCompra;
	}
	File::WriteAllLines("Producto.txt", LineasArchivo);*/
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objProducto;
	objSentencia->CommandText = "insert into Producto(nombre,PrecioDeVenta,marca,cantidad,PrecioDeCompra) values('" + objproducto->nombre + "'," + objproducto->PrecioDeVenta + ",'"+ objproducto->marca+"',"+ objproducto->cantidad+","+objproducto->PrecioDeCompra+");";
	objSentencia->ExecuteNonQuery();
	CerrarConexion();
}
Producto^ ProductoController::Buscar(String^ nombre) {
	Producto^ objProducto = nullptr;
	array<String^>^ Lineas = File::ReadAllLines("Producto.txt");
	String^ Separador = ";";
	for each (String ^ LineaProducto in Lineas) {
		array<String^>^ Datos = LineaProducto->Split(Separador->ToCharArray());
		int Codigo = Convert::ToInt32(Datos[0]);
		String^ Nombre = Datos[1];
		double PrecioDeVenta = Convert::ToDouble(Datos[2]);
		String^ Marca = Datos[3];
		int Cantidad = Convert::ToInt32(Datos[4]);
		double PrecioDeCompra = Convert::ToDouble(Datos[5]);
		if (Nombre == nombre) {
			objProducto = gcnew Producto(Codigo, Nombre, PrecioDeVenta, Marca, Cantidad, PrecioDeCompra);
			break;
		}
	}
	return objProducto;
}
int ProductoController::Validar(String^ nombre) {
	int i = 0;
	array<String^>^ Lineas = File::ReadAllLines("Producto.txt");
	String^ Separador = ";";
	for each (String ^ LineaProducto in Lineas) {
		array<String^>^ Datos = LineaProducto->Split(Separador->ToCharArray());
		int Codigo = Convert::ToInt32(Datos[0]);
		String^ Nombre = Datos[1];
		double PrecioDeVenta = Convert::ToDouble(Datos[2]);
		String^ Marca = Datos[3];
		int Cantidad = Convert::ToInt32(Datos[4]);
		double PrecioDeCompra = Convert::ToDouble(Datos[5]);
		if (Nombre == nombre) {
			i = i + 1;
			break;
		}
	}
	return i;
}
int ProductoController::valida(int codigo) {
	int i = 0;
	array<String^>^ Lineas = File::ReadAllLines("Producto.txt");
	String^ Separador = ";";
	for each (String ^ LineaProducto in Lineas) {
		array<String^>^ Datos = LineaProducto->Split(Separador->ToCharArray());
		int Codigo = Convert::ToInt32(Datos[0]);
		String^ Nombre = Datos[1];
		double PrecioDeVenta = Convert::ToDouble(Datos[2]);
		String^ Marca = Datos[3];
		int Cantidad = Convert::ToInt32(Datos[4]);
		double PrecioDeCompra = Convert::ToDouble(Datos[5]);
		if (Codigo == codigo) {
			i = i + 1;
			break;
		}
	}
	return i;
}
List<Producto^>^ ProductoController::BuscarCantidad() {
	List<Producto^>^ ListaProductosEncontrados = gcnew List<Producto^>();
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objProducto;
	//select nombre,cantidad from Producto where cantidad<=100; 
	objSentencia->CommandText = "select * from Producto where cantidad<=100;";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombrep = safe_cast<String^>(objData[1]);
		double precioventa = safe_cast<double>(objData[2]);
		String^ marca = safe_cast<String^>(objData[3]);
		int cantidad = safe_cast<int>(objData[4]);
		double preciocompra = safe_cast<double>(objData[5]);
		Producto^ objProducto = gcnew Producto(codigo, nombrep, precioventa, marca, cantidad, preciocompra);
		ListaProductosEncontrados->Add(objProducto);
	}
	CerrarConexion();
	return ListaProductosEncontrados;
}

int  ProductoController::BuscarProductoxCantv(String^ nombre) {
	int CantidadP;

	List<Producto^>^ ListaRetorna = gcnew List<Producto^>();
	array<String^>^ Lineas = File::ReadAllLines("Productov.txt");
	String^ Separador = ";";
	for each (String ^ LineaProducto in Lineas) {
		array<String^>^ Datos = LineaProducto->Split(Separador->ToCharArray());

		int Cantidad = Convert::ToInt32(Datos[4]);


		CantidadP = Cantidad;
	}
	return CantidadP;

}
void ProductoController::Remix(List<Boceto^>^ lista) {
	for (int i = 0; i < lista->Count; i++) {
		int codigo;
		int cantidad;
		AbrirConexion();
		SqlCommand^ objSentencia = gcnew SqlCommand();
		objSentencia->Connection = this->objProducto;
		objSentencia->CommandText = "select * from Producto Where nombre like '%" + lista[i]->nombre + "%';";
		SqlDataReader^ objData = objSentencia->ExecuteReader();
		while (objData->Read()) {
			codigo = safe_cast<int>(objData[0]);
			String^ nombrep = safe_cast<String^>(objData[1]);
			double precioventa = safe_cast<double>(objData[2]);
			String^ marca = safe_cast<String^>(objData[3]);
			cantidad = safe_cast<int>(objData[4]);
			double preciocompra = safe_cast<double>(objData[5]);
			Producto^ objProducto = gcnew Producto(codigo, nombrep, precioventa, marca, cantidad, preciocompra);
		}
		CerrarConexion();
		cantidad = cantidad - Convert::ToInt32(lista[i]->cantidad);
		AbrirConexion();
		SqlCommand^ objsentencia = gcnew SqlCommand();
		objsentencia->Connection = this->objProducto;
		objsentencia->CommandText = "UPDATE Producto SET cantidad=" + cantidad + " where codigo=" + codigo+";";
		objsentencia->ExecuteNonQuery();
		CerrarConexion();
	}
}
List<Producto^>^ ProductoController::BuscarProductoVendido(int codigo) {
	AbrirConexion();
	List<Producto^>^ lista = gcnew List<Producto^>();
	Producto^ objProducto = gcnew	Producto();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objProducto;
	objSentencia->CommandText = "select * from ProductoVendido Where codigoBoleta=" + codigo + ";";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ fecha = safe_cast<String^>(objData[1]);
		String^ nombre= safe_cast<String^>(objData[2]);
		int cantidad = safe_cast<int>(objData[3]);
		double precio = safe_cast<double>(objData[4]);
		objProducto = gcnew Producto(codigo, nombre, precio, fecha, cantidad, precio);
		lista->Add(objProducto);
	}
	CerrarConexion();
	return lista;
}
double ProductoController::costoProducto() {
	double i = 0;
	return i;
}