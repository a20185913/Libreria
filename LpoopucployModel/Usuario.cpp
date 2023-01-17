#include "Usuario.h"

using namespace LpoopucployModel;

Usuario::Usuario() {

}

Usuario::Usuario(int codigo, String^ correo, String^ password, int rango) {
	this->codigo = codigo;
	this->correo = correo;
	this->password = password;
	this->rango = rango;
}
	