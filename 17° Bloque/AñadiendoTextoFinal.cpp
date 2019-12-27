//Añadiendo texto al final del archivo

#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
using namespace std;

void aniadir();

int main() {
    aniadir();

    getch();
    return 0;
}

void aniadir() {
    ofstream archivo;
    string txt;

    archivo.open("./Archivos/Mario.txt", ios::app);

    if(archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Ingrese un texto: ";
    getline(cin, txt);

    archivo << txt << endl;

    archivo << "Hola que tal?" << endl;

    archivo.close();
}