//Contenedor lineal - vector

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> numeros; //Arreglo de enteros

    //Agregando elementos de manera dinamica
    numeros.push_back(5); //Al final del arreglo
    numeros.push_back(10);
    numeros.push_back(1);
    numeros.push_back(15);
    numeros.push_back(20);

    // numeros[0] = 5;
    // numeros[1] = 10;
    // numeros[2] = 1;
    // numeros[3] = 15;
    // numeros[4] = 20;

    //Mostrar Elementos del vector
    for (int i = 0; i < numeros.size(); i++) 
        cout << numeros[i] << "|";

    cout << endl;

    //Eliminando elementos de un arreglo
    //numeros.pop_back(); //Ulitmo elemento

    numeros.erase(numeros.begin() + 1, numeros.begin() + 3);

    //Mostrar Elementos del vector
    for (int i = 0; i < numeros.size(); i++) 
        cout << numeros[i] << "|";

    cout << endl;

    return 0;
}