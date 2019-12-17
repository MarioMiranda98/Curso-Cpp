#ifndef __PILA__
#define __PILA__

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo {
    int dato;
    Nodo* ptrSiguiente;
};

typedef struct Nodo Nodo;

void menu(Nodo *&);
void insertar(Nodo *&, int);
int sacar(Nodo *&);
void mostrar(Nodo *&);
bool vacia(Nodo *&);

#endif //!__PILA__