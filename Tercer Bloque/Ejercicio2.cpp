/*Escriba un programa que lea tres numeros y determine cual de ellos es el mayor */
#include <iostream>

using namespace std;

int main(void) {
    int numero1, numero2, numero3;

    cout << "Ingrese los tres numeros separados por espacios" << endl;
    cin >> numero1 >> numero2 >> numero3;

    if(numero1 > numero2) {
        if(numero1 > numero3) 
            cout << "El numero mayor es el numero1 = " << numero1 << endl;
        else 
            cout << "El numero mayor es el numero3 = " << numero3 << endl;
    } else {
        if(numero2 > numero3)
            cout << "El numero mayor es el numero2 = " << numero2 << endl;
        else
            cout << "El numero mayor es el numero3 = " << numero3 << endl;
    }

    return 0;
}