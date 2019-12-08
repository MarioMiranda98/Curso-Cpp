//Añadir o concatenar una cadena con otra - Funcion strcat()

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(void) {
    char cad1[] = "Esto es una cadena";
    char cad2[] = " de ejemplo";
    char cad3[30];

    strcpy(cad3, cad1);
    strcat(cad3, cad2);//strcat(destino, origen);

    cout << cad3 << endl;

    getch();
    return 0;
}