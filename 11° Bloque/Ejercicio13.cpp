/*
    Realiza una funcion que tome como parametros un vector de numeros y su tamaño y cambie de signo
    los elementos del vector
*/

#include <iostream>
#include <conio.h>
using namespace std;

void cambiarSigno(int vec[], int tam);
void mostrar(int vec[], int tam);

int main() {
    int elementos;
    int vector[100];

    cout << "Ingrese el numero de elementos: ";
    cin >> elementos;

    for(int i = 0; i < elementos; i++) {
        cout << "Ingrese un numero: ";
        cin >> vector[i];
    }

    cambiarSigno(vector, elementos);
    mostrar(vector, elementos);

    getch();
    return 0;
}

void cambiarSigno(int vec[], int tam) {
    for (int i = 0; i < tam; i++)
        vec[i] = vec[i] * -1;
}

void mostrar(int vec[], int tam) {
    for(int i = 0; i < tam; i++)
        cout << vec[i] << endl;
}