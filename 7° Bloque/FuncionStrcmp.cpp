//Comparar cadenas - Funcion strcmp()

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(void) {
    char palabra1[] = "Hola";
    char palabra2[] = "Hola";

    if(strcmp(palabra1, palabra2) == 0) //Cadenas iguales devuelve 0 si son distintas devuelve 1
        cout << "Ambas cadenas son iguales" << endl;
    
    getch();
    return 0;
}