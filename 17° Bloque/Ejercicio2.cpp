/*
    Realice un programa que pida al usuario el nombre o ubicacion de un fichero de texto y, a 
    continuacion de lectura a todo el fichero
*/

#include <iostream>
#include <conio.h>
#include <string.h>
#include <fstream>
using namespace std;

void pedir();
void leer(ifstream &);

int main() {

    pedir();
    
    system("pause");
    return 0;
}

void pedir() {
    string archivo;
    ifstream entrada;
    char ruta[] = "./Archivos/";
    int j = 0;

    cout << "Ingrese el nombre del archivo: ";
    getline(cin, archivo);

    char* rutaArchivo = new char[strlen(ruta) + strlen(archivo.c_str())];
    memset(rutaArchivo, 0, sizeof(rutaArchivo));

    strcat(rutaArchivo, ruta);
    strcat(rutaArchivo, archivo.c_str());

    //cout << rutaArchivo << endl;

    entrada.open(rutaArchivo, ios::in);

    if(entrada.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    system("cls");
    leer(entrada);

    delete[] rutaArchivo;
    entrada.close();
}

void leer(ifstream &entrada) {
    string linea;
    while(!entrada.eof()) {
        getline(entrada, linea);
        cout << linea << endl;
    }
}