/*
    Escriba una plantilla de funcion llamada despliegue() que despliegue el valor del argumento
    unico que se le transmite cuando es invocada la funcion
*/

#include <iostream>
#include <conio.h>
using namespace std;

template <class TIPOD>
void despliegue(TIPOD dato);

int main(void) {
    int dato1 = 4;
    float dato2 = 15.67;
    double dato3 = 567.7890;
    char dato4 = 'a';

    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);

    getch();
    return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato) {
    cout << "El dato es: " << dato << endl;
}