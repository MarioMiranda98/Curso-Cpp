/*
    Pedir su nombre al usuario en MAYUSCULA, si su nombre comienza por la letra A, convertir su nombre 
    a minuscula, caso contrario no convertir
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(void) {
    char nombre[20];

    cout << "Ingrese nombre en mayusculas: ";
    cin.getline(nombre, 20, '\n');

    if(!strncmp(nombre, "A", 1)) {
        strlwr(nombre);
        cout << nombre << endl;
    } else
        cout << nombre << endl; 

    getch();
    return 0;
}