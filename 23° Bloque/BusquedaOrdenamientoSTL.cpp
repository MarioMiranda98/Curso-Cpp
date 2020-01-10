//Algoritmos de busqueda y ordenamiento

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstdlib>
using namespace std;

int numerosAleatorios();

template <typename T>
bool esPar(T);

int main() {
    vector <int> valores(10);

    generate(valores.begin(), valores.end(), numerosAleatorios);

    copy(valores.begin(), valores.end(), ostream_iterator<int> (cout, "|"));
    cout << endl;

    vector <int> pares;

    vector<int>::iterator i;
    i = valores.begin();

    while((i = find_if(i, valores.end(), esPar <int>)) != valores.end()) {
        pares.push_back(*i);
        i++;
    }


    //Mostramos el vector pares en pantalla
    copy(pares.begin(), pares.end(), ostream_iterator <int> (cout, "|"));
    cout << endl;

    sort(pares.begin(), pares.end());
    
    copy(pares.begin(), pares.end(), ostream_iterator <int> (cout, "|"));
    cout << endl;
    
    return 0;
}

int numerosAleatorios() {
    return rand() % 30;
}

template <typename T>
bool esPar(T valor) {
    return ((valor % 2) == 0);
}