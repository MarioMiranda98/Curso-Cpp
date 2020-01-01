#include<iostream>
#include "Alumno.h"
#include "Deportista.h"
using namespace std;

class BecadoDeporte : public Alumno, public Deportista{
	private:
		float montoBeca;
	
	public: 
		BecadoDeporte(string nombreCarrera,string nombreEntrenador,float montoBeca) : Alumno(nombreCarrera) , Deportista(nombreEntrenador){
			this->montoBeca = montoBeca;
		} 
		
		~BecadoDeporte(){
			
		}
		
		void mostrarDatos(){
			Alumno::mostrarDatos();
			Deportista::mostrarDatos();
			cout<<"Monto Beca: "<<montoBeca<<endl;
		}
		
		void setMontoBeca(float n){
			float incremento = (montoBeca*n)/100;
			this->montoBeca += incremento;
		}
		
		float getMontoBeca(){
			return montoBeca;
		}
};
