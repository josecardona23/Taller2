#include <iostream>
#include <stdlib.h>
using namespace std;
/*Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un periodo de 20 horas. Es decir, debe leer 6 temperaturas
calcule la temperatura media del dia, la temperatura más alta y la temperatura más baja. */

int main(int argc, char** argv) {
	float temperatura,suma_temperatura=0,tempMedia;
	float tempAlta=0,tempBaja=999;
	
	for(int i=0;i<24;i+=4){ 
		cout<<"Digite la temperatura a las "<<i<<": ";
		cin>>temperatura;
		
		suma_temperatura += temperatura;
		
		if(temperatura > tempAlta){
			tempAlta = temperatura;
		}
		if(temperatura < tempBaja){
			tempBaja = temperatura;
		}
	}
	tempMedia = suma_temperatura / 6; 
	cout<<"\nLa temperatura media del dia es: "<<tempMedia<<endl;
	cout<<"La temperatura mas alta es: "<<tempAlta<<endl;
	cout<<"La temperatura mas baja es: "<<tempBaja<<endl;	

	return 0;
}
