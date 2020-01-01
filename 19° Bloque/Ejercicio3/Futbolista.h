#include<iostream>
#include "Persona.h"
using namespace std;

class Futbolista : public Persona{
	private:
		int dorsal;
		string posicion;
	
	public:
		Futbolista(string nombre,string apellido,int edad,int dorsal,string posicion) : Persona(nombre,apellido,edad){
			this->dorsal = dorsal;
			this->posicion = posicion;
		}
		
		~Futbolista(){
			
		}
		
		void partidoFutbol(){
			cout<<"Juega el partido de futbol"<<endl;
		}
		
		void entrenamiento(){
			cout<<"Entrena"<<endl;
		}
		
		void entrevista(){
			cout<<"Da una entrevista"<<endl;
		}
};
