//Punteros a Estructuras

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Persona{
    char nombre[30];
    int edad;
};

typedef struct Persona Persona;
Persona persona, *punteroPersona = &persona;

void pedirDatos();
void mostrarDatos(Persona *);

int main() {
    pedirDatos();
    mostrarDatos(punteroPersona);    

    getch();
    return 0;
}

void pedirDatos() {
    cout << "Digite su nombre: ";
    cin.getline(punteroPersona->nombre, 30, '\n');
    
    cout << "Digite su edad: ";
    cin >> punteroPersona->edad;
}

void mostrarDatos(Persona *p) {
    cout << "Nombre: " << p->nombre << endl;
    cout << "Edad: " << p -> edad << endl;
}