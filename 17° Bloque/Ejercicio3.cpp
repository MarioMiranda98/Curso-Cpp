/*
    Realice un programa que pida al usuario el nombre o ubicacion de un fichero de texto y, a 
    continuacion añada texto en el hasta que el usuario lo decida
*/

#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
using namespace std;

void pedir();
void aniadir(ofstream &, string);

int main() {

    pedir();

    getch();
    return 0;
}

void pedir() {
    string archivo;
    string frase;
    ofstream salida;
    char d;

    cout << "Introduce ruta o nombre del archivo: ";
    getline(cin, archivo);

    salida.open(archivo, ios::app);

    if(salida.fail()) {
        cout << "Error al abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    do {
        system("cls");
        fflush(stdin);
        cout << "Ingrese una frase: ";
        getline(cin, frase);

        aniadir(salida, frase);

        cout << "Otra (S/N)" << endl;
        cin >> d;
    }while(d != 'N');

    salida.close();
}

void aniadir(ofstream &salida, string frase) {
    salida << frase << endl;
}