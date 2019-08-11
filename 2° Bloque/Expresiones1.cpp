//1.-Escribe la siguiente expresión como esxpresion en C++
#include <iostream>
using namespace std;

int main (void) {
    float a = 0.0;
    float b = 0.0;
    float resultado = 0.0;

    cout << "Ingresa el valor de a y b separado por espacios" << endl;
    cin >> a >> b;
    if (b != 0.0) {
        resultado = (a/b) + 1;
        cout.precision(3);
        cout << "El resultado de a = " << a << " y b = " << b << " es " << resultado << endl;
    } else 
        cout << "No se puede hacer la division" << endl;
    
    return 0;
}