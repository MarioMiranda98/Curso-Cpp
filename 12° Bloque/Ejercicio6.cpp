/*
    Hacer una funcion para almacenar N numeros en un arreglo dinamico, posteriormente en otra funcion 
    buscar un numero en particular.
    NOTA: Puedes utilizar cualquier metodo de busqueda(Secuencial o binaria)
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int* crearPuntero(int);
bool busquedaBinaria(int *, int, int, int);

int main() {
    int* arreglo = NULL;
    int n;
    int datoBusqueda;

    cout << "Ingresa el numero de elementos del arreglo: ";
    cin >> n;

    arreglo = crearPuntero(n);

    for (int i = 0; i < n; i++) {
        cout << "Ingresa el numero: ";
        cin >> arreglo[i];
    }

    system("cls");
    cout << "Ingresa el dato a buscar" << endl;
    cin >> datoBusqueda;

    if(busquedaBinaria(arreglo, 0, n, datoBusqueda)) 
        cout << "El dato: " << datoBusqueda << " fue encontrado" << endl;
    else
        cout << "El dato: " << datoBusqueda << " no ha sido encontrado" << endl;

    delete[] arreglo;
    
    getch();
    return 0;
}

int* crearPuntero(int n) {
    return new int[n];
}

bool busquedaBinaria(int* arreglo, int limiteInferior, int limiteSuperior, int datoBusqueda) {
    int mitad;
    bool bandera = false;

    while(limiteInferior <= limiteSuperior) {
        mitad = (limiteInferior + limiteSuperior) / 2;

        if(arreglo[mitad] == datoBusqueda) {
            bandera = true;
            break;
        }

        if(arreglo[mitad] > datoBusqueda) {
            limiteSuperior = mitad;
            mitad = (limiteInferior + limiteSuperior) / 2;
        }

        if(arreglo[mitad] < datoBusqueda) {
            limiteInferior = mitad;
            mitad = (limiteInferior + limiteSuperior) / 2;
        }
    }

    return bandera;
}