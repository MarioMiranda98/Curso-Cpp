#include <iostream>
using namespace std;

class Expediente {
    private:
        int numeroExpediente;

    public:
        Expediente(int);
        Expediente();
        ~Expediente();

        int getNumeroExpediente(); 
};