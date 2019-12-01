/*Hacer un programa que realice la serie de fibonacci -> 1 1 2 3 5*/
#include <iostream>
#include <conio.h>
using namespace std;

int main(void) {
    int n = 1;
    int fibo = 1, fibo2 = 1, fiboFinal;
    cout << "Ingresa el tope" << endl;
    cin >> n;

    for (int i = 0; i <= n; i += 1){
        if (i == 0 || i == 1 ) {
            cout << "1, " ;
        } else {
            fiboFinal = fibo + fibo2;
            cout << fiboFinal << ", ";
            fibo2 = fibo;
            fibo = fiboFinal;
        }
    }

    cout << endl;
    getch();
    return 0;
}