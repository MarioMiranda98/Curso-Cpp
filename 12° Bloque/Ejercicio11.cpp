/*
    Hacer una estructura llamda alumno, en la cual se tendran los siguientes campos: Nombre, edad, 
    promedio, pedir datos al usuario para 3 alumnos, comprobar cual de los 3 tiene el mejor promedio
    y posteriormente imprimir los datos del alumno.
    NOTA: Usar punteros a estructura.
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
typedef Alumno* ptrAlumno;

ptrAlumno pedirDatos(ptrAlumno);
ptrAlumno compararPromedio(ptrAlumno, ptrAlumno, ptrAlumno);
void mostrarDatos(ptrAlumno);

int main() {
    Alumno alumno1, alumno2, alumno3, alumno4;
    ptrAlumno alumnos = NULL;
    ptrAlumno alumnos2, alumnos3, alumnos4;
    alumnos = &alumno1;
    alumnos2 = &alumno2;
    alumnos3 = &alumno3;
    alumnos4 = &alumno4;

    alumnos = pedirDatos(alumnos);
    alumnos2 = pedirDatos(alumnos2);
    alumnos3 = pedirDatos(alumnos3);

    alumnos4 = compararPromedio(alumnos, alumnos2, alumnos3);

    mostrarDatos(alumnos4);

    getch();
    return 0;
}

ptrAlumno pedirDatos(ptrAlumno al) {
    fflush(stdin);
    cout << "Ingresa nombre: ";
    cin.getline(al -> nombre, 30, '\n');
    cout << "Ingresa edad: ";
    cin >> al -> edad;
    cout << "Ingresa promedio: ";
    cin >> al -> promedio;

    return al;
}

ptrAlumno compararPromedio(ptrAlumno al1, ptrAlumno al2, ptrAlumno al3) {
    if(al1 -> promedio > al2 -> promedio) {
        if(al1 -> promedio > al3 -> promedio) 
            return al1;
        else
            return al3;
    } else {
        if(al2 -> promedio > al3 -> promedio) 
            return al2;
        else
            return al3;
    }
}

void mostrarDatos(ptrAlumno a) {
    cout << "Mejor Alumno" << endl;
    cout << "Nombre: " << a -> nombre << endl;
    cout << "Edad: " << a -> edad << endl;
    cout << "Promedio: " << a -> promedio << endl;
}