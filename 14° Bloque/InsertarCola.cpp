#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo {
    int dato;
    Nodo* ptrSiguiente;
};

typedef struct Nodo Nodo;

void insertar(Nodo *&, Nodo *&, int);
int eliminar(Nodo *&, Nodo *&);
bool vacia(Nodo *&);

int main() {
    Nodo* frente = NULL;
    Nodo* fin = NULL;

    int n1, n2;

    cout << "Inserte dos datos: ";
    cin >> n1 >> n2;

    insertar(frente, fin, n1);
    insertar(frente, fin, n2);

    system("cls");
    cout << "Mostrando cola" << endl;
    while(frente != NULL) {
        cout << eliminar(frente, fin) << ", ";
    }

    cout << endl;

    getch();
    return 0;
}

void insertar(Nodo *&frente, Nodo *&fin, int dato) {
    Nodo* nodo = new Nodo();

    if(nodo != NULL) {
        nodo -> dato = dato;//Rellenamos el dato
        nodo -> ptrSiguiente = NULL; // Auntamos a null

        if(vacia(frente)) 
            frente = nodo;//Si la cola esta vacia se asigna el frente al primer nodo
        else 
            fin -> ptrSiguiente = nodo;//Si no es asi el ptrSiguiente apunta al siguiente nodo

        fin = nodo; //Resasignacion

        cout << "Nodo insertado correctamente" << endl;
    } else {
        cout << "No se pudo crear el nodo, memoria insuficiente" << endl;
        exit(EXIT_FAILURE);
    }
}

int eliminar(Nodo *&frente, Nodo*&fin) {
    Nodo* aux = new Nodo();
    int dato;

    if(aux != NULL) {
        dato = frente -> dato;//Obtener el valor del dato
        aux = frente;//Igualar el aux
        
        if(frente == fin) { //saber si es el ultimo nodo
            frente = NULL;
            fin = NULL;
        } else {
            frente = frente -> ptrSiguiente; //Caso contrario avanza al siguiente nodo;
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