/*
    Crear una lista que almacene N numero reales y calcular la suma y su promedio
*/

#include "lista.h"

struct Op {
    float suma;
    float promedio;
};

typedef struct Op Op;

Op operaciones(Nodo *&);

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

    Op o = operaciones(lista);

    cout << "La suma es: " << o.suma << endl;
    cout << "El promedio es: " << o.promedio << endl;

    getch();
    return 0;
}

Op operaciones(Nodo *&lista) {
    int i = 0;
    Op control;

    Nodo* aux = lista;

    while(aux != NULL) {
        control.suma += aux -> dato;
        i +=1;
        aux = aux -> ptrSiguiente;
    }

    if (i != 0)
        control.promedio = (control.suma / i);
    else 
        control.promedio = 0;

    return control;
}