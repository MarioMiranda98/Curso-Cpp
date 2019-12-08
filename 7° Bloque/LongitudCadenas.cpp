//Longitud cadenas de caracteres - Funcion strlen()

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(void) {
    char palabra[] = "hola";
    int longitud = 0;

    longitud = strlen(palabra);

    cout << "Numero de elementos en la cadena: " << longitud << endl;

    getch();
    return 0;
}