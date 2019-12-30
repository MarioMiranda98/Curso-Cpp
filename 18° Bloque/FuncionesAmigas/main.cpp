//Funciones Amigas
#include <iostream>
#include "Personaje.h"
using namespace std;

void modificar(Personaje &, int, int);

int main() {
    Personaje* principal = new Personaje(150, 200);
    principal -> mostrarDatos();

    cout << "Modificando datos" << endl;
    modificar(*principal, 200, 215); 

    principal -> mostrarDatos();

    delete principal;

    return 0;
}

void modificar(Personaje &p, int ataque, int defensa) {
    p.ataque = ataque;
    p.defensa = defensa;
}