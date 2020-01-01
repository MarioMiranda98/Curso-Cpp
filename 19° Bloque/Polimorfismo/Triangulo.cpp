#include "Triangulo.h"

Triangulo::Triangulo(float lado1, float lado2, float lado3) {
    this -> lado1 = lado1;
    this -> lado2 = lado2;
    this -> lado3 = lado3;
}

float Triangulo::perimetro() {
    return (lado1 + lado2 + lado3);
}

float Triangulo::area() {
    float a = ((lado1 + lado2 + lado3) / 2);
    return sqrt(a * (a - lado1) * (a - lado2) * (a - lado3));
}