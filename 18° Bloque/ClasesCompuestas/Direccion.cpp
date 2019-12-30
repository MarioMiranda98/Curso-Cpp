#include "Direccion.h"

Direccion::Direccion(string direccion) {
    this -> direccion = direccion;
}

Direccion::Direccion() {}
Direccion::~Direccion() {}

string Direccion::getDireccion() { return this -> direccion; }