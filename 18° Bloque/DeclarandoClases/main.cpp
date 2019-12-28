#include <iostream>
#include "Punto.h"
using namespace std;

int main() {
    Punto p1(3, 5); //Instanciacion de manera estatica
    Punto* p2 = new Punto();//Instanciacion de manera dinamica
    //Para un objeto estatico se debe usar siempre un constructor por parametros, mientras que el dinamico no

    cout << "P1 X: " << p1.getX() << " Y: " << p1.getY() << endl;
    cout << "P2 X: " << p2 -> getX() << " Y: " << p2 -> getY() << endl;//Para acceder a los metodos se usa la flechita
    
    p2 -> setX(5);
    p2 -> setY(8);
    
    cout << "P2 X: " << p2 -> getX() << " Y: " << p2 -> getY() << endl;


    system("pause");
    return 0;
}