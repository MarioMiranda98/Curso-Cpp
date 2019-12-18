#ifndef __COLA__
#define __COLA__

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
void mostrar(Nodo *&);
bool vacia(Nodo *&);

#endif //!__COLA__