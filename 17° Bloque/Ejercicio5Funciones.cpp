#include "Ejercicio5Cabecera.h"

void menu() {
    int eleccion;

    while(1) {
        system("cls");
        cout << "Menu" << endl;
        cout << "1.-Digitar Pulsacion" << endl;
        cout << "2.-Mas pulsaciones" << endl;
        cout << "3.-Ver pulsaciones registradas" << endl;
        cout << "4.-Salir" << endl;
        cin >> eleccion;

        system("cls");

        switch(eleccion) {
            case 1:
                digitarPulsacion();
                break;
            case 2:
                masPulsaciones();
                break;
            case 3:
                mostrarPulsaciones();
                break;
            case 4:
                exit(EXIT_SUCCESS);
                break;
            default:
                exit(EXIT_SUCCESS);
                break;
        }

        getch();
    }
}

void digitarPulsacion() {
    Registro atleta;
    ofstream archivo;

    archivo.open("./Archivos/Atleta.dat", ios::out | ios::binary);

    if(archivo.fail()) {
        cout << "No se pudo abrir o crear el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    atleta = datos();

    archivo.write((const char *) &atleta, sizeof(Registro));

    archivo.close();
}

void masPulsaciones() {
    Registro atleta;
    ofstream archivo;

    archivo.open("./Archivos/Atleta.dat", ios::app | ios::binary);

    if(archivo.fail()) {
        cout << "No se pudo abrir o crear el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    atleta = datos();

    archivo.write((const char *) &atleta, sizeof(Registro));

    archivo.close();
}

void mostrarPulsaciones() {
    Registro atleta;
    ifstream archivo;

    archivo.open("./Archivos/Atleta.dat", ios::in | ios::binary);

    if(archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Datos" << endl;

    while(!archivo.eof()) {
        archivo.read((char *) &atleta, sizeof(Registro));
        mostrarDatos(atleta);
    }

    archivo.close();
}

void mostrarDatos(Registro atleta) {
    fflush(stdout);
    cout << "Nombre: " << atleta.nombre << endl;
    cout << "Hora: " << atleta.hora << endl;
    cout << "Pulsaciones: " << atleta.pulsaciones << endl;
    cout << endl;
}

Registro datos() {
    Registro r;

    fflush(stdin);
    cout << "Ingrese nombre: ";
    cin.getline(r.nombre, 20, '\n');
    cout << "Ingrese hora: ";
    cin.getline(r.hora, 6, '\n');
    cout << "Ingrese numero de pulsaciones: ";
    cin >> r.pulsaciones;

    return r;
}