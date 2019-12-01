/*
    Realice un programa que calcule la descomposicion en factores primos de un numero entero
    Por ejemplo 20 = 2 * 2 * 5
*/

#include <iostream>
#include <conio.h>

int main() {
    int numeroEntrada;

    std::cout << "Ingrese el numero a descomponer" << std::endl;
    std::cin >> numeroEntrada;

    for(int i = 2; numeroEntrada > 1; i += 1) {
        while(numeroEntrada % i == 0) {
            std::cout << i << " ";
            numeroEntrada /= i;
        }
    }

    getch();
    return 0;
}