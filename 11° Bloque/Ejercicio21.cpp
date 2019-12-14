/*
    Escriba una funcion recursiva que calcule un numero elevado a una potencia entera mayor o igual que
    cero: x^y.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int potencia(int, int);

int main() {
    int base;
    int exponente;

    do { 
        cout << "Ingrese base y exponente: ";
        cin >> base >> exponente;
    }while(exponente < 0);

    cout << "La potencia es: " << potencia(base, exponente) << endl;

    getch();
    return 0;
}

//e(0) = 1
//e(a) = a^n = a * a^(n-1) = a * a^(n-2)
int potencia(int base, int exponente) {
    if(exponente == 0) {
        return 1;
    } else {
        return base * potencia(base, exponente - 1);
    }
}