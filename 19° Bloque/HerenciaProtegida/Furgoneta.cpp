#include "Furgoneta.h"

Furgoneta::Furgoneta(string marca, string color, string modelo, int carga) : Vehiculos(marca, color, modelo) {
    this -> carga = carga;
}

Furgoneta::~Furgoneta() { }

int Furgoneta::getCarga() { return this -> carga; }
string Furgoneta::getColour() { return getColor(); }