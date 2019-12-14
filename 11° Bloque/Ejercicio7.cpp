/*
    Intercambiar el valor de 2 variables utilizando paso de parametros por referencia
*/

#include <iostream>
#include <conio.h>
using namespace std;

void intercambio(int &x, int &y);

int main(void) {
    int x, y;

    cout << "Introduce dos numeros: ";
    cin >> x >> y;

    cout << "Valor de x: " << x << endl;
    cout << "Valor de y: " << y << endl;

    intercambio(x, y);

    cout << "Valor de x: " << x << endl;
    cout << "Valor de y: " << y << endl;

    getch();
    return 0;
}

void intercambio(int &x, int &y) {
    int aux;

    aux = x;
    x = y;
    y = aux;
}