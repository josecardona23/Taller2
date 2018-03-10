#include <iostream>
#include <stdlib.h>
using namespace std;
/* Realice un programa que lea una matriz de 3x3 y cree su matriz transpuesta. La matriz traspuesta es aquella en la que la columna i
era la fila i de la matriz original*/
int main(int argc, char** argv) {
	int i, j, matriz1[3][3];	
	int matriz2[3][3];
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"Ingrese un numero: ";
			cin>>matriz1[i][j];
		}	
	}
	cout<<"\nMatriz original: "<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<matriz1[i][j];
			cout<<" ";
		}
		cout<<"\n";
	} 
	cout<<"\nLa matriz traspuesta es: "<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			matriz2[i][j]=matriz1[j][i];
			cout<<matriz2[i][j];
			cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
