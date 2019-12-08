/*
    Realice un programa que calcule el producto de dos matrices cuadradas de  3x3
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(void) {
    int matriz[3][3];
    int matriz2[3][3];
    int matriz3[3][3];
    int valor = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Ingrese valor para la posicion [" << (i + 1) << "] [" << (j + 1) << "]: ";
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Ingrese valor para la posicion [" << (i + 1) << "] [" << (j + 1) << "]: ";
            cin >> matriz2[i][j];
        }
    }

    cout << "Mostrando matriz 1" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matriz[i][j] << ", ";
        }
        cout << endl;
    }

    cout << "Mostrando matriz 2" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matriz2[i][j] << ", ";
        }
        cout << endl;
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            valor = 0;
            for(int k = 0; k < 3; k++) {
                valor += matriz[i][k] * matriz2[k][j];
            }
            matriz3[i][j] = valor;
        }
    }

    cout << "Mostrando matriz 3" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matriz3[i][j] << ", ";
        }
        cout << endl;
    }
    
    getch();
    return 0;
}