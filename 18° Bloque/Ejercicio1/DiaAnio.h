#include <iostream>
using namespace std;

class DiaAnio {
    private:
        int mes, dia;
        string meses[12] = {
            "Enero",
            "Febrero",
            "Marzo",
            "Abril",
            "Mayo",
            "Junio",
            "Julio",
            "Agosto",
            "Septiembre", 
            "Octubre",
            "Noviembre",
            "Diciembre"
        };

    public:
        DiaAnio(int, int);

        int getMes();
        int getDia();

        void setMes(int mes);
        void setDia(int dia);

        void visualizar(DiaAnio);
        bool igual(int, int);
};