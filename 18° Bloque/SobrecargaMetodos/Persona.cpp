#include "Persona.h"

Persona::Persona(string dni){
    this -> dni = dni;
}

Persona::Persona(string nombre, int edad) {
    this -> nombre = nombre;
    this -> edad = edad;
}

void Persona::correr() {
    cout << "Tengo " << this -> edad << " a\244os y estoy corriendo un maraton" << endl;
}

void Persona::correr(int kilometros) {
    cout << "He corrido " << kilometros << " kilometros" << endl;
}