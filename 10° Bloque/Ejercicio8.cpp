/*
    Defina una estructura que sirva para representar a una persona. La estructura debe contener dos 
    campos: el nombre de la persona y un valor de tipo logico que indica si la persona tiene algun
    tipo de discapacidad. Realice un programa dado un vector de personas rellene dos nuevos vectores:
    uno que contenga las personas que no tienen discapacidad y otro que contenga las personas con
    discapacidad.
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Persona {
    char nombre[30];
    bool discapacidad;
};

typedef struct Persona Persona;     

int main(void) {
    Persona personas[100];
    Persona personasSinD[100];
    Persona personasConD[100];
    int numeroPersonas;
    int j = 0;
    int k = 0;

    cout << "Ingrese el numero de personas: ";
    cin >> numeroPersonas;

    for(int i = 0; i < numeroPersonas; i++) {
        cout << "Digite su nombre: ";
        cin.getline(personas[i].nombre, 30, '\n');
        cout << "Persona con discapacidad? (1/0)";
        cin >> personas[i].discapacidad;

        if(personas[i].discapacidad == 1) {
            strcpy(personasConD[j].nombre, personas[i].nombre);
            j++;
        } else {
            strcpy(personasConD[k].nombre, personas[i].nombre);
            k++;
        }
    }

    cout << "Personas sin discapacidad" << endl;
    for(int i = 0; i < k; i++) {
        cout << personasSinD[i].nombre << endl;
    }

    cout << "Personas con discapacidad" << endl;
    for(int i = 0; i < j; j++) {
        cout << personasConD[i].nombre << endl;
    }

    getch();
    return 0;
}