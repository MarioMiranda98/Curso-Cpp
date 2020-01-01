#include "HidroAvion.h"

HidroAvion::HidroAvion(string nombre, string modelo, string codigo) : Barco(nombre), Avion(modelo) {
    this -> codigo = codigo;
}

HidroAvion::~HidroAvion() { }

string HidroAvion::getCodigo() { return this -> codigo; }

void HidroAvion::mostrarDatos() {
    cout << "Nombre: " << this -> getNombre() << endl;
    cout << "Modelo: " << this -> getModelo() << endl;
    cout << "Codigo: " << this -> getCodigo() << endl;
}