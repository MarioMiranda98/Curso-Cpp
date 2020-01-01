#include "Vehiculos.h"

class Furgoneta : protected Vehiculos {
    private:
        int carga;

    public:
        Furgoneta(string, string, string, int);
        ~Furgoneta();

        int getCarga();
        string getColour();
};