/*
    Desarrollar una funcion que determine si una matriz es simetrica o no
    Una matriz es simetrica: A = A^t
    La matriz debe ser cuadrada.
    Aij = Aji
*/

#include <iostream>
#include <conio.h>
using namespace std;

bool verificarSimetria(int matriz[][100], int transpuesta[][100], int filas, int columnas);

int main() {
    int filas, columnas;
    int matriz[100][100];
    int transpuesta[100][100];

    cout << "Ingresa el numero de filas y columas: ";
    cin >> filas >> columnas;

    if(filas != columnas) {
        cout << "Matriz no cuadrada" << endl;
        exit(EXIT_SUCCESS);
    }

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << "Ingrese valor para la posicion [" << (i + 1) << "] [" << (j + 1) << "]: ";
            cin >> matriz[i][j];
            transpuesta[j][i] = matriz[i][j];
        }
    }

    if(verificarSimetria(matriz, transpuesta, filas, columnas))
        cout << "La matriz es simetrica" << endl;
    else
        cout << "La matriz no es simetrica" << endl;

    getch();
    return 0;
}

bool verificarSimetria(int matriz[][100], int transpuesta[][100], int filas, int columnas) {
    bool bandera = true;

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            if(matriz[i][j] != transpuesta[i][j]) {
                bandera = false;
                break;
            } else 
                continue;
        }
    }

    return bandera;
}