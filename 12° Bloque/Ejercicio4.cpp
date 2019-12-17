/*
    Rellenar un arreglo con n numeros, posteriormente utilizando punteros determinar el menor elemento
    del arreglo.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int arreglo[100];
    int elementosArreglo;
    int *ptrArreglo = NULL;
    int menor = 999999;

    ptrArreglo = arreglo;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> elementosArreglo;

    for(int *ptr = ptrArreglo; ptr < (ptrArreglo + elementosArreglo); ptr += 1) {
        cout << "Ingrese un numero: ";
        cin >> *ptr;

        if((*ptr) < menor) {
            menor = *ptr;
        }
    }

    cout << "El menor numero es: " << menor << endl;

    getch();
    return 0;
}