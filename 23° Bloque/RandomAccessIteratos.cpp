//Iteradores - Random Access Iterators

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

//Funcion template para mostrar los elementos de un contenedor
template <typename Iter>
void mostrarPantalla(Iter inicio,  Iter final);

int main() {
    vector <char> letras(10);//creando el vector de 10 elementos char

    //Agregando elementos al vector
    for(int i = 0; i < 10; i++) {
        letras[i] = 'A' + (rand() % 26);
    } 

    //visualizar los elementos del vector
    mostrarPantalla(letras.begin(), letras.end());

    //Visualizar los elementos del vector al reves
    mostrarPantalla(letras.rbegin(), letras.rend());

    //Visuzalizar los elementos del medio del vector
    mostrarPantalla(letras.begin() + 1, letras.end() - 1);

    return 0;
}

template <typename Iter>
void mostrarPantalla(Iter inicio,  Iter final) {
    while(inicio != final) {
        cout << *inicio << "|";
        inicio++;
    }

    cout << endl;
}