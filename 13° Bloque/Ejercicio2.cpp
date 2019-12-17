/*
    Hacer un programa en C++, utilizando pilas que contenga el siguiente menu:

        1.- Insertar un caracter en la pila
        2.- Mostrar todos los elementos de la pila
        3.- Salir
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo {
    char caracter;
    Nodo* ptrSiguiente;
};

typedef struct Nodo Nodo;
void insertar(Nodo *&, char);
void mostrar(Nodo *&);
void menu(Nodo *&);

int main() {
    Nodo* pila = NULL;

    menu(pila);

    getch();
    return 0;
}

void menu(Nodo *&pila) {
    int eleccion;

    while(1) {
        system("cls");
        cout << "Menu" << endl;
        cout << "1.- Insertar" << endl;
        cout << "2.- Mostrar" << endl;
        cout << "3.- Salir" << endl;
        cin >> eleccion;

        system("cls");

        if(eleccion == 1) {
            char c;
            cout << "Ingrese un caracter: ";
            cin >> c;

            insertar(pila, c);
        } else if(eleccion == 2) {
            cout << "Mostrando" << endl;
            mostrar(pila);
        } else 
            exit(EXIT_SUCCESS);
    }
}

void insertar(Nodo *&pila, char caracter) {
    Nodo* nodo = new Nodo();

    if(nodo == NULL) {
        cout << "No hay mas memoria" << endl;
        exit(EXIT_FAILURE);
    } else {
        nodo -> caracter = caracter;
        nodo -> ptrSiguiente = pila;
        pila = nodo;
        cout << "Dato insertado correctamente" << endl;
    }
}

void mostrar(Nodo *&pila) {
    system("cls");
    Nodo* aux = new Nodo();
    aux = pila;
    while(aux != NULL) {
        cout << aux -> caracter << endl;
        aux = aux -> ptrSiguiente;
    }

    delete aux;
    getch();
}