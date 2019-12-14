//Paso de parametros tipo estructura

#include <iostream>
#include <conio.h>
using namespace std;

struct Persona {
    char nombre[30];
    int edad;
};

typedef struct Persona Persona;

void mostrar(Persona);

int main() {
    Persona p1;

    cout << "Digita tu nombre: ";
    cin.getline(p1.nombre, 30, '\n');
    cout << "Digite la edad: ";
    cin >> p1.edad;

    mostrar(p1);

    getch();
    return 0;
}

void mostrar(Persona p) {
    cout << "Nombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;
}