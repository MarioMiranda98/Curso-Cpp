#include <iostream>
#include "Expediente.h"
#include "Direccion.h"
using namespace std;

class Estudiante {
    private:
        string codigo;
        float promedio;
        Expediente exp;
        Direccion dir;

    public:
        Estudiante(string, float, int, string);

        void mostrarDatos();
};