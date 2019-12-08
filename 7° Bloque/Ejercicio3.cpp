/*
    Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales, en caso
    de no serlo, indicar cual es mayor alfabeticamente
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(void) {
    char cadena1[20];
    char cadena2[20];

    cout << "Ingrese la cadena 1: ";
    cin.getline(cadena1, 20, '\n');
    cout << "Ingrese la cadena 2: "; 
    cin.getline(cadena2, 20, '\n');

    if(strcmp(cadena1, cadena2) == 0)
        cout << "Las cadenas son iguales" << endl;
    else if(strcmp(cadena1, cadena2) > 0)
        cout << "La cadena " << cadena1 << " es alfabeticamente mayor" << endl;
    else if(strcmp(cadena2, cadena1) > 0)
        cout << "La cadena " << cadena2 << " es alfabeticamente mayor" << endl;

    getch();
    return 0;
}