/*Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro
alumnos*/
#include <iostream>
using namespace std;

int main(void) {
    float nota1 = 0.0;
    float nota2 = 0.0;
    float nota3 = 0.0;
    float nota4 = 0.0;
    float promedio = 0.0;

    cout << "Ingrese las notas de cada alumno separada por espacios" << endl;
    cin >> nota1 >> nota2 >> nota3 >> nota4;

    promedio = ((nota1 + nota2 + nota3 + nota4)/4);
    cout.precision(5);
    cout << "El promedio es " << promedio << endl;

    return 0;
}