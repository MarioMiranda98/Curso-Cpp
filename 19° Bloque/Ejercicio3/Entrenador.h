#include<iostream>
#include "Persona.h"
using namespace std;

class Entrenador : public Persona{
	private:
		string estrategia;
	
	public:
		Entrenador(string nombre,string apellido,int edad,string estrategia) : Persona(nombre,apellido,edad){
			this->estrategia = estrategia;
		}
		
		~Entrenador(){
			
		}
		
		void partidoFutbol(){
			cout<<"Dirige el partido de futbol"<<endl;
		}
		
		void entrenamiento(){
			cout<<"Dirige el entrenamiento"<<endl;
		}
		
		void planificarEntrenamiento(){
			cout<<"Planifica el entrenamiento"<<endl;
		}
};
