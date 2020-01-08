#include <iostream>
using namespace std;

void ponerReina(int, bool &);
bool valido(int);
void mostrarTablero();

const int N = 4;
int reinas[N];

int main() {
    bool solucion;

    ponerReina(0, solucion);

    if(solucion){
		cout << "Si existe combinacion de reinas" <<endl;
		mostrarTablero();
	} else{
		cout << "No existe combinacion de reinas" <<endl;
	}   

    return 0;
}

void mostrarTablero() {
    int tablero[N][N];

    cout << "Mostrar las N reinas" << endl;
    for(int i = 0; i < N; i++) {
        cout << reinas[i] << "|";
    }

    cout << endl << endl;

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            tablero[i][j] = 0;

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            tablero[reinas[j]][j] = 1;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) 
            cout << tablero[i][j] << "|";

        cout << endl;
    }
}

void ponerReina(int i, bool &solucion) {
    int k = 0;
    solucion = false;

    do {
        reinas[i] = k;
        k++;

        mostrarTablero();
        cout << endl;

        if(valido(i)) {
            if(i < (N - 1)) {
                ponerReina(i + 1, solucion);

                if(!solucion) {
                    reinas[i] = 0;
                }
            } else {
                solucion = true;
            }
        }
    }while(!solucion && (k < N));
}

bool valido(int i) {
    bool v = true;

    for(int r = 0; r < i; r++) {
        v = v && (reinas[r] != reinas[i]);
        v = v && ((reinas[i] - i) != (reinas[r] - r));
        v = v && ((reinas[i] + i) != (reinas[r] + r));
    }

    return v;
}