/*
    Realice un programa que pida al usuario el nombre de un fichero de texto y a continuacion permita
    almacenar al usuario tantas frases como desee.
*/

#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
using namespace std;

void pedir();
void escribirArchivo(ofstream &, string);

int main() {

    pedir();

    getch();
    return 0;
}

void pedir() {
    ofstream archivo;
    char d;
    string frase;
    string nombreArchivo;
    char ruta[] = "./Archivos/";


    cout << "Ingrese el nombre del archivo: ";
    getline(cin, nombreArchivo);

    strcat(ruta, nombreArchivo.c_str());

    archivo.open(ruta, ios::out);

    if(archivo.fail()) {
        cout << "No se creo el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    while(1) {
        fflush(stdin);
        cout << "Ingresa una frase: ";
        getline(cin, frase);

        escribirArchivo(archivo, frase);

        cout << "Ingresr otra frase (S/N): ";
        cin >> d;

        if(d == 'N') 
            break;
        system("cls");
    }

    archivo.close();
}

void escribirArchivo(ofstream &fdArchivo, string escritura) {
    fdArchivo << escritura << endl;
}