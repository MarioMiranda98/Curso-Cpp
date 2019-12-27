/*
    Hacer un programa en C++. Para guardar numeros telefonicos que muestre un menu con las siguientes 
    opciones:

        1.-Crear(nombre, apellidos, telefono)
        2.-Agregar mas contactos(nombre, apellidos, telefono)
        3.-Visualizar contactos existentes
*/

#include "Ejercicio4Cabecera.h"

int main() {
    ohNo cAlmacenados[20];
    ofstream agenda;
    crearArchivo(agenda);

    menu(cAlmacenados, agenda);

    getch();
    return 0;
}
