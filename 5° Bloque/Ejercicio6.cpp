/*
    Escribe un programa que defina un vector de numeros y calcule si existe algun numero en el vector 
    cuyo valor equivale a la suma del resto de los numeros del vector
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(void) {
    int numeros[] = {1, 2, 3, 4, 10};
    int suma = 0;
    int mayor = 0;

    for(int i = 0; i < 5; i++) {
        suma += numeros[i];

        if(numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    if(mayor == suma - mayor) {
        cout << "El numero " << mayor << " equivale a la suma de los demas" << endl;
    } else {
        cout << "El numero no equivale";
    }

    return 0;
}