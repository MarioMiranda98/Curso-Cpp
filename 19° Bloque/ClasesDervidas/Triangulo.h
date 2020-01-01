#include "Figura.h"
#include <math.h>

class Triangulo : public Figura {
    private:
        float lado1, lado2, lado3;

    public:
        Triangulo(int, float, float, float);

        float areaTriangulo();
};