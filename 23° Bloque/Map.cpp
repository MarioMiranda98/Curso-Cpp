//Contenedores asociativos - Map y multimap

#include <iostream>
#include <iterator>
#include <map>
using namespace std;

typedef pair<int, string> par;

int main() {
    map<int, string> valores;//creamos un mapa para clave y valor, no admite claves repetidas

    //Insertar valores en el mapa
    valores.insert(par(1, "Mario"));
    valores.insert(par(2, "Mario2"));
    valores.insert(par(3, "Mario3"));

    //Mostrar el mapa en pantalla
    map<int, string>::iterator i;

    for (i = valores.begin(); i != valores.end(); i++) {
        cout << "Clave: " << i -> first << " Valor: " << i -> second << endl;
    }

    cout << endl;   

    //Modificar un valor de una clave existente
    valores[1] = "Mario M";

    for (i = valores.begin(); i != valores.end(); i++) {
        cout << "Clave: " << i -> first << " Valor: " << i -> second << endl;
    }

    //Buscar un elemento en el mapa
    i = valores.find(2);

    if(i != valores.end()) {
        cout << "Se ha encontrado -> clave: " << i -> first << " valor: " << i -> second << endl;
    } else {
        cout << "Valor no encontrado" << endl;
    }

    cout << endl;

    //Eliminar un elemento del mapa 
    valores.erase(1);

    for (i = valores.begin(); i != valores.end(); i++) {
        cout << "Clave: " << i -> first << " Valor: " << i -> second << endl;
    }

    return 0;
}