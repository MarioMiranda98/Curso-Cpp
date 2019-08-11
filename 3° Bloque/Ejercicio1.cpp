/*Escriba un programa que lea dos numeros y determine cual es el mayor*/
#include <iostream>

using namespace std;

int main(void) {
    int numero1, numero2;

    cout << "Introduce ambos numeros separados por espacios" << endl;
    cin >> numero1 >> numero2;

    if (numero1 > numero2) 
        cout << "El numero mayor es " << numero1 << endl;
    else if (numero1 < numero2)
        cout << "El numero mayor es " << numero2 << endl;
    else 
        cout << "Son iguales" << endl;
    

    return 0;
}