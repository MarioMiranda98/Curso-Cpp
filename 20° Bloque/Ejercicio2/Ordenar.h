#ifndef __ORDENAR__
#define __ORDENAR__

#include "intercambio.h"

template <typename T>
void ordenarAscendente(T *arreglo, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - 1); j++) {
            if(arreglo[j] > arreglo[j + 1]) {
                intercambiar(arreglo[j], arreglo[j + 1]);
            }
        }
    }
}

template <typename T>
void ordenarDescendente(T *arreglo, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - 1); j++) {
            if(arreglo[j] < arreglo[j + 1]) {
                intercambiar(arreglo[j], arreglo[j + 1]);
            }
        }
    }
}

#endif //!__ORDENAR__   