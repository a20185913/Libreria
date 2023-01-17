#include "PersonalController.h"
#include "UsuarioController.h"

using namespace LpoopucployController;
using namespace LpoopucployModel;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

PersonalController::PersonalController() {
	this->objConexion = gcnew SqlConnection();
	listaPersonal = gcnew List<Personal^>();
}

void PersonalController::CerrarConexion() {
	this->objConexion->Close();
}
void PersonalController::Abrirconexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20185913;User Id=a20185913;Password=M1VyhrC9OTxX";
	this->objConexion->Open();
}




String^ PersonalController::BuscarUsuario(int codigo) {
	String^ nombre;
	array<String^>^ lineas = File::ReadAllLines("Personal.txt");
	String^ separador = ";";
	for each (String ^ lineapersonal in lineas) {
		array<String^>^ datos = lineapersonal->Split(separador->ToCharArray());
		int codigop = Convert::ToInt32(datos[8]);
		if (codigop == codigo) {
			nombre = datos[1];
			break;
		}
	}
	return nombre;
}

List<Personal^>^ PersonalController::buscarPersonalxDNI(String^ DNI) {
	List<Personal^>^ listaPersonalEncontrados = gcnew List<Personal^>();
	/*
	array<String^>^ lineas = File::ReadAllLines("Personal.txt");
	array<String^>^ lineas2 = File::ReadAllLines("usuarios.txt");

	String^ separadores = ";";

	for each (String ^ lineaPersonal in lineas) {
		array<String^>^ datos = lineaPersonal->Split(separadores->ToCharArray());

		int codigoPersonal = Convert::ToInt32(datos[0]);
		String^ nombrePersonal = datos[1];
		String^ apellidoPaternoPersonal = datos[2];
		String^ apellidoMaternoPersonal = datos[3];
		String^ dniPersonal = datos[4];
		String^ direccionPersonal = datos[5];
		String^ numeroPersonal = datos[6];
		String^ edadPersonal = datos[7];
		int codigoUsuarioPersonal = Convert::ToInt32(datos[8]);

		if (dniPersonal == DNI) {
			for each (String ^ lineaUsuario in lineas2) {
				array<String^>^ datos2 = lineaUsuario->Split(separadores->ToCharArray());
				int codigoUsuario = Convert::ToInt32(datos2[0]);

				if (codigoUsuarioPersonal == codigoUsuario) {
					UsuarioController^ objUsuarioController = gcnew UsuarioController();
					objUsuarioController->LeerUsuarioDesdeArchivo();
					Usuario^ objUsuario = objUsuarioController->ObtenerUsuarioxCodigo(codigoUsuarioPersonal);

					Personal^ objPersonal = gcnew Personal(codigoPersonal, nombrePersonal, apellidoPaternoPersonal, apellidoMaternoPersonal,
						dniPersonal, direccionPersonal, numeroPersonal, edadPersonal, objUsuario);

					listaPersonalEncontrados->Add(objPersonal);
					break;
					break;
				}
			}
		}

	}*/

	Abrirconexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Personal Where dni like '%" + DNI + "%';";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ ApellidoPaterno = safe_cast<String^>(objData[2]);
		String^ ApellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dni = safe_cast<String^>(objData[4]);
		String^ direccion = safe_cast<String^>(objData[5]);
		String^ numeroTelefono = safe_cast<String^>(objData[6]);
		String^ edad = safe_cast<String^>(objData[7]);
		int codigoUsuario = safe_cast<int>(objData[8]);

		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		Usuario^ objUsuario = objUsuarioController->BuscarUsuario(codigoUsuario);
		Personal^ objPersonal = gcnew Personal(codigo, nombre, ApellidoPaterno, ApellidoMaterno,dni, direccion, numeroTelefono, edad, objUsuario);
		listaPersonalEncontrados->Add(objPersonal);
	}
	CerrarConexion();
	return listaPersonalEncontrados;
}

