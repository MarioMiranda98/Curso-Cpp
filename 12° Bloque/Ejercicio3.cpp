/*
    Rellenar un array de 10 numeros, posteriormente utilizando punteros indicar cuales son numeros 
    pares y su posicion en memoria
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int arreglo[10];
    int *ptrArreglo = NULL;

    ptrArreglo = arreglo;

    for (int *ptr = ptrArreglo; ptr < (ptrArreglo + 10); ptr += 1) {
        cout << "Ingrese un numero: "; 
        cin >> *ptr;
    }

    for (int *ptr = ptrArreglo; ptr < (ptrArreglo + 10); ptr += 1) {
        if((*ptr % 2) == 0) {
            cout << "Numero par: " << *ptr << endl;
            cout << "Direccion: " << ptr << endl;
        }
    }

    getch();
    return 0;
}