#include <iostream>
#include "Poligono.h"
using namespace std;

class Rectangulo : public Poligono {
    private:
        float base, altura;
    
    public:
        Rectangulo(float, float);

        float perimetro();
        float area();
};