/*
    Desarrolle un programa que lea de la entrada estandar un vector de entores y determine el mayor
    elemento del vector.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(void) {
    int elementos;
    int mayor = 0;

    cout << "Introduce el numero de elementos: ";
    cin >> elementos;

    int numeros[elementos];

    for(int i = 0; i < elementos; i++) {
        cout << "Introduce los elementos del arreglo " << endl;
        cin >> numeros[i];

        if(numeros[i] > mayor){
            mayor = numeros[i];
        }
    }

    cout << "El numero mayor es: " << mayor << endl;

    getch();
    return 0;
}