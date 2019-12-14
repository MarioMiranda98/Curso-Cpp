/*
    Escriba una plantilla de funcion llamada maximo() que devuelva el valor maximo de tres argumentos
    que se transmitan a la funcion cuando sea llamada. Suponga que los tres argumentos seran del mismo 
    tipo de datos.
*/

#include <iostream>
#include <conio.h>
using namespace std;

template <class TIPOD>
TIPOD maximo(TIPOD arg1, TIPOD arg2, TIPOD arg3);

int main(void) {
    int dato1 = 4, dato2 = 2, dato3 = 6;

    cout << "El valor maximo es: " << maximo(dato1, dato2, dato3) << endl;
    
    getch();
    return 0;
}

template <class TIPOD>
TIPOD maximo(TIPOD arg1, TIPOD arg2, TIPOD arg3) {
    if(arg1 > arg2) {
        if(arg1 > arg3) 
            return arg1;
        else
            return arg3;
    }  else {
        if(arg2 > arg3)
            return arg2;
        else
            return arg3;
    }
}