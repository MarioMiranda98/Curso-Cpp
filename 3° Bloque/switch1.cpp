#include <iostream>

using namespace std;

int main(void) {
    int numero;

    cout << "Digite un numero entre 1 y 5" << endl;
    cin >> numero;

    switch (numero) {
    case 1:
        cout << "Numero digitado = " << numero << endl;
        break;
    case 2:
        cout << "Numero digitado = " << numero << endl;
        break;
    case 3:
        cout << "Numero digitado = " << numero << endl;
        break;
    case 4:
        cout << "Numero digitado = " << numero << endl;
        break;
    case 5:
        cout << "Numero digitado = " << numero << endl;
        break;
    default:
        cout << "No se encuentra el numero en el rango" << endl;
        break;
    }

    return 0;
}