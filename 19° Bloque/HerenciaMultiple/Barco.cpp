#include "Barco.h"

Barco::Barco(string nombre) {
    this -> nombre = nombre;
}

Barco::~Barco() { }

void Barco::indicarBarco() {
    cout << "El barco se desplaza en el agua" << endl;
}

string Barco::getNombre() { return this -> nombre; }