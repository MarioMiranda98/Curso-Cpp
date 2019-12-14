/*
    Realice una funcion recursiva que sume los primeros n enteros positivos.

    Nota: Para plantear la funcion recursiva tenga en cuenta que la suma puede expresarse 
    mediante la siguiente recurrencia:

    suma(n) = 1                 , si n = 1
              n + suma(n - 1)   , si n > 1
*/

#include <iostream>
#include <conio.h>
using namespace std;

int suma(int);

int main() {
    int n;

    do {
        cout << "Ingrese un numero: ";
        cin >> n;
    }while(n <= 0);

    cout << "La suma sucesiva es: " << suma(n) << endl;

    getch();
    return 0;
}

int suma(int n) {
    if(n == 1) 
        return 1;
    else
        return n + suma(n - 1);
}
