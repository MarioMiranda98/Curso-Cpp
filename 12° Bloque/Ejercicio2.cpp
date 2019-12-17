/*
    Determinar si un numero es primo o no; con punteros y ademas indicar en que posicion de memoria
    se guardo el numero.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int num;
    int *ptrNum = NULL;
    int divisor = 0;
    int i = 1;
    bool bandera = true;

    cout << "Ingrese un numero: ";
    cin >> num;

    ptrNum = &num;
    
    while((i <= *ptrNum)) {
        if(divisor > 1) {
            bandera = false;
            break;
        }

        if((*ptrNum % i) == 0)
            divisor += 1;
        
        i += 1;
    }   

    if(bandera) {
        cout << "El numero es primo, Direccion " << ptrNum << endl;
    } else {
        cout << "El numero no es primo, Direccion " << ptrNum << endl;
    }

    getch();
    return 0;
}