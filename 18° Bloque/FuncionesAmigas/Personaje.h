#include <iostream>
using namespace std;

class Personaje {
    friend void modificar(Personaje &, int, int); //Funcion amiga, permite que acceda a todos los atributos de la clase en la funcion

    private:
        int ataque;
        int defensa;

    public:
        Personaje(int, int);

        void mostrarDatos();
};