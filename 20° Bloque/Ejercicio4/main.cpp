/*Ejercicio 4: Defina una plantilla para la clase Arreglo, la cuál podrá definir
valores de distinto tipo, el cuál se definirá en el momento de la instancia, el
programa deberá tener un menú con las siguientes opciones: 

1. Agregar un nuevo elemento al arreglo
2. Comprobar el espacio en el arreglo
3. Ver arreglo
4. Vaciar arreglo
5. Salir
*/

#include <iostream>
#include <stdlib.h>
#include "Arreglo.h"
using namespace std;

void opciones(){
	cout<<"\t.:MENU:."<<endl;
	cout<<"1. Agregar un nuevo elemento al arreglo"<<endl;
	cout<<"2. Comprobar el espacio en el arreglo"<<endl;
	cout<<"3. Ver arreglo"<<endl;
	cout<<"4. Vaciar arreglo"<<endl;
	cout<<"5. Salir"<<endl;
	cout<<"Digite una opcion de menu: ";
}

int main(int argc, char** argv) {
	Arreglo <char> arreglo1(5);
	int opcion;
	char elemento;
	
	do{
		opciones();
		cin>>opcion;
		
		switch(opcion){
			case 1: 
					if(arreglo1.arregloLleno()){
						cout<<"\nEl arreglo esta lleno, no puede agregar mas elementos"<<endl;
					}
					else{
						cout<<"\nDigite un elemento a agregar: ";
						cin>>elemento;
						arreglo1.agregar(elemento);
					}
					break;
			case 2: 
					if(arreglo1.arregloLleno()){
						cout<<"\nEl arreglo esta lleno"<<endl;
					}
					else{
						cout<<"El arreglo aun no esta lleno"<<endl;
					}
					break;
			case 3: 
					cout<<"\nLos elementos del arreglo son: "<<endl;
					arreglo1.mostrarArreglo();
					break;
			case 4: 
					cout<<"Vaciando el arreglo"<<endl;
					arreglo1.vaciarArreglo();
					break;
			case 5: break;
			default: cout<<"Se equivoco de opcion de menu"<<endl;
		}
		
		cout<<endl;
		system("pause");
		system("cls");
	}while(opcion!=5);
	
	return 0;
}
