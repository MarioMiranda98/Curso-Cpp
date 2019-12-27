//Archivos Binarios

#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

struct Registro {
    char nombre[20];
    char apellido[20];
};

typedef struct Registro Registro;

void escribir();
void leer();

int main() {

    escribir();
    leer();

    getch();
    return 0;
}

void escribir() {
    ofstream archivoB;

    archivoB.open("./Archivos/Prueba.dat", ios::out | ios::binary);

    if(archivoB.fail()) {
        cout << "No se creo el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    Registro persona;

    memset(&persona, 0, sizeof(Registro));
    fflush(stdin);

    cout << "Pidiendo datos de la persona" << endl;
    cout << "Ingrese el nombre: ";
    cin.getline(persona.nombre, 20, '\n');
    cout << "Ingrese el apellido: ";
    cin.getline(persona.apellido, 20, '\n');

    archivoB.write((char *) &persona, sizeof(Registro)); //Escritura de los datos en el archivo binario
    archivoB.close();
}

void leer() {
    ifstream archivo;

    archivo.open("./Archivos/Prueba.dat", ios::in | ios::binary);

    if(archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    Registro persona;

    archivo.read((char *) &persona, sizeof(Registro));

    system("cls");
    cout << "Mostrando datos: " << endl;
    cout << "Nombre: " << persona.nombre << endl;
    cout << "Apellido: " << persona.apellido << endl;

    archivo.close();
}