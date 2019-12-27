//Funciones de posicionamiento - escritura

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

void escribir();
void leer();

int main() {

    escribir();
    leer();

    getch();
    return 0;
}

void escribir() {
    ofstream archivo;

    archivo.open("./Archivos/Posicion.txt", ios::out);

    if(archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Posicion actual del puntero: " << archivo.tellp() << endl;
    archivo << "Hola que tal?" << endl;

    archivo.seekp(5);//Posiciona el cursor en N para empezar a escribir a partir de este

    archivo << "como estas?" << endl;
    cout << "Posicion actual del puntero: " << archivo.tellp() << endl;

    archivo.close();
}

void leer() {
    ifstream archivo;

    archivo.open("./Archivos/Posicion.txt", ios::in);

    if(archivo.fail()) {
        cout << "No se puede abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    string linea;

    archivo.seekg(5);//Posiciona el puntero para la lectura
    cout << "Posicion actual: " << archivo.tellg() << endl; //Dice la posicion del puntero en la lectura

    getline(archivo, linea);

    cout << linea << endl;

    archivo.close();
}