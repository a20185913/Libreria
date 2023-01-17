#include "Membresia.h"

using namespace LpoopucployModel;

Membresia::Membresia() {

}

Membresia::Membresia(int codigo, String^ nivel, String^ FechaInicio, String^ FechaFin) {
	this->codigo = codigo;
	this->nivel = nivel;
	this->FechaInicio = FechaInicio;
	this->FechaFin = FechaFin;
}