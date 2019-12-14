//Paso de parametros tipo matriz

//Elevar al cuadrado los elementos de una matriz

#include <iostream>
#include <conio.h>
using namespace std;

void mostrarMatriz(int m[][3], int filas, int columnas);
void cuadrado(int m[][3], int filas, int columnas);

int main() {
    const int FILAS = 2;
    const int COLS = 3;

    int m[FILAS][COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "Mostrando matriz original" << endl;
    mostrarMatriz(m, FILAS, COLS);

    cuadrado(m, FILAS, COLS);

    cout << "Matriz al cuadrado" << endl;
    mostrarMatriz(m, FILAS, COLS);

    getch();
    return 0;
}

void mostrarMatriz(int m[][3], int filas, int columnas) {
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << m[i][j] << " ";
        }

        cout << endl;
    } 
}


void cuadrado(int m[][3], int filas, int columnas) {
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            m[i][j] *= m[i][j];
        }
    } 
}