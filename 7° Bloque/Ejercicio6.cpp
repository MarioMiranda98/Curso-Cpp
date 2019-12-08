/*
    Convertir dos cadenas de minusculas a MAYUSCULAS. Compararlas y decir si son iguales o no
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(void) {
    char cadena1[50];
    char cadena2[50];

    cout << "Ingrese una cadena: ";
    cin.getline(cadena1, 50, '\n');
    cout << "Ingrese una cadena: ";
    cin.getline(cadena2, 50, '\n');

    strupr(cadena1);
    strupr(cadena2);

    if(!strcmp(cadena1, cadena2))
        cout << "Son iguales" << endl;
    else 
        cout << "No son iguales" << endl;

    getch();
    return 0;
}