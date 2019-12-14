//Plantillas de una funcion
//Ejemplo sacar el valor absoluto de un numero

#include <iostream>
#include <conio.h>
using namespace std;

template <class TIPOD>//Puede recibir cualquier tipo, algo como programacion generica
void mostrarAbsoluto(TIPOD numero);

int main(void) {
    int num1 = -4;
    float num2 = -56.67;
    double num3 = -123.5678;

    mostrarAbsoluto(num1);
    mostrarAbsoluto(num2);
    mostrarAbsoluto(num3);

    getch();
    return 0;
}

template <class TIPOD>
void mostrarAbsoluto(TIPOD numero) {
    if (numero < 0) {
        numero *= -1;
    }

    cout << "El valor absoluto es " << numero << endl;
}
