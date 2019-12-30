#include "Personaje.h"

Personaje::Personaje(int ataque, int defensa) {
    this -> ataque = ataque;
    this -> defensa = defensa;
}

void Personaje::mostrarDatos() {
    cout << "Ataque: " << this -> ataque << endl;
    cout << "Defensa: " << this -> defensa << endl;
}