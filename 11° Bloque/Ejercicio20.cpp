/*
    Realice una funcion recursiva para la serie fibonacci.
    Nota: La serie fibonacci esta formada por la secuencia de numeros: 
    0,1,1,2,3,5,8,13,21,34,...
*/

#include <iostream>
#include <conio.h>
using namespace std;

int fibonacci(int);

int main(void) {
    int n = 0;

    do {
        cout << "Ingrese un numero: ";
        cin >> n;
    }while(n <= 0);
    
    for(int i = 0; i < n; i++) 
        cout << fibonacci(i) << ","; //Si se llama una vez, entonces devolvera el ultimo elemento de
                                     //la sucesion pedida.
    cout << endl;

    getch();
    return 0;
}

//Para n = 5
//n(5) = 0, 1, 1, 2, |3|
//n(4) = 0, 1, 1, |2|
//n(3) = 0, 1, |1|
//n(2) = 0, |1|
//n(1) = |0|
int fibonacci(int n) {
    if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        //Del hecho que 0 + 1 = 1, luego 1 + 1 = 2, luego 1 + 2 = 3
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}