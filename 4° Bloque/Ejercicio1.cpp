/*Realice un programa que solicite de la entrada eestandar un entero del 1 al 10 y muestre en la salida
estandar su tabla de multiplicar*/

#include <iostream>
#include <stdlib.h>

int main(void) {
    int numero;

    do{
        std::cout << "Ingresa un numero" << std::endl;
        std::cin >> numero;
    }while((numero < 1) || (numero > 10));

    for (int i = 1; i <= 20; i += 1)
        std::cout << numero << " * " << i << " = " << (numero * i) << std::endl;
    
    system("pause");
    return 0;
}