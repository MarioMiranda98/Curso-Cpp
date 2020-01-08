#include <iostream>
using namespace std;

void mergeSort(int a[], int, int);
void mezclaMerge(int* numeros, int bajo, int mitad, int alto);

int main() {
    int a[16] = {7, 8, 15, 10, 13, 14, 15, 74, 54, 16, 98, 11, 65, 78, 99, 69};
    int lim = (sizeof(a) / sizeof(a[0])) - 1;

    mergeSort(a, 0, lim);

    for (int i = 0; i <= lim; i++)
        cout << a[i] << "|";

    cout << endl;

    return 0;
}

void mergeSort(int a[], int primero, int ultimo) {
    int centro;

    if(primero < ultimo) {
        centro = (primero + ultimo) / 2;
        mergeSort(a, primero, centro);
        mergeSort(a, centro + 1, ultimo);
        mezclaMerge(a, primero, centro, ultimo);
    }
}

void mezclaMerge(int* numeros, int bajo, int mitad, int alto) {
    int dimension1 = mitad - bajo + 1;
    int dimension2 = alto - mitad;
    int i,j,k;
    int A[dimension1], B[dimension2];

    for(i = 0; i < dimension1; i++)
        A[i] = numeros[bajo + i];
    for(j = 0; j < dimension2; j++)
        B[j] = numeros[mitad + 1 + j];

    i = 0;
    j = 0;
    k = bajo;

    while(i < dimension1 && j < dimension2) {
        if(A[i] <= B[j]) {
            numeros[k] = A[i];
            i++;
        } else {
            numeros[k] = B[j];
            j++;
        }
        k++;
    }

    while(i < dimension1){
        numeros[k] = A[i];
        k++;
        i++;
    }

    while(j < dimension2){
        numeros[k] = B[j];
        k++;
        j++;
    }
}