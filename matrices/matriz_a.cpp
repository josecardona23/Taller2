#include <iostream>
#include <stdlib.h>
using namespace std;
/*Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas, Posteriormente mostrar la matriz en pantalla. */
int main(int argc, char** argv) {
	int i, j, matriz[50][50], filas, columnas;
	cout<<"Ingrese el numero de filas "<<endl;
	cin>>filas;
	cout<<"Ingrese el numero de columnas "<<endl;
	cin>>columnas;
	
	for( i=0; i<filas; i++){
		for( j=0; j<columnas; j++){
			cout<<"Ingrese un numero en la posicion ["<<i<<"] ["<<j<<"] ";
			cin>> matriz[i] [j];	
		}
	}
		cout<<"\n";
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			cout<<matriz[i] [j];
			cout<<" ";
		}
		cout<<"\n";
	}

	return 0;
}
