/*
    Construir un programa que dada un serie de vehiculos caracterizados por su marca, modelo y precio,
    imprima las propiedades del vehiculo mas barato. Para ello, se deberan leer por teclado las 
    caracteristicas de cada vehiculo y crear una clase que representa a cada uno de ellos.    
*/

#include <iostream>
#include "Vehiculo.h"
using namespace std;

int main() {
    Vehiculo* coches;
	int numeroVehiculos,indiceBarato;
	string marca,modelo;
	float precio;
	
	cout<<"Digite el numero de vehiculos: ";
	cin>>numeroVehiculos;
	
	coches = new Vehiculo[numeroVehiculos]; //Arreglo de objetos
	
	for(int i=0;i<numeroVehiculos;i++){
		cout<<"\nDigite los datos del Vehiculo "<<(i+1)<<": "<<endl;
		cin.ignore();
		cout<<"Digite la marca: ";
		getline(cin,marca);
		cout<<"Digite el modelo: ";
		getline(cin,modelo);
		cout<<"Digite el precio: ";
		cin>>precio;
		
		coches[i] = Vehiculo(marca,modelo,precio);
	}
	
	indiceBarato = Vehiculo::indiceMBarato(coches,numeroVehiculos);
	
	cout<<"\nEl Vehiculo mas barato es: "<<endl;
	(coches+indiceBarato)->mostrarDatos();
	//coches[indiceBarato].mostrarDatos();
	
	delete[] coches;	
	return 0;
}