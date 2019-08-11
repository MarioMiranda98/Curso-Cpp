/*
    while(expresion logica) {
        conjunto de instrucciones
    }
*/
#include <iostream>
#include <conio.h>
using namespace std;


int main(void) {
    int i = 1;
    int j = 10;

    while (i <= 10) 
        cout << i++ << endl;

    while (j >= 1)
        cout << j-- << endl;

    getch();
    return 0;
}