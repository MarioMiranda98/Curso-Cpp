/*
    Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido
    hacia otro arreglo de caracteres
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(void) {
    char palabra[50];
    char palabra2[50];

    cout << "Ingresa una cadena: ";
    cin.getline(palabra, 50, '\n');

    strcpy(palabra2, palabra); 

    cout << palabra2 << endl;    

    getch();
    return 0;
}