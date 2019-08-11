//Escribe la siguiente expresion en C++
#include <iostream>
using namespace std;

int main (void) {
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    float d = 0.0;
    float e = 0.0;
    float f = 0.0;
    float resultado = 0.0;

    cout <<"Ingrese los valores separados por espacios" << endl;
    cin >> a >> b >> c >> d >> e >> f;

    if((d + (e / f)) == 0.0)
        cout << "El calculo no se puede ejecutar" << endl;
    else {
        resultado = ((a + (b / c)) / (d + (e / f)));
        cout.precision(4);
        cout << "El resultado de la expresion es: " << resultado << endl;
    }

    return 0;
}