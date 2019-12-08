/*
    Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla de numeros 
    aleatorios, copiar el contenido a otra matriz y por ultimo mostrarla en pantalla
*/

#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;

int main(void) {
    int columnas, filas;

    cout << "Ingrese el numero de filas y columnas: ";
    cin >> filas >> columnas;
    
    int matriz1[columnas][filas];
    int matriz2[columnas][filas];

    srand(time(NULL));
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            matriz1[i][j] = 1 + rand() % (101 - 1);
            matriz2[i][j] = matriz1[i][j];
        }
    }

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << matriz2[i][j] << ", ";
        }
        cout << endl;
    }

    getch();
    return 0;
}