#include "BoletaController.h"
#include "PersonalController.h"
#include "ClienteController.h"
using namespace LpoopucployController;
using namespace LpoopucployModel;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

BoletaController::BoletaController() {
	this->objconexion = gcnew SqlConnection();
	ListaBoleta = gcnew List<Boleta^>();
}
void BoletaController::AbrirConexion() {
	this->objconexion->ConnectionString = "Server=200.16.7.140;DataBase=a20185913;User Id=a20185913;Password=M1VyhrC9OTxX";
	this->objconexion->Open();
}
void BoletaController::Cerrarconexion() {
	this->objconexion->Close();
}

void BoletaController::RegistrarBoleta(Boleta^ objBoleta, List<Boceto^>^ lista) {
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objconexion;
	objSentencia->CommandText = "insert into Boleta(FechaDeVenta,HoraDeVenta,moneda,ModoDePago,direccion,telefono,ruc,VentaTotal,codigoPersonal,codigoCliente)  values('"+objBoleta->FechaDeVenta+"','"+objBoleta->HoraDeVenta+"','"+objBoleta->moneda+"','"+objBoleta->ModoDePago+"','"+objBoleta->direccion+"','"+objBoleta->telefono+"','"+objBoleta->ruc+"',"+objBoleta->VentalTotal+","+objBoleta->objPersonal->codigo+","+objBoleta->objCliente->codigo+");";
	objSentencia->ExecuteNonQuery();
	Cerrarconexion();
	int codigo;
	AbrirConexion();
	SqlCommand^ objsen = gcnew SqlCommand();
	objsen->Connection = this->objconexion;
	objsen->CommandText = "select * from Boleta";
	SqlDataReader^ objData = objsen->ExecuteReader();
	while (objData->Read()) {
		 codigo = safe_cast<int>(objData[0]);
	}
	Cerrarconexion();
	for (int i = 0; i < lista->Count;i++) {
		AbrirConexion();
		SqlCommand^ objsentencia = gcnew SqlCommand();
		objsentencia->Connection = this->objconexion;
		objsentencia->CommandText = "insert into ProductoVendido values(" + codigo + ",'" + objBoleta->FechaDeVenta + "','" + lista[i]->nombre + "'," + lista[i]->cantidad + "," + lista[i]->PrecioUnitario + ");";
		objsentencia->ExecuteNonQuery();
		Cerrarconexion();
	}
}
int BoletaController::Ingreso(String^ mes) {
	int ingreso = 0;
	array<String^>^ Lineas = File::ReadAllLines("Boleta.txt");
	String^ Separador = ";";
	int sumador;
	for each (String ^ LineaProducto in Lineas) {
		array<String^>^ Datos = LineaProducto->Split(Separador->ToCharArray());
		sumador = Convert::ToInt32(Datos[8]);
		String^ coman = Datos[1];
		String^ Separador = "/";
		array<String^>^ Data = LineaProducto->Split(Separador->ToCharArray());
		String^ numer = Data[1];
		if (mes == "ENERO" && numer == "01") {
			ingreso = ingreso + sumador;
		}
		if (mes == "FEBRERO" && numer == "02") {
			ingreso = ingreso + sumador;
		}
		if (mes == "MARZO" && numer == "03") {
			ingreso = ingreso + sumador;
		}
		if (mes == "ABRIL" && numer == "04") {
			ingreso = ingreso + sumador;
		}
		if (mes == "MAYO" && numer == "05") {
			ingreso = ingreso + sumador;
		}
		if (mes == "JUNIO" && numer == "06") {
			ingreso = ingreso + sumador;
		}
		if (mes == "JULIO" && numer == "07") {
			ingreso = ingreso + sumador;
		}
		if (mes == "AGOSTO" && numer == "08") {
			ingreso = ingreso + sumador;
		}
		if (mes == "SETIEMBRE" && numer == "09") {
			ingreso = ingreso + sumador;
		}
		if (mes == "OCTUBRE" && numer == "10") {
			ingreso = ingreso + sumador;
		}
		if (mes == "NOVIEMBRE" && numer == "11") {
			ingreso = ingreso + sumador;
		}
		if (mes == "DICIEMBRE" && numer == "12") {
			ingreso = ingreso + sumador;
		}
		
	}
	return ingreso;
}
List<Boleta^>^ BoletaController::Buscarxdos( String^ fecha, int codigoPersonal) {
	List<Boleta^>^ lista = gcnew List<Boleta^>();
	List<Producto^>^ listaporducto = gcnew List<Producto^>();
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objconexion;
	objSentencia->CommandText = "select * from Boleta Where FechaDeVenta ='" + fecha + "' and codigoPersonal=" + codigoPersonal + ";";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ Fechadeventa = safe_cast<String^>(objData[1]);
		String^ horadeventa = safe_cast<String^>(objData[2]);
		String^ moneda = safe_cast<String^>(objData[3]);
		String^ mododepago = safe_cast<String^>(objData[4]);
		String^ direccion = safe_cast<String^>(objData[5]);
		String^ telefono= safe_cast<String^>(objData[6]);
		String^ ruc= safe_cast<String^>(objData[7]);
		double ventatotal= safe_cast<double>(objData[8]);
		int codigopersonal = safe_cast<int>(objData[9]);
		PersonalController^ buscarpersonal = gcnew PersonalController();
		Personal^ objPersonal = buscarpersonal->buscarPersonalxCodigo(codigoPersonal);
		int codigocliente = safe_cast<int>(objData[10]);
		ClienteController^ buscarcliente = gcnew ClienteController();
		Cliente^ objCliente = buscarcliente->buscarClientexCodigo(codigocliente);
		Boleta^ objBoleta = gcnew Boleta(codigo,Fechadeventa,horadeventa,moneda,mododepago,direccion,telefono,ruc,ventatotal,objCliente,objPersonal,listaporducto);
		lista->Add(objBoleta);
	}
	Cerrarconexion();
	return lista;
}
void BoletaController::eliminar(int codigo) {
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objconexion;
	objSentencia->CommandText = "delete from Boleta Where codigo=" + codigo+ ";";
	objSentencia->ExecuteNonQuery();
	Cerrarconexion();
	AbrirConexion();
	SqlCommand^ objsentencia = gcnew SqlCommand();
	objsentencia->Connection = this->objconexion;
	objsentencia->CommandText = "delete from ProductoVendido Where codigoBoleta=" + codigo + ";";
	objsentencia->ExecuteNonQuery();
	Cerrarconexion();
}
List<Boleta^>^ BoletaController::Buscarxcodigo(int codigo) {
	List<Boleta^>^ lista = gcnew List<Boleta^>();
	List<Producto^>^ listaporducto = gcnew List<Producto^>();
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objconexion;
	objSentencia->CommandText = "select * from Boleta Where codigo="+codigo+";";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ Fechadeventa = safe_cast<String^>(objData[1]);
		String^ horadeventa = safe_cast<String^>(objData[2]);
		String^ moneda = safe_cast<String^>(objData[3]);
		String^ mododepago = safe_cast<String^>(objData[4]);
		String^ direccion = safe_cast<String^>(objData[5]);
		String^ telefono = safe_cast<String^>(objData[6]);
		String^ ruc = safe_cast<String^>(objData[7]);
		double ventatotal = safe_cast<double>(objData[8]);
		int codigopersonal = safe_cast<int>(objData[9]);
		PersonalController^ buscarpersonal = gcnew PersonalController();
		Personal^ objPersonal = buscarpersonal->buscarPersonalxCodigo(codigopersonal);
		int codigocliente = safe_cast<int>(objData[10]);
		ClienteController^ buscarcliente = gcnew ClienteController();
		Cliente^ objCliente = buscarcliente->buscarClientexCodigo(codigocliente);
		Boleta^ objBoleta = gcnew Boleta(codigo, Fechadeventa, horadeventa, moneda, mododepago, direccion, telefono, ruc, ventatotal, objCliente, objPersonal, listaporducto);
		lista->Add(objBoleta);
	}
	Cerrarconexion();
	return lista;
}
List<Boleta^>^ BoletaController::Buscarall() {
	List<Boleta^>^ lista = gcnew List<Boleta^>();
	List<Producto^>^ listaporducto = gcnew List<Producto^>();
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objconexion;
	objSentencia->CommandText = "select * from Boleta ;";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ Fechadeventa = safe_cast<String^>(objData[1]);
		String^ horadeventa = safe_cast<String^>(objData[2]);
		String^ moneda = safe_cast<String^>(objData[3]);
		String^ mododepago = safe_cast<String^>(objData[4]);
		String^ direccion = safe_cast<String^>(objData[5]);
		String^ telefono = safe_cast<String^>(objData[6]);
		String^ ruc = safe_cast<String^>(objData[7]);
		double ventatotal = safe_cast<double>(objData[8]);
		int codigopersonal = safe_cast<int>(objData[9]);
		PersonalController^ buscarpersonal = gcnew PersonalController();
		Personal^ objPersonal = buscarpersonal->buscarPersonalxCodigo(codigopersonal);
		int codigocliente = safe_cast<int>(objData[10]);
		ClienteController^ buscarcliente = gcnew ClienteController();
		Cliente^ objCliente = buscarcliente->buscarClientexCodigo(codigocliente);
		Boleta^ objBoleta = gcnew Boleta(codigo, Fechadeventa, horadeventa, moneda, mododepago, direccion, telefono, ruc, ventatotal, objCliente, objPersonal, listaporducto);
		lista->Add(objBoleta);
	}
	Cerrarconexion();
	return lista;
}
List<Boleta^>^ BoletaController::Buscarxfecha(String^ fecha) {
	List<Boleta^>^ lista = gcnew List<Boleta^>();
	List<Producto^>^ listaporducto = gcnew List<Producto^>();
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objconexion;
	objSentencia->CommandText = "select * from Boleta Where FechaDeVenta ='" + fecha + "';";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ Fechadeventa = safe_cast<String^>(objData[1]);
		String^ horadeventa = safe_cast<String^>(objData[2]);
		String^ moneda = safe_cast<String^>(objData[3]);
		String^ mododepago = safe_cast<String^>(objData[4]);
		String^ direccion = safe_cast<String^>(objData[5]);
		String^ telefono = safe_cast<String^>(objData[6]);
		String^ ruc = safe_cast<String^>(objData[7]);
		double ventatotal = safe_cast<double>(objData[8]);
		int codigopersonal = safe_cast<int>(objData[9]);
		PersonalController^ buscarpersonal = gcnew PersonalController();
		Personal^ objPersonal = buscarpersonal->buscarPersonalxCodigo(codigopersonal);
		int codigocliente = safe_cast<int>(objData[10]);
		ClienteController^ buscarcliente = gcnew ClienteController();
		Cliente^ objCliente = buscarcliente->buscarClientexCodigo(codigocliente);
		Boleta^ objBoleta = gcnew Boleta(codigo, Fechadeventa, horadeventa, moneda, mododepago, direccion, telefono, ruc, ventatotal, objCliente, objPersonal, listaporducto);
		lista->Add(objBoleta);
	}
	Cerrarconexion();
	return lista;

}
List<Boleta^>^ BoletaController::buscarxpersonal(int codigop) {
	List<Boleta^>^ lista = gcnew List<Boleta^>();
	List<Producto^>^ listaporducto = gcnew List<Producto^>();
	AbrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objconexion;
	objSentencia->CommandText = "select * from Boleta Where codigoPersonal=" + codigop + ";";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ Fechadeventa = safe_cast<String^>(objData[1]);
		String^ horadeventa = safe_cast<String^>(objData[2]);
		String^ moneda = safe_cast<String^>(objData[3]);
		String^ mododepago = safe_cast<String^>(objData[4]);
		String^ direccion = safe_cast<String^>(objData[5]);
		String^ telefono = safe_cast<String^>(objData[6]);
		String^ ruc = safe_cast<String^>(objData[7]);
		double ventatotal = safe_cast<double>(objData[8]);
		int codigopersonal = safe_cast<int>(objData[9]);
		PersonalController^ buscarpersonal = gcnew PersonalController();
		Personal^ objPersonal = buscarpersonal->buscarPersonalxCodigo(codigopersonal);
		int codigocliente = safe_cast<int>(objData[10]);
		ClienteController^ buscarcliente = gcnew ClienteController();
		Cliente^ objCliente = buscarcliente->buscarClientexCodigo(codigocliente);
		Boleta^ objBoleta = gcnew Boleta(codigo, Fechadeventa, horadeventa, moneda, mododepago, direccion, telefono, ruc, ventatotal, objCliente, objPersonal, listaporducto);
		lista->Add(objBoleta);
	}
	Cerrarconexion();
	return lista;
}