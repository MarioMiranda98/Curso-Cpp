#include <iostream>
#include "Alumno.h"
using namespace std;

Alumno::Alumno(float calMat, float calProg) {
    this -> calMat = calMat;
    this -> calProg = calProg;
}

Alumno::Alumno(){}

void Alumno::pedirDatos() {
    cout << "Ingresa la calificacion de matematicas: ";
    cin >> this -> calMat;
    cout << "Ingresa la calficacion de programacion: ";
    cin >> this -> calProg;
}

void Alumno::mostrarDatos() {
    cout << "Nota de matematicas: " << this -> calMat << endl;
    cout << "Nota de programacion: " << this -> calProg << endl;
    cout << "Promedio: " << ((this -> calProg + this -> calProg) / 2) << endl;
}