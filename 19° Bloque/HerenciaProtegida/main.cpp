#include <iostream>
#include "Furgoneta.h"
using namespace std;

int main() {
    Furgoneta* f1 = new Furgoneta("KIA", "Verde", "AS12", 1200);

    cout << "Carga: " << f1 -> getCarga() << endl;
    cout << "Color: " << f1 -> getColour() << endl;

    delete f1;

    return 0;
}