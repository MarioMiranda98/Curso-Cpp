/*
    Crear una lista que almacene n numeros enteros y calcular el menor y mayor de ellos
*/

#include "Lista.h"

struct Par {
    int mayor;
    int menor;
};

struct Par devuelveMayorMenor(Nodo *&);

int main() {
    Nodo* lista = NULL;
    char c;
    int dato;

    do {
        cout << "Ingrese dato: ";
        cin >> dato;

        insertar(lista, dato);

        cout << "Insertar otro dato (S/N): ";
        cin >> c;
    }while(c != 'N');

    struct Par par;

    par = devuelveMayorMenor(lista);

    cout << "El numero mayor es: " << par.mayor << endl;
    cout << "El numero menor es: " << par.menor << endl;

    getch();
    return 0;
}

struct Par devuelveMayorMenor(Nodo *&lista) {
    struct Par par;
    int mayor = 0;
    int menor = 999999;

    Nodo *aux = lista;

    while(aux != NULL) {
        if(aux -> dato > mayor) 
            mayor = aux -> dato;
        
        if(aux -> dato < menor)
            menor = aux -> dato;

        aux = aux -> ptrSiguiente; 
    }

    par.mayor = mayor;
    par.menor = menor;

    return par;
}