List<Personal^>^ PersonalController::buscarPersonalAll() {
	List<Personal^>^ listaPersonalEncontrados = gcnew List<Personal^>();
	/*array<String^>^ lineas = File::ReadAllLines("Personal.txt");
	array<String^>^ lineas2 = File::ReadAllLines("usuarios.txt");
	String^ separadores = ";";
	for each (String ^ lineaPersonal in lineas) {
		array<String^>^ datos = lineaPersonal->Split(separadores->ToCharArray());

		int codigoPersonal = Convert::ToInt32(datos[0]);
		String^ nombrePersonal = datos[1];
		String^ apellidoPaternoPersonal = datos[2];
		String^ apellidoMaternoPersonal = datos[3];
		String^ dniPersonal = datos[4];
		String^ direccionPersonal = datos[5];
		String^ numeroPersonal = datos[6];
		String^ edadPersonal = datos[7];
		int codigoUsuarioPersonal = Convert::ToInt32(datos[8]);

		for each (String ^ lineaUsuario in lineas2) {
			array<String^>^ datos2 = lineaUsuario->Split(separadores->ToCharArray());
			int codigoUsuario = Convert::ToInt32(datos2[0]);

			if (codigoUsuarioPersonal == codigoUsuario) {
				UsuarioController^ objUsuarioController = gcnew UsuarioController();
				objUsuarioController->LeerUsuarioDesdeArchivo();
				Usuario^ objUsuario = objUsuarioController->ObtenerUsuarioxCodigo(codigoUsuarioPersonal);

				Personal^ objPersonal = gcnew Personal(codigoPersonal, nombrePersonal, apellidoPaternoPersonal, apellidoMaternoPersonal,
					dniPersonal, direccionPersonal, numeroPersonal, edadPersonal, objUsuario);

				listaPersonalEncontrados->Add(objPersonal);
				break;
			}
		}
	}*/

	Abrirconexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Personal;";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read())
	{
		int codigo =safe_cast<int>(objData[0]);
		String^ nombre =safe_cast<String^>(objData[1]);
		String^ ApellidoPaterno = safe_cast<String^>(objData[2]);
		String^ ApellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dni = safe_cast<String^>(objData[4]);
		String^ direccion = safe_cast<String^>(objData[5]);
		String^ numDeTelefono = safe_cast<String^>(objData[6]);
		String^ edad = safe_cast<String^>(objData[7]);
		int codigoUsuario = safe_cast<int>(objData[8]);

		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		Usuario^ objUsuario = objUsuarioController->BuscarUsuario(codigoUsuario);

		Personal^ objPersonal = gcnew Personal(codigo, nombre, ApellidoPaterno, ApellidoMaterno, dni, direccion, numDeTelefono, edad, objUsuario);
		listaPersonalEncontrados->Add(objPersonal);
	}

	CerrarConexion();

	return listaPersonalEncontrados;
}
List<Personal^>^ PersonalController::buscarPersonalxnombre(String^ nombre) {
	List<Personal^>^ listaPersonalEncontrados = gcnew List<Personal^>();
	Abrirconexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Personal Where nombre like '%" + nombre + "%';";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombrep = safe_cast<String^>(objData[1]);
		String^ ApellidoPaterno = safe_cast<String^>(objData[2]);
		String^ ApellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dni = safe_cast<String^>(objData[4]);
		String^ direccion = safe_cast<String^>(objData[5]);
		String^ numeroTelefono = safe_cast<String^>(objData[6]);
		String^ edad = safe_cast<String^>(objData[7]);
		int codigoUsuario = safe_cast<int>(objData[8]);

		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		Usuario^ objUsuario = objUsuarioController->BuscarUsuario(codigoUsuario);
		Personal^ objPersonal = gcnew Personal(codigo, nombrep, ApellidoPaterno, ApellidoMaterno, dni, direccion, numeroTelefono, edad, objUsuario);
		listaPersonalEncontrados->Add(objPersonal);
	}
	CerrarConexion();
	return listaPersonalEncontrados;
}
void PersonalController::agregarNuevoPersonal(Personal^ objNuevoPersonal) {
	/*List<Personal^>^ listaPersonal = buscarPersonalAll();
	listaPersonal->Add(objNuevoPersonal);
	array<String^>^ lineasArchivo = gcnew array<String^>(listaPersonal->Count);

	for (int i = 0; i < listaPersonal->Count; i++) {

		Personal^ objPersonal = listaPersonal[i];
		lineasArchivo[i] = objPersonal->codigo + ";" + objPersonal->nombre + ";" + objPersonal->ApellidoPaterno + ";" +
			objPersonal->ApellidoMaterno + ";" + objPersonal->dni + ";" + objPersonal->direccion + ";" +
			objPersonal->NumeroDeTelefono + ";" + objPersonal->edad + ";" + objPersonal->objUsuario->codigo;
	}

	File::WriteAllLines("Personal.txt", lineasArchivo);*/
	Abrirconexion();
	
	UsuarioController^ objUsuarioController = gcnew UsuarioController();
	int codigo = objUsuarioController->agregarNuevoUsuario(objNuevoPersonal->objUsuario);
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert into Personal(nombre,ApellidoPaterno,ApellidoMaterno,dni,direccion,numeroDeTelefono,edad,codigoUsuario) values('" 
		+ objNuevoPersonal->nombre + "','" + objNuevoPersonal->ApellidoPaterno + "','" + objNuevoPersonal->ApellidoMaterno + "','" +
		objNuevoPersonal->dni + "','" + objNuevoPersonal->direccion + "','" + objNuevoPersonal->NumeroDeTelefono + "','" 
		+ objNuevoPersonal->edad + "'," + codigo + ");";
	objSentencia->ExecuteNonQuery();

	CerrarConexion();
}


int PersonalController::validarCodigoPersonalExistente(int codigo) {
	int existe = 0;
	array<String^>^ lineas = File::ReadAllLines("Personal.txt");
	String^ separadores = ";";

	for each (String ^ lineaUsuario in lineas) {
		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());
		if (Convert::ToInt32(datos[0]) == codigo) {
			existe = 1;
			break;
		}

	}

	return existe;
}


