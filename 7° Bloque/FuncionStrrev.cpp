//Invertir una cadena - Funcion strrev()

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(void) {
    char cadena[] = "Mario";

    strrev(cadena);

    cout << cadena << endl;

    getch();
    return 0;
}