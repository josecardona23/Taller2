#include <iostream>
#include <stdlib.h>
using namespace std;
/* Escriba un programa  que le valores enteros hasta que se introduzca  un valor en el rango [20-30] o se introduzca el valor 0. El programa debe entregar
la suma de los valores mayores a 0 introducidos.*/ 

int main(int argc, char** argv) {
	int n, suma=0;
	do{
		cout<<"Ingrese un valor entre 1 y 30 "<<endl;
		cin>>n;
		if(n>0){
			suma=suma+n;
		}
		
	}while(n!=0 && (n<20 || n>30 ));
	cout<<"La suma de los numeros mayores a 0 ingresados es "<<suma;

	return 0;
}
