#ifndef __VEHICULOS__
#define __VEHICULOS__

#include <iostream>
using namespace std;

class Vehiculos {
    private:
        string marca;
        string color;

    protected:
        string modelo;
        
        string getModelo();

    public:
        Vehiculos(string, string, string);

        string getMarca();
        string getColor();

        void setColor(string);
};

#endif //!__VEHICULOS__