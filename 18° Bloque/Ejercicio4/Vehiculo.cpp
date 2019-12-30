#include<iostream>
#include "Vehiculo.h"
using namespace std;

float Vehiculo::getPrecio(){
	return precio;
}

void Vehiculo::mostrarDatos(){
	cout<<"Marca: "<<marca<<endl;
	cout<<"Modelo: "<<modelo<<endl;
	cout<<"Precio: "<<precio<<endl;
}

int Vehiculo::indiceMBarato(Vehiculo coches[],int n){
	int indice = 0;
	float precio;
	
	precio = coches[0].getPrecio();
	for(int i=1;i<n;i++){
		if(coches[i].getPrecio() < precio){
			precio = coches[i].getPrecio();
			indice = i;
		}
	}
	
	return indice;
}
