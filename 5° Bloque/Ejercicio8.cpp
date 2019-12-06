/*
    Hacer un programa que lea los 5 numeros en un arreglo, los copie a otro arreglo multiplicados por 2
    y muestre el segundo arreglo
*/ 

#include <iostream>
#include <conio.h>
using namespace std;

int main(void) {
    int numeros1[5];
    int numeros2[5];

    for(int i = 0; i < 5; i++) {
        cin >> numeros1[i];
        numeros2[i] = 2 * numeros1[i];
    }

    for(int i = 0; i < 5; i++){
        cout << numeros2[i] << endl;
    }

    getch();
    return 0;
}