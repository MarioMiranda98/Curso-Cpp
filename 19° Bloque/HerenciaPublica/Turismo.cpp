#include "Turismo.h"

Turismo::Turismo(string marca, string color, string modelo, int numeroPuertas) : Vehiculos(marca, color, modelo) {
    this -> numeroPuertas = numeroPuertas;
}

Turismo::~Turismo() {}

int Turismo::getNumeroPuertas() { return this -> numeroPuertas; }
string Turismo::getModelos() { return getModelo(); }