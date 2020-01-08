#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

const int N = 5;

int d[8][2] = {{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};
int tablero[N][N];

void saltoCaballo(int, int, int, bool &);
void escribeTablero();

int main() {
    bool exito;
    int fila = 2;
    int columna = 2;

    tablero[fila][columna] = 1;

    saltoCaballo(2, fila, columna, exito);

    if(exito) {
        cout << "Camino Encontrado" << endl;
        escribeTablero();
    } else {
        cout << "Camino No Encontrado" << endl;
    }

    return 0; 
}

void saltoCaballo(int i, int x, int y, bool &exito) {
    int nx, ny;
    int k = 0;
    exito = false;

    do {
        k++;
        nx = x + d[k - 1][0];
        ny = y + d[k - 1][1];

        if((nx >= 0) && (nx < N) && (ny >= 0) && (ny < N) && (tablero[nx][ny] == 0)) {
            tablero[nx][ny] = i;
            escribeTablero();
            Sleep(500);
            system("cls");

            if(i < (N*N)) {
                saltoCaballo(i + 1, nx, ny, exito);

                if(!exito) {
                    tablero[nx][ny] = 0;
                }
            } else {
                exito = true;
            }
        }
    } while((k < 8) && (!exito));
}

void escribeTablero() {
    int i, j;
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			cout << tablero[i][j] << "|";
		}
		cout << endl;
	}

	cout << endl;
}