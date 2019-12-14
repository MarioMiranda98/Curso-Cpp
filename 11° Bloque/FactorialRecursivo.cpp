/*
    Recursividad
    
    Factorial de un numero 3! = 3 * 2 * 1

    factorial(n) = 1                    , si n = 0
                    n * factorial(n - 1), si n > 0
*/

#include <iostream>
#include <conio.h>
using namespace std;

int factorial(int);

int main() {
    int n;

    cout << "Digite el numero: ";
    cin >> n;

    cout << "El factorial es: " << factorial(n) << endl;

    getch();
    return 0;
}

int factorial(int n) {
    if(n == 0) {
        return 1;
    } else 
        return n * factorial(n - 1);
}