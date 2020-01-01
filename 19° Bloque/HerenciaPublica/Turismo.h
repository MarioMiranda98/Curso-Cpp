#include <iostream>
#include "Vehiculos.h"
using namespace std;

class Turismo : public Vehiculos {
    private:
        int numeroPuertas;

    public:
        Turismo(string, string, string, int);
        ~Turismo();

        int getNumeroPuertas();
        string getModelos();
};