/*
    Transmision de direcciones

    Ejemplo: Intercambiar el valor de 2 variables
*/

#include <iostream>
#include <conio.h>
using namespace std;

void intercambio(float *, float *);

int main() {
    float num1 = 20.8;
    float num2 = 6.78;

    cout << "Numero 1: " << num1 << " Numero 2: " << num2 << endl;

    intercambio(&num1, &num2);

    cout << "Numero 1: " << num1 << " Numero 2: " << num2 << endl;

    getch();
    return 0;
}

void intercambio(float *dirNum1, float *dirNum2) {
    float aux;

    aux = *dirNum1;
    *dirNum1 = *dirNum2;
    *dirNum2 = aux;
}