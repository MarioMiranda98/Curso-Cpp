//Ejemplo encontrar el mayor de 2 numeros

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de la funcion
int encontrarMax(int x, int y);

int main(void) {
    int n1, n2;

    cout << "Digite dos numeros: ";
    cin >> n1 >> n2;

    cout << "El numero maximo es " << encontrarMax(n1, n2) << endl;

    getch();
    return 0;
}

//Definicion de la funcion
int encontrarMax(int x, int y) {
    int numeroMaximo;

    if(x > y) {
        numeroMaximo = x;
    } else if(x < y) {
        numeroMaximo = y;
    } else {
        numeroMaximo = x;
    }

    return numeroMaximo;
}