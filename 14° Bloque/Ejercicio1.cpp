/*
    Hacer un programa en C++, utilizando colas que contenga el siguiente menu:

    1.- Insertar caracter a una cola
    2.- Mostrar todos los elementos de una cola
    3.- Salir
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

void menu(Nodo *&, Nodo *&);
void insertar(Nodo *&, Nodo *&, int);
int eliminar(Nodo *&, Nodo *&);
bool vacia(Nodo *&);

int main() {
    Nodo* frente = NULL;
    Nodo* fin = NULL;

    menu(frente, fin);

    getch();
    return 0;
}

void menu(Nodo *&frente, Nodo *&fin) {
    int eleccion;

    while(1) {
        system("cls");
        cout << "Menu" << endl;
        cout << "1.- Insertar" << endl;
        cout << "2.- Eliminar" << endl;
        cout << "3.- Salir" << endl;
        cin >> eleccion;

        system("cls");

        if(eleccion == 1) {
            int c;
            cout << "Ingrese un dato: ";
            cin >> c;

            insertar(frente, fin, c);
            getch();
        } else if(eleccion == 2) {
            if(!vacia(frente)) {
                cout << "Dato eliminado" << endl;
                cout << eliminar(frente, fin) << endl;
            } else 
                cout << "Cola Vacia" << endl;

            getch();
        } else 
            exit(EXIT_SUCCESS);
    }
}

void insertar(Nodo *&frente, Nodo *&fin, int dato) {
    Nodo* nodo = new Nodo();

    if(nodo != NULL) {
        nodo -> dato = dato;
        nodo -> ptrSiguiente =NULL;

        if(vacia(frente)) 
            frente = nodo;
        else 
            fin -> ptrSiguiente = nodo;
        fin = nodo;

        cout << "Dato insertado correctamente" << endl;
    } else {
        cout << "No hay mas memoria" << endl;
        exit(EXIT_FAILURE);
    }
}

int eliminar(Nodo *&frente, Nodo *&fin) {
    int dato;
    Nodo* aux = new Nodo();
    
    if(aux != NULL) {
        dato = frente -> dato;
        aux = frente;

        if(frente == fin) {
            frente = NULL;
            fin = NULL;
        } else {
            frente = frente -> ptrSiguiente;
        }

        delete aux;
    } else {
        cout << "No hay mas memoria" << endl;
        exit(EXIT_FAILURE);
    }

    return dato;
}

bool vacia(Nodo *&frente) {
    return (frente == NULL) ? true : false;
}