#include "Cliente.h"

using namespace LpoopucployModel;

Cliente::Cliente() {

}

Cliente::Cliente(int codigo, String^ nombre, String^ ApellidoPaterno, String^ ApellidoMaterno, String^ dni, String^ direccion, String^ correo, Membresia^ objMembresia) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->ApellidoPaterno = ApellidoPaterno;
	this->ApellidoMaterno = ApellidoMaterno;
	this->dni = dni;
	this->direccion = direccion;
	this->correo = correo;
	this->objMembresia = objMembresia;
}
