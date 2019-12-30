#include <iostream>
using namespace std;

class Direccion {
    private:
        string direccion;

    public:
        Direccion(string direccion);
        Direccion();
        ~Direccion();

        string getDireccion();
};