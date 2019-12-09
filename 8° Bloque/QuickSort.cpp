//Ordenamiento por Quick Sort
#include <iostream>
#include <conio.h>
using namespace std;

void quickSort(float a[], int primero, int ultimo);
void intercambio(float &x, float &y);

int main(void) {
    float numeros[] = {4, 7, 1, 8, 2, 10, 5, 9, 3};

    quickSort(numeros, 0, 8);

    cout << "Arreglo ascendente" << endl;
    for(int i = 0; i < 9; i++)
        cout << numeros[i] << ", ";

    cout << endl;

    getch();
    return 0;
}

void quickSort(float a[], int primero, int ultimo) {
    int i, j, central;
    float pivote;

    central = (primero + ultimo) / 2;
    pivote = a[central];
    i = primero;
    j = ultimo;

    do {
        while(a[i] < pivote) i++;
        while(a[j] > pivote) j--;

        if(i <= j) {
            intercambio(a[i],  a[j]);
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