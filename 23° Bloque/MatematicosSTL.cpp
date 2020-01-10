//Algoritmos STL - Matematicos

#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stdlib.h>
#include <numeric>
using namespace std;

template <typename T>
bool esPositivo(T);

int main() {
    ifstream archivo;
    vector <float> numeros;

    archivo.open("./ArchivoNumerico.txt", ios::in);
    
    if(archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    //copiamos todos los elementos del archivo hacia el vector numeros
    copy(istream_iterator<float>(archivo), istream_iterator<float>(), back_inserter(numeros));

    //Calculamos el maximo y minimo de los elementos del vector
    cout << "Maximo: " << *max_element(numeros.begin(), numeros.end()) << endl;
    cout << "Minimo: " << *min_element(numeros.begin(), numeros.end()) << endl;

    //Calculo del valor promedio
    cout << "Valor Promedio: " << accumulate(numeros.begin(), numeros.end(), 0.0) / numeros.size() << endl;

    cout << "Cantidad de Numeros positivos: " << count_if(numeros.begin(), numeros.end(), esPositivo<float>) << endl;
    
    archivo.close();  

    return 0;
}

template <typename T>
bool esPositivo(T valor) {
    return (valor >= 0);
}