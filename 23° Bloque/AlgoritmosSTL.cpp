//Algoritmos - Iniciando con algorithm

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int numerosAleatorios();

int main() {
    list <int> valores(10);//Lista de 10 elementos enteros
    
    //generado numeros aleatorios en un rango de la lista
    generate(valores.begin(), valores.end(), numerosAleatorios);  
    
    //Mostrando los elementos de la lista
    ostream_iterator <int> salida(cout, "|");
    copy(valores.begin(), valores.end(), salida);

    //Buscar un elemento en la lista
    //Primera aparicion del numero 8
    list<int>::iterator i;
    i = find(valores.begin(), valores.end(), 8);
    
    //Se analiza si el valor de i no sobrepasa el valor de la lista
    cout << endl;
    if(i != valores.end()) {
        cout << "El elemento " << *i << " ha sido encontrado" << endl;
    } else {
        cout << "El elemento no ha sido encontrado" << endl;
    }


    return 0;
}

int numerosAleatorios() {
    return rand() % 10;
}