#include "Tablero.h"

Tablero::Tablero(int x, int y) {
    this -> x = x;
    this -> y = y;
}

void Tablero::moverArriba(int n) {
    this -> y += n;
}

void Tablero::moverAbajo(int n) {
    this -> y -= n;
}

void Tablero::moverDerecha(int n) {
    this -> x += n;
}

void Tablero::moverIzquierda(int n) {
    this -> x -= n;
}

int Tablero::getX() { return this -> x; }
int Tablero::getY() { return this -> y; }