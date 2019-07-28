/*Escriba un programa que calcule las soluciones de una ecuacion de segundo grado de la forma 
ax^2+bx+c=0 (La chicharronera)*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float a, b, c;
    float numerador1, numerador2, denominador;
    float solucion1, solucion2, restaRaiz;
    float complejo;

    do {
        cout << "Ingresa los coeficientes a b y c separado por espacios" << endl;
        cin >> a >> b >> c;
    } while(a == 0);
    
    restaRaiz = ((pow(b, 2)) - (4 * a * c));

    if(restaRaiz >= 0) {
        numerador1 = ((-1) * b) + sqrt(restaRaiz);
        numerador2 = ((-1) * b) - sqrt(restaRaiz);
        denominador = 2 * a;
        solucion1 = numerador1 / denominador;
        solucion2 = numerador2 / denominador;

        cout << "X1 = " << solucion1 << " X2 = " << solucion2 << endl;
    } else {
        denominador = 2 * a;
        numerador1 = ((-1) * b) / denominador;
        //numerador2 = ((-1) * b) / denominador;
        complejo = (-1) * restaRaiz;
        complejo = sqrt(complejo);

        cout << "X1 = " << numerador1 << " + " << complejo << "i" << endl;
        cout << "X2 = " << numerador1 << " - " << complejo << "i" << endl;
    }

    return 0;
}