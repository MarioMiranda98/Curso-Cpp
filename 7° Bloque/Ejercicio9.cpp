/*
    Realice un programa que lea una cadena de caracteres de la entrada estandar y muestre en la 
    salida estandar cuantas ocurrencias de cada vocal existen en la cadena
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(void) {
    char frase[30];
    int a = 0;
    int e = 0;
    int i = 0; 
    int o = 0;
    int u = 0;

    cout << "Ingrese un frase: ";
    cin.getline(frase, 30, '\n');

    for(int i = 0; i < strlen(frase); i++) {
        switch(frase[i]) {
            case 'a': a += 1; break;
            case 'e': e += 1; break;
            case 'i': i += 1; break;
            case 'o': o += 1; break;
            case 'u': u += 1; break;
        }
    }

    cout << "Cuenta de vocales: " << endl;
    cout << "\ta: " << a << endl;
    cout << "\te: " << e << endl;
    cout << "\ti: " << i << endl;
    cout << "\to: " << o << endl;
    cout << "\tu: " << u << endl;

    getch();
    return 0;
}
