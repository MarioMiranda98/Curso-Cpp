/*
    Pedir al usuario N numeros, almacenarlos en un arreglo dinamico posteriormente ordenar los numeros
    en orden ascendente y mostrarlos en pantalla.
    Nota: Utilizar cualquier metodo de ordenamiento.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void quickSort(float *a, int primero, int ultimo);
void intercambio(float &x, float &y);

int main() {
    float *a = NULL;
    int n;

    cout << "Ingrese un numero de elementos: ";
    cin >> n;

    a = new float[n];

    for(int i = 0; i < n; i++) {
        cout << "Ingresa un numero: ";
        cin >> a[i];
    }

    quickSort(a, 0, n - 1);

    cout << "Orden Ascendente" << endl;
    for(int i = 0; i < n; i++)
        cout << a[i] << ", ";

    cout << endl;

    delete[] a;

    getch();
    return 0;
}

void quickSort(float *a, int primero, int ultimo) {
    int i, j, central;
    float pivote;

    central = (primero + ultimo) / 2;
    pivote = *(a + central);
    i = primero;
    j = ultimo;

    do {
        while(*(a + i) < pivote) i++;
        while(*(a + j) > pivote) j--;

        if(i <= j) {
            intercambio(*(a + i),  *(a + j));
            i++;
            j--;
        }

    }while(i <= j);

    if(primero < j) {
        quickSort(a, primero, j);
    }

    if(i < ultimo) {
        quickSort(a, i, ultimo);
    }
}

void intercambio(float &x, float &y) {
    float aux;
    aux = x;
    x = y;
    y = aux;
}