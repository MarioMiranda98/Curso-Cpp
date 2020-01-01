#include <iostream>
#include "Vehiculos.h"
using namespace std;

class Deportivo : private Vehiculos {
    private:
        int cilindrada;

    public:
        Deportivo(string, string, string, int);
        ~Deportivo();

        int getCilindrada();
        string getMarcas();
};