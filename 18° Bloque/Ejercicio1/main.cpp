/*
    Definir una clase DiaAnio con los atributos mes y dia, los metodos igual() y visualizar(). El
    mes se registra como un valor entero (1, Enero, 2 Febrero, etc...).
    El dia del mes se registra en otra variable entera dia
    Escribir un programa que compruebe si una fecha es su cumpleaños
*/  

#include "DiaAnio.h"

int main() {
    int mes, dia;
    char c;

    cout << "Ingresa el dia y mes de tu cumplea\242os: ";
    cin >> dia >> mes;

    DiaAnio d(dia, mes);

    do {
        system("cls");
        cout << "Ingresa el dia y mes: ";
        cin >> dia >> mes;

        if(d.igual(dia, mes)) {
            cout << "Felicidades!!" << endl;
            d.visualizar(d);
        }

        cout << "Probar otra fecha (S/N): ";
        cin >> c;
    } while(c != 'N');

    system("pause");
    return 0;
}