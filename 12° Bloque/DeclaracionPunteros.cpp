/*
    Punteros - Declaracion de Punteros

    &n = La direccion de n
    *n = La variable cuya direccion esta almacenada en n
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int num;
    int *ptrNum = NULL; 

    num = 20;
    ptrNum = &num;

    cout << "Numero: " << num << " Direccion: " << &num << endl;
    cout << "Numero referenciado: " << *ptrNum << " Direccion de variable num: " << ptrNum << endl;
    cout << "Direccion del puntero: " << &ptrNum << endl;

    getch();
    return 0;
}