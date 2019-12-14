/*
    Realice una funcion que tome como parametros un vector de numeros enteros y devuelva la suma de sus
    elementos
*/

#include <iostream>
#include <conio.h>
using namespace std;

int sumaVector(int vec[], int tam);

int main() {
    int elementosArreglo;
    int vector[100];

    cout << "Ingrese el numero de elementos del arreglo: ";
    cin >> elementosArreglo;

    for(int i = 0; i < elementosArreglo; i++) {
        cout << "Ingrese un numero: ";   
        cin >> vector[i]; 
    }

    cout << "La suma es: " << sumaVector(vector, elementosArreglo) << endl;

    getch();
    return 0;
}

int sumaVector(int vec[], int tam) {
    int suma = 0;
    for(int i = 0; i < tam; i++)
        suma += vec[i];

    return suma;
}