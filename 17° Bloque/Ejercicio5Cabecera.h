#ifndef __EJERCICIO5CABECERA__
#define __EJERCICIO5CABECERA__

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

struct Registro {
    char nombre[20];
    char hora[6];
    int pulsaciones;
};

typedef struct Registro Registro;

void menu();
void digitarPulsacion();
void masPulsaciones();
void mostrarPulsaciones();
void mostrarDatos(Registro);
Registro datos();

#endif //!__EJERCICIO5CABECERA__