#ifndef __INTERCAMBIO__
#define __INTERCAMBIO__

template <typename T>
void intercambiar(T &a, T &b) {
    T c;
    c = a;
    a = b;
    b = c;
}

#endif //!__INTERCAMBIO__