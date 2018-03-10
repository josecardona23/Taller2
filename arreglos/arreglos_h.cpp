#include <iostream>
#include <stdlib.h>
using namespace std;
/* Hacer un programa que lea 5 numeros de un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo. */
int main(int argc, char** argv) {
	int const L = 5;
	int i, vector1[L], vector2[L];
	
	for(i=0; i<L; i++){
		cout<<"Ingrese un numero: ";
		cin>>vector1[i];
		
	}
	cout<<"\nEl resultado de los numeros multiplicados por 2 es: "<<endl;
	for(i=0; i<L; i++){
		vector2[i]=vector1[i]*2;
		cout<<vector2[i]<<endl;
	}	

	return 0;
}
