/*
    Transmision de arreglos

    Ejemplo: Hallar el maximo elemento de un arreglo
*/

#include <iostream>
#include <conio.h>
using namespace std;

int hallarMaximo(int *numeros, int nElementos);

int main() {
    const int nElementos = 5;
    int numeros[nElementos] = {3, 12, 20, 8, 16};

    cout << "El numero maximo es: " << hallarMaximo(numeros, nElementos) << endl;

    getch();
    return 0;
}

int hallarMaximo(int *numeros, int nElementos) {
    int max = 0;

    for(int* ptr = numeros; ptr < (numeros + nElementos); ptr++) {
        if((*ptr) > max) {
            max = *ptr;
        }
    }

    return max;
}