/*
    Hacer una matriz tipo entera de 2x2, llenarla de numeros y luego copiar el contenido hacia otra
    matriz
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(void) {
    int matriz1[2][2];
    int matriz2[2][2];

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Ingrese valor para la posicion [" << (i + 1) << "] [" << (j + 1) << "]: ";
            cin >> matriz1[i][j];
            matriz2[i][j] = matriz1[i][j];
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matriz2[i][j] << ", ";
        }
        cout << endl;
    }

    getch();
    return 0;
}