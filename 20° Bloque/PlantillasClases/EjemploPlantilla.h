#include <iostream>
using namespace std;

template <class T1, class T2>
class EjemploPlantilla {
    private:
        T1 dato1;
        T2 dato2;

    public:
        EjemploPlantilla(T1 dato1, T2 dato2) {
            this -> dato1 = dato1;
            this -> dato2 = dato2;
        }

        void setDato1(T1 dato1) { this -> dato1 = dato1; }
        void setDato2(T2 dato2) { this -> dato2 = dato2; }

        T1 getDato1() { return dato1; }
        T2 getDato2() { return dato2; }

        void mostrarDatos() {
            cout << "Dato 1: " << dato1 << endl;
            cout << "Dato 2: " << dato2 << endl;
        }
};