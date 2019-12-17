/*
    Asignacion dinamica de arreglos

    new: Reserva el numero de bytes solicitados por la declaracion 
    delete: libera un bloque de bytes reservado con anterioridad.

    Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un arreglo dinamico
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int * pedirNotas(int &, int *);
void mostrar(int, int *);

int main() {
    int num;
    int *calificaciones = NULL;

    calificaciones = pedirNotas(num, calificaciones);
    mostrar(num, calificaciones);

    delete[] calificaciones;

    getch();
    return 0;
}


int * pedirNotas(int &num, int *calificaciones) {
    cout << "Ingrese el numero de calificaciones: ";
    cin >> num;

    calificaciones = new int[num];//Crear arreglo dinamico
    for(int *ptr = calificaciones; ptr < (calificaciones + num); ptr++) {
        cout << "Ingrese una nota: ";
        cin >> *ptr;
    }

    return calificaciones;
}  

void mostrar(int num, int *calificaciones) {
    for(int *ptr = calificaciones; ptr < (calificaciones + num); ptr++)
        cout << "Calificaciones: " << *ptr << endl;
}