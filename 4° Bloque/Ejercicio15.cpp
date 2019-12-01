/*
Realice un programa que solicite al usuario que piense un numero entero entre el 1 - 100. El programa 
debe generar un numero aleatorio en ese mismo rango (1 - 100), e indicarle al usuario si el numero que
digito es menor o mayor al numero aleatorio, asi hasta que lo adivine. Por ultimo, mostrarle el numero
de intentos que le llevo
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int numeroEntrada;
    int intentos = 0;
    int aleatorio;

    srand(time(NULL));
    aleatorio = 1 + rand() % (101 - 1);

    do {
        cout << "Introduce un numero entre 1 - 100" << endl;
        cin >> numeroEntrada;

        if(numeroEntrada > aleatorio) {
            cout << "El numero es menor" << endl;
        } else if(numeroEntrada < aleatorio) {
            cout << "El numero es mayor" << endl;
        }

        intentos += 1;
    } while(numeroEntrada != aleatorio);

    cout << "Felicidades adivinaste el numero con " << intentos << " intentos" << endl;

    getch();
    return 0;
}