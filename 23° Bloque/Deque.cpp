//Contenedor Lineal - Deque

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque <char> letras;

    //Insertar por el inicio
    letras.push_front('c');
    letras.push_front('b');
    letras.push_front('a');

    //Insertar al final
    letras.push_back('d');
    letras.push_back('e');
    letras.push_back('f');

    //Mostrando elementos del deque
    for (int i = 0; i < letras.size(); i++)
        cout << letras[i] << "|";

    cout << endl;

    letras.pop_front(); //Elimina un elemento del frente de la cola (principio)
    letras.pop_back(); //Elimina un elemento del final de la cola (final)

    //Mostrando elementos del deque
    for (int i = 0; i < letras.size(); i++)
        cout << letras[i] << "|";

    cout << endl;
    
    return 0;
}