Personal^ PersonalController::buscarPersonalxCodigo(int codigoPersonalBuscado) {
	Personal^ objPersonalEncontrado = nullptr;
	Usuario^ objUsuarioEncontrado = nullptr;
	/*array<String^>^ lineas = File::ReadAllLines("Personal.txt");
	array<String^>^ lineas2 = File::ReadAllLines("usuarios.txt");
	String^ separadores = ";";

	for each (String ^ lineaPersonal in lineas) {
		array<String^>^ datos = lineaPersonal->Split(separadores->ToCharArray());
		int codigoPersonal = Convert::ToInt32(datos[0]);
		String^ nombrePersonal = datos[1];
		String^ apellidoPaternoPersonal = datos[2];
		String^ apellidoMaternoPersonal = datos[3];
		String^ dniPersonal = datos[4];
		String^ direccionPersonal = datos[5];
		String^ numeroPersonal = datos[6];
		String^ edadPersonal = datos[7];
		int codigoUsuarioPersonal = Convert::ToInt32(datos[8]);

		if (codigoPersonal == codigoPersonalBuscado) {
			for each (String ^ lineaUsuario in lineas2) {
				array<String^>^ datos2 = lineaUsuario->Split(separadores->ToCharArray());
				int codigoUsuario = Convert::ToInt32(datos2[0]);

				if (codigoUsuarioPersonal == codigoUsuario) {
					UsuarioController^ objUsuarioController = gcnew UsuarioController();
					objUsuarioController->LeerUsuarioDesdeArchivo();
					Usuario^ objUsuario = objUsuarioController->ObtenerUsuarioxCodigo(codigoUsuarioPersonal);

					objPersonalEncontrado = gcnew Personal(codigoPersonal, nombrePersonal, apellidoPaternoPersonal, apellidoMaternoPersonal,
						dniPersonal, direccionPersonal, numeroPersonal, edadPersonal, objUsuario);

					break;
					break;
				}
			}
		}
	}*/

	Abrirconexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Personal where codigo=" + codigoPersonalBuscado + ";";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()){
		int codigo = safe_cast<int>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ ApellidoPaterno = safe_cast<String^>(objData[2]);
		String^ ApellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dni = safe_cast<String^>(objData[4]);
		String^ direccion = safe_cast<String^>(objData[5]);
		String^ numeroDeTelefono = safe_cast<String^>(objData[6]);
		String^ edad = safe_cast<String^>(objData[7]);
		int codigoUsuario = safe_cast<int>(objData[8]);

		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		objUsuarioEncontrado = objUsuarioController->BuscarUsuario(codigoUsuario);

		objPersonalEncontrado = gcnew Personal(codigo, nombre, ApellidoPaterno, ApellidoMaterno, dni, direccion, numeroDeTelefono, edad, objUsuarioEncontrado);
	}

	CerrarConexion();
	return objPersonalEncontrado;
}

