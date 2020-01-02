/*
    Definir dos plantillas de funciones dentro de un archivo de cabecera llamado "ordenar.h" que puedan
    ordenar tanto ascendentemente como descendentemente un arreglo de N elementos, recuerde que puede 
    utilizar la plantilla intercambiar del video anterior.
*/

#include <iostream>
#include "Ordenar.h"
using namespace std;

int main() {
    int nElementos;
    int* elementos = NULL;

    cout << "Digite la Cantidad de elementos del arreglo: ";
    cin >> nElementos;
    
    elementos = new int[nElementos];

    for(int i = 0; i < nElementos; i++){
        cout << "Ingrese elemento: ";
        cin >> elementos[i];
    }

    ordenarAscendente(elementos, nElementos);

    cout << "Orden ascendente" << endl;
    for(int i = 0; i < nElementos; i++)
        cout << elementos[i] <<"|";

    cout << endl;

    delete[] elementos;

    return 0;
}