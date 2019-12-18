#include "Cola.h"

void menu(Nodo *&frente, Nodo *&fin) {
    int eleccion;

    while(1) {
        system("cls");
        cout << "Menu" << endl;
        cout << "1.-Insertar" << endl;
        cout << "2.-Eliminar" << endl;
        cout << "3.-Mostrar" << endl;
        cout << "4.-Salir" << endl;
        cin >> eleccion;

        system("cls");
        switch(eleccion) {
            case 1:
                int dato;
                cout << "Ingrese numero: ";
                cin >> dato;

                insertar(frente, fin, dato);
                getch();
                break;
            case 2:
                if(!vacia(frente)) 
                    cout << "Dato extraido: " << eliminar(frente, fin) << endl;
                else 
                    cout << "Cola vacia" << endl;
                
                getch();
                break;
            case 3:
                cout << "Mostrando" << endl;
                mostrar(frente);
                getch();
                break;
            case 4:
                exit(EXIT_SUCCESS);
                break;
            default:
                cout << "No hay mas opciones" << endl;
                break;
        }
    }
}

void insertar(Nodo *&frente, Nodo *&fin, int dato) {
    Nodo* nodo = new Nodo();

    if(nodo != NULL) {
        nodo -> dato = dato;
        nodo -> ptrSiguiente = NULL;

        if(vacia(frente))
            frente = nodo;
        else
            fin -> ptrSiguiente = nodo;
        fin = nodo;

        cout << "Dato insertado" << endl;
    } else {
        cout << "No hay mas memoria" << endl;
        exit(EXIT_FAILURE);
    }
}

int eliminar(Nodo *&frente, Nodo *&fin) {
    Nodo* aux = new Nodo();
    int dato;

    if(aux != NULL) {
        dato = frente -> dato;
        aux = frente;

        if(frente == fin) {
            frente = NULL;
            fin = NULL;
        } else 
            frente = frente -> ptrSiguiente;

        delete aux;
    } else {
        cout << "No hay mas memoria" << endl;
        exit(EXIT_FAILURE);
    }

    return dato;
}

void mostrar(Nodo *&frente) {
    Nodo* aux = new Nodo();

    if(aux != NULL) {
        aux = frente;
        while(aux != NULL) {
            cout << aux -> dato << ", ";
            aux = aux -> ptrSiguiente;
        }
    } else {
        cout << "No hay mas memoria" << endl;
        exit(EXIT_FAILURE);
    }
}

bool vacia(Nodo *&frente) {
    return (frente == NULL) ? true : false;
}