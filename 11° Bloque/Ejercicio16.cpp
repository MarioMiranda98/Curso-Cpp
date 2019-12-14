/*
    Realice una funcion que dada una matriz y un numero de fila de la matriz devuelva el menor de los
    elementos almacenados en dicha fila.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int menor(int matriz[][100], int filas, int columnas);

int main() {
    int filas, columnas;
    int matriz[100][100];

    cout << "Ingrese el numero de filas y columnas: ";
    cin >> filas >> columnas;

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << "Ingrese valor para la posicion [" << (i + 1) << "] [" << (j + 1) << "]: ";
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < columnas; i++) {
        cout << "Menor numero de la fila " << i + 1 << " es " << menor(matriz, filas, i) << endl;
    }

    getch();
    return 0;
}

int menor(int matriz[][100], int filas, int indice) {
    int m = 9999999;

    for(int i = 0; i < filas; i++) {
        if(matriz[indice][i] < m) { 
            m = matriz[indice][i];
        }
    }

    return m;
}