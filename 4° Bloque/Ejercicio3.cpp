/*Realice un programa que calcule y muestre la salida estandar la suma de los cuadrados de los 10 
primeros enteros mayores a 0*/

#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(void) {

    int suma = 0;

    for (int i = 1; i <= 10; i += 1)
        suma += (pow(i, 2));

    cout << suma << endl;
    
    return 0;
}