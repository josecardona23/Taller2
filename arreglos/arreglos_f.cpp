#include <iostream>
#include <stdlib.h>
using namespace std;
/* Escriba un programa que defina un vector de numeros y calcule si existe un numero en el vector cuyo valor equivale a la suma del resto de 
numeros del vector*/
int main(int argc, char** argv) {
	int numeros[5] = {1,2,3,4,10}; 
	int suma=0,mayor=0;
	
	for(int i=0;i<5;i++){
		suma += numeros[i];
		
		if(numeros[i]>mayor){ 
			mayor = numeros[i];
		}					 
	}
	if(mayor == suma-mayor){
		cout<<"El numero "<<mayor<<" es la suma de los demas elementos del vector";
		}
		else{
		cout<<"No existe ningun numero que sea la suma de los demas";
	}

	return 0;
}
