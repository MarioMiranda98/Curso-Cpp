/*
    Definir una plantilla dentro de un archivo de cabecera llamado "intercambio.h" que pueda 
    intercambiar el valor de dos elementos del mismo tipo
*/

#include <iostream>
#include "intercambio.h"
using namespace std;

int main() {
    char a = 'a';
    char b = 'b';

    int u = 1;
    int d = 2;

    cout << "Valores originales" << endl;
    cout << "a: " << a << " b: " << b << endl;
    cout << "u: " << u << " d: " << d << endl;

    cout << "Intercambio" << endl;

    intercambiar(a, b);
    intercambiar(u, d);

    cout << "Valores intercambiados" << endl;
    cout << "a: " << a << " b: " << b << endl;
    cout << "u: " << u << " d: " << d << endl;

    return 0;
}