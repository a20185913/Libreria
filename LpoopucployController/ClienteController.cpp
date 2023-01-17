#include "ClienteController.h"
#include "MembresiaController.h"

using namespace LpoopucployController;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace LpoopucployModel;

ClienteController::ClienteController() {
	this->objConexion = gcnew SqlConnection();
	listaCliente = gcnew List<Cliente^>();
}
void ClienteController::CerrarConexion() {
	this->objConexion->Close();
}
void ClienteController::Abrirconexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20185913;User Id=a20185913;Password=M1VyhrC9OTxX";
	this->objConexion->Open();
}
List<Cliente^>^ ClienteController::BuscarCliente(String^ dni) {
	/*List<Cliente^>^ listaCliente = gcnew List<Cliente^>();
	array<String^>^ lineas = File::ReadAllLines("Cliente.txt");
	array<String^>^ linea2= File::ReadAllLines("Membresia.txt");
	String^ separador = ";";
	for each (String ^ lineacliente in lineas) {
		array<String^>^ datos = lineacliente->Split(separador->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ apellp = datos[2];
		String^ apellm = datos[3];
		String^ objdni = datos[4];
		String^ direccion = datos[5];
		String^ correo = datos[6];
		int code = Convert::ToInt32(datos[7]);
		if (objdni == dni) {
			for each (String^ lineamembresia in linea2) {
				array<String^>^ dato = lineacliente->Split(separador->ToCharArray());
				int codigom = Convert::ToInt32(datos[0]);
				if (code == codigom) {
					MembresiaController^ funcion = gcnew MembresiaController();
					funcion->leermembresia();
					Membresia^ objMembresia = funcion->Buscarcodigo(code);
					Cliente^ objcliente = gcnew Cliente(codigo, nombre, apellp, apellm, objdni, direccion, correo, objMembresia);
					listaCliente->Add(objcliente);
					break;
					break;
				}
			}
		}
	}
	return listaCliente;*/
	Abrirconexion();
	List<Cliente^>^ listaCliente = gcnew List<Cliente^>();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Cliente Where dni like '%" + dni + "%';";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read() ) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ ApellidoPaterno = safe_cast<String^>(objData[2]);
		String^ ApellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dnip = safe_cast<String^>(objData[4]);
		String^ direccion = safe_cast<String^>(objData[5]);
		int codigoM = safe_cast<int>(objData[6]);
		MembresiaController^ funcion = gcnew MembresiaController();
		Membresia^ objMembresia = funcion->Buscarcodigo(codigoM);
		Cliente^ objCliente = gcnew Cliente(codigo, nombre, ApellidoPaterno, ApellidoMaterno, dnip, direccion,"correo", objMembresia);
		listaCliente->Add(objCliente);
	}
	CerrarConexion();
	return listaCliente;
}
List<Cliente^>^ ClienteController::Buscarall() {
	/*List<Cliente^>^ listaCliente = gcnew List<Cliente^>();

	array<String^>^ lineas = File::ReadAllLines("Cliente.txt");
	array<String^>^ linea2 = File::ReadAllLines("Membresia.txt");
	String^ separador = ";";
	
	for each (String ^ lineacliente in lineas) {
		array<String^>^ datos = lineacliente->Split(separador->ToCharArray());
		
		int codigo = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ apellp = datos[2];
		String^ apellm = datos[3];
		String^ objdni = datos[4];
		String^ direccion = datos[5];
		String^ correo = datos[6];
		int code = Convert::ToInt32(datos[7]);

		for each (String ^ lineamembresia in linea2) {
			array<String^>^ dato = lineamembresia->Split(separador->ToCharArray());
			int codigom = Convert::ToInt32(dato[0]);
			if (code == codigom) {
				MembresiaController^ funcion = gcnew MembresiaController();
				
				funcion->leermembresia();
				Membresia^ objMembresia = funcion->Buscarcodigo(code);
				Cliente^ objcliente = gcnew Cliente(codigo, nombre, apellp, apellm, objdni, direccion, correo, objMembresia);
				listaCliente->Add(objcliente);
				break;
			}
		}
	}
	return listaCliente;*/
	Abrirconexion();
	List<Cliente^>^ listaCliente = gcnew List<Cliente^>();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Cliente Where dni like '%%';";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ ApellidoPaterno = safe_cast<String^>(objData[2]);
		String^ ApellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dnip = safe_cast<String^>(objData[4]);
		String^ direccion = safe_cast<String^>(objData[5]);
		int codigoM = safe_cast<int>(objData[6]);
		MembresiaController^ funcion = gcnew MembresiaController();
		Membresia^ objMembresia = funcion->Buscarcodigo(codigoM);
		Cliente^ objCliente = gcnew Cliente(codigo, nombre, ApellidoPaterno, ApellidoMaterno, dnip, direccion, "correo", objMembresia);
		listaCliente->Add(objCliente);
	}
	CerrarConexion();
	return listaCliente;
}
void ClienteController::Agregar(Cliente^ objcliente) {
	/*List<Cliente^>^ listaCliente = Buscarall();
	listaCliente->Add(objcliente);
	array<String^>^ lineaArchivo = gcnew array<String^>(listaCliente->Count);
	for (int i = 0; i < listaCliente->Count; i++) {
		Cliente^ objcli = listaCliente[i];
		lineaArchivo[i] = objcli->codigo + ";" + objcli->nombre + ";" + objcli->ApellidoPaterno + ";" + objcli->ApellidoMaterno + ";" + objcli->dni + ";" + objcli->direccion + ";" + objcli->correo + ";" + objcli->objMembresia->codigo;
	}
	File::WriteAllLines("Cliente.txt", lineaArchivo);*/
	Abrirconexion();
	MembresiaController^ funcion = gcnew MembresiaController();
	int codigo = funcion->agregar(objcliente->objMembresia);
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert into Cliente(nombre,ApellidoPaterno,ApellidoMaterno,dni,direccion,codigoMembresia) values('" + objcliente->nombre + "','" + objcliente->ApellidoPaterno + "','" + objcliente->ApellidoMaterno + "','" + objcliente->dni + "','" + objcliente->direccion + "',"+codigo+");";
	objSentencia->ExecuteNonQuery();
	CerrarConexion();
}
void ClienteController::Eliminar(String^ dni) {
	/*List<Cliente^>^ listaCliente = Buscarall();
	for (int i = 0; i < listaCliente->Count; i++) {
		Cliente^ objcli = listaCliente[i];
		if (objcli->dni == dni) {
			listaCliente->RemoveAt(i);
			break;
		}
	}
	EscribirArchivo(listaCliente);*/
	Abrirconexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "delete from Cliente Where dni='" + dni + "';";
	objSentencia->ExecuteNonQuery();
	CerrarConexion();
}
void ClienteController::EscribirArchivo(List<Cliente^>^ lista) {
	array<String^>^ lineas = gcnew array<String^>(lista->Count);
	for (int i = 0; i < lista->Count; i++) {
		Cliente^ objcli = lista[i];
		lineas[i] = objcli->codigo + ";" + objcli->nombre + ";" + objcli->ApellidoPaterno + ";" + objcli->ApellidoMaterno + ";" + objcli->dni + ";" + objcli->direccion + ";" + objcli->correo + ";" + objcli->objMembresia->codigo;
	}
	File::WriteAllLines("Cliente.txt",lineas);
}
int ClienteController::ValidarCodigo(int codigo){
	List<Cliente^>^ listaretorna = gcnew List<Cliente^>();
	array<String^>^ lineas = File::ReadAllLines("Cliente.txt");
	String^ separador = ";";
	int i = 0;
	for each (String ^ lineacliente in lineas) {
		array<String^>^ datos = lineacliente->Split(separador->ToCharArray());
		int codigop = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ apellp = datos[2];
		String^ apellm = datos[3];
		String^ objdni = datos[4];
		String^ direccion = datos[5];
		String^ correo = datos[6];
		if (codigop == codigo) {
			i = i + 1;
			break;
		}
	}
	return i;
}
int ClienteController::ValidarDni(String^ dni) {
	/*List<Cliente^>^ listaretorna = gcnew List<Cliente^>();
	array<String^>^ lineas = File::ReadAllLines("Cliente.txt");
	String^ separador = ";";
	int i = 0;
	for each (String ^ lineacliente in lineas) {
		array<String^>^ datos = lineacliente->Split(separador->ToCharArray());
		int codigop = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ apellp = datos[2];
		String^ apellm = datos[3];
		String^ objdni = datos[4];
		String^ direccion = datos[5];
		String^ correo = datos[6];
		if (objdni == dni) {
			i = i + 1;
			break;
		}
	}
	return i;*/
	Abrirconexion();
	int i =  0;
	List<Cliente^>^ listaCliente = gcnew List<Cliente^>();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Cliente Where dni='"+dni+"';";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ ApellidoPaterno = safe_cast<String^>(objData[2]);
		String^ ApellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dnip = safe_cast<String^>(objData[4]);
		String^ direccion = safe_cast<String^>(objData[5]);
		int codigoM = safe_cast<int>(objData[6]);
		MembresiaController^ funcion = gcnew MembresiaController();
		Membresia^ objMembresia = funcion->Buscarcodigo(codigoM);
		Cliente^ objCliente = gcnew Cliente(codigo, nombre, ApellidoPaterno, ApellidoMaterno, dnip, direccion, "correo", objMembresia);
		listaCliente->Add(objCliente);
		i = i + 1;
	}
	CerrarConexion();
	return i;

}

