//Transformar una cadena a numeros - Funcion atoi() y  atof()

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(void) {
    char cadena[] = "123";
    char flotante[] = "123.45";
    int valor;
    int valor2;

    valor = atoi(cadena);
    valor2 = atof(flotante);

    valor += 5;
    valor2 += 3.5;

    cout << valor << " y " << valor2 << endl;

    getch();
    return 0;
}