#include <iostream>
#include <stdlib.h>
using namespace std;
/* Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar todo su contenido hacia otra matriz */

int main(int argc, char** argv) {
	int matriz1[2][2] = {{1,2},{3,4}};
	int matriz2[2][2];
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			matriz2[i][j]=matriz1[i][j];
		}
	}
	cout<<"La nueva matriz es: "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<matriz2[i][j];
			cout<<" ";
		}
		cout<<"\n";
	}	

	return 0;
}
