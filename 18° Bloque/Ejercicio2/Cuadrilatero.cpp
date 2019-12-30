#include "Cuadrilatero.h"

Cuadrilatero::Cuadrilatero(int ancho, int largo) {
    this -> ancho = ancho;
    this -> largo = largo;
}

Cuadrilatero::Cuadrilatero(int lado) {
    this -> ancho = lado;
    this -> largo = lado;
}

void Cuadrilatero::medidas() {
    int area;
    int perimetro;

    area = (this -> ancho * this -> largo);
    perimetro = ((this -> ancho * 2) + (this -> largo * 2));

    cout << "El area es: " << area << endl;
    cout << "El perimetro es: " << perimetro << endl;
}