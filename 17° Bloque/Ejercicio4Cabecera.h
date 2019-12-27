#ifndef __EJERCICIO4CABECERA__
#define __EJERCICIO4CABECERA__

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <conio.h>
using namespace std;

struct Agenda {
    string nombre;
    string apellido;
    string telefono;
};

typedef struct Agenda ohNo;

void crearArchivo(ofstream &);
void menu(ohNo[20], ofstream &);
void crearContacto(ohNo[20], int &);
int almacenarContacto(ohNo, ohNo[20], int &);
void almacenar(ohNo[20], int &);
void agregarContacto(ohNo[20], int &, ofstream &);
void actualizarAlmacenados(ohNo[20], int &, int);
void visualizarContactos();

#endif //!__EJERCICIO4CABECERA__