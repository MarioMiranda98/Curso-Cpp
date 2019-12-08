/*
    Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas y columnas;
    Posteriormente mostrar la matriz en pantalla
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(void) {
    int filas, columnas;

    cout << "Ingresa la cantidad de filas y columnas separadas por espacios: ";
    cin >> filas >> columnas;

    int matriz[columnas][filas];

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << "Ingrese valor para la posicion [" << (i + 1) << "] [" << (j + 1) << "]";
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << ", ";
        }
        cout << endl;
    }

    getch();
    return 0;
}