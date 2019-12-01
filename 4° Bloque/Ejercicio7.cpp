/*Escriba un programa que calcule el valor de 1+2+3+...+n*/
#include <iostream>
#include <conio.h>

int main(void) {
    int n = 0;
    int suma = 0;

    std::cout << "Ingrese el tope de la suma" << std::endl;
    std::cin >> n;

    for (int i = 1; i <= n; i += 1)
        suma += i;

    std::cout << "La suma es: " << suma << std::endl;

    getch();
    return 0;
}