#include <iostream>
#include <stdlib.h>
using namespace std;
/*Realice un programa que calcule la descomposicion en factores  primos de un numero entero */

int main(int argc, char** argv) {
	int n, i;
	cout<<"Ingrese un numero ---> ";
	cin>>n;
	for (i=2; i>1; i++){
		while (n%i==0){
			cout<<n<<"	|	"<<i<<endl;
			n/=i;
		
		}
	}

	return 0;
}
