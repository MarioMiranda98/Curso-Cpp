#include "Estatico.h"

int Estatico::contador = 0;//Inicializando el valor del contador

Estatico::Estatico() {
    contador ++;
}

int Estatico::getContador() {
    return this -> contador;
}

int Estatico::sumar(int a, int b) {
    return a + b;
}