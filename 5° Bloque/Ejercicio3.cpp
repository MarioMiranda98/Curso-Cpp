/*
    Escriba un programa que lea de la entrada estandar un vector de numeros y muestre en la salida
    estandar los numeros del vector con sus indices asociados
*/

#include <iostream>
#include <conio.h>

int main() {
    int numeros[100];
    int elementos;

    std::cout << "Introduce la cantidad de elementos: ";
    std::cin >> elementos;
    std::cout << std::endl;

    for(int i = 0; i < elementos; i++)
        std::cin >> numeros[i];

    for(int i = 0; i < elementos; i++)
        std::cout << (i + 1) << " : " << numeros[i] << std::endl; 

    getch();
    return 0;
}