#include <iostream>
#include <stdlib.h>
using namespace std;
//Realice un programa que calcule y muestre en la salida estandar la suma de los cuadrados de los 10 primeros enteros mayores a 0
int main(int argc, char** argv) {
	int suma=0, i;
	for(i=1; i<=10; i++){
	suma=suma + i*i;
	}
	cout<<"La suma de los cuadrados de los 10 primeros enteros mayores a 10 es: "<<suma;

	return 0;
}
