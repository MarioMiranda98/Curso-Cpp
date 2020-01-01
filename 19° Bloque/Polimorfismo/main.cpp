#include <iostream>
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"
using namespace std;

int main() {
    Poligono* poligono[2];

    poligono[0] = new Rectangulo(7, 4);
    poligono[1] = new Triangulo(3, 4, 4);

    for (int i = 0; i < 2; i++) {
        cout << "Perimetro: " << poligono[i] -> perimetro() << endl;
        cout << "Area: " << poligono[i] -> area() << endl; 
    }

    return 0;
}