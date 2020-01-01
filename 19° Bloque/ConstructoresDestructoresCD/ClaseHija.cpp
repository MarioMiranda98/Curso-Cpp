#include "ClaseHija.h"

ClaseHija::ClaseHija(int numero, int numero2) : ClaseBase(numero) {
    this -> numero2 = numero2;
    cout << "Constructor clase hija" << endl;
}

ClaseHija::~ClaseHija() {
    cout << "Destructor clase hija" << endl;
}