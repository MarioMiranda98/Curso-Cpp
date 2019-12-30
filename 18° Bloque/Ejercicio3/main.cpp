/*
    Construir un programa que permita dirigir el movimiento de un objeto dentro de un tablero y 
    actualice su posicion dentro del mismo. Los movimientos posibles son ARRIBA, ABAJO, IZQUIERDA,
    DERECHA. Tras cada movimiento con el programa mostrara la nueva direccion elegida y las 
    coordenadas de situacion del objeto dentro del tablero.
*/

#include <iostream>
#include "Tablero.h"
using namespace std;

void menu(Tablero &);

int main() {
    int x, y;
    char c;
    Tablero* t;

    cout << "Ingresa coordenadas: ";
    cin >> x >> y;

    t = new Tablero(x, y);

    do{
        system("cls");
        
        cout << "Coordenadas X: " << t -> getX() << " Y: " << t -> getY() << endl;
        system("pause");
        menu(*t);

        cout << "Coordenadas X: " << t -> getX() << " Y: " << t -> getY() << endl;
        system("pause");

        cout << "Otra (S/N): ";
        cin >> c;
    }while(c != 'N');

    delete t;

    return 0;
}

void menu(Tablero &t) {
    int z;
    int cantidad;

    cout << "Movimientos" << endl;
    cout << "1.-Arriba" << endl;
    cout << "2.-Abajo" << endl;
    cout << "3.-Derecha" << endl;
    cout << "4.-Izquierda" << endl;
    cin >> z;

    system("cls");
    cout << "Ingrese cantidad: ";
    cin >> cantidad;

    switch(z) {
        case 1:
            t.moverArriba(cantidad);
            break;
        case 2:
            t.moverAbajo(cantidad);
            break;
        case 3:
            t.moverDerecha(cantidad);
            break;
        case 4:
            t.moverIzquierda(cantidad);
            break;
        default:
            cout << "Ma cos'é sta merda?" << endl;
            break;
    }
}