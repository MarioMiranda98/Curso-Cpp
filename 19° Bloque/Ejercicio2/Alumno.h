#ifndef ALUMNO_H
#define ALUMNO_H

#include<iostream>
using namespace std;

class Alumno{
	private:
		string nombreCarrera;
	
	public:
		Alumno(string nombreCarrera){
			this->nombreCarrera = nombreCarrera;
		}
		
		~Alumno(){
			
		}
		
		void mostrarDatos(){
			cout<<"Nombre Carrera: "<<nombreCarrera<<endl;
		}
		
		void setNombreCarrera(string nuevoNombre){
			this->nombreCarrera = nuevoNombre;
		}
		
		string getNombreCarrera(){
			return nombreCarrera;
		}
};

#endif
