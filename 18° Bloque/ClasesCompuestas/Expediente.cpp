#include "Expediente.h"

Expediente::Expediente(int numeroExpediente) {
    this -> numeroExpediente = numeroExpediente;
}

Expediente::Expediente() {}
Expediente::~Expediente() {}

int Expediente::getNumeroExpediente() { return this -> numeroExpediente; }
