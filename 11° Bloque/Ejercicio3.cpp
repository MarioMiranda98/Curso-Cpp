/*
    Escriba una funcion nombrada funpot() que eleve un numero entero que se le transmita a una potencia
    en numero entero positivo y despliegue el resultado. El numero entero positivo debera ser el 
    segundo valor transmitido a la funcion 
*/

#include <iostream>
#include <conio.h>
using namespace std;

void funpot(float numero, int exponente);

int main(void) {
    float numero;
    int exponente;

    cout << "Ingrese el numero: ";
    cin >> numero;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    funpot(numero, exponente);     

    getch();
    return 0;
}

void funpot(float numero, int exponente) {
    float resultado = 1;
    if(exponente < 0) 
        cout << "No se puede elevar numeros negativos" << endl;
    else {
        for(int i = 0; i < exponente; i++) 
            resultado *= numero;

        cout << "La potencia es: " << resultado << endl;
    }
}