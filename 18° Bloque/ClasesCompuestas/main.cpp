#include <iostream>
#include "Estudiante.h"
using namespace std;

int main() {
    Estudiante* estudiante1 = new Estudiante("34FG", 9.5, 56, "Calle San Mateo");

    estudiante1 -> mostrarDatos();
    delete estudiante1;

    return 0;
}