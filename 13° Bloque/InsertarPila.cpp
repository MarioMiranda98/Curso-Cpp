//Insertar elementos en pila

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo {
    int dato;
    Nodo* ptrSiguiente;
};

typedef struct Nodo Nodo;

void agregar(Nodo *&, int);
int sacar(Nodo *&);

int main() {
    Nodo* pila = NULL;
    int n1, n2;

    cout << "Digite un numero: ";
    cin >> n1;

    agregar(pila, n1);

    cout << "Digite un numero: ";
    cin >> n2;

    agregar(pila, n2);

    cout << "Dato Extraido: " << sacar(pila) << endl;
    cout << "Dato Extraido: " << sacar(pila) << endl;

    getch();
    return 0;
}

void agregar(Nodo *&pila, int dato) {
    Nodo* nuevoNodo = new Nodo();//Crear Nodo

    if(nuevoNodo == NULL) { //Verificar la memoria
        cout << "No hay mas memoria" << endl;
        exit(EXIT_FAILURE);
    } else {
        nuevoNodo -> dato = dato; //Rellenar el nuevo nodo
        nuevoNodo -> ptrSiguiente = pila; //Hacer que apunte a la posicion de la pila
        pila = nuevoNodo; // movemos la posicion de la pila al tope

        cout << "Dato agregado" << endl;
    }
}

int sacar(Nodo *&pila) {
    Nodo* aux = new Nodo();
    aux = pila; //Igualamos posiciones

    int dato = aux -> dato; //Recuperamos el dato
    pila = aux -> ptrSiguiente; // Apuntamos al siguiente nodo
 
    delete aux; // Se elimina el auxiliar

    return dato;
}