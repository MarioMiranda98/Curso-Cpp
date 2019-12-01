/*En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:
    a) Alumnos que aprobaron todos los examenes 
    b) Alumnos que aprobaron un examen
    c) Alumnos que aprobaron unicamente el ultimo examen

Realice un programa que permita la lectura de datos y el calculo de las estadisticas
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main(void) {
    float examen1, examen2, examen3;
    int aprobadosTodos = 0;
    int aprobadosUnExamen = 0;
    int aprobadosUltimo = 0;

    for(int i = 1; i <= 5; i++) {
        cout << i << ". Digite la nota del primer examen: " ;
        cin >> examen1;
        cout << endl << i << ". Digite la nota del seguno examen: "; 
        cin >> examen2;
        cout << endl  << i << ". Digite la nota del tercer examen: ";
        cin >> examen3;
        cout << endl;

        if((examen1 > 5.9) && (examen2 > 5.9) && (examen3 > 5.9)) 
            aprobadosTodos += 1;
        if((examen1 > 5.9) || (examen2 > 5.9) || (examen3 > 5.9)) 
            aprobadosUnExamen += 1;
        if((examen1 < 5.9) && (examen2 < 5.9) && (examen3 > 5.9))
            aprobadosUltimo += 1;
    }

    cout << "Alumnos que aprobaron todos los examenes: " << aprobadosTodos << endl;
    cout << "Alumnos que aprobaron un examen: " << aprobadosUnExamen << endl;
    cout << "Alumnos que aprobaron el ultimo examen: " << aprobadosUltimo << endl;

    getch();
    return 0;
}