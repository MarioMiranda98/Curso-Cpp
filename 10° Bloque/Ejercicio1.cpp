/*
    Hacer una estructura llamada corredor, en la cual se tendran los siguientes campos: Nombre, edad, 
    sexo, club, pedir datos al usuario para un corredor y asignarle una categoria de competicion:

    - Juvenil <= 18 años
    - Señor <= 40 años
    - Veterano > 40 años

    Posteriormente imprimir todos los datos del corredor, incluida su categoria de competicion
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Corredor {
    char nombre[20];
    int edad;
    char sexo;
    char club[20];
};

typedef struct Corredor Corredor;

int main(void) {
    Corredor miCorredor;

    fflush(stdin);
    cout << "Ingresa nombre del corredor: ";
    cin.getline(miCorredor.nombre, 20, '\n');
    fflush(stdin);
    cout << "Ingrese la edad: ";
    cin >> miCorredor.edad;
    fflush(stdin);
    cout << "Ingrese sexo (M o F): ";
    cin >> miCorredor.sexo;
    fflush(stdin);
    cout << "Ingrese el club: ";
    cin.getline(miCorredor.club, 20, '\n');

    system("cls");

    cout << "Nombre: " << miCorredor.nombre << endl;
    cout << "Edad: " << miCorredor.edad << endl;
    cout << "Sexo: " << miCorredor.sexo << endl;
    cout << "Club: " << miCorredor.club << endl;
    
    if(miCorredor.edad <= 18)
        cout << "Categoria: Juvenil" << endl;
    else if(miCorredor.edad <= 40)
        cout << "Categoria: Se\244or" << endl;
    else if(miCorredor.edad > 40)
        cout << "Categoria: Veterano" << endl;
    else
        cout << "Sin asignar" << endl;

    getch();
    return 0;
}