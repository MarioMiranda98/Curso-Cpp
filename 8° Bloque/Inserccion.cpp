//Ordenamiento por Inserccion

#include <iostream>
#include <conio.h>
using namespace std;

int main(void) {
    int numeros[] = {4, 2, 3, 1, 5};
    int i, pos, aux;

    for(i = 0; i < 5; i++) {
        pos = i;
        aux = numeros[i];
        while((pos > 0) && (numeros[pos - 1] > aux)) {
            numeros[pos] = numeros[pos - 1];
            pos -= 1;
        }
        numeros[pos] = aux;
    }

    cout << "Orden Ascendente" << endl;
    for(i = 0; i < 5; i++)
        cout << numeros[i] << ", ";

    cout << endl;

    cout << "Orden Descendente" << endl;
    for(i = 4; i >= 0; i--)
        cout << numeros[i] << ", ";
    
    cout << endl;
 
    getch();
    return 0;
}