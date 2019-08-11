/*Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el
caracter es una vocal minuscula, una vocal mayuscula o no es una vocal*/
#include <iostream>

using namespace std;

int main(void) {
    char caracter;

    cout << "Ingrese un caracter" << endl;
    cin >> caracter;

    switch (caracter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': 
            cout << "Es una vocal minuscula" << endl;
            break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': 
            cout << "Es una vocal" << endl;
            break;
        default:
            cout << "No es una vocal" << endl;
            break;
    }

    return 0;
}