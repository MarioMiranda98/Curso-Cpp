/*
    Desarrollar un programa que determine si una matriz es simetrica o no. Una matriz es simetrica si 
    es cuadrada y si es igual a su matriz transpuesta
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(void) {
    int columnas, filas;
    int simetria;

    cout << "Ingrese el numero de columnas y filas por espacios: ";
    cin >> columnas >> filas;

    int matriz[columnas][filas];
    int transpuesta[columnas][filas];

    if(columnas != filas) {
        cout << "No es una matriz simetrica" << endl;
        exit(0);
    } else {
        for(int i = 0; i < filas; i++) {
            for(int j = 0; j < columnas; j++) {
                cout << "Ingrese valor para la posicion [" << (i + 1) << "] [" << (j + 1) << "]: ";
                cin >> matriz[i][j];
                transpuesta[j][i] = matriz[i][j];
            }
        }

        for(int i = 0; i < filas; i++) {
            for(int j = 0; j < columnas; j++) {
                if(matriz[i][j] != transpuesta[i][j]) {
                    simetria = 0;
                    break;
                } else 
                    continue;
            }
        }

        if(simetria) 
            cout << "Es una matriz simetrica" << endl;
        else
            cout << "No es una matriz simetrica" << endl;
    }

    getch();
    return 0;
}