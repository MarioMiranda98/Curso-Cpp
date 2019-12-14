/*
    Paso de parametros tipo vector

    Parametros de la funcion
        void nombreDeFuncion(tipo nombreArreglo[], int tamañoArreglo)

    Llamada a la funcion
        nombreDeFuncion(nombreArreglo, tamañoArreglo)
*/

//Cuadradados de los elementos de un vector

#include <iostream>
#include <conio.h>
using namespace std;

void cuadrado(int vec[], int tamanio);
void mostrar(int vec[], int tamanio);

int main() {
    const int TAM = 5;
    int vec[TAM] = {1, 2, 3, 4, 5};

    cuadrado(vec, TAM);
    mostrar(vec, TAM);

    getch();
    return 0;
}

void cuadrado(int vec[], int tamanio) {
    for(int i = 0; i < tamanio; i++) {
        vec[i] *= vec[i];
    }
}

void mostrar(int vec[], int tamanio) {
    for(int i = 0; i < tamanio; i++) {
        cout << vec[i] << endl;
    }
}