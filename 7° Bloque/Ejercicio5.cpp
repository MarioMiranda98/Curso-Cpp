/*
    Hacer un programa que determine si una palabra es palindroma
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(void) {
    char palabra[50];
    char palabra2[50];

    cout << "Ingrese una frase o palabra: ";
    cin.getline(palabra, 50, '\n');

    strcpy(palabra2, palabra);
    strrev(palabra2);

    if(!strcmp(palabra, palabra2))
        cout << "Es palindromo" << endl;
    else
        cout << "No es palindromo" << endl;

    getch();
    return 0;
}