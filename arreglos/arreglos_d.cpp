#include <iostream>
#include <stdlib.h>
using namespace std;
/* Escriba un programa que defina un vector de numeros y muestre en la salida estandar el vector en orden inverso - de ultimo a primer elemento. */

int main(int argc, char** argv) {
	int j, n, i, numeros []={1,2,3,4,5};
	cout<<"El vector original es: "<<endl;
	for(i=0; i<5; i++){
		numeros[i]=numeros[i];
			cout<<numeros[i]<<endl;
		
	}
	
	cout<<"El vector inverso es: "<<endl;
	for(i=4; i>=0; i--){
		cout<<numeros[i]<<endl;
	}

	return 0;
}
