/*
    Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La estructura 
    debe tener tres campos: horas, minutos y segundos. Escriba un programa que dado n etapas calcule
    el tiempo total empleado en correr todas las etapas.
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Tiempo {
    int horas;
    int minutos;
    int segundos;
};

typedef struct Tiempo Tiempo;

int main(void) {
    int numeroEtapas;
    int horasT = 0;
    int minutosT = 0;
    int segundosT = 0;
    Tiempo tiempo[100];

    cout << "Ingresa el numero de etapas: ";
    cin >> numeroEtapas;

    for(int i = 0; i < numeroEtapas; i++) {
        fflush(stdin);
        cout << "Ingresa las horas " << i + 1 << ": ";
        cin >> tiempo[i].horas;
        cout << "Ingresa los minutos " << i + 1 << ": ";
        cin >> tiempo[i].minutos;
        cout << "Ingresa los segundos " << i + 1 << ": ";
        cin >> tiempo[i].segundos;

        horasT += tiempo[i].horas;
        minutosT += tiempo[i].minutos;

        if(minutosT >= 60) {
            minutosT -= 60;
            horasT += 1;
        }

        segundosT += tiempo[i].segundos;
        if(segundosT >= 60) {
            segundosT -= 60;
            minutosT += 1;
        }
    }

    cout << "Tiempo total empleado" << endl;
    cout << horasT << " Horas, " << minutosT << " Minutos, " << segundosT << " Segundos" << endl;

    getch();
    return 0;
}