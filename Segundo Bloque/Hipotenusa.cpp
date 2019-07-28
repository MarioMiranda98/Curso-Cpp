/*Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo rectangulo 
escriba su salida estandar su hipotenusa*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float catetoAdyacente, catetoOpuesto, hipotenusa;

    cout << "Escriba los catetos separados por espacios " << endl;
    cin >> catetoAdyacente >> catetoOpuesto;

    hipotenusa =sqrt(((pow(catetoAdyacente, 2)) + (pow(catetoOpuesto, 2))));
    
    cout << "La hipotenusa es: " << hipotenusa << endl;

    return 0;
}