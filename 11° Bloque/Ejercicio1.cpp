/*
    Escriba una funcion llamada mult() que acepte dos numeros de punto flotante como parametros, 
    multiplique estos dos numeros y despliegue el resultado
*/

#include <iostream>
#include <conio.h>
using namespace std;

void mult(float x, float y);

int main(void) {
    float x, y;

    cout << "Ingrese dos numeros: ";
    cin >> x >> y;

    mult(x, y);

    getch();
    return 0;
}

void mult(float x, float y) {
    cout << "El resultado es " << (x * y) << endl;
}