void PersonalController::escribirArchivoPersonal(List<Personal^>^ listaPersonal) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaPersonal->Count);
	for (int i = 0; i < listaPersonal->Count; i++) {

		Personal^ objPersonal = listaPersonal[i];
		lineasArchivo[i] = objPersonal->codigo + ";" + objPersonal->nombre + ";" + objPersonal->ApellidoPaterno + ";" +
			objPersonal->ApellidoMaterno + ";" + objPersonal->dni + ";" + objPersonal->direccion + ";" +
			objPersonal->NumeroDeTelefono + ";" + objPersonal->edad + ";" + objPersonal->objUsuario->codigo;
	}

	File::WriteAllLines("Personal.txt", lineasArchivo);

}

void PersonalController::eliminarPersonal(int codigoEliminar) {
	/*List<Personal^>^ listaPersonales = buscarPersonalAll();
	for (int i = 0; i < listaPersonales->Count; i++) {
		Personal^ objPersonal = listaPersonales[i];
		if (objPersonal->codigo == codigoEliminar) {
			listaPersonales->RemoveAt(i);
			break;
		}
	}
	escribirArchivoPersonal(listaPersonales);*/

	Personal^ objPersonal = buscarPersonalxCodigo(codigoEliminar);
	
	Abrirconexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	
	objSentencia->CommandText = "delete from Personal where codigo=" + codigoEliminar + ";";
	objSentencia->ExecuteNonQuery();

	objSentencia->CommandText = "delete from Usuario where codigo=" + objPersonal->objUsuario->codigo + ";";
	objSentencia->ExecuteNonQuery();

	CerrarConexion();
}


void PersonalController::editarPersonal(Personal^ objPersonalEditar) {
	Abrirconexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "UPDATE Personal SET nombre='" + objPersonalEditar->nombre + "', ApellidoPaterno='"
		+ objPersonalEditar->ApellidoPaterno + "', ApellidoMaterno='" + objPersonalEditar->ApellidoMaterno +
		"', dni='" + objPersonalEditar->dni + "',direccion='" + objPersonalEditar->direccion + "',numeroDeTelefono='" +
		objPersonalEditar->NumeroDeTelefono + "',edad='" + objPersonalEditar->edad + "' where codigo=" + objPersonalEditar->codigo+";";
	objSentencia->ExecuteNonQuery();
	
	objSentencia->CommandText = "UPDATE Usuario SET correo='" + objPersonalEditar->objUsuario->correo +
		"',password='" + objPersonalEditar->objUsuario->password + "' ,rango=" + objPersonalEditar->objUsuario->rango +" where codigo="
	+ objPersonalEditar->objUsuario->codigo +";";

	objSentencia->ExecuteNonQuery();
	CerrarConexion();
}
int PersonalController::cantidadpersonal() {
	int i = 0;
	Abrirconexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Personal;";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()){
		i = i + 1;
	}

	CerrarConexion();

	return i;
}


double PersonalController::reporteGatosPersonal() {
	double gastosPersonal = 0;
	Abrirconexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select rango,COUNT (*) from Usuario group by rango;";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int rango = safe_cast<int>(objData[0]);
		int cantidad = safe_cast<int>(objData[1]);

		if (rango == 1) {
			gastosPersonal = gastosPersonal + cantidad * 1500;
		}
		else {
			gastosPersonal = gastosPersonal + cantidad * 1025;
		}
	}
	CerrarConexion();
	return gastosPersonal;
}