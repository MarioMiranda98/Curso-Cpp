/*
    Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier numero introducido 
    por el usuario. Por ejemplo si se introduce el numero 256.879, deberia desplegarse el numero
    0.879
*/

#include <iostream>
#include <conio.h>
using namespace std;

//void parteFraccionaria(char cadena[]);
void parteFraccionaria(float n);

int main(void) {
    //char cadena[20];
    float numero;

    cout << "Introduce un numero con decimal: ";
    //cin.getline(cadena, 20, '\n');
    cin >> numero;

    parteFraccionaria(numero); 

    getch();
    return 0;
}

void parteFraccionaria(float n) {
    int entero;
    entero = n;

    n = n - entero;

    cout << "Parte Fraccionaria: " << n << endl;
}

/*void parteFraccionaria(char cadena[]) {
    char fraccion[10];
    int i = 0;
    int j = 0;
    bool bandera = false;

    while(cadena[i] != 0) {
        if(cadena[i] == '.')
            bandera = true;
        if(bandera) {
            fraccion[j] = cadena[i];
            j++;
        }
        i++;
    }
    
    fraccion[j] = '\0';
    cout << "Parte Fraccionaria: 0" << fraccion << endl;
}*/