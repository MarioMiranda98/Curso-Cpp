#include <iostream>
using namespace std;

void hanoi(char, char, char, int);

int main() {
    int n;

    cout << "Ingresa el numero de discos: ";
    cin >> n;

    hanoi('A', 'B', 'C', n);

    return 0;
}

void hanoi(char inicial, char medio, char final, int n) {
    if(n == 1) {
        cout << "Mueve el disco " << n << " de la varilla " << inicial << " hacia " << final << endl;
    } else {
        hanoi(inicial, final, medio, n - 1);
        cout << "Mueve el disco " << n << " de la varilla " << inicial << " hacia " << final << endl;
        hanoi(medio, inicial, final, n - 1);
    }
}