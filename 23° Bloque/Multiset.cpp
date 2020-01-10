//Contenedores asociativos - Set y Multiset
 
#include <iostream>
#include <iterator>
#include <algorithm>
#include <set>//Para set y multiset
using namespace std; 

int main() {
    multiset <int> valores;

    //Insertando valores al multiset
    valores.insert(10);
    valores.insert(2);
    valores.insert(5);
    valores.insert(20);
    valores.insert(3);

    //Mostrar En pantalla
    copy(valores.begin(), valores.end(), ostream_iterator <int> (cout, "|"));
    cout << endl;

    //Insertar valores duplicados
    valores.insert(10);
    valores.insert(3);
    valores.insert(3);
    valores.insert(3);

    //Mostrar En pantalla
    copy(valores.begin(), valores.end(), ostream_iterator <int> (cout, "|"));
    cout << endl;

    //Buscar un elemento en el multiset
    multiset<int>::iterator i = valores.find(2);

    if(i != valores.end())
        cout << "El elemento: " << *i << " ha sido encontrado" << endl;
    else
        cout << "El elemento ha sido encontrado" << endl;

    //Contar cuantas veces aparece un determinado elemento
    cout << "El elemento 3 aparece: " << valores.count(3) << endl;

    //Eliminar un elemento del multiset
    valores.erase(3);

    //Mostrar En pantalla
    copy(valores.begin(), valores.end(), ostream_iterator <int> (cout, "|"));
    cout << endl;

    return 0;
}