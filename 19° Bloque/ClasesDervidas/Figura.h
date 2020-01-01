#include <iostream>
using namespace std;

class Figura {
    private: 
        int nLados;

    public:
        Figura(int);
        ~Figura();

        int getNLados();
};