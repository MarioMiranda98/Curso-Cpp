//Paso de Parametros por Referencia

#include <iostream>
#include <conio.h>
using namespace std;

void valNuevos(int &num1, int &num2);

int main(void) {
    int num1, num2;

    cout << "Digite 2 numeros: ";
    cin >> num1 >> num2;

    valNuevos(num1, num2);

    cout << "El nuevo valor del numero 1: " << num1 << endl;
    cout << "El nuevo valor del segundo numero: " << num2 << endl;

    getch();
    return 0;
}

void valNuevos(int &num1, int &num2) {
    cout << "El valor del numero 1: " << num1 << endl;
    cout << "El valor del numero 2: " << num2 << endl;

    num1 = 89;
    num2 = 45;
}