Cliente^ ClienteController::buscarClientexCodigo(int codigoClienteBuscado) {
	/*Cliente^ objClienteEncontrado = nullptr;
	array<String^>^ lineas = File::ReadAllLines("Cliente.txt");
	array<String^>^ lineas2 = File::ReadAllLines("Membresia.txt");
	String^ separadores = ";";
	
	for each (String ^ lineaCliente in lineas) {
		array<String^>^ datos = lineaCliente->Split(separadores->ToCharArray());
		int codigoCliente = Convert::ToInt32(datos[0]);
		String^ nombreCliente = datos[1];
		String^ apellidoClientePaterno = datos[2];
		String^ apellidoClienteMaterno = datos[3];
		String^ dniCliente= datos[4];
		String^ direccionCliente = datos[5];
		String^ correoCliente = datos[6];
		int codigoMembresiaCliente = Convert::ToInt32(datos[7]);

		if (codigoCliente == codigoClienteBuscado) {
			for each (String ^ lineaMembresia in lineas2) {
				array<String^>^ datos2 = lineaMembresia->Split(separadores->ToCharArray());
				int codigoMembresia = Convert::ToInt32(datos2[0]);

				if (codigoMembresiaCliente == codigoMembresia) {
					MembresiaController^ objMembresiaController = gcnew MembresiaController();
					objMembresiaController->leermembresia();

					Membresia^ objMembresia = objMembresiaController->Buscarcodigo(codigoMembresiaCliente);

					objClienteEncontrado = gcnew Cliente(codigoCliente, nombreCliente, apellidoClientePaterno, apellidoClienteMaterno,
						dniCliente, direccionCliente, correoCliente, objMembresia);

					break;
					break;
				}
			}
		}
	}
	return objClienteEncontrado;*/
	Abrirconexion();
	Cliente^ objCliente;
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Cliente Where codigo like "+ codigoClienteBuscado +";";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ ApellidoPaterno = safe_cast<String^>(objData[2]);
		String^ ApellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dnip = safe_cast<String^>(objData[4]);
		String^ direccion = safe_cast<String^>(objData[5]);
		int codigoM = safe_cast<int>(objData[6]);
		MembresiaController^ funcion = gcnew MembresiaController();
		Membresia^ objMembresia = funcion->Buscarcodigo(codigoM);
		objCliente = gcnew Cliente(codigo, nombre, ApellidoPaterno, ApellidoMaterno, dnip, direccion, "correo", objMembresia);
		
	}
	CerrarConexion();
	return objCliente;
}
void ClienteController::editar(Cliente^ objCliente) {
	Abrirconexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "UPDATE Cliente SET nombre='" + objCliente->nombre + "',ApellidoPaterno='" + objCliente->ApellidoPaterno + "',ApellidoMaterno='" + objCliente->ApellidoMaterno + "',dni='" + objCliente->dni + "',direccion='" + objCliente->direccion + "' where codigo="+objCliente->codigo+";";
	objSentencia->ExecuteNonQuery();
	CerrarConexion();
}