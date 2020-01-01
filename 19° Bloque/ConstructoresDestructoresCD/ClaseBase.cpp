#include "ClaseBase.h"

ClaseBase::ClaseBase(int numero) {
    this -> numero = numero;
    cout << "Constructor de la clase base" << endl;
}

ClaseBase::~ClaseBase() {
    cout << "Destructor de la clase base" << endl;
}