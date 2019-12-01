/*Escriba un programa que tome cada 4 horas la temperatura exterior, leyendola durante un periodo de 24
horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del dia, la temperatura mas alta
y la mas baja*/

#include <iostream>
#include <stdlib.h>

int main(void) {
    float temperatura, mayor = 0;
    float menor = 999;
    float sumaTotal;
    float promedio;

    for (int i = 0; i < 24; i += 4) {
        std::cout << "Digite la temperatura de la hora: " << i << std::endl;
        std::cin >> temperatura;
        sumaTotal += temperatura;

        if (temperatura > mayor) { mayor = temperatura; }
        if (temperatura < menor) { menor = temperatura; }
    }

    promedio = sumaTotal / 6;

    std::cout << "El promedio de temperaturas es: " << promedio << std::endl;
    std::cout << "La temperatura mayor es: " << mayor << std::endl;
    std::cout << "La temperatura menor es: " << menor << std::endl;

    system("pause");
    return 0;
}