/*
    Pedir su nombre al usuario y devolver el numero de vocales que hay.

    NOTA: Recuerda que debes utilizar punteros.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

template <class T>
T* crearPuntero(T*, int);

template <class T>
void liberarPuntero(T*);

int main() {
    char* nombre = NULL;
    int* vocalA = NULL;
    int* vocalE = NULL;
    int* vocalI = NULL;
    int* vocalO = NULL;
    int* vocalU = NULL;

    nombre = crearPuntero(nombre, 20);
    vocalA = crearPuntero(vocalA, 1);
    vocalE = crearPuntero(vocalE, 1);
    vocalI = crearPuntero(vocalI, 1);
    vocalO = crearPuntero(vocalO, 1);
    vocalU = crearPuntero(vocalU, 1);

    *vocalA = *vocalE = *vocalI = *vocalO = *vocalU = 0;

    cout << "Ingresa tu nombre: ";
    cin.getline(nombre, 20, '\n');

    for(char* ptr = nombre; *ptr != '\0'; ptr++) {
        switch(*ptr) {
            case 'a': *vocalA += 1; break;
            case 'e': *vocalE += 1; break;
            case 'i': *vocalI += 1; break;
            case 'o': *vocalO += 1; break;
            case 'u': *vocalU += 1; break;
        }
    }

    cout << "Cantidad de vocales" << endl;
    cout << "A: " << *vocalA << endl;
    cout << "E: " << *vocalE << endl;
    cout << "I: " << *vocalI << endl;
    cout << "O: " << *vocalO << endl;
    cout << "U: " << *vocalU << endl;

    liberarPuntero(nombre);
    liberarPuntero(vocalA);
    liberarPuntero(vocalE);
    liberarPuntero(vocalI);
    liberarPuntero(vocalO);
    liberarPuntero(vocalU);

    getch();
    return 0;
}

template <class T>
T* crearPuntero(T* tipo, int cantidad) {
    return new T[cantidad];
}

template <class T>
void liberarPuntero(T* puntero) {
    delete[] puntero;
}