/*Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n*/
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(void) {
    int n = 0;
    int suma = 0;

    cout << "Ingrese el valor de n" << endl;
    cin >> n;

    for (int i = 1; i <= n; i += 1)
        suma += (pow(2, i));

    cout << "El valor de la suma es: " << suma <<endl;

    system("pause");
    return 0;
}