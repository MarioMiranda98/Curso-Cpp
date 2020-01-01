#include <iostream>
using namespace std;

class Barco {
    private:
        string nombre;

    public:
        Barco(string);
        ~Barco();

        void indicarBarco();

        string getNombre();
};