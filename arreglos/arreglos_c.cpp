#include <iostream>
#include <stdlib.h>
using namespace std;
/* Escribe un programa que lea la entrada estandar de numeros y muestre en la salida estandar los numeros del vector con sus indices asociados */

int main(int argc, char** argv) {
	int i, n, numeros [50];
	cout<<"Ingrese la cantidad de elementos del vector ";
	cin>>n;
	for( i=0; i<n; i++){
		cout<<"Ingrese un numero: ";
		cin>>numeros[i];
	}
	
	for (i=0; i<n; i++){
		cout<<numeros[i]<<" En la posicion --> "<<i<<endl;
	}

	return 0;
}
