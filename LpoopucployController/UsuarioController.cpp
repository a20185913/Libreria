#include "UsuarioController.h"

using namespace LpoopucployController;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace LpoopucployModel;

UsuarioController::UsuarioController() {
	this->objConexion = gcnew SqlConnection();
	this->listaUsuarios = gcnew List<Usuario^>();
}
void UsuarioController::Cerrarconexion() {
	this->objConexion->Close();
}
void UsuarioController::Abrirconexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20185913;User Id=a20185913;Password=M1VyhrC9OTxX";
	this->objConexion->Open();
}
int UsuarioController::validar(String^ correo, String^ password) {
	Abrirconexion();
	int i = 0;
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Usuario Where correo='" + correo + "' and password='" + password + "';";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		i = i + 1;
	}
	Cerrarconexion();
	return i;
}
int UsuarioController::validarnivel(String^ correo, String^ password) {
	Abrirconexion();
	int i ;
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Usuario Where correo='" + correo + "' and password='" + password + "';";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		i =safe_cast<int>(objData[3]);
	}
	Cerrarconexion();
	return i;
}
void UsuarioController::LeerUsuarioDesdeArchivo() {
	this->listaUsuarios->Clear();
	array<String^>^ lineas = File::ReadAllLines("usuarios.txt");

	String^ separadores = ";";
	for each (String ^ lineaUsuario in lineas)
	{
		array<String^>^ palabras = lineaUsuario->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(palabras[0]);
		String^ correoUsuario = palabras[1];
		String^ passwordUsuario = palabras[2];
		int rangoUsuario = Convert::ToInt32(palabras[3]);

		Usuario^ objUsuario = gcnew Usuario(codigo, correoUsuario, passwordUsuario, rangoUsuario);
		this->listaUsuarios->Add(objUsuario);
	}
}

Usuario^ UsuarioController::ObtenerUsuarioxCodigo(int codigo) {
	List<Usuario^>^ listaUsuarios = buscarUsuarioAll();
	Usuario^ objUsuarioBuscado = nullptr;
	for (int i = 0; i < listaUsuarios->Count; i++) {
		Usuario^ objUsuario = listaUsuarios[i];
		if (objUsuario->codigo == codigo) {
			objUsuarioBuscado = listaUsuarios[i];
			break;
		}
	}
	return objUsuarioBuscado;
}


void UsuarioController::validarUsuarioYrango(String^ correo, String^ password,
	int* validarUsuario, int* rango){
	(*validarUsuario) = 0;
	array<String^>^ lineas = File::ReadAllLines("usuarios.txt");
	String^ separadores = ";";
	for each (String ^ lineaUsuario in lineas) {
		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());
		if (datos[1] == correo && datos[2] == password) {
			(*validarUsuario) = 1;
			(*rango) = Convert::ToInt32(datos[3]);
			break;
		}
	
	}
}


List<Usuario^>^ UsuarioController::buscarUsuarioAll() {
	List<Usuario^>^ listaUsuarioEncontrado = gcnew List<Usuario^>();
	array<String^>^ lineas = File::ReadAllLines("usuarios.txt");
	String^ separadores = ";";
	for each (String ^ lineaUsuario in lineas) {
		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());

		int codigoUsuario = Convert::ToInt32(datos[0]);
		String^ correoUsuario = datos[1];
		String^ passwordUsuario = datos[2];
		int rango = Convert::ToInt32(datos[3]);

		Usuario^ objUsuario = gcnew Usuario(codigoUsuario, correoUsuario, passwordUsuario, rango);
		listaUsuarioEncontrado->Add(objUsuario);
	}

	return listaUsuarioEncontrado;
}

int UsuarioController::agregarNuevoUsuario(Usuario^ objNuevoUsuario) {
	/*List<Usuario^>^ listaUsuario = buscarUsuarioAll();
	listaUsuario->Add(objNuevoUsuario);
	array<String^>^ lineasArchivo = gcnew array<String^>(listaUsuario->Count);

	for (int i = 0; i < listaUsuario->Count; i++) {
		Usuario^ objUsuario = listaUsuario[i];
		lineasArchivo[i] = objUsuario->codigo + ";" + objUsuario->correo + ";" + objUsuario->password + ";" + objUsuario->rango;
	}

	File::WriteAllLines("usuarios.txt", lineasArchivo);*/
	int codigo;
	Abrirconexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert into Usuario(correo,password,rango) values('" + objNuevoUsuario->correo + "','" + 
		objNuevoUsuario->password + "','" + 
		objNuevoUsuario->rango + "');";
	objSentencia->ExecuteNonQuery();

	objSentencia->Connection = this->objConexion;
	//select codigo from Usuario where correo = 'luis@pucp' and password = 'lpoo123' and rango = '1';
	objSentencia->CommandText = "select codigo from Usuario where correo='" + objNuevoUsuario->correo + "'and password ='" 
		+ objNuevoUsuario->password + "'and rango = '" + objNuevoUsuario->rango +"';";
	SqlDataReader^ objDato = objSentencia->ExecuteReader();
	while (objDato->Read()) {
		codigo = safe_cast<int>(objDato[0]);
	}
	Cerrarconexion();
	return codigo;
}

void UsuarioController::escribirArchivoUsuario(List<Usuario^>^ listaUsuario) {

	array<String^>^ lineasArchivo = gcnew array<String^>(listaUsuario->Count);
	for (int i = 0; i < listaUsuario->Count; i++) {
		Usuario^ objUsuario = listaUsuario[i];
		lineasArchivo[i] = objUsuario->codigo + ";" + objUsuario->correo + ";" + objUsuario->password + ";" + objUsuario->rango;
	}

	File::WriteAllLines("usuarios.txt", lineasArchivo);
}


void UsuarioController::EliminarUsuario(int codigoEliminar) {
	List<Usuario^>^ listaUsuarios = buscarUsuarioAll();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		Usuario^ objUsuario = listaUsuarios[i];
		if (objUsuario->codigo == codigoEliminar) {
			listaUsuarios->RemoveAt(i);
			break;
		}
	}
	escribirArchivoUsuario(listaUsuarios);
}


