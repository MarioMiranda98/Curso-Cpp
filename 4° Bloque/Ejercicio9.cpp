/*Escriba un programa que calcule el valor de : 1*2*3*...*n (factorial de un numero)*/
#include <iostream>
#include <conio.h>

int main(void) {
    int n = 0;
    int factorial = 1;

    std::cout << "Ingrese el valor de factorial" << std::endl;
    std::cin >> n;

    for (int i = 1; i <= n; i += 1)
        factorial *= i;
    
    std::cout << "El factorial es: " << factorial << std::endl;

    getch();
    return 0;
}