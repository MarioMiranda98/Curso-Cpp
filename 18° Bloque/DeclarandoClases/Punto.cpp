#include "Punto.h"

Punto::Punto(int x, int y) { //Constructor
    this -> x = x;
    this -> y = y;
}

Punto::Punto() { //Constructor sobrecargado
    this -> x = 0;
    this -> y = 0;
}

//Siempre llamar a la funcion con el nombre de la clase antes de esto
void Punto::setX(int x) { this -> x = x; }
void Punto::setY(int y) { this -> y = y; }

int Punto::getX() { return x; }
int Punto::getY() { return y; } 