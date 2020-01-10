//Contenedores asociativos - Set y Multiset
 
#include <iostream>
#include <iterator>
#include <algorithm>
#include <set>//Para set y multiset
using namespace std;

int main() {
    set <int> valores;//Creando valores (set), ordena y no admite repeticion

    valores.insert(5);
    valores.insert(3);
    valores.insert(10);
    valores.insert(1);
    valores.insert(15);

    //Mostrar el set en pantalla
    copy(valores.begin(), valores.end(), ostream_iterator<int> (cout, "|"));
    cout << endl;

    //Busqueda de un elemento
    set<int>::iterator i = valores.find(3);

    if(i == valores.end()) 
        cout << "El elemento no se encuentra" << endl;
    else 
        cout << "El elemento " << *i << " ha sido encontrado" << endl;

    //Eliminacion de un elemento del set
    valores.erase(1);
    
    //Mostrar el set en pantalla
    copy(valores.begin(), valores.end(), ostream_iterator<int> (cout, "|"));
    cout << endl;

    return 0;
}