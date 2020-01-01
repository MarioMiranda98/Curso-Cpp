#include "Avion.h"

Avion::Avion(string modelo) {
    this -> modelo = modelo;
}

Avion::~Avion() { }

string Avion::getModelo() { return this -> modelo; }

void Avion::indicarAvion() {
    cout << "Desplazamiento por aire" << endl;
}