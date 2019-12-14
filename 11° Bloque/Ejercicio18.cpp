/*
    Escriba una funcion en c++ llamada mayor() que devuelva la fecha mas reciente de cualquier par
    de fechas que se le transmitan. Por ejemplo, si se transmiten las fechas 10/9/2005 y 11/3/2015
    a mayor(), sera devuelta la segunda fecha
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Fecha {
    int dia;
    int mes;
    int anio;
};

typedef struct Fecha Fecha;

Fecha mayor(Fecha, Fecha);

int main(void) {
    Fecha f1, f2, fmayor;

    cout << "Introduzca dia, mes y anio: ";
    cin >> f1.dia >> f1.mes >> f1.anio;
    cout << "Introduzca dia, mes y anio: ";
    cin >> f2.dia >> f2.mes >> f2.anio;

    fmayor = mayor(f1, f2);

    cout << "Fecha mas reciente: " << fmayor.dia << "/" << fmayor.mes << "/" << fmayor.anio << endl; 

    getch();
    return 0;
}

Fecha mayor(Fecha f1, Fecha f2) {
    if(f1.anio > f2.anio) {
        return f1;
    } else if(f1.anio < f2.anio) {
        return f2;
    } else {
        if(f1.mes > f2.mes) {
            return f1;
        } else if(f1.mes < f2.mes) {
            return f2;
        } else {
            if(f1.dia > f2.dia) {
                return f1;
            } else if(f1.dia < f2.dia) {
                return f2;
            } else {
                return f1;
            }
        }
    }
}