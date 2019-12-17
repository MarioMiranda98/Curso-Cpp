//Implementando una pila dinamica
#include "Pila.h"

void menu(Nodo *&pila) {
    int eleccion;
    while(1) {
        system("cls");
        cout << "Menu" << endl;
        cout << "1.- Insertar" << endl;
        cout << "2.- Sacar" << endl;
        cout << "3.- Mostrar" << endl;
        cout << "4.- Salir" << endl;
        cin >> eleccion;

        system("cls");

        switch(eleccion) {
            case 1:
                int dato;
                cout << "Ingresa el dato: ";
                cin >> dato;
                insertar(pila, dato);
                break;
            case 2: 
                if(!vacia(pila))
                    cout << "Dato extraido: " << sacar(pila) << endl;
                else
                    cout << "Pila vacia" << endl;
                getch();
                break;
            case 3:
                cout << "Mostrando" << endl;
                mostrar(pila);
                break;
            case 4:
                exit(EXIT_SUCCESS);
                break;
            default:
                exit(EXIT_SUCCESS);
                break;
        }
    }
}

void insertar(Nodo *&pila, int dato) {
    Nodo* nodo = new Nodo();

    if(nodo != NULL) {
        nodo -> dato = dato;
        nodo -> ptrSiguiente = pila;
        pila = nodo;
    } else
        cout << "No hay mas memoria" << endl;
}

int sacar(Nodo *&pila) {
    int dato;
    Nodo* aux = new Nodo();

    aux = pila;
    dato = aux -> dato;
    pila = aux -> ptrSiguiente;
    delete aux;

    return dato;
}

void mostrar(Nodo *&pila) {
    Nodo* aux = new Nodo();
    aux = pila;

    while(aux != NULL) {
        cout << aux -> dato << endl;
        aux = aux -> ptrSiguiente;
    }

    delete aux;
    getch();
}

bool vacia(Nodo *&pila) {
    bool vacia = false;

    if(pila == NULL)
        vacia = true;
    else 
        vacia = false;

    return vacia;
}