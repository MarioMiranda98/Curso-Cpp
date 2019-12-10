//Estructuras anidadas en C++

#include <iostream>
#include <conio.h>
using namespace std;

struct infoDireccion {
    char Direccion[30];
    char ciudad[20];
    char provincia[20];
};

typedef struct infoDireccion infoDireccion;

struct empleado{
    char nombre[20];
    infoDireccion direccionEmpleado;
    double salario;
}empleado[2];

int main(void) {
    for(int i = 0; i < 2; i++) {
        fflush(stdin);
        cout << "Introduce el nombre del empleado " << i + 1 << ": ";
        cin.getline(empleado[i].nombre, 20, '\n');
        fflush(stdin);
        cout << "Introduce la direccion del empleado " << i + 1 << ": ";
        cin.getline(empleado[i].direccionEmpleado.Direccion, 30, '\n');
        fflush(stdin);
        cout << "Introduce la ciudad del empleado " << i + 1 << ": ";
        cin.getline(empleado[i].direccionEmpleado.ciudad, 20, '\n');
        fflush(stdin);
        cout << "Introduce la provincia del empleado " << i + 1 << ": ";
        cin.getline(empleado[i].direccionEmpleado.provincia, 20, '\n');
        fflush(stdin);
        cout << "Introduce el salario del empleado " << i + 1 << ": ";
        cin >> empleado[i].salario;
    }

    cout << "Mostrando datos" << endl;
    for(int i = 0; i < 2; i++) {
        cout << "Nombre: " << empleado[i].nombre << endl;
        cout << "Direccion: " << empleado[i].direccionEmpleado.Direccion << endl;
        cout << "Ciudad: " << empleado[i].direccionEmpleado.ciudad << endl;
        cout << "Provincia: " << empleado[i].direccionEmpleado.provincia << endl;
        cout << "Salario: " << empleado[i].salario << endl;
    }

    getch();
    return 0;
}