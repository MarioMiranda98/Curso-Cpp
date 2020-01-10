//Iteradores - Forward Iterators

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <iterator>
#include <vector>
using namespace std;

int main() {
    ifstream archivo;

    archivo.open("./Documento.txt", ios::in);

    if(archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    istream_iterator <char> p(archivo); //creando un iterador para char, apuntando al inicio del archivo
    vector <char> frase;

    while(!archivo.eof()) {
        frase.push_back(*p); //Añadiendo lo que apunte 
        p++;
    }

    //Mostrando el vector frase
    for (int i = 0; i < frase.size(); i++) 
        cout << frase[i];

    cout << endl;

    archivo.close();

    return 0;
}