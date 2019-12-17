//Realice un programa que calcule la suma de dos matrices dinamicas

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int** crearMatriz(int **, int, int);
void eliminarMatriz(int **, int filas);
int** sumarMatriz(int **, int **, int **, int, int);
int** rellenarMatriz(int **, int, int);
void mostrarMatriz(int **, int, int);

int main() {
    int filas, columnas;
    int **matriz1 = NULL;
    int **matriz2 = NULL;
    int **matriz3 = NULL;

    cout << "Ingresa el numero de filas: ";
    cin >> filas;
    cout << "Ingresa el numero de columnas: ";
    cin >> columnas;

    matriz1 = crearMatriz(matriz1, filas, columnas);
    matriz2 = crearMatriz(matriz2, filas, columnas);
    matriz3 = crearMatriz(matriz3, filas, columnas);

    matriz1 = rellenarMatriz(matriz1, filas, columnas);
    matriz2 = rellenarMatriz(matriz2, filas, columnas);
    system("cls");

    matriz3 = sumarMatriz(matriz1, matriz2, matriz3, filas, columnas);

    mostrarMatriz(matriz3, filas, columnas);

    eliminarMatriz(matriz1, filas);
    eliminarMatriz(matriz2, filas);
    eliminarMatriz(matriz3, filas);

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

int** sumarMatriz(int **matriz1, int** matriz2, int** matriz3, int filas, int columnas) {

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            *(*(matriz3 + i) + j) = (*(*(matriz1 + i) + j)) + (*(*(matriz2 + i) + j)); 
        }
    }

    return matriz3;
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