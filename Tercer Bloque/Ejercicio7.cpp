/*Escriba un programa que solicite una edad (un entero) que indique en la salida estandar 
si la edad introducida esta en el rango (18 - 25)*/

#include <iostream>
using namespace std;

int main(void) {
    int edad = 0;

    cout << "Ingresa tu edad" << endl;
    cin >> edad;

    if ((edad >= 18) && (edad <= 25)) 
        cout << "Estas en el rango de edad" << endl;
    else
        cout << "No estas en el rango" << endl;
    return 0;
}