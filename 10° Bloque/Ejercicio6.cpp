/*
    Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N alumnos y calcular
    cual de todos tiene el mejor promedio, e imprimir sus datos.
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
    Alumno misAlumnos[100];
    float promedio;
    float promedioMayor = 0;
    int posicion = 0;
    int numeroAlumnos;

    cout << "Ingrese el numero de alumnos: ";
    cin >> numeroAlumnos;

    for(int i = 0; i < numeroAlumnos; i++) {
        fflush(stdin);
        cout << "Ingresa el nombre del alumno " << i + 1 << ": ";
        cin.getline(misAlumnos[i].nombre, 20, '\n');
        cout << "Ingrese el sexo del alumno: ";
        cin >> misAlumnos[i].sexo;
        fflush(stdin);
        cout << "Ingrese la edad del alumno: ";
        cin >> misAlumnos[i].edad;
         fflush(stdin);
        cout << "Ingrese la nota 1 del alumno: ";
        cin >> misAlumnos[i].promedio.nota1;
        fflush(stdin);
        cout << "Ingrese la nota 2 del alumno: ";
        cin >> misAlumnos[i].promedio.nota2;
        fflush(stdin);
        cout << "Ingrese la nota 3 del alumno: ";
        cin >> misAlumnos[i].promedio.nota3;

        promedio = (misAlumnos[i].promedio.nota1 + misAlumnos[i].promedio.nota2 + misAlumnos[i].promedio.nota3) / 3;

        if(promedio > promedioMayor) {
            promedioMayor = promedio;
            posicion = i;
        }
    }

    system("cls");
    cout << "Mejor Alumno" << endl;
    cout << "Nombre: " << misAlumnos[posicion].nombre << endl;
    cout << "Sexo: " << misAlumnos[posicion].sexo << endl;
    cout << "Edad: " << misAlumnos[posicion].edad << endl;
    cout << "Promedio: " << promedioMayor << endl;

    getch();
    return 0;
}