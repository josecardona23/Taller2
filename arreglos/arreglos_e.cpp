#include <iostream>
#include <stdlib.h>
using namespace std;
/* Desarrolle un programa que lea la entrada estandar de un vector de enteros y determine el mayor elemento del vector. */

int main(int argc, char** argv) {
	int n, i, mayor=0, numeros[50];	
	cout<<"Ingrese el numero de elementos del vector ";
	cin>>n;
	
	for(i=0; i<n; i++){
		cout<<i+1<<". Ingrese un numero ";
		cin>>numeros[i];
		
		if(numeros[i]>mayor){
			mayor=numeros[i];
		}
	}
	cout<<"El numero mayor del vector es: "<<mayor<<endl;

	return 0;
}
