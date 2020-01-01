#include "Vehiculos.h"

Vehiculos::Vehiculos(string marca, string color, string modelo) {
    this -> marca = marca;
    this -> color = color;
    this -> modelo = modelo;
}

string Vehiculos::getMarca() { return this -> marca; }
string Vehiculos::getColor() { return this -> color; }
string Vehiculos::getModelo() { return this -> modelo; }

void Vehiculos::setColor(string color) { this -> color = color; }