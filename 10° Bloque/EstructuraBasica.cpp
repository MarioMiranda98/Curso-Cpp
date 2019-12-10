//Estructura basica en C++

#include <iostream>
#include <conio.h>
using namespace std;

struct Persona {
    char nombre[20];
    int edad;
}
persona1 = {"Mario", 21},
persona2 = {"Mario2", 22},
persona3;

int main(void) {
    cout << "Nombre persona 1: " << persona1.nombre << endl;
    cout << "Edad persona 1: " << persona1.edad << endl;

    cout << "Nombre persona 2: " << persona2.nombre << endl;
    cout << "Edad persona 2: " << persona2.edad << endl; 

    cout << "Ingresa el nombre de la persona: ";
    cin.getline(persona3.nombre, 20, '\n');
    cout << "Ingrese la edad de la persona: ";
    cin >> persona3.edad;

    cout << "Nombre persona 3: " << persona3.nombre << endl;
    cout << "Edad Persona 3: " << persona3.edad << endl;

    getch();
    return 0;
}