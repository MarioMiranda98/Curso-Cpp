//Ordenamiento por shell
#include <iostream>
#include <conio.h>
using namespace std;

void ordenacionShell(float a[], int n);
void intercambio(float &x, float &y);

int main(void) {
    float numeros[] = {4, 6, 1, 9, 5, 10, 2, 11, 19, 7};

    ordenacionShell(numeros, 10);

    cout << "Orden Ascendente" << endl;
    for(int i = 0; i < 10; i++)
        cout << numeros[i] << ", ";

    cout << endl;

    getch();
    return 0;
}

void ordenacionShell(float a[], int n) {
    int salto, i, j, k;
    salto = n / 2;

    while(salto > 0) {
        for(i = salto; i < n; i++) {
            j = i - salto;
            while(j >= 0) {
                k = j + salto;
                if(a[j] <= a[k]) {
                    j = -1;
                } else {
                    intercambio(a[j], a[k]);
                    j -= salto;
                }
            }
        }

        salto = salto / 2;
    }
}

void intercambio(float &x, float &y) {
    float aux;
    aux = x;
    x = y;
    y = aux;
}
