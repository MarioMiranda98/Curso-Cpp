//Escribir archivo txt

#include <iostream>
#include <conio.h>
#include <string.h>
#include <fstream>
using namespace std;

void escribir();

int main() {
    escribir();

    getch();
    return 0;
}

void escribir() {
    ofstream archivo;
    string nombreArchivo;
    char ruta[] = "./Archivos/";


    cout << "Ingrese el nombre del archivo: ";
    getline(cin, nombreArchivo);

    strcat(ruta, nombreArchivo.c_str());
    
    archivo.open(ruta, ios::out);//Abriendo el archivo

    if(archivo.fail()) {
        cout << "No se creo el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    archivo << "Hola que tal?, mi nombre es Mario" << endl;
    archivo << "Agregando mas texto al archivo" << endl;

    archivo.close();
}