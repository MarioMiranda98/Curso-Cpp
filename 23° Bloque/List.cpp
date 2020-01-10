//Contenedor lineal - list

#include <iostream>
#include <list>
using namespace std;

int main() {
    list <int> datos;

    //Agregar elementos
    datos.push_back(5); // Añadiendo desde el final
    datos.push_back(1);
    datos.push_back(6);

    //Añadiendo desde el principio
    datos.push_front(2);
    datos.push_front(7);
    datos.push_front(3);

    list <int>::iterator i; //Creando el iterador, es un puntero
    i = datos.begin();//apuntamos al inicio de la lista

    //Mostrando elementos
    while(i != datos.end()) {
        cout << *i << "|";
        i++;
    }

    cout << endl;

    datos.sort();//Ordenando elementos

    i = datos.begin();//apuntamos al inicio de la lista
    //Mostrando elementos
    while(i != datos.end()) {
        cout << *i << "|";
        i++;
    }

    cout << endl;

    //Eliminando elementos de la lista
    datos.pop_back(); // Desde el final
    datos.pop_front(); //Desde el principio

    i = datos.begin();//apuntamos al inicio de la lista
    //Mostrando elementos
    while(i != datos.end()) {
        cout << *i << "|";
        i++;
    }

    cout << endl;

    return 0;
}