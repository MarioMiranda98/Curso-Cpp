/*
    Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y otro real, convertirlos a sus
    respectivos valores y por ultimo sumarlos.
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(void) {
    char entero[10];
    char real[10];
    int valorEntero;
    float valorReal;

    cout << "Introduce una cadena de numeros entera: ";
    cin.getline(entero, 10, '\n');
    cout << "Introduce una cadena de numeros reales: ";
    cin.getline(real, 10, '\n');

    valorEntero = atoi(entero);
    valorReal = atof(real);

    float suma = ((float) valorEntero) + valorReal;

    cout << "La suma es: " << suma << endl;

    getch();
    return 0;
}