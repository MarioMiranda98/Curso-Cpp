//Pasar una palabra a minuscula - Funcion strlwr()

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(void) {
    char palabra[] = "Programacion ATS";

    strlwr(palabra);

    cout << palabra << endl;

    getch();
    return 0;
}