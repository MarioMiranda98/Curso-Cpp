#include "Estudiante.h"

Estudiante::Estudiante(string codigo, float promedio, int numeroExpediente, string direccion) : exp(numeroExpediente), dir(direccion) {
    this -> codigo = codigo;
    this -> promedio = promedio; 
}

void Estudiante::mostrarDatos() {
    cout << "Codigo: " << this -> codigo << endl;
    cout << "Promedio: " << this -> promedio << endl;
    cout << "Numero Expediente: " << exp.getNumeroExpediente() << endl;
    cout << "Direccion: "  << dir.getDireccion() << endl;
    cout << endl;
}