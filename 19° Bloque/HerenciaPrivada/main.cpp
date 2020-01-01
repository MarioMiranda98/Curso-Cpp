#include <iostream>
#include "Deportivo.h"
using namespace std;

int main() {
    Deportivo *d1 = new Deportivo("Audi", "Blanco", "KT98", 10);

    cout << "Cilindrada: " << d1 -> getCilindrada() << endl;
    cout << "Marca: " << d1 -> getMarcas() << endl;

    delete d1;  

    return 0;
}