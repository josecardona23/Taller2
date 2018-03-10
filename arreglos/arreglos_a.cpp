#include <iostream>
#include <stdlib.h>
using namespace std;
/* Escriba un programa que defina un vector de numeros y calcule la suma de sus elementos. */

int main(int argc, char** argv) {
	int vector[] = {2,4,6,8,10,12};
	int suma = 0;
	for(int i=0; i<6; i++){
		suma+=vector[i];
	}
		cout<<"La suma de los valores del vector es "<<suma<<endl;

	return 0;
}
