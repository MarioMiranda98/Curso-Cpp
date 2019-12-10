/*
    Hacer un arreglo de estructuras llamada atleta para N atletas que contengan los siguientes campos:
    nombre, pais, numero_medallas y devuelva los datos (Nombre, pais) del atleta que ha ganado el mayor
    numero de medallas
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Atleta {
    char nombre[20];
    char pais[20];
    int numeroMedallas;
};

typedef struct Atleta Atleta;

int main(void) {
    Atleta atletas[100];
    int numeroAtletas;
    int mayor = 0;
    int posicion;

    cout << "Ingresa el numero de atletas: ";
    cin >> numeroAtletas;

    for(int i = 0; i < numeroAtletas; i++) {
        fflush(stdin);
        cout << "Ingresa el nombre del atleta: ";
        cin.getline(atletas[i].nombre, 20, '\n');
        fflush(stdin);
        cout << "Ingresa el pais del atleta: ";
        cin.getline(atletas[i].pais, 20, '\n');
        fflush(stdin);
        cout << "Ingresa el numero de medallas ganadas: ";
        cin >> atletas[i].numeroMedallas;

        if(atletas[i].numeroMedallas > mayor) {
            mayor = atletas[i].numeroMedallas;
            posicion = i;
        }
    }

    cout << "Mejor Atleta" << endl;
    cout << "Nombre: " << atletas[posicion].nombre << endl;
    cout << "Pais: " << atletas[posicion].pais << endl;

    getch();
    return 0;
}