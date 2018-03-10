#include <iostream>
#include <stdlib.h>
using namespace std;
/* En una clase de 5 alumnos se han realizado tres examenes y se requiere determinar el numero de:
				a)Alumnos que aprobaron todos los examenes.
				b)Alumnos que aprobaron al menos un examen.
				c)Alumnos que aprobaron únicamente el último examen. */

int main(int argc, char** argv) {
	int examen1,examen2,examen3;
	int todosAprueban=0,apruebanUno=0,apruebanUltimo=0;
	
	for(int i=1;i<=5;i++){
		cout<<i<<". Digite la nota del primer examen: ";
		 cin>>examen1;
		cout<<i<<". Digite la nota del segundo examen: ";
		 cin>>examen2;
		cout<<i<<". Digite la nota del tercer examen: ";
		 cin>>examen3;cout<<endl;
		if((examen1>3)&&(examen2>3)&&(examen3>3)){
			todosAprueban++;
		}
		
		if((examen1>3)||(examen2>3)||(examen3>3)){
			apruebanUno++;
		}
		
		if((examen1<3)&&(examen2<3)&&(examen3>3)){
			apruebanUltimo++;
		}
	}
	cout<<"\na) Aprobaron todos los examenes: "<<todosAprueban;
	cout<<"\nb) Aprobaron almenos un examen: "<<apruebanUno;
	cout<<"\nc) Aprobaron unicamente el ultimo examen: "<<apruebanUltimo;

	return 0;
}
