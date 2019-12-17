/*
    Hacer un programa para agregar numeros enteros a una pila, hasta que el usuario lo decida,
    despues mostrar todos los numeros introducidos en la pila.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo {
    int dato;
    Nodo* ptrSiguiente;
};

typedef struct Nodo Nodo;

void insertar(Nodo *&, int);
int sacar(Nodo *&);

int main() {
    Nodo* pila = NULL;
    int dato;
    char decision;

    do {
        cout << "Ingresa un dato: ";
        cin >> dato;
        insertar(pila, dato);

        cout << "Deseas Insertar otro dato [S/N]: ";
        cin >> decision;
    }while(decision != 'N');

    system("cls");
    cout << "Sacando Elementos" << endl;
    while(pila != NULL) {
        cout << sacar(pila) << endl;
    }

    getch();
    return 0;
}

void insertar(Nodo *&pila, int dato) {
    Nodo* nodo = new Nodo();
    if(nodo == NULL) {
        cout << "No se pudo insertar el dato, memoria insuficiente" << endl;
        exit(EXIT_FAILURE);
    } else {
        nodo -> dato = dato;
        nodo -> ptrSiguiente = pila;
        pila = nodo;
        cout << "El dato: " << nodo -> dato << " ha sido insertado" << endl;
    }
}

int sacar(Nodo *&pila) {
    Nodo* aux = new Nodo();

    aux = pila;
    int dato = aux -> dato;
    pila = aux -> ptrSiguiente;
    delete aux;

    return dato;
}