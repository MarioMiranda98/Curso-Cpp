#include "Lista.h"

void menu(Nodo *&lista) {
    int eleccion;

    while(1) {
        system("cls");
        cout << "Menu" << endl;
        cout << "1.-Insertar" << endl;
        cout << "2.-Mostrar" << endl;
        cout << "3.-Buscar" << endl;
        cout << "4.-Eliminar" << endl;
        cout << "5.-Eliminar Todo" << endl;
        cout << "6.-Salir" << endl;
        cin >> eleccion;
        
        system("cls");
        switch(eleccion) {
            case 1:
                int dato;
                cout << "Inserta dato: ";
                cin >> dato;

                insertar(lista, dato);
                getch();

                break;
            case 2:
                cout << "Mostrando" << endl;
                mostrar(lista);
                getch();

                break;
            case 3:
                int datoBusqueda;
                cout << "Ingrese el dato a buscar: ";
                cin >> datoBusqueda;

                if(busqueda(lista, datoBusqueda)) 
                    cout << "Se encontro el dato: " << dato << endl;
                else 
                    cout << "No se encontro el dato: " << datoBusqueda << endl;

                getch();

                break;
            case 4:
                int datoEliminar;
                cout << "Ingrese el dato a eliminar: ";
                cin >> datoEliminar;

                if(eliminar(lista, datoEliminar) != -1)
                    cout << "Dato Eliminado" << endl;

                getch();

                break;
            case 5:
                cout << "Todo Eliminado" << endl;
                eliminarTodo(lista);
                getch();

                break;
            default: exit(EXIT_SUCCESS); break;
        }
    }
}

void insertar(Nodo *&lista, int dato) {
    Nodo* nodo = new Nodo();
    Nodo* aux1 = lista;
    Nodo* aux2;

    if(nodo != NULL) {
        nodo -> dato = dato;

        while((aux1 != NULL) && (aux1 -> dato) < dato) {
            aux2 = aux1;
            aux1 = aux1 -> ptrSiguiente;
        }

        if(lista == NULL) {
            lista = nodo;
        } else {
            aux2 -> ptrSiguiente = nodo;
        }

        nodo -> ptrSiguiente = aux1;
        cout << "Nodo insertado" << endl;
    } else {
        cout << "No hay mas memoria" << endl;
        exit(EXIT_FAILURE);
    }
}

void mostrar(Nodo *& lista) {
    Nodo* aux = lista;

    while(aux != NULL) {
        cout << aux -> dato << ", ";
        aux = aux -> ptrSiguiente; 
    }

    cout << endl;
}

bool busqueda(Nodo *&lista, int dato) {
    Nodo* aux = lista;

    while(aux != NULL) {
        if(aux -> dato == dato)
            return true;
        else 
            aux = aux -> ptrSiguiente;
    }

    return false;
}

int eliminar(Nodo *&lista, int dato) {
   if(lista != NULL) {
       Nodo* auxBorrar;
       Nodo* anterior = NULL;

       auxBorrar = lista;

       while((auxBorrar != NULL) && (auxBorrar -> dato != dato)) {
           anterior = auxBorrar;
           auxBorrar = auxBorrar -> ptrSiguiente;
       }

       if(auxBorrar == NULL) {
           cout << "El elemento no existe" << endl;
           return -1;
       } else if(anterior == NULL) {
           lista = lista -> ptrSiguiente;
           delete auxBorrar;
       } else {
           anterior -> ptrSiguiente = auxBorrar -> ptrSiguiente;
           delete auxBorrar;
       }
   }

   return dato;
}

void eliminarTodo(Nodo *&lista) {
    Nodo *aux = lista;
    while(aux != NULL) {
        cout << "Dato eliminado: " << aux -> dato << endl;
        aux = aux -> ptrSiguiente;
    }

    lista = NULL;
    delete aux;
}