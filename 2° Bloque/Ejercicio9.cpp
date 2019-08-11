/*Realice un programa que calcule el valor que toma la siguiente funcion para valores dados de x e y
f(x, y) = (sqrt(x)/(y^2)- 1) */
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x, y, resultado;
    float numerador, denominador;

    cout << "Ingresa el valor de x y y separado por espacios" << endl;
    cin >> x >> y;

    numerador = (sqrt(x));
    denominador = ((pow(y, 2)) - 1);
    resultado = (numerador / denominador);

    cout << "El resultado es: " << resultado << endl;    

    return 0;
}