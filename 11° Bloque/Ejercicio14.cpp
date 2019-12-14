/*
    Realiza una funcion que tome como parametros un vector de enteros y su tamaño e imprima un vector
    con los elementos impares del vector recibido. 
*/

#include <iostream>
#include <conio.h>
using namespace std;

void mostrarImpares(int vec[], int tam);

int main() {
    int elementos;
    int vector[100];

    cout << "Ingrese el tamanio del arreglo: ";
    cin >> elementos;

    for(int i = 0; i < elementos; i++) {
        cout << "Ingrese numeros: ";
        cin >> vector[i];
    }

    system("cls");
    cout << "Numeros impares" << endl;
    mostrarImpares(vector, elementos);

    getch();
    return 0;
}

void mostrarImpares(int vec[], int tam) {
    for (int i = 0; i < tam; i++) {
        if((vec[i] % 2) != 0)
            cout << vec[i] << endl;
    }
}