/*3.- Realice un programa que lea la entrada estándar de los siguientes datos de una persona:
    
    Edad: dato tipo entero
    Sexo: dato tipo caracter
    Altura en metros: dato tipo real

Tras leer los datos, el programa debe mostrarlos en la salida estándar.*/
#include <iostream>
using namespace std;

int main (void) {
    int edad = 0;
    char sexo[10] = "";
    float altura = 0.0;

    cout << "Introduce tu edad, sexo y altura separada por espacios" << endl;
    cin >> edad >> sexo >> altura;
    cout << "Tu edad es: " << edad << " eres de sexo: " << sexo << " y tu altura es: " << altura << endl;
    
    return 0;
}