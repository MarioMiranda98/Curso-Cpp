/*
    Ejemplo:
    Hacer un programa que muestre el alfabeto, caracter a caracter, utilizando recursividad indirecta
*/

#include <iostream>
using namespace std;

void funcionA(char);
void funcionB(char);

int main() {
    cout << "Alfabeto" << endl;

    funcionA('Z');

    cout << endl;

    return 0;
}

void funcionA(char caracter) {
    if(caracter > 'A')
        funcionB(caracter);

    cout << caracter << ", ";
}

void funcionB(char caracter) {
    funcionA(--caracter);
}