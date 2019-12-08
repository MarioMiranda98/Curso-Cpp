//Pasar una palabra a MAYUSCULA - Funcion strupr()

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(void) {
    char palabra[] = "mario";

    strupr(palabra);

    cout << palabra << endl;

    getch();
    return 0;
}