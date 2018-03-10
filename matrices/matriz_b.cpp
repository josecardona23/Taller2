#include <iostream>
#include <stdlib.h>
using namespace std;
/* Realizar un programa que defina una matriz de 3x3  y escriba un ciclo  para que muestre la diagonal  principal de la matriz*/
int main(int argc, char** argv) {
	int vector[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	cout<<"Matriz original\n";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<vector[i][j];
			cout<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nMostrando diagonal principal de la matriz\n";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j){
				cout<<vector[i][j]<<endl;
				
			}
			
		}
		
	}


	return 0;
}
