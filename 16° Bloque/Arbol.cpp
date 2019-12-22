#include "Arbol.h"

void menu(Nodo *&arbol) {
    int eleccion;
    
    while(1) {
        system("cls");
        cout << "Menu" << endl;
        cout << "1.-Insertar" << endl;
        cout << "2.-Mostrar" << endl;
        cout << "3.-Buscar" << endl;
        cout << "4.-Recorrido Preorden" << endl;
        cout << "5.-Recorrido Inorden" << endl;
        cout << "6.-Recorrido Postorden" << endl;
        cout << "7.-Eliminar un nodo" << endl;
        cout << "8.-Salir" << endl;
        cin >> eleccion;

        system("cls");
        switch(eleccion) {
            case 1: 
                int dato;

                cout << "Ingrese el dato: ";
                cin >> dato;
                insertar(arbol, NULL, dato);
                getch();
                break;
            case 2: 
                mostrar(arbol, 0);
                getch();
                break;
            case 3:
                int datoBusqueda;

                cout << "Ingresa el dato a buscar: ";
                cin >> datoBusqueda;
                
                if(buscar(arbol, datoBusqueda))
                    cout << "Dato encontrado" << endl;
                else 
                    cout << "Dato No Encontrado" << endl;
                
                getch();
                break;
            case 4:
                cout << "Mostrando Recorrido Preorden" << endl;
                preOrden(arbol);
                cout << endl;
                getch();
                break;
            case 5:
                cout << "Mostrando Recorrido Inorden" << endl;
                inOrden(arbol);
                cout << endl;
                getch();
                break;
            case 6:
                cout << "Mostrando Recorrido Postorden" << endl;
                postOrden(arbol);
                cout << endl;
                getch();
                break;
            case 7:
                int datoEliminar;

                cout << "Inserta dato a eliminar: ";
                cin >> datoEliminar;
                eliminar(arbol, datoEliminar);
                cout << "Dato Eliminado" << endl;
                getch();
                break;
            default:
                exit(EXIT_SUCCESS);
                break;
        }
    }
}

Nodo* crearNodo(int n, Nodo *padre) { //Creacion e Inicializacion del nodo
    Nodo* nodo = new Nodo();

    nodo -> dato = n;
    nodo -> derecha = NULL;
    nodo -> izquierda = NULL;
    nodo -> padre = padre;

    return nodo;
}

void insertar(Nodo *&arbol, Nodo *padre, int n) {
    if(arbol == NULL) {
        Nodo* nodo = new Nodo();
        nodo = crearNodo(n, padre);
        arbol = nodo;
    } else {
        int valorRaiz = arbol -> dato;
        if(n < valorRaiz) {
            insertar(arbol -> izquierda, arbol, n);
        } else if(n > valorRaiz) {
            insertar(arbol -> derecha, arbol, n);
        }
    }
}

void mostrar(Nodo *&arbol, int contador) {
    if(arbol == NULL) 
        return;
    else {
        mostrar(arbol -> derecha, contador + 1);
        for(int i = 0; i < contador; i++) {
            cout << "   ";
        }

        cout << arbol -> dato << endl;
        mostrar(arbol -> izquierda, contador + 1);
    }
}

bool buscar(Nodo *&arbol, int dato) {
    if(arbol == NULL) {
        return false;
    } else {
        int datoRaiz = arbol -> dato;

        if(datoRaiz == dato) {
            return true;
        } else if(datoRaiz < dato) {
            return buscar(arbol -> izquierda, dato);
        } else {
            return buscar(arbol -> derecha, dato);
        }
    }
}

void preOrden(Nodo *&arbol) {
    if(arbol != NULL) {
        cout << arbol -> dato << ", ";
        preOrden(arbol -> izquierda);
        preOrden(arbol -> derecha);
    }
}

void inOrden(Nodo *&arbol) {
    if(arbol != NULL) {
        inOrden(arbol -> izquierda);
        cout << arbol -> dato << ", ";
        inOrden(arbol -> derecha);
    }
}

void postOrden(Nodo *&arbol) {
    if(arbol != NULL) {
        postOrden(arbol -> izquierda);
        postOrden(arbol -> derecha);
        cout << arbol -> dato << ", ";
    }
}

void eliminar(Nodo *arbol, int e) {
    if(arbol == NULL) {
        return;
    } else if(arbol -> dato < e) {
        eliminar(arbol -> izquierda, e);
    } else if(arbol -> dato > e) {
        eliminar(arbol -> derecha, e);
    } else {
        eliminarNodo(arbol);
    }
}

void eliminarNodo(Nodo *elemento) {
    if((elemento -> izquierda) && (elemento -> derecha)) {
        Nodo* menor = minimo(elemento -> derecha);
        elemento -> dato = menor -> dato;
        eliminarNodo(menor);
    } else if(elemento -> izquierda) {
        reemplazar(elemento, elemento -> izquierda);
        destruirNodo(elemento);
    } else if(elemento -> derecha) {
        reemplazar(elemento, elemento -> derecha);
        destruirNodo(elemento);
    } else {
        reemplazar(elemento, NULL);
        destruirNodo(elemento);
    }
}

Nodo* minimo(Nodo *e) {
    if(e == NULL) {
        return NULL;
    }

    if(e -> izquierda) {
        return minimo(e -> izquierda);
    }else {
        return e;
    }
}

void reemplazar(Nodo *arbol, Nodo *nodo) {
    if(arbol -> padre) {
        if(arbol -> dato == arbol -> padre -> izquierda -> dato) {
            arbol -> padre -> izquierda = nodo;
        } else if(arbol -> dato == arbol -> padre -> derecha -> dato) {
            arbol -> padre -> derecha = nodo;
        }
    }

    if(nodo) {
        nodo -> padre = arbol -> padre;
    }
}

void destruirNodo(Nodo *nodo) {
    nodo -> izquierda = NULL;
    nodo -> derecha = NULL;

    delete nodo;
}