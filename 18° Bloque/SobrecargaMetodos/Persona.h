//Implementacion de la clase Persona
#include <iostream>
using namespace std;

class Persona {
    private:
        string nombre;
        int edad;
        string dni;

    public:
        Persona(string);
        Persona(string, int);

        void correr();
        void correr(int);
};