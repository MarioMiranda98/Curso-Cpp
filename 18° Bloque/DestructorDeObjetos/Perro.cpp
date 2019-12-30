#include "Perro.h"

Perro::Perro(string nombre, string raza) {
    this -> nombre = nombre;
    this -> raza = raza;
}

Perro::~Perro(){}

void Perro::mostrarDatos() {
    cout << "Nombre: " << this -> nombre << endl;
    cout << "Raza: " << this -> raza << endl;
}

void Perro::jugar() {
    cout << "El perro " << this -> nombre << " esta jugando" << endl;
}