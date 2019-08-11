/*
    La sentencia do while
    do {
        conjunto de instrucciones;
    }while(expresion logica);
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void) {
    int i = 1;
    int j = 10;

    do {
        cout << i << endl;
        i++;
    }while(i <= 10);

    do {
        cout << j << endl;
        j--;
    }while (j >= 1);

    system("pause");
    return 0;
}