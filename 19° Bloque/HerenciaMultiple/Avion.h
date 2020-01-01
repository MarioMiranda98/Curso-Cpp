#include <iostream>
using namespace std;

class Avion {
    private:
        string modelo;

    public:
        Avion(string);
        ~Avion();
        
        string getModelo();
        void indicarAvion();
};