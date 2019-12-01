/*Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la 
funcion pow*/
#include <iostream>
#include <stdlib.h>

int main(void) {
    int x, y;
    int valor = 1;

    std::cout << "Introduce x e y" << std::endl;
    std::cin >> x >> y;

    //2^3 = (2^2) * 2
    //2^2 = (2^1) * 2
    //2^1 = 2
    for (int i = 1; i <= y; i += 1)
        valor *= x;
    std:: cout << "El resultado es: " << valor << std::endl;

    system("pause");
    return 0;
}