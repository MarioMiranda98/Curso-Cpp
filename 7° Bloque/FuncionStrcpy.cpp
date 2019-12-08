//Copiar el contenido de una cadena a otra - funcion strcpy()

#include <iostream>
#include<conio.h>
#include <string.h>
using namespace std;

int main(void) {
    char nombre[] = "Mario";
    char nombre2[10];

    strcpy(nombre2, nombre); // strcpy(Destino, Origen);

    cout << nombre2 << endl;

    getch();
    return 0;
}