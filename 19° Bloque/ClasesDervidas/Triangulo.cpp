#include "Triangulo.h"

Triangulo::Triangulo(int nLados, float lado1, float lado2, float lado3) : Figura(nLados) {  
    this -> lado1 = lado1;
    this -> lado2 = lado2;
    this -> lado3 = lado3;
}

float Triangulo::areaTriangulo() {
    float p = (lado1 + lado2 + lado3) / 2;
    float area = sqrt(p * (p - lado1) * (p - lado2) * (p - lado3));

    return area;
}