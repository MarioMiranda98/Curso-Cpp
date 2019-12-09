//Busqueda Secuencial

#include <iostream>
#include <conio.h>
using namespace std;

int main(void) {
    int a[] = {3, 4, 2, 1, 5};
    int i, dato;
    char band = 'F';

    dato = 4;

    i = 0;
    while((band == 'F') && i < 4) {
        if(a[i] == dato) {
            band = 'V';
        }
        i++;
    }

    if(band == 'V') {
        cout << "El dato ha sido encontrado" << endl;
    } else {
        cout << "El dato no ha sido encontrado" << endl;
    }

    getch();
    return 0;
}