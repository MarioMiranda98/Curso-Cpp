/*Escriba la siguiente expresion matematica como expresion en C++ ->(a+b)/(c+d)*/
#include <iostream>

int main (void) {
    float a = 0.0;
    float b = 0.0;
    float c = 0.0; 
    float d = 0.0;
    float resultado = 0.0;

    std::cout << "Introduce el valor de a, b, c, y d separado por espacios" << std::endl;
    std::cin >> a >> b >> c >> d;

    if((c + d) == 0.0)
        std::cout << "No se puede realizar la operacion" << std::endl;
    else {
        resultado = ((a + b) / (c + d));
        std::cout.precision(3);
        std::cout << "El resultado de la operacion es: " << resultado << std::endl;
    }

    return 0;
}