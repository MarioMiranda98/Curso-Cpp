#include "Deportivo.h"

Deportivo::Deportivo(string marca, string color, string modelo, int cilindrada) : Vehiculos(marca, color, modelo) {
    this -> cilindrada = cilindrada;
}

Deportivo::~Deportivo() { }

int Deportivo::getCilindrada() { return this -> cilindrada; }
string Deportivo::getMarcas() { return getMarca(); }