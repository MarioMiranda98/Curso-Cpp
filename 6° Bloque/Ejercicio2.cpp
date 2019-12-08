/*
    Realiza un programa que defina una matriz 3x3 y escriba un ciclo para que muestre la diagonal 
    principal de la matriz
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(void) {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int posicion = 0;

    do{
        cout << matriz[posicion][posicion] << ", ";
        posicion += 1;
    }while(posicion < 3);
    

    getch();
    return 0;
}