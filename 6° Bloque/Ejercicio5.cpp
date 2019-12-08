/*
    Realice un programa que lea una matriz de 3x3 y cree su matriz transpuesta. La matriz transpuesta
    es aquella en la que en la columna i era la fila i de la matriz original.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(void) {
    int original[3][3];
    int transpuesta[3][3];
    int dato;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Digita un numero: ";
            cin >> dato;
            original[i][j] = dato;
            transpuesta[j][i] = original[i][j];
        }
    }

    cout << "Matriz Original" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << original[i][j] << ", ";
        }
        cout << endl;
    }

    cout << "Matriz transpuesta" << endl;
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transpuesta[i][j] << ", "; 
        }
        cout << endl;
    }

    getch();
    return 0;
}