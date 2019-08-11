/*Hacer un menu con las siguientes opciones
    Caso 1: Cubo de un numero
    Caso 2: Numero par o impar
    Caso 3: Salir
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
    int opcion, numero;

    cout << "\tIntroduce tu opcion" << endl;
    cout << "1.-Cubo de un numero" << endl;
    cout << "2.-Par de un numero" << endl;
    cout << "3.-Salir" << endl;
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese un numero" << endl;
            cin >> numero;
            cout << "El cubo de " << numero << " es " << (pow(numero, 3)) << endl;
            break;
        case 2:
            cout << "Ingrese un numero" << endl;
            cin >> numero;
            cout << "El numero es " << ((numero%2 == 0) ? "par" : "impar") << endl;
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "No hay mas opciones" << endl;
            break;
    }

    return 0;
}