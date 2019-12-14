/*
    Escriba una funcion llamada al_cuadrado(), que calcule el cuadrado del valor que se le transmite 
    y despliegue el resultado. La funcion debe ser capaz del elevar al cuadrado numeros flotantes
*/

#include <iostream>
#include <conio.h>
using namespace std;

void al_cuadrado(float numero);

int main() {
    float numero;
    
    cout << "Ingrese el numero: ";
    cin >> numero;

    al_cuadrado(numero);

    getch();
    return 0;
}

void al_cuadrado(float numero) {
    cout << "El cuadrado es " << (numero * numero) << endl;
}