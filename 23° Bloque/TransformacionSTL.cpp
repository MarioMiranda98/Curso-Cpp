//Algortimos STL - Transformacion

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <time.h>
using namespace std;

void mayusculas(char &);
char vocales(char);

int main() {
    vector <char> letras;

    //Generar letras 
    for (int i = 0; i < 10; i++) 
        letras.push_back('a' + i);

    copy(letras.begin(), letras.end(), ostream_iterator<char>(cout, "|"));
    cout << endl;

    //Desordenamos el vector letras
    srand(time(NULL));
    random_shuffle(letras.begin(), letras.end());

    copy(letras.begin(), letras.end(), ostream_iterator<char>(cout, "|"));
    cout << endl;

    //Pasando a mayusculas las letras
    for_each(letras.begin(), letras.end(), mayusculas);

    copy(letras.begin(), letras.end(), ostream_iterator<char>(cout, "|"));
    cout << endl;

    transform(letras.begin(), letras.end(), ostream_iterator <char>(cout, "|"), vocales);
    
    return 0;
}

void mayusculas(char &c) {
    if(c >= 'a' && c <= 'z') {
        c = c - ('a' - 'A');
    }
}

char vocales(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') ? c : '-';
}