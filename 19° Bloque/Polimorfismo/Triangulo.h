#include <iostream>
#include <math.h>
#include "Poligono.h"
using namespace std;

class Triangulo : public Poligono {
    private:
        float lado1, lado2, lado3;

    public:
        Triangulo(float, float, float);

        float perimetro();
        float area();
};