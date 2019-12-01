/*Escriba un programa que calcule el valor de: 1!+2!+3!+..+n! (suma de factoriales)*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void) {
    int numeroFactoriales = 0;
    int factorial = 1;
    int sumaFactorial = 0;

    cout << "Ingrese la cantidad n de factoriales" << endl;
    cin >> numeroFactoriales;
    
    for (int i = 1; i <= numeroFactoriales; i += 1) {
        factorial = 1;
        for (int j = 1; j <= i; j += 1) {
            factorial *= j;
        }
        sumaFactorial += factorial;
    }

    cout << "La suma de factoriales es: " << sumaFactorial << endl;

    system("pause");
    return 0;
}