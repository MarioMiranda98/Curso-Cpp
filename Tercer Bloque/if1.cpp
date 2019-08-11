/*
    Operadores de comparacion
    == igual a
    <= menor o igual
    >= mayor a igual
    < estrictamente menor
    >estrictamente mayor
    != distinto de
 */
#include <iostream>

using namespace std;

int main(void) {
    int numero;
    const int DATO = 5;

    cout << "Digite un numero: ";
    cin >> numero;
    cout << endl;

    if (numero == DATO)
        cout << "El numero es " << numero << endl;
    else 
        cout << "El numero es distinto a " << DATO << endl;

    return 0;
}