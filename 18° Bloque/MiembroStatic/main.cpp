#include <iostream>
#include "Estatico.h"
using namespace std;

int main() {
    Estatico* obj1 = new Estatico();
    cout << obj1 -> getContador() << endl;
    
    Estatico* obj2 = new Estatico();
    cout << obj2 -> getContador() << endl;

    Estatico* obj3 = new Estatico();
    cout << obj1 -> getContador() << endl;

    cout << "Sumar: " << Estatico::sumar(5, 8) << endl;

    return 0;
}