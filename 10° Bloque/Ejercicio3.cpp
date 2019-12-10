/*
    Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y
    que imprima los datos del empleado con mayor y menor salario
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Empleado {
    char nombre[20];
    float salario;
};

typedef struct Empleado Empleado;

int main(void) {
    int noEmpleados;
    float mayor = 0;
    float menor = 999999;
    int posicionMayor = 0;
    int posicionMenor = 0;
    Empleado misEmpleados[100];

    cout << "Introduce el numero de empleados: ";
    cin >> noEmpleados;

    for(int i = 0; i < noEmpleados; i++) {
        fflush(stdin);
        cout << "Introduce el nombre del empleado: ";
        cin.getline(misEmpleados[i].nombre, 20, '\n');
        cout << "Ingresa el salario del empleado: ";
        cin >> misEmpleados[i].salario;

        if(misEmpleados[i].salario > mayor) {
            mayor = misEmpleados[i].salario;
            posicionMayor = i;
        }

        if(misEmpleados[i].salario < menor) {
            menor = misEmpleados[i].salario;
            posicionMenor = i;
        }
    }

    cout << "Mayor Salario" << endl;
    cout << "Nombre: " << misEmpleados[posicionMayor].nombre << endl;
    cout << "Salario: " << misEmpleados[posicionMayor].salario << endl;

    cout << "Menor Salario" << endl;
    cout << "Nombre: " << misEmpleados[posicionMenor].nombre << endl;
    cout << "Salario: " << misEmpleados[posicionMenor].salario << endl;    

    getch();
    return 0;
}