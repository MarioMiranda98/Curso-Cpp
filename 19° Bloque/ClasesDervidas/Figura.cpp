#include "Figura.h"

Figura::Figura(int nLados) {
    this -> nLados = nLados;
}

Figura::~Figura() {}

int Figura::getNLados() { return this -> nLados; }