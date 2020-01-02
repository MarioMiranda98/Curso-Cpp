#include <iostream>
using namespace std;

template <typename T, typename T2>
T mayor(T, T2);

int main() {

    cout << "El mayor de dos numeros enteros es: " << mayor(5, 'a') << endl;
    cout << "El mayor de dos numeros reales es: " << mayor(9.87, 4.56) << endl;
    cout << "El mayor de dos caracteres es: " << mayor('r', 'z') << endl;

    return 0;
}

template <typename T, typename T2>
T mayor(T dato1, T2 dato2) {
    if(dato1 >= dato2) {
        return dato1;
    } else 
        return dato2;
}