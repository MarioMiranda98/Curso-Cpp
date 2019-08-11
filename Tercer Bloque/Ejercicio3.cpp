/*Escriba una programa que lea un valor entero y determine si se trata de un numero par o impar*/
#include <iostream>

using namespace std;

int main(void) {
    int numero;

    cout << "Escriba el numero" << endl;
    cin >> numero;

    if(numero == 0)
        cout << "EL numero es 0" << endl;
    else {
        if (numero % 2 == 0) 
            cout << "Es un numero par" << endl;
        else
            cout << "Es un numero impar" << endl;
    }

    return 0;
}