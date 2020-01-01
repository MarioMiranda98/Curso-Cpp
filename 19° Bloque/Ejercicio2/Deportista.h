#ifndef DEPORTISTA_H
#define DEPORTISTA_H

#include<iostream>
using namespace std;

class Deportista{
	private:
		string nombreEntrenador;
	
	public:
		Deportista(string nombreEntrenador){
			this->nombreEntrenador = nombreEntrenador;
		}
		
		~Deportista(){
			
		}
		
		void mostrarDatos(){
			cout<<"Nombre Entrenador: "<<nombreEntrenador<<endl;
		}
		
		void setNombreEntrenador(string nuevoNombre){
			this->nombreEntrenador = nuevoNombre;
		}
		
		string getNombreEntrenador(){
			return nombreEntrenador;
		}
};

#endif
