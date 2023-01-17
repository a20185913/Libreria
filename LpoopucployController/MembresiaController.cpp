#include"MembresiaController.h"

using namespace LpoopucployController;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace LpoopucployModel;

MembresiaController::MembresiaController() {
	this->objConexion = gcnew SqlConnection();
	this->listaMembresia = gcnew List<Membresia^>();
}
void MembresiaController::Cerrarconexion() {
	this->objConexion->Close();
}
void MembresiaController::Abrirconexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20185913;User Id=a20185913;Password=M1VyhrC9OTxX";
	this->objConexion->Open();
}
Membresia^ MembresiaController::Buscarcodigo(int codigo) {
	/*List<Membresia^>^ listaMembresia = Buscarall();
	Membresia^ objMembresiaBuscado = nullptr;
	for (int i = 0; i <listaMembresia->Count; i++)
	{
		Membresia^ objMembresia = listaMembresia[i];
		if (objMembresia->codigo == codigo) {
			objMembresiaBuscado = listaMembresia[i];
			break;
		}
	}
	return objMembresiaBuscado;*/
	Abrirconexion();
	Membresia^ objMembresia;
	SqlCommand^ objsentencia = gcnew SqlCommand();
	objsentencia->Connection = this->objConexion;
	objsentencia->CommandText = "select * from Membresia Where codigo=" + codigo + ";";
	SqlDataReader^ objDato = objsentencia->ExecuteReader();
	while (objDato->Read()) {
		String^ nivel = safe_cast<String^>(objDato[1]);
		String^ FechaInicio = safe_cast<String^>(objDato[2]);
		String^ FechaFin = safe_cast<String^>(objDato[3]);
		objMembresia = gcnew Membresia(codigo, nivel, FechaInicio, FechaFin);
	}
	return objMembresia;
	Cerrarconexion();
}
List<Membresia^>^ MembresiaController::Buscarall() {
	List<Membresia^>^ listaMembresia = gcnew List<Membresia^>();
	array<String^>^ linea = File::ReadAllLines("Membresia.txt");
	String^ separador = ";";
	for each (String^ lineaMembresia in linea){
		array<String^>^ datos = lineaMembresia->Split(separador->ToCharArray());

		int codigoMe = Convert::ToInt32(datos[0]);
		String^ nivel = datos[1];
		String^ fechai = datos[2];
		String^ fechaf = datos[3];

		Membresia^ objMembresia = gcnew Membresia(codigoMe,nivel,fechai,fechaf);
		listaMembresia->Add(objMembresia);

	}

	return listaMembresia;
}
void MembresiaController::leermembresia() {
	this->listaMembresia->Clear();
	array<String^>^ lineas = File::ReadAllLines("Membresia.txt");

	String^ separadores = ";";
	for each (String ^ lineaUsuario in lineas)
	{
		array<String^>^ palabras = lineaUsuario->Split(separadores->ToCharArray());
		int codigode = Convert::ToInt32(palabras[0]);
		String^ nivel = palabras[1];
		String^ fechai = palabras[2];
		String^ fechaf = palabras[3];

		Membresia^ objUsuario = gcnew Membresia( codigode , nivel, fechai, fechaf);
		this->listaMembresia->Add(objUsuario);
	}
}
void MembresiaController::eliminar(int codigo) {
	/*
	List<Membresia^>^ listaMembresia = Buscarall();
	for (int i = 0; i < listaMembresia->Count;i++) {
		Membresia^ objMembresia = listaMembresia[i];
		if (objMembresia->codigo == codigo) {
			listaMembresia->RemoveAt(i);
			break;
		}
	}
	escribir(listaMembresia);*/
	Abrirconexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "delete from Membresia Where codigo=" + codigo + ";";
	objSentencia->ExecuteNonQuery();
	Cerrarconexion();
}
void MembresiaController::escribir(List<Membresia^>^ lista) {
	array<String^>^ linea = gcnew array<String^>(lista->Count);
	for (int i = 0; i < lista->Count; i++) {
		Membresia^ objMembresia = lista[i];
		linea[i] = objMembresia->codigo + ";" + objMembresia->nivel + ";" + objMembresia->FechaInicio + ";" + objMembresia->FechaFin;

	}
	File::WriteAllLines("Membresia.txt",linea);

}
int MembresiaController::agregar(Membresia^ objMembresia) {
	/*List<Membresia^>^ listaMembresia = Buscarall();
	listaMembresia->Add(objMembresia);
	array<String^>^ linea = gcnew array<String^>(listaMembresia->Count);

	for (int i = 0; i < listaMembresia->Count; i++) {
		Membresia^ objMembresia = listaMembresia[i];
		linea[i] = objMembresia->codigo + ";" + objMembresia->nivel + ";" + objMembresia->FechaInicio + 
			";" + objMembresia->FechaFin;
	}

	File::WriteAllLines("Membresia.txt",linea);*/
	Abrirconexion();
	int codigo;
	SqlCommand^ objsentencia = gcnew SqlCommand();
	objsentencia->Connection = this->objConexion;
	objsentencia->CommandText = "insert into Membresia(nivel,FechaInicio,FechaFin) values('"+objMembresia->nivel+"','"+objMembresia->FechaInicio+"','"+objMembresia->FechaFin+"');";
	objsentencia->ExecuteNonQuery();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Membresia ;";
	SqlDataReader^ objDato = objSentencia->ExecuteReader();
	while (objDato->Read()) {
		codigo = safe_cast<int>(objDato[0]);
	}
	Cerrarconexion();
	return codigo;
}
int MembresiaController::Cantidad(String^ nivel) {
	/*int cuenta = 0;
	array<String^>^ linea = File::ReadAllLines("Membresia.txt");
	String^ separador = ";";
	for each (String ^ lineaMembresia in linea) {
		array<String^>^ datos = lineaMembresia->Split(separador->ToCharArray());
		int codigoMe = Convert::ToInt32(datos[0]);
		String^ Nivel = datos[1];
		String^ fechai = datos[2];
		String^ fechaf = datos[3];
		if (Nivel == nivel) {
			cuenta = cuenta + 1;
		}
	}
	return cuenta;*/
	int cuenta =0 ;
	Abrirconexion();
	Membresia^ objMembresia;
	SqlCommand^ objsentencia = gcnew SqlCommand();
	objsentencia->Connection = this->objConexion;
	objsentencia->CommandText = "select * from Membresia Where nivel='" + nivel + "';";
	SqlDataReader^ objDato = objsentencia->ExecuteReader();
	while (objDato->Read()) {
		cuenta = cuenta + 1;
	}
	Cerrarconexion();
	return cuenta;
}
void MembresiaController::editar(Membresia^ objMembresia) {
	Abrirconexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "UPDATE Membresia SET nivel='" + objMembresia->nivel + "',FechaInicio='" + objMembresia->FechaInicio + "',FechaFin='" + objMembresia->FechaFin + "' where codigo=" + objMembresia->codigo + ";";
	objSentencia->ExecuteNonQuery();
	Cerrarconexion();
}
