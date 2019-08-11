/*
    La sentencia For
    for(exp1; expresion logica; exp2) {
        conjunto de instrucciones;
    }
*/

#include <iostream>
#include <stdlib.h>

int main(void) {
    int i;

    for (i = 1; i <= 10; i += 1) 
        std::cout << i << std::endl;

    system("pause");
    return 0;
}