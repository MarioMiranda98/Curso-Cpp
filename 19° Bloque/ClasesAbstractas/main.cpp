#include <iostream>
#include "Planta.h"
#include "AnimalCarnivoro.h"
#include "AnimalHerbiboro.h"
using namespace std;

int main() {
    Planta* p = new Planta();
    AnimalCarnivoro* ac = new AnimalCarnivoro();
    AnimalHerbiboro* ah = new AnimalHerbiboro();

    p -> alimentarse();
    ac -> alimentarse();
    ah -> alimentarse();

    delete p;
    delete ac;
    delete ah;

    return 0;
}