/*5.- Escriba un fragmento de programa que intercambie los valores de dos variables*/
#include <iostream>
using namespace std;

int main(void) {
    int a = 0;
    int b = 0;
    int aux = 0;

    cout << "Digita el valor de a y b separado por espacios" << endl;
    cin >> a >> b;

    cout << "Valor de a = " << a << endl << "Valor de b = " << b << endl << "Intercambiando" << endl;
    aux = a;
    a = b;
    b = aux;
    
    cout << "Valor de a = " << a << endl << "Valor de b = " << b << endl;
     
    return 0;
}