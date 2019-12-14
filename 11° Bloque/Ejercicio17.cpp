/*
    Suma de numeros complejos
    
    z1 = 5 - 3i y z2 = -4 + 2i
    z1 + z2 = (5 - 3i) + (-4 + 2i)
            = 5 - 3i - 4 + 2i
            = 1 - i
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Complejo {
    int real;
    int imaginario;
};

typedef struct Complejo Complejo;

Complejo sumarComplejo(Complejo, Complejo);

int main() {
    Complejo suma;
    Complejo z1;
    Complejo z2;

    cout << "Ingrese primer pareja ordenada: ";
    cin >> z1.real >> z1.imaginario;
    cout << "Ingresa seguna pareja ordenada: ";
    cin >> z2.real >> z2.imaginario;

    suma = sumarComplejo(z1, z2);

    if(suma.imaginario > 0)
        cout << "La suma es: " << suma.real << "+" << suma.imaginario << "i" << endl;
    else if(suma.imaginario == 0)
         cout << "La suma es: " << suma.real << endl;
    else
         cout << "La suma es: " << suma.real << "" << suma.imaginario << "i" << endl;

    getch();
    return 0;
}

Complejo sumarComplejo(Complejo z1, Complejo z2) {
    Complejo suma;

    suma.real = z1.real + z2.real;
    suma.imaginario = z1.imaginario + z2.imaginario;

    return suma;
}