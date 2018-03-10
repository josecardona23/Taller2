#include <iostream>
#include <stdlib.h>
using namespace std;	
/*Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.*/
int main(int argc, char** argv) {
	int matriz1[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
	int matriz2[3][3]= {{9,8,7},{6,5,4},{3,2,1}};
	int i, j;
	cout<<"Matriz 1"<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<matriz1[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\nMatriz 2"<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\nLa suma de las dos matrices es:"<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<matriz1[i][j] + matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}
