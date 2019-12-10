/*
    Hacer una estructura llamada alumno, en la cual se tendran los siguientes campos: Nombre, edad,
    promedio, pedir datos al usuario para 3 alumnos, comprobar cual de los 3 tiene mejor promedio
    y posteriormente imprimir los datos del alumno
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Alumno {
    char nombre[30];
    int edad;
    float promedio;
};

typedef struct Alumno Alumno;

void mostrarDatos(Alumno miAlumno);

int main(void) {
    Alumno misAlumnos[3];
    float mayor = 0;
    int pos;

    for(int i = 0; i < 3; i++) {
        fflush(stdin);
        cout << "Ingresa nombre del alumno " << i + 1 << ": ";
        cin.getline(misAlumnos[i].nombre, 30, '\n');
        fflush(stdin);
        cout << "Ingresa la edad del alumno " << i + 1 << ": ";
        cin >> misAlumnos[i].edad;
        fflush(stdin);
        cout << "Ingresa el promedio del alumno " << i + 1 << ": ";
        cin >> misAlumnos[i].promedio; 

        if(misAlumnos[i].promedio > mayor) {
            mayor = misAlumnos[i].promedio;
            pos = i;
        }
    }

    //Version Directa XD
    /*if(misAlumnos[0].promedio > misAlumnos[1].promedio) {
        if(misAlumnos[0].promedio > misAlumnos[2].promedio)
            mostrarDatos(misAlumnos[0]);
        else
            mostrarDatos(misAlumnos[2]);
    } else {
        if(misAlumnos[1].promedio > misAlumnos[2].promedio)
            mostrarDatos(misAlumnos[1]);
        else
            mostrarDatos(misAlumnos[2]);
    }*/

    mostrarDatos(misAlumnos[pos]);

    getch();
    return 0;
}

void mostrarDatos(Alumno miAlumno) {
    system("cls");
    cout << "Mejor Promedio" << endl;
    cout << "Nombre: " << miAlumno.nombre << endl;
    cout << "Edad: " << miAlumno.edad << endl;
    cout << "Promedio: " << miAlumno.promedio << endl;
}