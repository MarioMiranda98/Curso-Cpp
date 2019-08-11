/*Escriba la siguiente expresion como expresion en C++*/
#include <iostream>

int main(void) {
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    float d = 0.0;    
    float resultado = 0.0;

    std::cout << "Ingrese los valores separados por espacios" << std::endl;
    std::cin >> a >> b >> c >> d;
    
    if ((c-d) == 0) 
        std::cout << "No se puede realizar el calculo" << std::endl;
    else {
        resultado = (a + (b / (c - d)));
        std::cout.precision(5);
        std::cout << "El resultado es: " << resultado << std::endl;
    }

    return 0;
}