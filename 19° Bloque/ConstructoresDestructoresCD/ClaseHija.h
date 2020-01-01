#include <iostream>
#include "ClaseBase.h"
using namespace std;

class ClaseHija : public ClaseBase {
    private:
        int numero2;

    public:
        ClaseHija(int, int);

        ~ClaseHija();
};