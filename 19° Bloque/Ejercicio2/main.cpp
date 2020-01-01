/*Ejercicio 2: Considere la siguiente relación de herencia, la cual involucra tres 
clases: Alumno, Deportista y BecadoDeporte. Esta última representa a aquellos 
alumnos que son deportistas y que por esa razón han recibido una beca especial del 
gobierno para premiar sus esfuerzos. Decida qué atributos y métodos incluir de tal
manera que su programa pueda: 

a) Declarar dos objetos llamados alumnoJuan y alumnoPedro de tipo Alumno.
b) Declarar un objeto llamado deporLuis de tipo Deportista.
c) Declarar dos objetos llamados bdAna y bdCarmen de tipo BecadoDeporte.
d) Imprimir los datos de todos los objetos declarados.
e) Actualizar el nombre de la carrera que están estudiando alumnoJuan y bdAna. 
   El dato dado por el usuario será  el nombre de la nueva carrera.
f) Actualizar el nombre del entrenador deporLuis y bdCarmen. El dato dado por el
   usuario será el nombre del nuevo entrenador.
g) Actualizar el monto de la beca de bdAna y bdCarmen. El dato dado por el usuario
   será el porcentaje de incremento de la beca actual.
*/

#include <iostream>
#include "Alumno.h"
#include "Deportista.h"
#include "BecadoDeporte.h"
using namespace std;


int main(int argc, char** argv) {
	Alumno* alumnoJuan = new Alumno("Informatica");
	Alumno* alumnoPedro = new Alumno("Sistemas");
	Deportista* deporLuis = new Deportista("Popeye");
	BecadoDeporte* bdAna = new BecadoDeporte("Administracion","Luis",1200);
	BecadoDeporte* bdCarmen = new BecadoDeporte("Contabilidad","La roca",1350);
	
	cout<<"Mostrando Datos: "<<endl;
	cout<<"Mostrando Datos de alumnoJuan: "<<endl;
	alumnoJuan->mostrarDatos();
	cout<<"Mostrando Datos de alumnoPedro"<<endl;
	alumnoPedro->mostrarDatos();
	cout<<"Mostrando Datos de deporLuis"<<endl;
	deporLuis->mostrarDatos();
	cout<<"Mostrando Datos de bdAna"<<endl;
	bdAna->mostrarDatos();
	cout<<"Mostrando Datos de bdCarmen"<<endl;
	bdCarmen->mostrarDatos();
	
	string nuevaCarrera;
	cout<<"\nDigite la nueva carrera de alumnoJuan: ";
	getline(cin,nuevaCarrera);
	alumnoJuan->setNombreCarrera(nuevaCarrera);
	cout<<"Digite la nueva carrera de bdAna: ";
	getline(cin,nuevaCarrera);
	bdAna->setNombreCarrera(nuevaCarrera);
	cout<<"\nLa nueva carrera de alumnoJuan es: "<<alumnoJuan->getNombreCarrera()<<endl;
	cout<<"La nueva carrera de bdAna es: "<<bdAna->getNombreCarrera()<<endl;
	
	string nuevoEntrenador;
	cout<<"\nDigite el nuevo Entrenador de deporLuis: ";
	getline(cin,nuevoEntrenador);
	deporLuis->setNombreEntrenador(nuevoEntrenador);
	cout<<"Digite el nuevo Entrenador de bdCarmen: ";
	getline(cin,nuevoEntrenador);
	bdCarmen->setNombreEntrenador(nuevoEntrenador);
	cout<<"\nEl nuevo entrenador de deporLuis es: "<<deporLuis->getNombreEntrenador()<<endl;
	cout<<"El nuevo entrenador de bdCarmen es: "<<bdCarmen->getNombreEntrenador()<<endl;

	float incremento;
	cout<<"\nDigite el incremento de bdAna: ";
	cin>>incremento;
	bdAna->setMontoBeca(incremento);
	cout<<"Digite el incremento de bdCarmen: ";
	cin>>incremento;
	bdCarmen->setMontoBeca(incremento);
	cout<<"\nEl nuevo monto Beca de bdAna es: "<<bdAna->getMontoBeca()<<endl;
	cout<<"El nuevo monto Beca de bdCarmen es: "<<bdCarmen->getMontoBeca()<<endl;
	
	delete alumnoJuan;
	delete alumnoPedro;
	delete deporLuis;
	delete bdAna;
	delete bdCarmen;
	return 0;
}
