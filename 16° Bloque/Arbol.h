#ifndef __ARBOL__
#define __ARBOL__

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo {
    int dato;
    Nodo* derecha;
    Nodo* izquierda;
    Nodo* padre;
};

typedef struct Nodo Nodo;

void menu(Nodo *&);
Nodo* crearNodo(int, Nodo *);
void insertar(Nodo *&, Nodo *, int);
void mostrar(Nodo *&, int);
bool buscar(Nodo *&, int);
void preOrden(Nodo *&);
void inOrden(Nodo *&);
void postOrden(Nodo *&);
void eliminar(Nodo *, int);
void eliminarNodo(Nodo *);
Nodo* minimo(Nodo *);
void reemplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);

#endif //!__ARBOL__