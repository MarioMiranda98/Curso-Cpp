#include <iostream>
using namespace std;

class Perro {
    private: 
        string nombre, raza;

    public:
        Perro(string, string);
        ~Perro(); //Destructor

        void mostrarDatos();
        void jugar();
};