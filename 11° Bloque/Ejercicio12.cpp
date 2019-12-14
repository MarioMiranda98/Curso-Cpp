/*
    Realice una funcion que tome como parametros un vector y su tamaño y diga si el vector esta
    ordenado crecientemente. Sugerencia: Compruebe que para todas las posiciones del vector, salvo
    para la 0 el elemento del vector es mayor o igual que el elemento que le precede en el vector.
*/

#include <iostream>
#include <conio.h>
using namespace std;

void comprobarOrdenamiento(int vec[], int tam);

int main() {
    int elementosVector;
    int vector[100];

    cout << "Ingrese los elementos del vector: ";
    cin >> elementosVector;

    for(int i = 0; i < elementosVector; i++) {
        cout << "Ingrese un numero: ";
        cin >> vector[i];
    }

    comprobarOrdenamiento(vector, elementosVector);

    getch();
    return 0;
}

void comprobarOrdenamiento(int vec[], int tam) {
    char bandera = 'F';
    int i = 0;

    while((bandera == 'F') && (i < tam - 1)) {
        if(vec[i] < vec[i + 1]) { 
            i++;
            continue;
        }
        else
            bandera = 'V';     

        i++;
    } 

    if(bandera == 'V') {
        cout << "El arreglo no esta ordenado" << endl;
    } else {
        cout << "El arreglo esta ordenado" << endl;
    }
}