#include <iostream>
#include "ClaseHija.h"
using namespace std;

int main() {
    ClaseHija* obj1 = new ClaseHija(5, 10);

    delete obj1;

    return 0;
}