/*
    Escriba una funcion escribeNumeros(int ini, int fin) que devuelva en la salida estandar los numeros
    del ini al fin. Escriba una version que escriba los numeros en orden ascedente.
*/

#include <iostream>
#include <conio.h>
using namespace std;

//void escribeNumeros(int, int);
int escribeNumeros(int, int);

int main() {
    int ini, fin;

    do {
        cout << "Ingresa inicio y fin: ";
        cin >> ini >> fin;
    } while(ini > fin);

    for(int i = ini; i <= fin; i++)
        cout << escribeNumeros(i, fin) << endl;

    cout << endl;

    getch();
    return 0;
}

int escribeNumeros(int ini, int fin) {
    if(ini == fin) {
        return fin;
    }else {
        return escribeNumeros(ini, fin - 1);
    }
}

/*void escribeNumeros(int ini, int fin) {
    if(ini == fin) {
        cout << ini << " ";
    } else {
        cout << ini << " ";
        escribeNumeros(ini + 1, fin);
    }
}*/