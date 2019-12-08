//Cadenas de caracteres

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(void) {
    char palabra[] = "Mario"; //Definicion de la cadena 
    char palabra2[] = {'M', 'a', 'r', 'i', 'o'};//Otra manera
    char nombre[30];

    cout << "Ingresa tu nombre: ";
    //cin >> nombre; Para cin al encontrar un espacio deja de leer, similar al scanf
    //gets(nombre); gets guarda todo, pero al terminarse su buffer utiliza espacio que no le corresponde
    cin.getline(nombre, 30, '\n'); //(buffer, cantidad elementos, donde termine)

    cout << nombre << endl;

    getch();
    return 0;
}