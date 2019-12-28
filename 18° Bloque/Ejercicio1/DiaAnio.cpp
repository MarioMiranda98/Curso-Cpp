#include "DiaAnio.h"

DiaAnio::DiaAnio(int dia, int mes) {
    this -> dia = dia;
    this -> mes = mes;
}

int DiaAnio::getMes() { return mes; }
int DiaAnio::getDia() { return dia; }

void DiaAnio::setMes(int mes) { this -> mes = mes; }
void DiaAnio::setDia(int dia) { this -> dia = dia; }

void DiaAnio::visualizar(DiaAnio fecha) {
    cout << "Dia: " << fecha.getDia() << " Mes: " << meses[fecha.getMes() - 1] << endl;
}

bool DiaAnio::igual(int dia, int mes) {
    return ((dia == this -> dia) && (mes == this -> mes)) ? true : false;
}