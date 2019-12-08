/*
    Realice un programa que calcule la suma de dos matrices cuadradas de 3x3
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(void) {
    int matriz1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matriz2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int matriz3[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matriz3[i][j] << ", ";
        }
        cout << endl;
    }    

    getch();
    return 0;
}