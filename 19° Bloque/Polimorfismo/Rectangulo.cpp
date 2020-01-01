#include "Rectangulo.h"

Rectangulo::Rectangulo(float base, float altura) {
    this -> base = base;
    this -> altura = altura;
}

float Rectangulo::perimetro() {
    return ((base * 2) + (altura * 2));
}

float Rectangulo::area() {
    return (base * altura);
}