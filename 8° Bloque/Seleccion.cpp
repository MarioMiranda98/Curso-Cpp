//Ordenamiento por seleccion

#include <iostream>
#include <conio.h>
using namespace std;

int main(void) {
    int numeros[] = {3, 2, 1, 5, 4};
    int i, j, aux, var;

    for(i = 0; i < 5; i++) {
        var = i;
        for(j = i + 1; j < 5; j++) {
            if(numeros[j] < numeros[var]) {
                var = j;
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[var];
        numeros[var] = aux; 
    }

    cout << "Orden Ascendente" << endl;
    for(i = 0; i < 5; i++)
        cout << numeros[i] << ", ";

    cout << endl;

    getch();
    return 0;
}