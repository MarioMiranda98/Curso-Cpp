#include <iostream>
#include "Turismo.h"
using namespace std;

int main() {
    Turismo* t1 = new Turismo("Toyota", "Plomo", "GH89", 4);

    cout << "Color: " << t1 -> getColor() << endl;
    cout << "Marca: " << t1 -> getMarca() << endl;
    cout << "Numero Puertas: " << t1 -> getNumeroPuertas() << endl;

    t1 -> setColor("Negro");

    cout << "Color: " << t1 -> getColor() << endl;
    cout << "Modelo: " << t1 -> getModelos() << endl;
    
    delete t1;

    return 0;
}