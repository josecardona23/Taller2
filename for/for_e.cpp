#include <iostream>
#include <stdlib.h>
using namespace std;
//Hacer un programa  que calcule el resultado de la siguiente expresion: 1-2+3-4+5-6...+n.
int main(int argc, char** argv) {
	int i, n, j, resultado1=0, resultado2=0, neg, suma;
	cout<<"Ingrese un limite  ";
	cin>>n;
	for(i=0; i<n; i++){
		i=i+1; 
		resultado1=resultado1+i;  	
	}
	for( j=1; j<n; j++){
		j=j+1;
		neg= j*(-1);
		resultado2=resultado2+neg;
	} 	
		suma=resultado1+resultado2;
		cout<<"El resultado final de la suma es "<<suma<<endl;

	return 0;
}
