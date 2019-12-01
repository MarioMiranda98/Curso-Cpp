/*Hacer un programa que calcule el resultado de la siguiente expresion 1-2+3-4+5-6+...+n*/
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(void) {
    int n = 0;
    int suma = 0;

    cout << "Ingrese el tope " << endl;
    cin >> n;

    for(int i = 1; i <= n; i += 1)
        suma += (pow((-1), (i-1))) * i;

    cout << "La suma es: " << suma << endl;

    system("pause");
    return 0;
}