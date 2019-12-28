#include "Persona.h"

int main() {
    Persona* p;//Para instanciar despues se debe usar un puntero

    p = new Persona("Mario", 21);

    p -> correr();
    p -> correr(20);


    return 0;
}