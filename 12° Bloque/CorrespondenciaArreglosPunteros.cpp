//Correspondencia entre arreglos y punteros

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int *ptrNumeros = NULL;

    //ptrNumeros = &numeros[0]; 
    ptrNumeros = numeros;

    //La ñera
    cout << "La noob" << endl;
    for(int i = 0; i < 5; i += 1) {
        cout << ptrNumeros[i] << ", ";
    }

    cout << endl;

    cout << "La elegante" << endl;
    for(; ptrNumeros < (numeros + 5); ptrNumeros += 1) {
        cout << *ptrNumeros << ", ";
    }

    cout << endl;

    getch();
    return 0;
}