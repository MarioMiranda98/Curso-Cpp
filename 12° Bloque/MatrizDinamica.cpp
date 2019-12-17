/*
    Matrices Dinamicas.

    Ejemplo rellenar una matriz de NXM y mostrar su contenido 

    **punteroMatriz -> *punteroFila -> [int] [int] [int]
                       *punteroFila -> [int] [int] [int]
                       *punteroFila -> [int] [int] [int]
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);

int** punteroMatriz;
int filas, columnas;

int main() {
    pedirDatos();
    system("cls");
    mostrarMatriz(punteroMatriz, filas, columnas);

    getch();
    return 0;
}

void pedirDatos() {
    cout << "Digite el numero de filas: ";
    cin >> filas;
    cout << "Digite el numero de columnas: ";
    cin >> columnas;

    punteroMatriz = new int*[filas];

    for(int i = 0; i < columnas; i++) {
        punteroMatriz[i] = new int[columnas];
    }

    cout << "Digitando los elementos de la matriz" << endl;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << "Digite elemento de la matriz: ";
            cin >> *(*(punteroMatriz + i) + j);
        }
    }
}

void mostrarMatriz(int** punteroMatriz, int filas, int columnas) {
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << *(*(punteroMatriz + i) + j) << " ";
        }

        cout << endl;
    }

    for(int i = 0; i < filas; i++)
        delete[] punteroMatriz[i];

    delete[] punteroMatriz;
}