#include <iostream>
using namespace std;

class Tablero {
    friend void menu(Tablero &);

    private:
        int x, y;
    
    public:
        Tablero(int, int);
        void moverArriba(int);
        void moverAbajo(int);
        void moverDerecha(int);
        void moverIzquierda(int);
        int getX();
        int getY();
};