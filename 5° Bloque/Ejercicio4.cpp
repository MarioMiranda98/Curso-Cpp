/*
    Escriba un programa que defina un vector de numeros y muestre en la salida estandar el vector
    en orden inverso - del ultimo al primer elemento
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(void) {
    int elementos;

    cout << "Introduce la cantidad de elementos: ";
    cin >> elementos;
    cout << endl;

    int numeros[elementos];

    for(int i = 0; i < elementos; i++)
        cin >> numeros[i];

    cout << "Imprimiendo" << endl;

    for(int i = elementos - 1; i >= 0; i--)
        cout << numeros[i] << endl;

    getch();
    return 0;
}