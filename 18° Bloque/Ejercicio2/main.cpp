/*
    Construir un programa que calcule el area y perimetro de un cuadrilatero dada la longitud de sus
    dos lados. Los valores de la longitud deberan introducirse por linea de ordenes. Si es un cuadrado,
    solo se proporcionara la longitud de uno de los lados al constructor.
*/

#include <iostream>
#include "Cuadrilatero.h"
using namespace std;

int main() {
    int largo, ancho;
    Cuadrilatero* c;

    cout << "Introduce el largo y ancho del cuadrilatero: ";
    cin >> largo >> ancho;

    if(ancho == largo)//Si es cuadrado
        c = new Cuadrilatero(ancho);
    else 
        c = new Cuadrilatero(ancho, largo);

    c -> medidas();

    return 0;
}