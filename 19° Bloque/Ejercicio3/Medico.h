#include<iostream>
#include "Persona.h"
using namespace std;

class Medico : public Persona{
	private:
		string titulacion;
		int aniosExperiencia;
	
	public:
		Medico(string nombre,string apellido,int edad,string titulacion,int aniosExperiencia) : Persona(nombre,apellido,edad){
			this->titulacion = titulacion;
			this->aniosExperiencia = aniosExperiencia;
		}
		
		~Medico(){
			
		}
		
		void partidoFutbol(){
			cout<<"Da asistencia en el partido de futbol"<<endl;
		}
		
		void entrenamiento(){
			cout<<"Da asistencia en el entrenamiento"<<endl;
		}
		
		void curarLesion(){
			cout<<"Curar Lesion"<<endl;
		}
};
