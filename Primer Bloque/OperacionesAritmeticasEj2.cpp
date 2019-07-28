/*Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la salida
estándar el precio del producto al aplicarle el iva*/
#include <iostream>
using namespace std;

int main(void) {
    double precio = 0.0;
    cout << "Introduce el precio de tu producto con decimales" << endl;
    cin >> precio;
    double iva = precio * 0.16;
    cout << "El precio del producto con iva es " << (precio + iva) << endl;
    return 0;
}