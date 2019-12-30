#include <iostream>
using namespace std;

class Estatico {
    private:
        static int contador; //Declaracion de un atributo estatico
        string nombre;
        
    public: 
        Estatico();

        int getContador();

        static int sumar(int, int);
};