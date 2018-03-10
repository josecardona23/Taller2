#include <iostream>
#include <stdlib.h>
using namespace std;
//Escriba un programa que calcule el valor de: 1+2+3+4...+n.
int main(int argc, char** argv) {
	int i, n, suma=0;
	cout<<"Ingrese un limite ";
	cin>>n;
	for(i=1; i<=n; i++){
		suma=suma+i;
	}
	cout<<"La suma es "<<suma<<endl;

	return 0;
}
