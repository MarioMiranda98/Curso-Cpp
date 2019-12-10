/*
    Hacer 2 estructuras una llamada promedio que tendra los siguientes campos: nota1, nota2, nota3;
    y otra llamada alumno que tendra los siguientes miembros: nombre, sexo, edad; hacer que la estructura
    promedio este anidada en la estructura alumno, luego pedir todos los datos para un alumno, luego
    calcular su promedio, y por ultimo imprimir todos sus datos incluidos el promedio.
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Promedio {
    float nota1;
    float nota2;
    float nota3;
};

typedef struct Promedio Promedio;

struct Alumno {
    char nombre[20];
    char sexo;
    int edad;
    Promedio promedio;
};

typedef struct Alumno Alumno;

int main(void) {
    Alumno alumno;
    float promedio = 0;
    
    fflush(stdin);
    cout << "Ingrese el nombre del alumno: ";
    cin.getline(alumno.nombre, 20, '\n');
    fflush(stdin);
    cout << "Ingrese el sexo del alumno: ";
    cin >> alumno.sexo;
    fflush(stdin);
    cout << "Ingrese la edad del alumno: ";
    cin >> alumno.edad;
    fflush(stdin);
    cout << "Ingrese la nota 1 del alumno: ";
    cin >> alumno.promedio.nota1;
    fflush(stdin);
    cout << "Ingrese la nota 2 del alumno: ";
    cin >> alumno.promedio.nota2;
    fflush(stdin);
    cout << "Ingrese la nota 3 del alumno: ";
    cin >> alumno.promedio.nota3;
    
    promedio = (alumno.promedio.nota1 + alumno.promedio.nota2 + alumno.promedio.nota3) / 3;

    cout << "Datos del alumno" << endl;
    cout << "Nombre: " << alumno.nombre << endl;
    cout << "Sexo: " << alumno.sexo << endl;
    cout << "Edad: " << alumno.edad << endl;
    cout << "Promedio: " << promedio << endl;

    getch();
    return 0;
}