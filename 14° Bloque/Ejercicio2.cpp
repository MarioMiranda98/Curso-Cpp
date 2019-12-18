/*
    Hacer un programa que guarde datos de clientes de un banco, los almacene en cola, y por ultimo
    muestre los clientes en orden correcto
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Cliente {
    char Nombre[30];
    char clave[10];
    int edad;
};

typedef struct Cliente Cliente;

struct Nodo {
    Cliente cliente;
    Nodo *ptrSiguiente;
};

typedef struct Nodo Nodo;

void menu(Nodo *&, Nodo *&);
void insertar(Nodo *&, Nodo *&);
void mostrar(Nodo *&);
bool vacia(Nodo *&);
Cliente datos();

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
        cout << "2.- Mostrar" << endl;
        cout << "3.- Salir" << endl;
        cin >> eleccion;

        system("cls");

        if(eleccion == 1) {
            insertar(frente, fin);
            getch();
        } else if(eleccion == 2) {
            if(!vacia(frente)) {
                cout << "Mostrando" << endl;
                mostrar(frente);
            } else 
                cout << "Cola Vacia" << endl;

            getch();
        } else 
            exit(EXIT_SUCCESS);
    }
}

Cliente datos() {
    Cliente c;

    fflush(stdin);
    cout << "Inserte nombre: ";
    cin.getline(c.Nombre, 30, '\n');
    fflush(stdin);
    cout << "Inserte clave: ";
    cin.getline(c.clave, 10, '\n');
    fflush(stdin);
    cout << "Inserte edad: ";
    cin >> c.edad;

    return c;
}

void insertar(Nodo *&frente, Nodo *&fin) {
    Nodo* nodo = new Nodo();

    if(nodo != NULL) {
        nodo -> cliente = datos();
        nodo -> ptrSiguiente = NULL;

        if(vacia(frente)) {
            frente = nodo;
        } else {
            fin -> ptrSiguiente = nodo;
        }

        fin = nodo;

        cout << "Cliente insertado";
    } else {
        cout << "No hay mas memoria" << endl;
        exit(EXIT_FAILURE);
    }
}

void mostrar(Nodo *&frente) {
    Nodo* aux = new Nodo();

    if(aux != NULL) {
        aux = frente;
        while(aux != NULL) {
            cout << "Cliente" << endl;
            cout << "Nombre: " << aux -> cliente.Nombre << endl;
            cout << "Clave: " << aux -> cliente.clave << endl;
            cout << "Edad: " << aux -> cliente.edad << endl;
            cout << endl;

            aux = aux -> ptrSiguiente;
        }

        delete aux;
    } else {
        cout << "No hay mas memoria" << endl;
        exit(EXIT_FAILURE);
    }
}

bool vacia(Nodo *&frente) {
    return (frente == NULL) ? true : false;
}