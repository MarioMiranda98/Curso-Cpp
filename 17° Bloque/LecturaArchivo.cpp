//Lectura de un archivo de texto

#include <iostream>
#include <conio.h>
#include <string.h>
#include <fstream>
using namespace std;

void lectura();

int main() {
    lectura();

    getch();
    return 0;
}

void lectura() {
    ifstream entrada;
    string texto;

    entrada.open("./Archivos/Mario.txt", ios::in);

    if(entrada.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    while(!entrada.eof()) {
        getline(entrada, texto);
        cout << texto << endl;
    }

    entrada.close();
}