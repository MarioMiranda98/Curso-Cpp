/*Realice un programa que lea de la entrada estadar numeros hasta que se introduzca un cero. En ese momento
el programa debe terminar y mostrar en la salida estandar el numero de valores mayores que cero leidos*/

#include <iostream>
#include <stdlib.h>

int main(void) {
    int numero; 
    int contador = 0;

    do {
        std::cout << "Ingresa un numero" << std::endl;
        std::cin >> numero;
        if (numero > 0)
            contador++;
    } while(numero != 0);

    std::cout << "Valores distintos de 0: " << (contador - 1) << std::endl;

    return 0;
}