#include <iostream>
#include <conio.h>
#include "Alumno.h"
using namespace std;

int main() {
    //Alumno alumnos[4];//Arreglo de objetos estatico
    Alumno* alumnos2 = new Alumno[3]; //Arreglo de objetos dinamico

    for(int i = 0; i < 3; i++) {
        (alumnos2 + i) -> pedirDatos();
    }

    system("cls");
    cout << "Mostrando las notas" << endl;

    for(int i = 0; i < 3; i++) 
        (alumnos2 + i) -> mostrarDatos();
    
    getch();
    return 0;
}