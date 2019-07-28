/*Escriba un programa que lea la entrada estándar de dos números y muestre en la salida estándar su suma,
resta, multiplicación y división*/
#include <iostream>
using namespace std;

int main(void) {
    int numero1 = 0;
    int numero2 = 0;

    cout << "Ingrese ambos numeros separados por espacios: " << endl;
    cin>> numero1 >> numero2;
    cout << "La suma de " << numero1 << " + " << numero2 << " es " << (numero1 + numero2) << endl;
    cout << "La resta de " << numero1 << " - " << numero2 << " es " << (numero1 - numero2) << endl;
    cout << "La multiplicacion de " << numero1 << " * " << numero2 << " es " << (numero1 * numero2) << endl;
    if (numero2 == 0)
        cout << "No se puede hacer la division" << endl;
    else 
        cout << "La division de " << numero1 << " / " << numero2 << " es " << (numero1 / numero2) << endl;
    return 0;
}