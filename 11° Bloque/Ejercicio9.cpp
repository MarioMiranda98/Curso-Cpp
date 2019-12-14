/*
    Escriba una funcion nombrada tiempo() que tenga un parametro en numero entero llamado totalSeg y 
    tres parametros de referencia enteros nombrados horas, minutos y segundos. La funcion es convertir 
    el numero de segundos transmitido en un numero equivalente de horas, minutos y segundos.
*/

#include <iostream>
#include <conio.h>
using namespace std;

void tiempo(int, int &, int &, int &);

int main(void) {
    int totalSegundos;
    int horas;
    int minutos;
    int segundos;

    cout << "Ingresa el numero total de segundos: ";
    cin >> totalSegundos;

    tiempo(totalSegundos, horas, minutos, segundos);

    cout << "Conversion" << endl;
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos << endl;

    getch();
    return 0;
}

void tiempo(int totalSegundos, int &horas, int &minutos, int &segundos) {
    horas = totalSegundos / 3600;
    totalSegundos %= 3600;
    minutos = totalSegundos / 60;
    segundos = totalSegundos % 60;
}