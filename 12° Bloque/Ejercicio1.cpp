/*
    Comprobar si un numero es par o impar, y señalar la direccion de memoria donde se esta guardando el
    numero. Con punteros.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int numero;
    int *ptrNumero = NULL; 

    cout << "Digite un numero: ";
    cin >> numero;

    ptrNumero = &numero;


    if((*ptrNumero % 2) == 0)
        cout << "El numero es par, La direccion de memoria es: " << ptrNumero << endl;
    else 
        cout << "El numero es impar, La direccion de memoria es: " << ptrNumero << endl;

    getch();
    return 0;
}