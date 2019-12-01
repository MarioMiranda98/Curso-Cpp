/*Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20 - 30]
o se introduzca el valor 0. El programa debe de entregar la suma de valores mayores a 0 introducidos*/
#include <iostream>
#include <stdlib.h>

int main(void) {
    int valor = 0, suma = 0;

    do {
        std::cout << "Introduzca un valor" << std::endl;
        std::cin >> valor; 
        if (valor > 0) {
            suma += valor;
        }
    } while((valor != 0) && ((valor < 20) || (valor > 30)));

    std::cout << "La suma de todos los valores es: " << suma << std::endl;

    system("pause");
    return 0;
}