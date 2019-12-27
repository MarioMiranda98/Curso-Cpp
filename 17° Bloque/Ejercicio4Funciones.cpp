#include "Ejercicio4Cabecera.h"

void menu(ohNo cAlmacenados[20], ofstream &agenda) {
    int e;
    int posicion = 0;

    while(1) {
        system("cls");
        cout << "1.-Crear Contacto" << endl;
        cout << "2.-Agregar Contacto" << endl;
        cout << "3.-Visualizar Contactos" << endl;
        cout << "4.-Ver almacenados" << endl;
        cout << "5.-Salir" << endl;
        cin >> e;

        system("cls");
        switch(e) {
            case 1:
                crearContacto(cAlmacenados, posicion);
                break;
            case 2:
                agregarContacto(cAlmacenados, posicion, agenda);
                break;
            case 3:
                visualizarContactos();
                getch();
                break;
            case 4:
                almacenar(cAlmacenados, posicion);
                break;
            case 5:
                agenda.close();
                exit(EXIT_SUCCESS);
                break;
            default:
                agenda.close();
                exit(EXIT_SUCCESS);
                break;
        }
    }
}

void crearArchivo(ofstream &agenda) {
    agenda.open("./Archivos/Agenda.txt", ios::app);

    if(agenda.fail()) {
        cout << "No se pudo crear el archivo" << endl;
        exit(EXIT_FAILURE);
    }
}

void crearContacto(ohNo cAlmcenados[20], int &posicion) {
    ohNo contacto;

    fflush(stdin);
    cout << "Ingresa nombre: ";
    getline(cin, contacto.nombre);

    fflush(stdin);
    cout << "Ingresa apellidos: ";
    getline(cin, contacto.apellido);

    fflush(stdin);
    cout << "Ingresa numero: ";
    getline(cin, contacto.telefono); 

    posicion += almacenarContacto(contacto, cAlmcenados, posicion);
}


int almacenarContacto(ohNo contacto, ohNo cAlmacenados[20], int &posicion) {
    cAlmacenados[posicion] = contacto;

    return 1;
}


void almacenar(ohNo cAlmacendos[20], int &posicion) {
    for(int i = 0; i < posicion; i++) {
        fflush(stdout);
        cout << i + 1 << endl;
        cout << "Nombre: " << cAlmacendos[i].nombre << endl;
        cout << "Apellidos: " << cAlmacendos[i].apellido << endl;
        cout << "Telefono: " << cAlmacendos[i].telefono << endl;
    }

    getch();
}

void agregarContacto(ohNo cAlmacenados[20], int &posicion, ofstream &agenda) {
    almacenar(cAlmacenados, posicion);

    system("cls");
    int eleccion;

    cout << "Digite el numero del contacto a almacenar: ";
    cin >> eleccion;

    if(eleccion > posicion || eleccion <= 0) 
        agregarContacto(cAlmacenados, posicion, agenda);
    else {
        eleccion -= 1;
        agenda << "Nombre: " << cAlmacenados[eleccion].nombre << endl;
        agenda << "Apellidos: " << cAlmacenados[eleccion].apellido << endl;
        agenda << "Telefono: " << cAlmacenados[eleccion].telefono << endl;

        actualizarAlmacenados(cAlmacenados, posicion, eleccion);
    }
}

void actualizarAlmacenados(ohNo cAlmacenados[20], int &posicion, int eleccion) {
    for (int i = eleccion; i < posicion - 1; i++) {
        cAlmacenados[i] = cAlmacenados[i + 1];
    }

    posicion -= 1;
}

void visualizarContactos() {
    ifstream ver;
    string texto;

    ver.open("./Archivos/Agenda.txt", ios::in);

    if(ver.fail()) {
        cout << "No se pudo abrir" << endl;
        exit(EXIT_FAILURE);
    }

    while(!ver.eof()) {
        fflush(stdout);

        getline(ver, texto);
        cout << texto << endl;
        
        getline(ver, texto);
        cout << texto << endl;

        getline(ver, texto);
        cout << texto << endl;
        
        cout << endl;
    }   

    ver.close();
}