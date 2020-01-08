#include <iostream>
using namespace std;

int busquedaBinaria(int a[], int dato, int inferior, int superior);

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n, m;

    cout << "Ingrese numero a buscar: ";
    cin >> n;

    m = busquedaBinaria(a, n, 0, sizeof(a) / sizeof(a[0]));

    if(m != -1) {
        cout << "El numero fue encontrado" << endl;
    } else {
        cout << "El numero no fue encontrado" << endl;
    }

    return 0;
}

int busquedaBinaria(int a[],int dato,int inferior,int superior){
	int mitad;

	if(inferior > superior){ 
		return -1;
	}
	else{
		mitad = (inferior+superior) / 2;
		if(dato == a[mitad]) { 
			return mitad;
		}
		else if(dato > a[mitad]) {
			return busquedaBinaria(a, dato, mitad+1, superior);
		}
		else {
			return busquedaBinaria(a, dato, inferior, mitad-1);
		}
	}
}