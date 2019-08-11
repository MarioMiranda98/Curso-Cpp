/*Hacer un programa que simule un cajero automatico con un saldo inicial de 1000 dolares*/

#include <iostream>
using namespace std;

int main(void) {
    const int SALDOINICIAL = 1000;
    int saldo = SALDOINICIAL;
    int opcion;
    float extra;
    int retiro;

    cout << "\tBienvenido a tu cajero virtual" << endl;
    cout << "1.-Ingresar dinero a la cuenta" << endl;
    cout << "2.-Retirar dinero de la cuenta" << endl;
    cout << "3.-Salir" << endl;
    cin >> opcion;

    switch (opcion) {
    case 1:
        cout << "Ingresa el dinero a aumentar" << endl;
        cin >> extra;
        saldo += extra;
        cout << "Tu cuenta tiene " << saldo << " de dinero" << endl;
        break;
    case 2:
        cout << "Digita la cantidad de dinero a retirar" << endl;
        cin >> retiro;

        if (retiro > saldo) 
            cout << "Operacion Imposible" << endl;
        else
            cout << "Retiraste: " << retiro << "\nSaldo: " << (saldo - retiro) << endl;

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