void UsuarioController::GrabarUsuarioContra(int codigo, String^ correo, String^ contra) {
	/*List<Usuario^>^ ListaUsuario = BuscarUsuaarioAll();
	for (int i = 0; i < ListaUsuario->Count; i++) {
		Usuario^ objUsuario = ListaUsuario[i];
		if (codigo == objUsuario->codigo) {
			ListaUsuario[i]->correo = correo;
			ListaUsuario[i]->password = contra;;
			break;
		}
	}
	EscribirArchivo(ListaUsuario);*/
	Abrirconexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "UPDATE Usuario SET password='" + contra + "',correo='" + correo + "' where codigo=" + codigo + ";";
	objSentencia->ExecuteNonQuery();
	Cerrarconexion();
}

List<Usuario^>^ UsuarioController::BuscarUsuaarioAll() {
	List<Usuario^>^ ListaRetorna = gcnew List<Usuario^>();
	array<String^>^ Lineas = File::ReadAllLines("usuarios.txt");
	String^ Separador = ";";
	for each (String ^ LineaUsuario in Lineas) {
		array<String^>^ Datos = LineaUsuario->Split(Separador->ToCharArray());
		int Codigo = Convert::ToInt32(Datos[0]);
		String^ correo = Datos[1];
		String^ contra = Datos[2];
		int rango = Convert::ToInt32(Datos[3]);
		Usuario^ objUsuario = gcnew Usuario(Codigo, correo, contra, rango);
		ListaRetorna->Add(objUsuario);
	}
	return ListaRetorna;
}
void UsuarioController::EscribirArchivo(List<Usuario^>^ ListaUsuario) {
	array<String^>^ LineasArchivo = gcnew array<String^>(ListaUsuario->Count);
	for (int i = 0; i < ListaUsuario->Count; i++) {
		Usuario^ objUsuario = ListaUsuario[i];
		LineasArchivo[i] = objUsuario->codigo + ";" + objUsuario->correo + ";" + objUsuario->password + ";" + objUsuario->rango;

	}
	File::WriteAllLines("usuarios.txt", LineasArchivo);
}
int UsuarioController::BuscarCodigo(String^ correo, String^ password) {
	/*array<String^>^ lineas = File::ReadAllLines("usuarios.txt");
	String^ separadores = ";";
	int codigo;
	for each (String ^ lineaUsuario in lineas) {
		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());
		if (datos[1] == correo && datos[2] == password) {
			codigo = Convert::ToInt32(datos[0]);
			break;
		}
	}
	return codigo;*/
	Abrirconexion();
	int codigo;
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Usuario Where correo='" + correo + "' and password='" + password + "';";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		codigo = safe_cast<int>(objData[0]);
	}
	Cerrarconexion();
	return codigo;

}
Usuario^ UsuarioController::BuscarUsuario(int codigo) {
	/*Usuario^ objusuario = nullptr;
	array<String^>^ lineas = File::ReadAllLines("usuarios.txt");
	String^ separadores = ";";
	for each (String ^ lineaUsuario in lineas) {
		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());
		int codigop = Convert::ToInt32(datos[0]);
		String^ correo = datos[1];
		String^ password = datos[2];
		int rango = Convert::ToInt32(datos[3]);
		if ( codigop == codigo) {
			objusuario = gcnew Usuario(codigop, correo, password, rango);
			break;
		}
	}
	return objusuario;*/
	Abrirconexion();
	Usuario^ objUsuario;
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Usuario Where codigo="+codigo+";";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigop = safe_cast<int>(objData[0]);
		String^ password = safe_cast<String^>(objData[1]);
		String^ correo = safe_cast<String^>(objData[2]);
		int rango = safe_cast<int>(objData[3]);
		objUsuario = gcnew Usuario(codigop,correo,password,rango);
	}
	Cerrarconexion();
	return objUsuario;

}
int UsuarioController::GastoPersonal() {
	int gasto = 0;
	array<String^>^ lineas = File::ReadAllLines("usuarios.txt");
	String^ separadores = ";";
	int sumador;
	for each (String ^ lineaUsuario in lineas) {
		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());
		sumador = Convert::ToInt32(datos[3]);
		if (sumador == 1) {
			gasto = gasto + (930*2);
		}
		else {
			gasto = gasto + 930;
		}
		
	}
	return gasto;
}