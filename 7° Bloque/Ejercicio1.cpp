/*
    Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la 
    longitud de la cadena, y si esta supera a 10 caracteres mostrarla en pantalla, en caso contrario
    no mostrarla.
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(void) {
    char palabra[50];

    cout << "Ingresa tu palabra: ";
    cin.getline(palabra, 50, '\n');

    if(strlen(palabra) > 10)
        cout << palabra << endl;
    else
        cout << "La cadena no supera los 10 caracteres" << endl;

    getch();
    return 0;
}