#include <iostream>
#include "Barco.h"
#include "Avion.h"
using namespace std;

class HidroAvion : public Barco, public Avion {
    private:
        string codigo;

    public:
        HidroAvion(string, string, string);
        ~HidroAvion(); 

        string getCodigo();
        void mostrarDatos();
};