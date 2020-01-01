#include <iostream>
#include "Triangulo.h"
using namespace std;

int main() {
    Triangulo* t1 = new Triangulo(3, 5, 6, 7);
    
    cout << "Numero de lados: " << t1 -> getNLados() << endl;
    cout << "Area: " << t1 -> areaTriangulo() << endl;

    delete t1;

    return 0;
}