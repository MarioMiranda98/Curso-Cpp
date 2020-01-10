//Contenedores asociativos - Map y multimap

#include <iostream>
#include <iterator>
#include <map>
using namespace std;

typedef pair<int, string> par;

int main() {
    multimap <int, string> valores;

    //Insertar valores
    valores.insert(par(3, "Stefany"));
    valores.insert(par(1, "Luis"));
    valores.insert(par(5, "Alejandro"));
    valores.insert(par(2, "Maria"));

    //Mostrar en pantalla el multimap
    multimap<int, string>::iterator i;
    for(i = valores.begin(); i != valores.end(); i++)
        cout << "Clave: " << i -> first << " Valor: " << i -> second << endl;

    cout << endl;

    //Insertar claves repetidas
    valores.insert(par(1, "Carla"));
    valores.insert(par(5, "Paola"));
    valores.insert(par(5, "Fernando"));

    for(i = valores.begin(); i != valores.end(); i++)
        cout << "Clave: " << i -> first << " Valor: " << i -> second << endl;

    cout << endl;

    //Contar elementos
    int clave = 5;
    cout << "Conteo de la clave " << clave << ": " << valores.count(clave) << endl;
    cout << endl;

    for(i = valores.lower_bound(clave); i != valores.upper_bound(clave); i++) {
        cout << "Clave: " << i -> first << " Valor: " << i -> second << endl;
    }

    cout << endl;

    return 0;
}