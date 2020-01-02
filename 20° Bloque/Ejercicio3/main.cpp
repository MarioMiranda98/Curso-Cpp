/*
    Defina una plantilla para la clase Materia, de tal manera que el tipo de dato del atributo 
    calificacion sea del tipo T. Esto permitira crear objetos de tipo materia que tengan calificaciones
    que sean: numeros enteros, numeros decimales y letras.
*/

#include <iostream>
#include "Materia.h"
using namespace std;

int main() {
    Materia <int> curso1("Algoritmos", 1, 10);
    Materia <float> curso2("Matematicas", 2, 9.8);
    Materia <char> curso3("Lenguaje", 3, 'A');

    cout << "Mostrando datos del curso 1" << endl;
    curso1.mostrarDatos();

    cout << endl;
    
    cout << "Mostrando datos del curso 2" << endl;
    curso2.mostrarDatos();
    
    cout << endl;

    cout << "Mostrando datos del curso 3" << endl;
    curso3.mostrarDatos();

    cout << endl;

    curso1.setCalificacion(9);

    cout << "Mostrando datos modificados del curso 1" << endl;
    curso1.mostrarDatos();

    return 0;
}