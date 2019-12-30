#include <iostream>
#include <conio.h>
#include "Perro.h"
using namespace std;

int main() {
    Perro perro1("Fido", "Doberman");

    perro1.mostrarDatos();
    perro1.jugar();
    perro1.~Perro();
    
    Perro* perro2 = new Perro("Sasa", "Pitbull");
    perro2 -> mostrarDatos();
    delete perro2;

    getch();
    return 0;
}