/*La calificacion final de un estudiante es la media ponderada de tres notas: 
La nota de practicas que cuenta un 30% del total, la nota teorica cuenta un 60%
y la nota de participacion que cuenta el 10% restante. Escriba un programa que lea 
de la entrada estandar las tres notas de un alumno y escriba en la salida la nota final*/
#include <iostream>

using namespace std;

int main(void) {
    float practicas, participacion, teorica;
    float resultado;
    
    cout << "Ingresa la nota de practicas" << endl;
    cin >> practicas;
    cout << "Ingresa la nota de teoria" << endl;
    cin >> teorica;
    cout << "Ingresa la nota de participacion" << endl;
    cin >> participacion;

    practicas = practicas * 0.3;
    teorica = teorica * 0.6;
    participacion = participacion * 0.1;
    resultado = practicas + teorica + participacion;

    cout << "La nota final es: " << resultado << endl;

    return 0;
}