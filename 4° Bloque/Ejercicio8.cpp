/*Escriba un programa que calcule el valor de  1+3+5+...+2n-1*/
#include <iostream>
#include <conio.h>

int main(void) {
    int n = 0;
    int suma = 0;
    int tope;

    std::cout << "Ingrese el tope de la suma (Recuerde Tope = 2n - 1)" << std::endl;
    std::cin >> n;
    
    tope = (2 * n) - 1;

    for(int i = 1; i <=tope; i +=1)
        if((i % 2) == 1)
            suma += i;

    std::cout << "La suma es: " << suma << std::endl;

    getch();
    return 0;
}