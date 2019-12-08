/*
    Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra cadena para 
    preguntarle al usuario su nombre, por ultimo añadir el nombre al final de la primera cadena
    y mostrar el mensaje completo "Hola que tal (NombreDeUsuario)".
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(void) {
    char frase[] = "Hola que tal";
    char cadena[20];

    cout << "Ingresa tu nombre: ";
    cin.getline(cadena, 20, '\n');

    strcat(frase, " ");
    strcat(frase, cadena);

    cout << frase << endl;

    getch();
    return 0;
}