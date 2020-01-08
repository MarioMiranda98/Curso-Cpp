/*
    Ejemplo:

    Dado un numero natural N, obtener la suma de los digitos que consta.
    Presentar un algoritmo recursivo y otro iterativo
*/

#include <iostream>
using namespace std;

int sumaRecursiva(int);
int sumaIterativa(int);

int main() {
    int numero;

    cout << "Digite un numero: ";
    cin >> numero;

    cout << "Solucion con algoritmo recursivo: " << sumaRecursiva(numero) << endl;
    cout << "Solucion algoritmo iterativo: " << sumaIterativa(numero) << endl;

    return 0;
}

int sumaRecursiva(int n) {
    if(n <= 1) {
        return n;
    } else {
        return n%10 + sumaRecursiva(n / 10);
    }
}

int sumaIterativa(int n) {
    int suma = 0;

    while(n > 9) {
        suma += n%10;
        n /= 10;
    }

    suma += n;

    return suma;
}