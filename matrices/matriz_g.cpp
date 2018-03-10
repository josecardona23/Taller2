#include <iostream>
#include <stdlib.h>
using namespace std;
/* Desarrollar un programa que determine si una matriz es simetrica o no. Una matriz es simetrica si es cuadrada
 y si es igual a su matriz transpuesta.*/
int main(int argc, char** argv) {
	int i, j, columnas, filas, matriz[50][50];
	cout<<"Ingrese el numero de filas de la matriz "<<endl;
	cin>>filas;
	cout<<"Ingrese el numero de columnas de la matriz "<<endl;
	cin>>columnas;
	if(filas==columnas){
		for(i=0; i<filas; i++){
			for(j=0; j<columnas; j++){
				cout<<"Ingrese un numero ";
				cin>>matriz[i][j];
				if(matriz[i][j]==matriz[j][i]){	
				}	
			}
		}
		cout<<"La matriz es simetrica "<<endl;
	} else{
		cout<<"La matriz no es transpuesta";
	}

	return 0;
}
