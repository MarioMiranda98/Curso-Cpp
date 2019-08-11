/*Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si 
el caracter es una vocal minuscula o no*/

#include <iostream>

using namespace std;

int main(void) {
    char caracter;
    
    cout << "Escriba un caracter" << endl;
    cin >> caracter;

    switch (caracter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': 
            cout << "Es una vocal minuscula" << endl;
            break;
        default:
            cout << "No es una vocal minuscula" << endl;
            break;
    }
    return 0;
}