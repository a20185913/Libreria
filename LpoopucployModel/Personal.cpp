#include "Personal.h"

using namespace LpoopucployModel;

Personal::Personal() {

}

Personal::Personal(int codigo, String^ nombre, String^ ApellidoPaterno, String^ ApellidoMaterno, String^ dni, String^ direccion, String^ NumeroDeTelefono, String^ edad, Usuario^ objUsuario) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->ApellidoPaterno = ApellidoPaterno;
	this->ApellidoMaterno = ApellidoMaterno;
	this->dni = dni;
	this->direccion = direccion;
	this->NumeroDeTelefono = NumeroDeTelefono;
	this->edad = edad;
	this->objUsuario = objUsuario;
}
	