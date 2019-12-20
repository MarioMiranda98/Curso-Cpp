#ifndef __LISTA__
#define __LISTA__

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo {
    int dato;
    Nodo* ptrSiguiente;
};

typedef struct Nodo Nodo;

void insertar(Nodo *&, int);
void mostrar(Nodo *&);
void menu(Nodo *&);
bool busqueda(Nodo *&, int);
int eliminar(Nodo *&, int);
void eliminarTodo(Nodo *&);

#endif //!__LISTA__