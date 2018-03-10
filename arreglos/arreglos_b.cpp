#include <iostream>
#include <stdlib.h>
using namespace std;
/* Escribe un programa que defina un vector de numeros y calcule la multiplicacion de sus elementos. */

int main(int argc, char** argv) {
	int i, vector[]= {1,3,5,7,9};
	int mult=1;
	for(i=0; i<5; i++){
		mult*=vector[i];
	}
	cout<<"El resultado de la multiplicacion de los elementos del vector es: "<<mult<<endl;

	return 0;
}
