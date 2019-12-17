/*
    Realice un programa que lea una matriz dinamica de N*M y cree su matriz transpuesta.

    Nota: La matriz transpuesta es aquella en la que la columna i era la fila i de la matriz
    original.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int** crearMatriz(int **, int, int);
void eliminarMatriz(int **, int);
int** rellenarMatriz(int **, int, int);
void mostrarMatriz(int **, int, int);
int** transponer(int **, int **, int, int);

int main() {
    int filas, columnas;
    int** matriz;
    int** transpuesta;

    cout << "Ingresa el numero de filas: ";
    cin >> filas;
    cout << "Ingresa el numero de columnas: ";
    cin >> columnas;

    matriz = crearMatriz(matriz, filas, columnas);
    transpuesta = crearMatriz(transpuesta, filas, columnas);

    matriz = rellenarMatriz(matriz, filas, columnas);
    system("cls");

    transpuesta = transponer(matriz, transpuesta, filas, columnas);

    mostrarMatriz(transpuesta, filas, columnas);

    eliminarMatriz(matriz, filas);
    eliminarMatriz(transpuesta, filas);

    getch();
    return 0; 
}

int** crearMatriz(int ** matriz, int filas, int columnas) {
    matriz = new int*[filas];

    for(int i = 0; i < columnas; i++)
        matriz[i] = new int[columnas];

    return matriz;
}

void eliminarMatriz(int **matriz, int filas) {
    for(int i = 0; i < filas; i++)
        delete[] matriz[i];

    delete[] matriz;
}

int** rellenarMatriz(int** matriz, int filas, int columnas) {
    cout << "Rellando matriz" << endl;

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << "Ingrese dato: ";
            cin >> *(*(matriz + i) + j);
        }
    }

    return matriz;
}

void mostrarMatriz(int** matriz, int filas,int columnas) {
    cout << "Mostrando Matriz" << endl;

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << *(*(matriz + i) + j) << " ";
        }
        cout << endl;
    }
}

int** transponer(int** matriz, int** transpuesta, int filas, int columnas) {
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            *(*(transpuesta + j) + i) = *(*(matriz + i) + j);
        }
    }

    return transpuesta;
}