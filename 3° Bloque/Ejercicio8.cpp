/*Escriba un programa que lea de la entrada estandar tres numeros. Despues debe leer un cuarto numero
e indicar si el numero coincide con algunos de los introducidos con anterioridad*/

#include <iostream>

int main(void) {
    int numero1, numero2, numero3;
    int numero4;

    std::cout << "Introduce los 4 numeros" << std::endl;
    std::cin >> numero1 >> numero2 >> numero3 >> numero4;

    if ((numero1 == numero4) || (numero2 == numero4) || (numero3 == numero4)) 
        std::cout << "El numero " << numero4 << " Coincide" << std::endl;
    else
        std::cout << "No hay coincidencias" << std::endl;

    return 0;
}