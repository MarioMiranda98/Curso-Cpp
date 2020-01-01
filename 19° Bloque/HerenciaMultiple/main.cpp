#include <iostream>
#include "HidroAvion.h"
using namespace std;

int main() {
    HidroAvion* h1 = new HidroAvion("Veloz12", "HA99", "123OP");

    h1 -> mostrarDatos();

    h1 -> indicarBarco();
    h1 -> indicarAvion();

    delete h1;

    return 0;
}